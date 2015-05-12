/* Target-dependent code for the AAP CPU, for GDB.

   Copyright (C) 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005,
   2006, 2007, 2008, 2009, 2010 Free Software Foundation, Inc.
   Copyright (C) 2015 Embecosm Limited <www.embecosm.com>

   Contributor Jeremy Bennett <jeremy.bennett@embecosm.com>

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the Free
   Software Foundation; either version 3 of the License, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
   FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
   more details.

   You should have received a copy of the GNU General Public License along
   with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/*! @file
		      GDB for the AAP Architecture
		      ============================

An Altruistic Processor (AAP) is a "16-bit" Harvard architecture with a word
addressed code space.  It is designed as a reference architecture to
facilitate compiler tool chain research for deeply embedded Harvard
architectures.

Although a 16-bit architecture, the program counter is 24-bit, allowing larger
code spaces to be addressed.  The architecture is extensible to add further
address spaces.  The number of registers is configurable between 4 and 64.

The ALU is RISC-like, with 3-address ALU operations and a small number of
addressing modes for loading and storing from and to memory.

Full details can be found in Embecosm Application Note EAN13, "AAP: An
Altruistic Processor", available from www.embecosm.com/resources/appnotes.

Registers
---------

The sequence of registers is:

    Register    Size        Notes
    --------    ----        -----
    R0            16        Link register
    R1            16        Frame pointer
    R2            16        First arg register
    R3            16
    ...
    Rmax
    PC            32        2^24 words addressible
    Status         8

GDB also defines some pseudo-registers which are combinations of the physical
registers.

    Register    Size        Notes
    --------    ----        -----
    R0D           32        R0 and R1 as a 32-bit value (R0 is LSW)
    R2D           32        R2 and R3 ...
    ...
    Rmax-1D       32

Memory Addressing
-----------------

GDB requires all addresses to be unique and address bytes.  For word addressed
Harvard architectures, this is achieved by shifting the address and then
adding bits in the high end to indicate the address space.

GDB uses the term "pointer" to refer to the location reference as used on the
target (possibly not unique, possibly not refering to a byte) and "address" to
refer to the unique location addressing bytes used internally within GDB.

For AAP the code space pointer is shifted (so becomes 25 bits) and 7 flag bits
are therefore available to identify address space.  The current implementation
defines flag bits for just code and data spaces (the latter being 16-bit byte
addressed).

@note The GDB Remote Serial Protocol (RSP) does not distinguish address
      spaces when accessing memory, so uses addresses, not pointers. 
*/

#include "defs.h"
#include "frame.h"
#include "frame-unwind.h"
#include "frame-base.h"
#include "trad-frame.h"
#include "gdbcmd.h"
#include "gdbcore.h"
#include "gdbtypes.h"
#include "inferior.h"
#include "symfile.h"
#include "arch-utils.h"
#include "regcache.h"
#include "dis-asm.h"
#include "ui-file.h"
#include "observer.h"
#include "safe-ctype.h"
#include "completer.h"
#include "readline/tilde.h"

/*  Required for symbol switch handling. */
#include "gdb/defs.h"
#include "gdb/gdbcore.h"
#include "gdb/symfile.h"
#include "gdb/objfiles.h"
#include "gdb/gdb_obstack.h"
#include "gdb/progspace.h"
#include "gdb/breakpoint.h"

#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <ctype.h>
#include <time.h>
#include <sys/time.h>


/*! Mask for the address space bits */
static const uint32_t  AAP_MEMSPACE_MASK = 0xfe000000;

/*! Address space bits for code */
static const uint32_t  AAP_MEMSPACE_CODE = 0x00000000;

/*! Address space bits for data */
static const uint32_t  AAP_MEMSPACE_DATA = 0x80000000;

/* Define the breakpoint instruction which is inserted by GDB into the target
   code. This must be exactly the same as the simulator expects.

   Per definition, a breakpoint instruction has 16 bits.  This should be
   sufficient for all purposes. */
static const uint16_t aap_sim_break_insn = 0x0000;

/* Debug flag values */
static const unsigned int  AAP_DEBUG_FLAG_GENERAL  = 0x0001;
static const unsigned int  AAP_DEBUG_FLAG_PTRADDR  = 0x0002;
static const unsigned int  AAP_DEBUG_FLAG_FRAME    = 0x0004;
static const unsigned int  AAP_DEBUG_FLAG_MEMSPACE = 0x0008;
static const unsigned int  AAP_DEBUG_FLAG_DWARF    = 0x0010;

/*! AAP specific per-architecture information. */
struct gdbarch_tdep
{
  unsigned int  lr_regnum;		/*!< Link register */
  unsigned int  sp_regnum;		/*!< Stack pointer */
  unsigned int  arg0_regnum;		/*!< First argument/result register */
  unsigned int  rmax_regnum;		/*!< Last general register */
  unsigned int  pc_regnum;		/*!< Program counter */
  unsigned int  ps_regnum;		/*!< Status register */
  unsigned int  num_regs;		/*!< Number of raw regsiters */
  unsigned int  num_pseudo_regs;	/*!< Number of non-raw regsiters */
  CORE_ADDR  data_memsize;		/*!< Bytes of data memory */
  CORE_ADDR  code_memsize;		/*!< Bytes of code memory */
};

/*! Information extracted from frame.  */
struct aap_frame_cache
{
  /*! Frame pointer base for frame.  */
  CORE_ADDR base;

  /*! If the previous program counter is on the stack, which is almost
      certainly the case, then we should only access it as 16-bit.  */
  unsigned prev_pc_on_stack : 1;

  /*! Table indicating the location of each and every register.  */
  struct trad_frame_saved_reg *saved_regs;
};


/*! Global debug flag */
int  aap_debug;


/* -------------------------------------------------------------------------- */
/*                                                                            */
/*			      Support functions.                              */
/*                                                                            */
/* -------------------------------------------------------------------------- */


/*! Is a particular debug flag set?

  @param[in] target_flag  The flag to check
  @return  Non-zero if these debug messages are enabled. Zero otherwise. */

static int
aap_debug_flag (const unsigned int  target_flag)
{
  return  (aap_debug & target_flag) == target_flag;

}	/* aap_debug_flag () */


