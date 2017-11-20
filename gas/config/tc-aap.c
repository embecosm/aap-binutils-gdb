/* tc-aap.c -- To assemble code for AAP
 *
 * 2017/09/21: allows a blank page to compile using abort()
 * 2017/09/28: allows a all of instructions to be assembled
 * 2017/10/02: disassembler for 32 bit instructions
 * 
 */

#include "config.h"
#include "getopt.h"
#include "bfd.h"
#include "as.h"
#include "opcodes/aap-desc.h"
#include "opcodes/aap-opc.h"
#include "cgen.h"
#include "subsegs.h"
#include "symcat.h"
#include "safe-ctype.h"
#include "elf/aap.h"

#include <stdlib.h>
#include <stdio.h>

/***********************************************************/

const char *md_shortopts = "";

struct option md_longopts[] =
{
  { NULL, no_argument, NULL, 0 }
};
size_t md_longopts_size = sizeof(md_longopts);

/* Define characters with special meanings to GAS. */
const char comment_chars[] = ";";
const char line_comment_chars[] = ";";
const char line_separator_chars[] = "";
const char EXP_CHARS[] = "eE";
const char FLT_CHARS[] = "rRsSfFdDxXpP";

/* table describes all machine specific pseudo-ops the assembler supports */
const pseudo_typeS md_pseudo_table[] =
{
  { NULL, 0, 0 },
};

/******************************************************************/

/* Structure to hold all of the different components describing
   an individual instruction.  */
typedef struct
{
  const CGEN_INSN *	insn;
  CGEN_FIELDS		fields;
#if CGEN_INT_INSN_P
  CGEN_INSN_INT         buffer [1];
#define INSN_VALUE(buf) (*(buf))
#else
#error "Not what I expected"
  unsigned char         buffer [CGEN_MAX_INSN_SIZE];
#define INSN_VALUE(buf) (buf)
#endif
}
aap_insn;

/******************************************************************/

/* initialise GAS cgen interface */
void
aap_assemble (char *str)
{
  aap_insn insn;
  char *errmsg;

  printf("aap_assemble\n");
  /* Initialize GAS's cgen interface for a new instruction.  */
  gas_cgen_init_parse ();

  insn.insn = aap_cgen_assemble_insn
    (gas_cgen_cpu_desc, str, & insn.fields, insn.buffer, & errmsg);

  if (!insn.insn)
  {
    as_bad ("%s", errmsg);
    return;
  }

  gas_cgen_finish_insn (insn.insn, insn.buffer,
			  CGEN_FIELDS_BITSIZE (& insn.fields), 1, NULL);
}

/* initialises cgen */
void
aap_begin (void)
{
  printf("aap_begin\n");
  /* Set the machine number and endian.  */
  gas_cgen_cpu_desc = aap_cgen_cpu_open (CGEN_CPU_OPEN_MACHS,
                                         bfd_mach_aap,
                                         CGEN_CPU_OPEN_ENDIAN,
                                         CGEN_ENDIAN_LITTLE,
                                         CGEN_CPU_OPEN_END);
  aap_cgen_init_asm (gas_cgen_cpu_desc);

  /* This is a callback from cgen to gas to parse operands.  */
  cgen_set_parse_operand_fn (gas_cgen_cpu_desc, gas_cgen_parse_operand);
}

/******************************************************************************/

/*********************************/
/**                             **/
/** Interface to relax_segment. **/
/**                             **/
/*********************************/

const relax_typeS md_relax_table[] =
{
/* The fields are:
   1) most positive reach of this state,
   2) most negative reach of this state,
   3) how many bytes this mode will add to the size of the current frag
   4) which index into the table to try if we can't fit into this one.  */

  /* The first entry must be unused because an `rlx_more' value of zero ends
     each list.  */
  {1, 1, 0, 0},

  /* The displacement used by GAS is from the end of the 4 byte insn,
     so we subtract 4 from the following.  */
  {(((1 << 25) - 1) << 2) - 4, -(1 << 25) - 4, 0, 0},
};

/* md_estimate_size_before_relax(), called just before relax().
   Any symbol that is now undefined will not become defined.
   Return the correct fr_subtype in the frag and the growth beyond
   fr_fix.  */

int
aap_estimate_size_before_relax (fragS *fragP,
			       segT seg ATTRIBUTE_UNUSED)
{
  printf("aap_estimate_size_before_relax");

  return md_relax_table[fragP->fr_subtype].rlx_length;
}

/* *fragP has been relaxed to its final size, and now needs to have
   the bytes inside it modified to conform to the new size.

   Called after relaxation is finished.
   fragP->fr_type == rs_machine_dependent.
   fragP->fr_subtype is the subtype of what the address relaxed to.  */

void
aap_convert_frag (bfd *abfd ATTRIBUTE_UNUSED,
		 segT sec ATTRIBUTE_UNUSED,
		 fragS *fragP ATTRIBUTE_UNUSED)
{
  printf("aap_convert_frag");

  switch (fragP->fr_subtype)
  {
    default:
      break;
  }
}

