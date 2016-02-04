/* tc-aap.c -- Assemble code for AAAP

   Copyright (C) 2016 Free Software Foundation, Inc.
   Copyright (C) 2016 Embecosm Limited <www.embecosm.com>

   This file is part of GAS, the GNU Assembler.

   GAS is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GAS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GAS; see the file COPYING.  If not, write to
   the Free Software Foundation, 51 Franklin Street - Fifth Floor,
   Boston, MA 02110-1301, USA.  */

#include "config.h"
#include "getopt.h"
#include "as.h"
#include "opcodes/aap-desc.h"
#include "opcodes/aap-opc.h"
#include "cgen.h"

#include <stdlib.h>

/* ---- Debugging functions ---- */

#include <libgen.h>

static void __attribute__ ((unused))
log_visited_inner (const char *file, const unsigned line, const char *function)
{
  char *file_copy = strdup (file);
  char *base_filename = basename (file_copy);
  fprintf (stderr, "%s : %u (%s)\n", base_filename, line, function);
  free (file_copy);
}

#define log_visited() log_visited_inner (__FILE__, __LINE__, __PRETTY_FUNCTION__)

/* ---- The actual AAP assembler implementation ---- */

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


const char *md_shortopts = "";

struct option md_longopts[] =
{
  {NULL, no_argument, NULL, 0}
};
size_t md_longopts_size = sizeof (md_longopts);

const char comment_chars[]        = ";";
const char line_comment_chars[]   = ";#";
const char line_separator_chars[] = "|";
const char EXP_CHARS[]            = "eE";
const char FLT_CHARS[]            = "rRfF";

/* This table describes all the machine specific pseudo-ops the assembler
   supports.  */

const pseudo_typeS md_pseudo_table[] = {
  {0, 0, 0}
};

arelent *
tc_gen_reloc (asection *sec, fixS *fix)
{
  return gas_cgen_tc_gen_reloc (sec, fix);
}

void
aap_apply_fix (struct fix *fixP, valueT *valueP, segT sec)
{
  gas_cgen_md_apply_fix (fixP, valueP, sec);
}

void
aap_assemble (char *str)
{
  aap_insn insn;
  char *errmsg;

  /* Initialize GAS's cgen interface for a new instruction.  */
  gas_cgen_init_parse ();

  insn.insn = aap_cgen_assemble_insn
    (gas_cgen_cpu_desc, str, & insn.fields, insn.buffer, & errmsg);

  if (!insn.insn)
    {
      as_bad ("%s", errmsg);
      return;
    }

  /* Doesn't really matter what we pass for RELAX_P here.  */
  gas_cgen_finish_insn (insn.insn, insn.buffer,
			CGEN_FIELDS_BITSIZE (& insn.fields), 1, NULL);
}

char *
aap_atof (int type, char *litP, int *sizeP)
{
  abort ();
  (void) type;
  (void) litP;
  (void) sizeP;
  return NULL;
}

void
aap_begin (void)
{
  /* Initialize the `cgen' interface.  */

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

void
aap_convert_frag (bfd *abfd, segT sec, fragS *fragP)
{
  abort ();
  (void) abfd;
  (void) sec;
  (void) fragP;
}

int
aap_estimate_size_before_relax (fragS *fragP, segT sec)
{
  abort ();
  (void) fragP;
  (void) sec;
}

void
aap_number_to_chars (char *buffer, valueT value, int n)
{
  number_to_chars_littleendian (buffer, value, n);
}

void
aap_operand (expressionS *expressionP)
{
  abort ();
  (void) expressionP;
}

int
aap_parse_option (int c, char * arg)
{
  abort ();
  (void) c;
  (void) arg;
}

void
aap_show_usage (FILE *stream)
{
  abort ();
  (void) stream;
}

valueT
aap_section_align (segT sec, valueT size)
{
  int align = bfd_get_section_alignment (stdoutput, sec);
  return ((size + (1 << align) - 1) & (-1 << align));
}

symbolS *
aap_undefined_symbol (char *name ATTRIBUTE_UNUSED)
{
  /* TODO: Some targets do ELF specific stuff here.  Maybe we also need to
     do more stuff here too.  */
  return NULL;
}

long
aap_pcrel_from_section (struct fix *fixP, segT section)
{
  /* If the symbol is undefined, or in a section other than our own,
     or it is weak (in which case it may well be in another section,
     then let the linker figure it out.  */
  if (fixP->fx_addsy != (symbolS *) NULL
      && (! S_IS_DEFINED (fixP->fx_addsy)
	  || S_IS_WEAK (fixP->fx_addsy)
	  || (S_GET_SEGMENT (fixP->fx_addsy) != section)))
    return 0;

  /* TODO: Check this.  This is what everyone else does.  Is it correct for
     us?  */
  return fixP->fx_frag->fr_address + fixP->fx_where;
}

bfd_reloc_code_real_type
md_cgen_lookup_reloc (const CGEN_INSN *insn ATTRIBUTE_UNUSED,
                      const CGEN_OPERAND *operand,
                      fixS *fixP ATTRIBUTE_UNUSED)
{
  switch (operand->type)
    {
    case AAP_OPERAND_IADDR22:
      fprintf (stderr, "APB: %s : %d\n", __FILE__, __LINE__);
      return BFD_RELOC_AAP_IADDR22;

    default:
      break;
    }

  fprintf (stderr, "APB: %s : %d\n", __FILE__, __LINE__);
  return BFD_RELOC_NONE;
}