/*! Convert target pointer to GDB address.

  This is the base routine providing the mapping from a pointer on the AAP
  target to a unique byte address for GDB.

  @param[in] gdbarch    The current architecture
  @param[in] memspace   Memory space flags
  @param[in] ptr        The target pointer to convert
  @return  The GDB byte address. */

static CORE_ADDR
aap_p2a (struct gdbarch *gdbarch,
	 CORE_ADDR       memspace,
	 CORE_ADDR       ptr)
{
  CORE_ADDR addr;

  addr  = (memspace & AAP_MEMSPACE_MASK) == AAP_MEMSPACE_CODE ? ptr << 1 : ptr;
  addr |= memspace;

  if (aap_debug_flag (AAP_DEBUG_FLAG_PTRADDR))
    {
      fprintf_unfiltered (gdb_stdlog,
			  _("AAP p2a: memspace %s %s -> %s.\n"),
			  print_core_address (gdbarch, memspace),
			  print_core_address (gdbarch, ptr),
			  print_core_address (gdbarch, addr));
    }

  return  addr;

}	/* aap_p2a () */


/*! Convert GDB address to target pointer (direct version).

  This is the base routine providing the mapping from a unique byte address in
  GDB to a pointer on the AAP target.

  @note  This routine assumes addr has its flags correctly set.

  @param[in] gdbarch  The current architecture
  @param[in] addr     The GDB byte address to convert
  @return  The target pointer */

static CORE_ADDR
aap_a2p (struct gdbarch *gdbarch,
	 CORE_ADDR       addr)
{
  CORE_ADDR memspace = addr &  AAP_MEMSPACE_MASK;
  CORE_ADDR ptr      = addr & ~AAP_MEMSPACE_MASK;

  ptr = (memspace == AAP_MEMSPACE_CODE) ? (ptr >> 1) : ptr;

  if (aap_debug_flag (AAP_DEBUG_FLAG_PTRADDR))
    {
      fprintf_unfiltered (gdb_stdlog,
			  _("AAP a2p: memspace %s %s -> %s.\n"),
			  print_core_address (gdbarch, memspace),
			  print_core_address (gdbarch, addr),
			  print_core_address (gdbarch, ptr));
    }

  return  ptr;

}	/* aap_a2p () */


/* -------------------------------------------------------------------------- */
/*                                                                            */
/*		    Architecture implementation functions.                    */
/*                                                                            */
/* -------------------------------------------------------------------------- */


/*! Read PC as byte address

   The PC is a word "pointer".  This function converts it to a byte "address"
   before it is used, BUT DOESN'T ADD SPACE OR TYPE FLAGS!!!

   Note quite clear why this is needed.  It seems to connected with symbol
   table lookup.

   @param[in] regcache  The register cache holding the raw value.

   @return  Program counter as a byte "address" without flags. */

static CORE_ADDR
aap_read_pc (struct regcache *regcache)
{
  CORE_ADDR pcptr;
  CORE_ADDR pcaddr;

  struct gdbarch *gdbarch = get_regcache_arch (regcache);
  struct gdbarch_tdep *tdep = gdbarch_tdep (gdbarch);

  regcache_cooked_read_unsigned (regcache, tdep->pc_regnum, &pcptr);
  pcaddr = aap_p2a (gdbarch, AAP_MEMSPACE_CODE, pcptr);

  if (aap_debug_flag (AAP_DEBUG_FLAG_PTRADDR))
    fprintf_unfiltered (gdb_stdlog, _("AAP read pc: ptr %s -> addr %s.\n"),
			print_core_address (gdbarch, pcptr),
			print_core_address (gdbarch, pcaddr));

  return pcaddr;

}	/* aap_read_pc () */


/*! Write PC supplied as a byte "address"

   The PC is a word "pointer".  This function converts it from a byte pointer
   before it is used.

   This appears to be used when setting the PC from symbol table data.  By
   comparison (@see aap_read_pc()), we must assume that the address supplied
   does not have flags bits set.

   @param[out] regcache  The register cache holding the raw value.
   @param[in]  pcaddr    The PC as a byte "address" without flags. */

static void
aap_write_pc (struct regcache *regcache, CORE_ADDR pcaddr)
{
  struct gdbarch *gdbarch = get_regcache_arch (regcache);
  struct gdbarch_tdep *tdep = gdbarch_tdep (gdbarch);
  CORE_ADDR pcptr;

  pcaddr &= ~AAP_MEMSPACE_CODE;
  pcaddr |=  AAP_MEMSPACE_CODE;
  pcptr = aap_a2p (gdbarch, pcaddr);

  regcache_cooked_write_unsigned (regcache, tdep->pc_regnum, pcptr);

  if (aap_debug_flag (AAP_DEBUG_FLAG_PTRADDR))
    fprintf_unfiltered (gdb_stdlog, _("AAP write pc: "
				      "addr %s written as ptr %s.\n"),
			print_core_address (gdbarch, pcaddr),
			print_core_address (gdbarch, pcptr));

}	/* aap_write_pc () */


/*! Lookup the name of a register given it's number.

    @param[in] gdbarch  The current architecture
    @param[in] regnum   The register of interest
    @return  The name of the rgister. */