/******************************************************************************/

/**********************************/
/**                              **/
/** Functions concerning relocs. **/
/**                              **/
/**********************************/

/* The location from which a PC relative jump should be calculated,
   given a PC relative reloc.  */

long
md_pcrel_from_section (fixS *fixP,
		       segT sec)
{
  printf("md_pcrel_from_section\n");
  
  if (TC_FORCE_RELOCATION (fixP)
      || (fixP->fx_addsy != (symbolS *) NULL
	  && S_GET_SEGMENT (fixP->fx_addsy) != sec))
    {
      /* If we can't adjust this relocation, or if it references a
	 local symbol in a different section (which
	 TC_FORCE_RELOCATION can't check), let the linker figure it
	 out.  */
      return 0;
    }

  return (fixP->fx_frag->fr_address + fixP->fx_where) & ~1;
}

/* Write a value out to the object file, using the appropriate endianness.  */

void
aap_number_to_chars (char *buf,
		    valueT val,
		    int n)
{
  printf("aap_number_to_chars");
  
  number_to_chars_littleendian (buf, val, n);
}

/* Turn a string in input_line_pointer into a floating point constant of type
   type, and store the appropriate bytes in *litP.  The number of LITTLENUMS
   emitted is stored in *sizeP .  An error message is returned, or NULL on OK.  */

/* Equal to MAX_PRECISION in atof-ieee.c.  */
#define MAX_LITTLENUMS 6

char *
aap_atof (int type,
	 char *litP,
	 int *sizeP)
{
  printf("aap_atof");
  
  return  ieee_md_atof (type, litP, sizeP, TRUE);;
}

#define GOT_NAME "_GLOBAL_OFFSET_TABLE_"

/* Translate internal representation of relocation info to BFD target
   format.  */

arelent *
tc_gen_reloc (asection *section ATTRIBUTE_UNUSED,
	      fixS *fixp)
{
  printf("tc_gen_reloc\n");
  
  arelent *reloc;
  bfd_reloc_code_real_type code;

  reloc = xmalloc (sizeof (arelent));

  reloc->sym_ptr_ptr = xmalloc (sizeof (asymbol *));
  *reloc->sym_ptr_ptr = symbol_get_bfdsym (fixp->fx_addsy);
  reloc->address = fixp->fx_frag->fr_address + fixp->fx_where;

  if (fixp->fx_pcrel)
    {
      if (fixp->fx_r_type == BFD_RELOC_32)
        fixp->fx_r_type = BFD_RELOC_32_PCREL;
      else if (fixp->fx_r_type == BFD_RELOC_16)
	{
          fixp->fx_r_type = BFD_RELOC_16_PCREL;
          bfd_set_error (bfd_error_bad_value);
	}
    }

  code = fixp->fx_r_type;
  switch (code)
    {
    case BFD_RELOC_16:
      if (fixp->fx_pcrel)
	code = BFD_RELOC_16_PCREL;
      break;

    case BFD_RELOC_32:
      if (fixp->fx_pcrel)
	code = BFD_RELOC_32_PCREL;
      break;

    default:
      break;
    }

  reloc->howto = bfd_reloc_type_lookup (stdoutput, code);
  
  if (reloc->howto == (reloc_howto_type *) NULL)
    {
      as_bad_where (fixp->fx_file, fixp->fx_line,
            _("internal error: can't export reloc type %d (`%s')"),
            fixp->fx_r_type, bfd_get_reloc_code_name (code));
      return NULL;
    }

   /* Use fx_offset for these cases. M32r */
  if (fixp->fx_r_type == BFD_RELOC_32_PCREL)
    reloc->addend  = fixp->fx_offset;
  else
    reloc->addend  = fixp->fx_addnumber;

  return reloc;
}

/* Apply fixup FIXP to SIZE-byte field BUF given that VAL is its
   assembly-time value.  If we're generating a reloc for FIXP,
   see whether the addend should be stored in-place or whether
   it should be in an ELF r_addend field.  */
/* From sh */
static void
apply_full_field_fix (fixS *fixP, char *buf, bfd_vma val, int size)
{
  reloc_howto_type *howto;

  if (fixP->fx_addsy != NULL || fixP->fx_pcrel)
    {
      howto = bfd_reloc_type_lookup (stdoutput, fixP->fx_r_type);
      if (howto && !howto->partial_inplace)
	{
	  fixP->fx_addnumber = val;
	  return;
	}
    }
  md_number_to_chars (buf, val, size);
}

/* Fixup some data or instructions after we find out the value of a symbol
   that they reference. */

