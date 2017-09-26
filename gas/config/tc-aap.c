/* tc-aap.c -- To assemble code for AAP
 *
 * 2017/09/21: allows a blank page to compile using abort()
 * Todo: link to CGEN
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

#include <stdlib.h>

/***********************************************************/

const char *md_shortopts = "";

struct option md_longopts[] =
{
  { NULL, no_argument, NULL, 0 }
};
size_t md_longopts_size = sizeof(md_longopts);

/* Define characters with special meanings to GAS. */
const char comment_chars[] = "#";
const char line_comment_chars[] = "#";
const char line_separator_chars[] = ";";
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
md_assemble (char *str ATTRIBUTE_UNUSED)
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

  gas_cgen_finish_insn (insn.insn, insn.buffer,
			  CGEN_FIELDS_BITSIZE (& insn.fields), 1, NULL);
}

/* initialises cgen */
void
md_begin (void)
{
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

arelent *
tc_gen_reloc (asection *section ATTRIBUTE_UNUSED, fixS *fixp ATTRIBUTE_UNUSED)
{
  abort();
}

void
md_apply_fix (fixS *fixP ATTRIBUTE_UNUSED,
	      valueT *valP ATTRIBUTE_UNUSED,
	      segT seg ATTRIBUTE_UNUSED)
{
  abort();
}

char *
md_atof (int type ATTRIBUTE_UNUSED,
	 char *litP ATTRIBUTE_UNUSED,
	 int *sizeP ATTRIBUTE_UNUSED)
{
  return NULL;
}

void
md_convert_frag (bfd *abfd ATTRIBUTE_UNUSED,
		 segT sec ATTRIBUTE_UNUSED,
		 fragS *fragp ATTRIBUTE_UNUSED)
{
  abort();
}

int
md_estimate_size_before_relax (fragS *fragP ATTRIBUTE_UNUSED,
			       segT seg ATTRIBUTE_UNUSED)
{
  abort();
}

void
md_number_to_chars (char con[] ATTRIBUTE_UNUSED,
		    valueT value ATTRIBUTE_UNUSED,
		    int nbytes ATTRIBUTE_UNUSED)
{
  abort();
}

int
md_parse_option (int c ATTRIBUTE_UNUSED,
		 char *arg ATTRIBUTE_UNUSED)
{
  abort();
}

void
md_show_usage (FILE *stream ATTRIBUTE_UNUSED)
{
  abort();
}

valueT
md_section_align (segT segment ATTRIBUTE_UNUSED,
		  valueT size)
{
  return size;			/* Byte alignment is fine.  */
}

symbolS *
md_undefined_symbol (char *name ATTRIBUTE_UNUSED)
{
  return NULL;
}

long
md_pcrel_from (fixS *fixP ATTRIBUTE_UNUSED)
{
  abort();
}

int md_short_jump_size = 3;
int md_long_jump_size = 6;

void
md_create_short_jump (char *ptr ATTRIBUTE_UNUSED,
		      addressT from_addr ATTRIBUTE_UNUSED,
		      addressT to_addr ATTRIBUTE_UNUSED,
		      fragS *frag ATTRIBUTE_UNUSED,
		      symbolS *to_symbol ATTRIBUTE_UNUSED)
{
  abort();
}

void
md_create_long_jump (char *ptr ATTRIBUTE_UNUSED,
		     addressT from_addr ATTRIBUTE_UNUSED,
		     addressT to_addr ATTRIBUTE_UNUSED,
		     fragS *frag ATTRIBUTE_UNUSED,
		     symbolS *to_symbol ATTRIBUTE_UNUSED)
{
  abort();
}

bfd_reloc_code_real_type
md_cgen_lookup_reloc (const CGEN_INSN *insn ATTRIBUTE_UNUSED,
		      const CGEN_OPERAND *operand ATTRIBUTE_UNUSED,
		      fixS *fixP ATTRIBUTE_UNUSED)
{
  abort();
}