static const char *
aap_register_name (struct gdbarch *gdbarch,
		   int             regnum)
{
  static const char *genregs[] = {
    "R0",  "R1",  "R2",  "R3",  "R4",  "R5",  "R6",  "R7",
    "R8",  "R9",  "R10", "R11", "R12", "R13", "R14", "R15",
    "R16", "R17", "R18", "R19", "R20", "R21", "R22", "R23",
    "R24", "R25", "R26", "R27", "R28", "R29", "R30", "R31",
    "R32", "R33", "R34", "R35", "R36", "R37", "R38", "R39",
    "R40", "R41", "R42", "R43", "R44", "R45", "R46", "R47",
    "R48", "R49", "R50", "R51", "R52", "R53", "R54", "R55",
    "R56", "R57", "R58", "R59", "R60", "R61", "R62", "R63"
  };
  static const char *pseudoregs[] = {
    "R0/R1",   "R2/R3",   "R4/R5",   "R6/R7",
    "R8/R9",   "R10/R11", "R12/R13", "R14/R15",
    "R16/R17", "R18/R19", "R20/R21", "R22/R23",
    "R24/R25", "R26/R27", "R28/R29", "R30/R31",
    "R32/R33", "R34/R35", "R36/R37", "R38/R39",
    "R40/R41", "R42/R43", "R44/R45", "R46/R47",
    "R48/R49", "R50/R51", "R52/R53", "R54/R55",
    "R56/R57", "R58/R59", "R60/R61", "R62/R63"
  };
  struct gdbarch_tdep *tdep = gdbarch_tdep (gdbarch);

  if (regnum <= tdep->rmax_regnum)
    return genregs[regnum];
  else if (regnum == tdep->pc_regnum)
    return "PC";
  else if (regnum == tdep->ps_regnum)
    return "STATUS";
  else if (regnum < (tdep->num_regs + tdep->num_pseudo_regs))
    return pseudoregs[regnum - tdep->num_regs];
  else
    {
      /* Moan */
      warning (_("aap_register_name: unknown register number %d.\n"), regnum);
      return "";
    }
}	/* aap_register_name () */


/*! Return the GDB type object for the "standard" data type
   of data in register N.

   TODO. This should be done in XML. */
static struct type *
aap_register_type (struct gdbarch *gdbarch, int regnum)
{
  struct gdbarch_tdep *tdep = gdbarch_tdep (gdbarch);

  static struct type *bt_uint8 = NULL;
  static struct type *bt_uint16 = NULL;
  static struct type *bt_uint32 = NULL;

  /* Initialize each type just once to avoid leaks. */
  if (NULL == bt_uint8)
    bt_uint8 = builtin_type (gdbarch)->builtin_uint8;
  if (NULL == bt_uint16)
    bt_uint16 = builtin_type (gdbarch)->builtin_uint16;
  if (NULL == bt_uint32)
    bt_uint32 = builtin_type (gdbarch)->builtin_uint32;


  if (regnum <= tdep->rmax_regnum)
    return bt_uint16;
  else if (regnum == tdep->pc_regnum)
    return bt_uint32;
  else if (regnum == tdep->ps_regnum)
    return bt_uint8;
  else if (regnum < (tdep->num_regs + tdep->num_pseudo_regs))
    return bt_uint32;
  else
    {
      /*  Moan */
      warning (_("aap_register_type: unknown register number %d.\n"), regnum);
      return builtin_type (gdbarch)->builtin_int0;
    };
}	/* aap_register_type () */


/*! Read a pseudo register

    @param[in]  gdbarch         The current architecture
    @param[in]  regcache        The current register cache
    @param[in]  cooked_regnum   The register of interest
    @param[out] buf             Where to put the result
    @return  The result of the read (an enum) */

static enum register_status
aap_pseudo_register_read (struct gdbarch  *gdbarch,
			  struct regcache *regcache,
			  int              cooked_regnum,
			  gdb_byte        *buf)
{
  struct gdbarch_tdep *tdep = gdbarch_tdep (gdbarch);
  int pseudo_regnum = cooked_regnum - tdep->num_regs;
  int raw_regnum = pseudo_regnum * 2;
  gdb_byte raw_buf[8];

  if (pseudo_regnum >= tdep->num_pseudo_regs)
    {
      /*  Moan */
      warning (_("AAP: Not a valid pseudo reg to write %d.\n"),
	       cooked_regnum);
      return REG_UNKNOWN;
    }
  else
    {
      /* Get value - LSW in lower numbered reg */
      regcache_raw_read (regcache, raw_regnum, raw_buf);
      memcpy (buf, raw_buf, 2);
      regcache_raw_read (regcache, raw_regnum + 1, raw_buf);
      memcpy (buf, raw_buf + 2, 2);
      return REG_VALID;
    }
}	/* aap_pseudo_register_read () */


/*! Write a pseudo register

    @param[in]  gdbarch        The current architecture
    @param[in]  regcache       The current register cache
    @param[in]  cooked_regnum  The register of interest
    @param[in]  buf            The value to write */

static void
aap_pseudo_register_write (struct gdbarch  *gdbarch,
			   struct regcache *regcache,
			   int              cooked_regnum,
			   const gdb_byte  *buf)
{
  struct gdbarch_tdep *tdep = gdbarch_tdep (gdbarch);
  int pseudo_regnum = cooked_regnum - tdep->num_regs;
  int raw_regnum = pseudo_regnum * 2;
  gdb_byte raw_buf[8];

  if (cooked_regnum >= tdep->num_pseudo_regs)
    {
      /*  Moan */
      warning (_("AAP: Not a valid pseudo reg to write %d.\n"),
	       cooked_regnum);
    }
  else
    {
      /* Set value - LSW in lower numbered reg */
      memcpy (raw_buf, buf, 2);
      regcache_raw_write (regcache, raw_regnum, raw_buf);
      memcpy (raw_buf + 2, buf, 2);
      regcache_raw_write (regcache, raw_regnum + 1, raw_buf);
    }
}	/* aap_pseudo_register_write () */


/*! Determine how a value should be returned.

    If it is supposed to be returned in registers, and READBUF is non-zero,
    read the appropriate value from REGCACHE, and copy it into READBUF.  If
    WRITEBUF is non-zero, write the value from WRITEBUF into REGCACHE.

    @param[in]   gdbarch   The current architecture
    @param[in]   function  Type of the function.
    @param[in]   valtype   Type of the value to be returned.
    @param[in]   regcache  The current register cache
    @param[out]  readbuf   Buffer to return value read.
    @param[in]   writebuf  Buffer holding value to write. */