void				/* Knows about order of bytes in address. */
aap_apply_fix (fixS *fixP, valueT *valueP, segT seg)
{
  printf("aap_apply_fix\n");
  
  valueT value = * valueP;
  char * buf = fixP->fx_where + fixP->fx_frag->fr_literal;

  gas_cgen_md_apply_fix (fixP, valueP, seg);
  
  /* Note whether this will delete the relocation.  */
  if (fixP->fx_addsy == 0 && !fixP->fx_pcrel)
    fixP->fx_done = 1;
  
  if (fixP->fx_subsy != (symbolS *) NULL)
    as_bad_where (fixP->fx_file, fixP->fx_line, _("expression too complex"));
  
  switch (fixP->fx_r_type)
    {
    case BFD_RELOC_NONE:
      /* This will need to go in the object file.  */
      fixP->fx_done = 0;
      break;
      
    case BFD_RELOC_8:
      if (fixP->fx_done || !seg->use_rela_p)
	*buf = value;
      break;

    case BFD_RELOC_16:
      apply_full_field_fix(fixP, buf, value, 2);
      break;
      
    case BFD_RELOC_32:
      fixP->fx_r_type = BFD_RELOC_32_PCREL;
      /*fallthrough*/
    case BFD_RELOC_32_PCREL:
      apply_full_field_fix(fixP, buf, value, 4);
      break;
      
    default:
      break;
    }
}


/* See whether we need to force a relocation into the output file.
   This is used to force out switch and PC relative relocations when
   relaxing. */
/* Use FRV as an example, need to change .opc */

int
aap_force_relocation (fixS *fix)
{
  printf("aap_force_relocation\n");
  
  switch (fix->fx_r_type < BFD_RELOC_UNUSED
	  ? (int) fix->fx_r_type
	  : fix->fx_cgen.opinfo)
  {
  case BFD_RELOC_NONE:
  case BFD_RELOC_8:
  case BFD_RELOC_16:
  case BFD_RELOC_32:
    return 1;

  default:
    break;
  }

  return generic_force_reloc (fix);
}

bfd_reloc_code_real_type
md_cgen_lookup_reloc (const CGEN_INSN * insn ATTRIBUTE_UNUSED,
		      const CGEN_OPERAND * operand,
		      fixS * fixP)
{
  printf("cgen_lookup_reloc: %d\n", fixP->fx_cgen.opinfo);
  
  if (fixP->fx_cgen.opinfo)
    return fixP->fx_cgen.opinfo;

  switch (operand->type)
    {
    default:
      return BFD_RELOC_NONE;
    }
}

/**********************************************************************************/

int
aap_parse_option (int c ATTRIBUTE_UNUSED,
		 char *arg ATTRIBUTE_UNUSED)
{
  printf("aap_parse_option");

  return 0;
}

void
aap_show_usage (FILE *stream)
{
  printf("aap_show_usage");  /*VAX*/

  fprintf (stream, _("\
AAP options:\n\
-d LENGTH		ignored\n\
-J			ignored\n\
-S			ignored\n\
-t FILE			ignored\n\
-T			ignored\n\
-V			ignored\n"));
}

/* GAS will call this function for each section at the end of the assembly,
   to permit the CPU backend to adjust the alignment of a section.  */

valueT
aap_section_align (segT segment,
		  valueT size)
{
  printf("aap_section_align\n");
  
  int align = bfd_get_section_alignment (stdoutput, segment);
  return ((size + (1 << align) - 1) & (-1 << align));
}

symbolS *
aap_undefined_symbol (char *name)
{
  printf("aap_undefined_symbol: %s\n", name);
  
  return NULL;
}

int md_short_jump_size = 3;
int md_long_jump_size = 6;

void
aap_create_short_jump (char *ptr,
		      addressT from_addr,
		      addressT to_addr,
		      fragS *frag ATTRIBUTE_UNUSED,
		      symbolS *to_symbol ATTRIBUTE_UNUSED)
{
  printf("aap_create_short_jump");

  valueT offset;

  /* We need to account for the one byte instruction and also its
     two byte operand. -- VAX */
  offset = to_addr - (from_addr + 1 + 2);
  *ptr++ = AAP_BRW;		/* Branch with word (16 bit) offset.  */
  aap_number_to_chars (ptr, offset, 2);
}

void
aap_create_long_jump (char *ptr,
		     addressT from_addr ATTRIBUTE_UNUSED,
		     addressT to_addr,
		     fragS *frag,
		     symbolS *to_symbol)
{
  printf("aap_create_long_jump");

  valueT offset;
  
  offset = to_addr - S_GET_VALUE (to_symbol);
  *ptr++ = AAP_JMP;		/* Arbitrary jump.  */
  *ptr++ = AAP_ABSOLUTE_MODE;
  aap_number_to_chars (ptr, offset, 4);
  fix_new (frag, ptr - frag->fr_literal, 4, to_symbol, (long) 0, 0, BFD_RELOC_NONE);
}

/* to prevent seg fault in gas_cgen_record_fixup */
fixS *
aap_cgen_record_fixup_exp (fragS *frag,
			    int where,
			    const CGEN_INSN *insn,
			    int length,
			    const CGEN_OPERAND *operand,
			    int opinfo,
			    expressionS *exp)
{  
  fixS * fixP = gas_cgen_record_fixup_exp (frag, where, insn, length,
                                           operand, opinfo, exp);

  return fixP;
}