static enum return_value_convention
aap_return_value (struct gdbarch  *gdbarch,
		   struct value    *function,
		   struct type     *valtype,
		   struct regcache *regcache,
		   gdb_byte        *readbuf,
		   const gdb_byte  *writebuf)
{
  struct gdbarch_tdep *tdep = gdbarch_tdep (gdbarch);

  if (TYPE_CODE (valtype) == TYPE_CODE_STRUCT
      || TYPE_CODE (valtype) == TYPE_CODE_UNION
      || TYPE_CODE (valtype) == TYPE_CODE_ARRAY)
    {
      if (readbuf)
	{
	  CORE_ADDR addr;

	  regcache_cooked_read_unsigned (regcache, tdep->sp_regnum, &addr);
	  read_memory (addr, readbuf, TYPE_LENGTH (valtype));
	}

      return RETURN_VALUE_ABI_RETURNS_ADDRESS;
    }

  if (readbuf)
    switch (TYPE_LENGTH (valtype))
      {
      case 1: case 2:
	/* 1 byte is always promoted to 2 bytes.  Result in R2 */
	regcache_raw_read (regcache, tdep->arg0_regnum, readbuf);
	break;
      case 4:
	/* Need to read from R2 and R3.  */
	regcache_raw_read (regcache, tdep->arg0_regnum,     readbuf);
	regcache_raw_read (regcache, tdep->arg0_regnum + 1, readbuf + 2);
	break;
      default:
	error ("unable to extract return value of size %d bytes",
	       TYPE_LENGTH (valtype));
      }

  if (writebuf)
    switch (TYPE_LENGTH (valtype))
      {
      case 1: case 2:
	/* 1 byte is always promoted to 2 bytes.  Result in R2 */
	regcache_raw_write (regcache, tdep->arg0_regnum, writebuf);
      case 4:
	/* Need to write to R2 and R3.  */
	regcache_raw_write (regcache, tdep->arg0_regnum,     writebuf);
	regcache_raw_write (regcache, tdep->arg0_regnum + 1, writebuf + 2);
	break;
      default:
	error ("unable to store return value of size %d bytes",
	       TYPE_LENGTH (valtype));
      }

  return RETURN_VALUE_REGISTER_CONVENTION;

}	/* aap_return_value () */


/*! Disassemble one instruction.

    For now this is a dummy, until we work out how to link in the LLVM
    disassembler.

    @param[in] addr  The address at which to disassemble
    @param[in] info  Useful info about the architecture.
    @return  The number of bytes disassembled, or -1 on failure. */

static int
aap_print_insn (bfd_vma           addr,
		disassemble_info *info)
{
  uint16_t  insn16;
  uint32_t  insn32;

  read_memory (addr, (gdb_byte *) &insn16, sizeof (insn16));
  read_memory (addr, (gdb_byte *) &insn32, sizeof (insn32));

  /* Because of the way we read things, we have to use a middle-endian
     presentation of 32-bit instructions. */
  (*info->fprintf_func) (info->stream, "%04x%04x %04hx", insn32 >> 16,
			 insn32 &0xffff, insn16);
  return sizeof (insn16);	/* Assume 16-bit instruction. */

}	/* aap_print_insn () */


/*! Convert target pointer to GDB address (buffer version).

  @see aap-tdep.c for documentation of AAP addressing and how this is handled
       in GDB.

  This is a wrapper to take the pointer in a buffer, since this is the format
  needed for the GDB architecture routine.

  @param[in] gdbarch  The current architecture
  @param[in] type     The type of the pointer/address
  @param[in] buf      The pointer to convert

  @return  The address. */

static CORE_ADDR
aap_pointer_to_address (struct gdbarch *gdbarch,
		        struct type    *type,
			const gdb_byte *buf)
{
  enum bfd_endian  byte_order = gdbarch_byte_order (gdbarch);
  CORE_ADDR  ptr = extract_unsigned_integer (buf, TYPE_LENGTH (type),
					     byte_order) & ~AAP_MEMSPACE_MASK;
  int  is_code = TYPE_CODE (TYPE_TARGET_TYPE (type)) == TYPE_CODE_FUNC
    || TYPE_CODE (TYPE_TARGET_TYPE (type)) == TYPE_CODE_METHOD
    || TYPE_CODE_SPACE (TYPE_TARGET_TYPE (type));

  return aap_p2a (gdbarch, is_code ? AAP_MEMSPACE_CODE : AAP_MEMSPACE_DATA ,
		  ptr);

}	/* aap_pointer_to_address () */


/*! Convert GDB address to target pointer (buffer version).

  @see aap-tdep.c for documentation of AAP addressing and how this is handled
       in GDB.

  This is a wrapper to supply the pointer in a buffer, since this is the format
  needed for the GDB architecture routine.

  @note  Although it is not documented officially, it is the type supplied by
         the TYPE argument that matters, not any bits in the address.  To
         keep things really clear, we explicitly add the bits before passing
         on.

  @param[in]  gdbarch  The current architecture
  @param[in]  type     The type of the pointer/address
  @param[out] buf      The converted pointer
  @param[in]  addr     The address to convert */

static void
aap_address_to_pointer (struct gdbarch *gdbarch,
			 struct type    *type,
			 gdb_byte       *buf,
			 CORE_ADDR       addr)
{
  int  is_code = TYPE_CODE (TYPE_TARGET_TYPE (type)) == TYPE_CODE_FUNC
    || TYPE_CODE (TYPE_TARGET_TYPE (type)) == TYPE_CODE_METHOD
    || TYPE_CODE_SPACE (TYPE_TARGET_TYPE (type));
  CORE_ADDR clean_addr = addr & ~AAP_MEMSPACE_MASK;
  CORE_ADDR ptr = aap_a2p (gdbarch, clean_addr
			   | (is_code ? AAP_MEMSPACE_CODE : AAP_MEMSPACE_DATA));
  enum bfd_endian byte_order = gdbarch_byte_order (gdbarch);

  store_unsigned_integer (buf, TYPE_LENGTH (type), byte_order, ptr);

}	/* aap_address_to_pointer () */


/*! Skip the prologue.

   If the input address, PC, is in a function prologue, return the address of
   the end of the prologue, otherwise return the input address.

   We attempt to use the source and line data from the symtab and line data.

   @todo For now we don't know what the prologue looks like, so in the absence
         of SAL, we can do no prologue analysis.

   We let prologue analysis do any validation. We just count bytes here.

   @param[in] gdbarch  The current architecture.
   @param[in] pc   The current current program counter as GDB _address_,
                       but without flag bits.

   @return  Updated PC, pointing after the prologue if the PC supplied was in
            the prologue. */

static CORE_ADDR
aap_skip_prologue (struct gdbarch *gdbarch,
		    CORE_ADDR       pc)
{
  CORE_ADDR  func_start;
  CORE_ADDR  func_end;

  if (aap_debug_flag (AAP_DEBUG_FLAG_FRAME))
    fprintf_unfiltered (gdb_stdlog, _("AAP skip_prologue: pc %s.\n"),
			print_core_address (gdbarch, pc));

  if (find_pc_partial_function (pc, NULL, &func_start, &func_end))
    {
      CORE_ADDR  prologue_end = skip_prologue_using_sal (gdbarch, func_start);
      uint16_t  insn16;

      if (aap_debug_flag (AAP_DEBUG_FLAG_FRAME))
	{
	  fprintf_unfiltered (gdb_stdlog,
			      _("AAP skip_prologue: func_start %s.\n"),
			      print_core_address (gdbarch, func_start));
	  fprintf_unfiltered (gdb_stdlog,
			      _("AAP skip_prologue: prologue_end %s.\n"),
			      print_core_address (gdbarch, prologue_end));
	}

      if (0 != prologue_end) 
      	return  prologue_end;	/* SAL gave us the answer. */
    }

  /* SAL didn't give us what we want, so for now just return the supplied
     address. */

  if (aap_debug_flag (AAP_DEBUG_FLAG_FRAME))
    {
      fprintf_unfiltered (gdb_stdlog,
			  _("AAP skip_prologue: no SAL info.\n"));
    }

  return  pc;

}	/* aap_skip_prologue () */


/*! Where should we actually set a breakpoint?

    The addresses are all GDB byte addresses, not word pointers, but without
    flags (i.e. from a symbol table). We can do a sanity check that it is a
    valid word address and add appropriate flag bits.  But otherwise we change
    nothing.

    @param[in]     gdbarch  The current architecture.
    @param[in,out] pc_ptr   Pointer to the desired PC address on input, and the
                            value to use on output.
    @param[out]    len_ptr  Pointer to store the length of the breakpoint
                            instruction (in bytes).
    @return  Pointer to a buffer with the breakpoint instruction. */

static const gdb_byte *
aap_breakpoint_from_pc (struct gdbarch *gdbarch,
			CORE_ADDR      *pc_ptr,
			int            *len_ptr)
{
  CORE_ADDR pc = *pc_ptr;

  if (aap_debug_flag (AAP_DEBUG_FLAG_GENERAL))
    fprintf_unfiltered (gdb_stdlog, _("AAP breakpoint: requested at %s.\n"),
			print_core_address (gdbarch, *pc_ptr));

  if ((pc & 1) != 0)
    error ("Attempt to set breakpoint at misaligned pc %s",
	   print_core_address (gdbarch, pc));

  *pc_ptr = pc;			/* null operation */

  if (aap_debug_flag (AAP_DEBUG_FLAG_GENERAL))
    fprintf_unfiltered (gdb_stdlog, _("AAP breakpoint: proposed at %s.\n"),
			print_core_address (gdbarch, pc));

  *len_ptr = sizeof (aap_sim_break_insn);
  return (gdb_byte *) &aap_sim_break_insn;

}	/* aap_breakpoint_from_pc () */


/*! Determine the value of registers in the PREV frame and save them in the
   prologue cache for THIS frame. Note that in general we cannot just unwind
   registers here, or we'll end up with a circular dependency.

   The AAP prologue is simple. @see aap_skip_prologue() for details.

   @param[in]  this_frame  THIS frame info, from which we can get THIS program
                           counter and THIS stack pointer.  May be null, in
                           which case we use defaults values.
   @param[out] this_cache  The cache of registers in the PREV frame, which we
                           should initialize. */
static void
aap_analyze_prologue (struct frame_info *this_frame,
		      struct aap_frame_cache *this_cache)
{
  struct gdbarch *gdbarch = get_frame_arch (this_frame);
  struct gdbarch_tdep *tdep = gdbarch_tdep (gdbarch);

  /* Function starts are symbols, so GDB addresses, _without_ flag bits. */
  CORE_ADDR  func_start = get_frame_func (this_frame);
  /* Similarly frame PCs are symbols, so GDB addresses, _without_ flag bits */
  CORE_ADDR  this_pc = get_frame_pc (this_frame);
  /* The value in the SP is a data pointer. */
  CORE_ADDR  this_sp = get_frame_register_unsigned (this_frame,
						    tdep->sp_regnum);

  /* We need to count through the code from the start of the function. */
  CORE_ADDR  pc;

  /* Turn values into full GDB addresses. */
  func_start = (func_start & ~AAP_MEMSPACE_MASK) | AAP_MEMSPACE_CODE;
  this_pc    = (this_pc    & ~AAP_MEMSPACE_MASK) | AAP_MEMSPACE_CODE;
  this_sp    = (this_sp    & ~AAP_MEMSPACE_MASK) | AAP_MEMSPACE_DATA;

  pc = func_start;

  /* Initialise the traditional frame cache component.  */
  gdb_assert (this_cache->saved_regs == NULL);
  this_cache->saved_regs = trad_frame_alloc_saved_regs (this_frame);

  /* For now, always mark the previous pc as on the stack.  */
  this_cache->prev_pc_on_stack = 1;

  if (aap_debug_flag (AAP_DEBUG_FLAG_FRAME))
    {
      gdb_flush (gdb_stdout);
      fprintf_unfiltered (gdb_stdlog,
			  _("AAP prologue: frame_cache %p.\n"),
			  this_cache);
      fprintf_unfiltered (gdb_stdlog,
			  _("AAP prologue: at entry func_start %s.\n"),
			  print_core_address (gdbarch, func_start));
      fprintf_unfiltered (gdb_stdlog,
			  _("AAP prologue: at entry this_pc %s.\n"),
			  print_core_address (gdbarch, this_pc));
      fprintf_unfiltered (gdb_stdlog,
			  _("AAP prologue: at entry this_sp %s.\n"),
			  print_core_address (gdbarch, this_sp));
    }

  /* If we don't have a function start, then we can't do any meaningful
     analysis. We can set the ID and base, but we just leave the register
     cache "as is", with its default values being that the reg in this frame
     is the reg in the previous frame. */
  if (0 == pc)
    {
      /* Set the frame ID (which uses full GDB addresses) and frame base */
      this_cache->base = this_sp;

      if (aap_debug_flag (AAP_DEBUG_FLAG_FRAME))
	{
	  fprintf_unfiltered (gdb_stdlog,
			      _("AAP prologue: No function start.\n"));
	}

      return;
    }

  /* Disassemble to determine value. To be written. */

  /* Populate the cache. */

  /* this_sp and this_fp hold the values currently in the registers. Are these
     the PREV or THIS values. Don't forget the 2 bytes of stack from the call */

  /* All other registers are just in themselves for now. */

  /* Set the frame ID and frame base */
  if (aap_debug_flag (AAP_DEBUG_FLAG_FRAME))
    {
      fprintf_unfiltered (gdb_stdlog,
			  _("AAP prologue: frame_id (%s, %s)\n"),
			  print_core_address (gdbarch, this_sp),
			  print_core_address (gdbarch, func_start));
    }

  /* The frame ID uses full GDB addresses */
  this_cache->base = this_sp;

  /* gdbarch_sp_regnum contains the value and not the address.  */
  trad_frame_set_value (this_cache->saved_regs,
                        tdep->sp_regnum,
                        this_cache->base);

}	/* aap_analyse_prologue */


/*! Allocate and initialize a frame cache.

    @return  The new frame cache. */

static struct aap_frame_cache *
aap_alloc_frame_cache (void)
{
  struct aap_frame_cache *cache;

  cache = FRAME_OBSTACK_ZALLOC (struct aap_frame_cache);
  cache->saved_regs = NULL;

  return cache;
}


/*! Populate the frame cache if it doesn't exist.

    @param[in]     this_frame  Info about THIS frame.
    @param[in,out] this_cache  Reference to any existing cache, and where to
                               store cache we have populated.
    @return  The new frame cache. */

static struct aap_frame_cache *
aap_frame_cache (struct frame_info  *this_frame,
		 void              **this_cache)
{
  if (aap_debug_flag (AAP_DEBUG_FLAG_FRAME))
    fprintf_unfiltered (gdb_stdlog, _("AAP: frame_cache = %p\n"), *this_cache);

  if (!*this_cache)
    {
      struct gdbarch *gdbarch = get_frame_arch (this_frame);
      CORE_ADDR func_start;
      CORE_ADDR stop_addr;

      *this_cache = aap_alloc_frame_cache ();
      func_start = get_frame_func (this_frame);
      stop_addr = aap_p2a (gdbarch, AAP_MEMSPACE_CODE,
			   get_frame_pc (this_frame));

      /* If we couldn't find any function containing the PC, then just
         initialize the prologue cache, but don't do anything.  */
      if (!func_start)
	stop_addr = func_start;

      aap_analyze_prologue (this_frame, *this_cache);
    }

  return *this_cache;

}	/* aap_frame_cache () */


/*! Find the base address of THIS frame.

    @param[in]     this_frame  Info about THIS frame.
    @param[in,out] this_cache  Reference to any existing cache, and where to
                               store cache we have populated.
    @return  The base of this frame. */

static CORE_ADDR
aap_frame_base_address (struct frame_info  *this_frame,
			void              **this_cache)
{
  struct aap_frame_cache *frame_cache =
    aap_frame_cache (this_frame, this_cache);
  return frame_cache->base;

}	/* aap_frame_base_address () */


/*! Find the frame ID of THIS frame.

    @param[in]     this_frame  Info about THIS frame.
    @param[in,out] this_cache  Reference to any existing cache, and where to
                               store cache we have populated.
    @param[out]    this_id     Frame ID of THIS frame. */

static void
aap_frame_this_id (struct frame_info  *this_frame,
		   void              **this_cache,
		   struct frame_id    *this_id)
{
  CORE_ADDR base = aap_frame_base_address (this_frame, this_cache);

  if (base)
    {
      CORE_ADDR pc = get_frame_func (this_frame);

      /* Frame ID's always use full GDB addresses */
      base = (base & ~AAP_MEMSPACE_MASK) | AAP_MEMSPACE_DATA;
      pc   = (pc   & ~AAP_MEMSPACE_MASK) | AAP_MEMSPACE_CODE;

      *this_id = frame_id_build (base, pc);
    }

  /* Otherwise, leave it unset, and that will terminate the backtrace.  */

}	/* aap_frame_this_id () */


/*! Get a register from the PREVIOUS frame.

    @param[in]     this_frame  Info about THIS frame.
    @param[in,out] this_cache  Reference to any existing cache, and where to
                               store cache we have populated.
    @param[in]     regnum      Register to find.

    @return  Value of regnum in the PREVIOUS frame. */

static struct value *
aap_frame_prev_register (struct frame_info  *this_frame,
			 void              **this_cache,
			 int                 regnum)
{
  struct gdbarch *gdbarch = get_frame_arch (this_frame);
  struct gdbarch_tdep *tdep = gdbarch_tdep (gdbarch);
  struct value *val = NULL;
  struct aap_frame_cache *frame_cache =
    aap_frame_cache (this_frame, this_cache);

  if (regnum == tdep->pc_regnum
      && trad_frame_addr_p (frame_cache->saved_regs, tdep->pc_regnum)
      && frame_cache->prev_pc_on_stack)
    {
      uint16_t pc;

      read_memory (frame_cache->saved_regs[tdep->pc_regnum].addr,
		   (gdb_byte *) &pc, 2); /* Read 2 bytes only.  */

      val = frame_unwind_got_constant (this_frame, regnum, pc);
    }
  else
    val = trad_frame_get_prev_register (this_frame,
					frame_cache->saved_regs,
					regnum);

  gdb_assert (val != NULL);
  return val;

}	/* aap_frame_prev_register () */


/*! Details of custom frame unwinding functions. */

static const struct frame_unwind aap_frame_unwind = {
  .type          = NORMAL_FRAME,
  .stop_reason   = default_frame_unwind_stop_reason,
  .this_id       = aap_frame_this_id,
  .prev_register = aap_frame_prev_register,
  .unwind_data   = NULL,
  .sniffer       = default_frame_sniffer,
  .dealloc_cache = NULL,
  .prev_arch     = NULL
};


/*! Custom functions to find frame base points. */

static const struct frame_base aap_frame_base = {
  .unwind      = &aap_frame_unwind,
  .this_base   = aap_frame_base_address,
  .this_locals = aap_frame_base_address,
  .this_args   = aap_frame_base_address
};


/*! Unwind the program counter for THIS frame.

  This is a nightmare. What we want is a value that can be looked up in a
  symbol table. I.e. a GDB address, but without any high order bits.

  @note  When printing a register we get the raw (word address) value, which
         is a relief.

  @todo  This is a complete (upstream) mess.

  @param[in] gdbarch     The current architecture.
  @param[in] next_frame  Frame info for NEXT frame.

  @return  The program counter in THIS frame as a GDB _address_, but without
           any higher order bits set. */

static CORE_ADDR
aap_unwind_pc (struct gdbarch    *gdbarch,
	       struct frame_info *next_frame)
{
  struct gdbarch_tdep *tdep = gdbarch_tdep (gdbarch);
  CORE_ADDR pcptr = frame_unwind_register_unsigned (next_frame,
						    tdep->pc_regnum);
  CORE_ADDR pcaddr = aap_p2a (gdbarch, AAP_MEMSPACE_CODE, pcptr);

  if (aap_debug_flag (AAP_DEBUG_FLAG_FRAME))
    fprintf_unfiltered (gdb_stdlog, _("unwind PC value %s.\n"),
			print_core_address (gdbarch, pcaddr));

  return  pcaddr;

}	/* aap_unwind_pc () */


/*! Unwind the stack pointer for THIS frame.

   @todo Should we instead convert the raw pointer to a GDB "address",
         i.e. with byte address and flags?

   @param[in] gdbarch     The current architecture.
   @param[in] next_frame  Frame info for NEXT frame.

   @return  The stack pointer in THIS frame as a GDB "pointer". */

static CORE_ADDR
aap_unwind_sp (struct gdbarch *gdbarch, struct frame_info *next_frame)
{
  struct gdbarch_tdep *tdep = gdbarch_tdep (gdbarch);
  return frame_unwind_register_unsigned (next_frame, tdep->sp_regnum);

}	/* aap_unwind_sp () */


/*! Deal with long pointers.

    Not all AAP pointers can fit in a register.  This function flags up when
    that is the case.

    @todo  We only worry about code pointers, because they are the only ones
           that can exceed the 2^16 locations that a register can hold.

    @param[in] gdbarch  The current architecture.
    @param[in] regnum   The register we are considering
    @param[in] type     The type we would like to put in the register.

    @return  Non-zero (TRUE) if the pointer won't fit in the register. */

static int
aap_convert_register_p (struct gdbarch *gdbarch, int regnum,
			 struct type *type)
{
  return (aap_register_type (gdbarch, regnum)->length != type->length
	  && TYPE_CODE (type) == TYPE_CODE_PTR);

}	/* aap_convert_register_p () */


/*! Turn a register's contents into a GDB value representation.

    @param[in]  frame         Info about this frame.
    @param[in]  regnum        Register of interest.
    @param[in]  valtype       Type of the value.
    @param[out] out           Buffer for value.
    @param[out] optimizedp    Non-zero (TRUE) if the value has been optimized
                              away, zero (FALSE) otherwsie.
    @param[out] unavailablep  Non-zero (TRUE) if the value has been optimized
                              away, zero (FALSE) otherwsie.
    @return  Non-zero (TRUE) if the value was successfully converted, zero
    (FALSE) otherwise. */

static int
aap_register_to_value (struct frame_info *frame,
		       int                regnum,
		       struct type       *valtype,
		       gdb_byte          *out,
		       int               *optimizedp,
		       int               *unavailablep)
{
  struct gdbarch *gdbarch = get_frame_arch (frame);

  memset (out, 0, TYPE_LENGTH (valtype));
  if (!get_frame_register_bytes (frame, regnum, 0,
				 register_size (gdbarch, regnum),
				 out, optimizedp, unavailablep))
    return 0;
  else
    return 1;

}	/* aap_register_to_value () */


/*! Put a GDB value representation into a register.

    @param[in]  frame         Info about this frame.
    @param[in]  regnum        Register of interest.
    @param[in]  valtype       Type of the value.
    @param[in]  from          Buffer holding the value. */

static void
aap_value_to_register (struct frame_info *frame,
		       int                regnum,
		       struct type       *valtype,
		       const gdb_byte    *from)
{
  int len;
  struct gdbarch *gdbarch;
  struct type *reg_type;

  len = TYPE_LENGTH (valtype);
  gdbarch = get_frame_arch (frame);
  reg_type = gdbarch_register_type (gdbarch, regnum);

  gdb_assert (len == 4);
  gdb_assert (TYPE_LENGTH (reg_type) == 2);

  if (from [2] != 0 || from [3] != 0)
    error ("setting 2-byte register using 4-byte value");

  put_frame_register (frame, regnum, from);

}	/* aap_value_to_register () */


/*! Initialize the gdbarch structure for AAP.

    @param[in]  gdbarch_info  Info about this GDB architecture.
    @param[in]  gdbarch_list  Architectures we already know about.
    @return  An initialized architecture. */

static struct gdbarch *
aap_gdbarch_init (struct gdbarch_info  info,
		  struct gdbarch_list *arches)
{
  struct gdbarch *gdbarch;
  struct gdbarch_tdep *tdep;

  /* Check to see if we've already built an appropriate architecture
     object for this executable.  */

  if ((arches = gdbarch_list_lookup_by_info (arches, &info)))
    return arches->gdbarch;

  /* Create new architecture. One day we'll get all this from XML. */

  tdep                    = xmalloc (sizeof *tdep);
  tdep->lr_regnum         =  0;
  tdep->sp_regnum         =  1;
  tdep->arg0_regnum       =  2;
  tdep->rmax_regnum       = 63;
  tdep->pc_regnum         = tdep->rmax_regnum + 1;
  tdep->ps_regnum         = tdep->pc_regnum + 1;
  tdep->num_regs          = tdep->ps_regnum + 1;
  tdep->num_pseudo_regs   = (tdep->rmax_regnum + 1) / 2;
  tdep->data_memsize      = 64 * 1024;
  tdep->code_memsize      = 16 * 1024 * 1024;

  gdbarch                 = gdbarch_alloc (&info, tdep);

  /* Create a new architecture from the information provided. */

  set_gdbarch_short_bit (gdbarch, 2 * TARGET_CHAR_BIT);
  set_gdbarch_int_bit (gdbarch, 2 * TARGET_CHAR_BIT);
  set_gdbarch_long_bit (gdbarch, 4 * TARGET_CHAR_BIT);
  set_gdbarch_long_long_bit (gdbarch, 8 * TARGET_CHAR_BIT);
  set_gdbarch_ptr_bit (gdbarch, 8 * TARGET_CHAR_BIT);
  set_gdbarch_addr_bit (gdbarch, 8 * TARGET_CHAR_BIT);

  set_gdbarch_float_bit (gdbarch, 4 * TARGET_CHAR_BIT);
  set_gdbarch_double_bit (gdbarch, 4 * TARGET_CHAR_BIT);
  set_gdbarch_long_double_bit (gdbarch, 4 * TARGET_CHAR_BIT);

  set_gdbarch_float_format (gdbarch, floatformats_ieee_single);
  set_gdbarch_double_format (gdbarch, floatformats_ieee_single);
  set_gdbarch_long_double_format (gdbarch, floatformats_ieee_single);

  set_gdbarch_read_pc (gdbarch, aap_read_pc);
  set_gdbarch_write_pc (gdbarch, aap_write_pc);

  set_gdbarch_num_regs (gdbarch, tdep->num_regs);
  set_gdbarch_num_pseudo_regs (gdbarch, tdep->num_pseudo_regs);

  set_gdbarch_sp_regnum (gdbarch, tdep->sp_regnum);
  set_gdbarch_pc_regnum (gdbarch, tdep->pc_regnum);

  set_gdbarch_register_name (gdbarch, aap_register_name);
  set_gdbarch_register_type (gdbarch, aap_register_type);

  set_gdbarch_pseudo_register_read (gdbarch, aap_pseudo_register_read);
  set_gdbarch_pseudo_register_write (gdbarch, aap_pseudo_register_write);

  set_gdbarch_return_value (gdbarch, aap_return_value);
  set_gdbarch_print_insn (gdbarch, aap_print_insn);

  /* set_gdbarch_push_dummy_call (gdbarch, dummy_push_dummy_call); */
  /* set_gdbarch_dwarf2_reg_to_regnum (gdbarch, aap_dwarf2_reg_to_regnum); */

  set_gdbarch_address_to_pointer (gdbarch, aap_address_to_pointer);
  set_gdbarch_pointer_to_address (gdbarch, aap_pointer_to_address);

  set_gdbarch_skip_prologue (gdbarch, aap_skip_prologue);
  set_gdbarch_inner_than (gdbarch, core_addr_lessthan);

  set_gdbarch_decr_pc_after_break (gdbarch, 2);
  set_gdbarch_breakpoint_from_pc (gdbarch, aap_breakpoint_from_pc);

  frame_unwind_append_unwinder (gdbarch, &aap_frame_unwind);
  frame_base_set_default (gdbarch, &aap_frame_base);

  /* set_gdbarch_dummy_id (gdbarch, aap_dummy_id); */

  set_gdbarch_unwind_pc (gdbarch, aap_unwind_pc);
  set_gdbarch_unwind_sp (gdbarch, aap_unwind_sp);

  set_gdbarch_convert_register_p (gdbarch, aap_convert_register_p);
  set_gdbarch_register_to_value (gdbarch, aap_register_to_value);
  set_gdbarch_value_to_register (gdbarch, aap_value_to_register);

  return gdbarch;
}


/*! Dump the target specific data for this architecture

    @param[in] gdbarch  The architecture of interest
    @param[in] file     Where to dump the data */

static void
aap_dump_tdep (struct gdbarch *gdbarch,
		struct ui_file *file)
{
  struct gdbarch_tdep *tdep = gdbarch_tdep (gdbarch);

  if (NULL == tdep)
    {
      return;			/* Nothing to report */
    }

  fprintf_unfiltered (file, "aap_dump_tdep: link register R%d\n",
		      tdep->lr_regnum);
  fprintf_unfiltered (file, "aap_dump_tdep: stack pointer R%d\n",
		      tdep->sp_regnum);
  fprintf_unfiltered (file, "aap_dump_tdep: last register R%d\n",
		      tdep->rmax_regnum);
  fprintf_unfiltered (file, "aap_dump_tdep: PC is register %d\n",
		      tdep->pc_regnum);
  fprintf_unfiltered (file, "aap_dump_tdep: Status is register %d\n",
		      tdep->ps_regnum);
  fprintf_unfiltered (file, "aap_dump_tdep: data memory %s bytes\n",
		      hex_string (tdep->data_memsize));
  fprintf_unfiltered (file, "aap_dump_tdep: code memmory %s bytes (%s words)\n",
		      hex_string (tdep->code_memsize),
		      hex_string (tdep->code_memsize / 2));

}	/* aap_dump_tdep() */


extern initialize_file_ftype _initialize_aap_tdep;

/*! Initialize the new architecture. */

void
_initialize_aap_tdep (void)
{
  struct cmd_list_element *c;

  gdbarch_register (bfd_arch_aap, aap_gdbarch_init, aap_dump_tdep);

  /* Debug internals for AAP GDB.  */
  add_setshow_zinteger_cmd ("aap", class_maintenance,
			    &aap_debug,
			    _("Set AAP specific debugging."),
			    _("Show AAP specific debugging."),
			    _("Bits of value enable AAP specific debugging."),
			    NULL,
			    NULL,
			    &setdebuglist,
			    &showdebuglist);

}	/* initialize_aap_tdep () */


// Local Variables:
// mode: C++
// c-file-style: "gnu"
// show-trailing-whitespace: t
// End:

