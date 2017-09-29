/* tc-aap.c -- To assemble code for AAP
 *
 * 2017/09/21: allows a blank page to compile using abort()
 * 2017/09/28: allows a all of instructions to be assembled
 * Todo: disassembler
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
#include <stdio.h>

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
md_assemble (char *str)
{
  aap_insn insn;
  char *errmsg;

  printf("md_assemble\n");
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
  printf("md_begin\n");
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

/* Translate internal representation of relocation info to BFD target
   format.  */

arelent *
tc_gen_reloc (asection *section, fixS *fixp)
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
      if (section->use_rela_p)
	fixp->fx_offset -= md_pcrel_from (fixp);
      else
	fixp->fx_offset = reloc->address;
    }
  reloc->addend = fixp->fx_offset;

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

    case BFD_RELOC_64:
      if (fixp->fx_pcrel)
	code = BFD_RELOC_64_PCREL;
      break;

    default:
      break;
    }

  reloc->howto = bfd_reloc_type_lookup (stdoutput, code);
  if (reloc->howto == NULL)
    {
      as_bad_where (fixp->fx_file, fixp->fx_line,
		    _
		    ("cannot represent %s relocation in this object file format"),
		    bfd_get_reloc_code_name (code));
      return NULL;
    }

  return reloc;
}

/* Fix up some data or instructions after we find out the value of a symbol
   that they reference.  */

void				/* Knows about order of bytes in address.  */
md_apply_fix (fixS *fixP, valueT *valueP, segT seg)
{
  printf("md_apply_fix\n");
  
  valueT value = * valueP;
  seg = seg;

  if (fixP->fx_subsy != (symbolS *) NULL)
    as_bad_where (fixP->fx_file, fixP->fx_line, _("expression too complex"));

  if (fixP->fx_addsy == NULL)
    fixP->fx_done = 1;

  if (fixP->fx_done)
    number_to_chars_littleendian (fixP->fx_where + fixP->fx_frag->fr_literal,
				  value, fixP->fx_size);
  else
    /* Initialise the part of an instruction frag covered by the
       relocation.  (Many occurrences of frag_more followed by fix_new
       lack any init of the frag.)  Since VAX uses RELA relocs the
       value we write into this field doesn't really matter.  */
    memset (fixP->fx_where + fixP->fx_frag->fr_literal, 0, fixP->fx_size);
}

char *
md_atof (int type ATTRIBUTE_UNUSED,
	 char *litP ATTRIBUTE_UNUSED,
	 int *sizeP ATTRIBUTE_UNUSED)
{
  printf("md_atof");
  return NULL;
}

void
md_convert_frag (bfd *abfd ATTRIBUTE_UNUSED,
		 segT sec ATTRIBUTE_UNUSED,
		 fragS *fragp ATTRIBUTE_UNUSED)
{
  printf("md_convert_frag");

  abort();
}

/* md_estimate_size_before_relax(), called just before relax().
   Any symbol that is now undefined will not become defined.
   Return the correct fr_subtype in the frag and the growth beyond
   fr_fix.  */

int
md_estimate_size_before_relax (fragS *fragP ATTRIBUTE_UNUSED,
			       segT seg ATTRIBUTE_UNUSED)
{
  printf("md_estimate_size_before_relax");

  abort();
}

void
md_number_to_chars (char con[] ATTRIBUTE_UNUSED,
		    valueT value ATTRIBUTE_UNUSED,
		    int nbytes ATTRIBUTE_UNUSED)
{
  printf("md_number_to_chars");
  abort();
}

int
md_parse_option (int c ATTRIBUTE_UNUSED,
		 char *arg ATTRIBUTE_UNUSED)
{
  printf("md_parse_option");
  abort();
}

void
md_show_usage (FILE *stream)
{
  printf("md_show_usage");  /*VAX*/

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
md_section_align (segT segment,
		  valueT size)
{
  printf("md_section_align\n");
  
  int align = bfd_get_section_alignment (stdoutput, segment);
  return ((size + (1 << align) - 1) & (-1 << align));
}

symbolS *
md_undefined_symbol (char *name ATTRIBUTE_UNUSED)
{
  printf("md_undefined_symbol\n");
  return NULL;
}

long
md_pcrel_from (fixS *fixP ATTRIBUTE_UNUSED)
{
  printf("md_pcrel_from");
  
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
  printf("md_create_short_jump");

  abort();
}

void
md_create_long_jump (char *ptr ATTRIBUTE_UNUSED,
		     addressT from_addr ATTRIBUTE_UNUSED,
		     addressT to_addr ATTRIBUTE_UNUSED,
		     fragS *frag ATTRIBUTE_UNUSED,
		     symbolS *to_symbol ATTRIBUTE_UNUSED)
{
  printf("md_create_long_jump");

  abort();
}

/* Return the bfd reloc type for OPERAND of INSN at fixup FIXP.
   Returns BFD_RELOC_NONE if no reloc type can be found.
   *FIXP may be modified if desired.  */

bfd_reloc_code_real_type
md_cgen_lookup_reloc (const CGEN_INSN *insn ATTRIBUTE_UNUSED,
		      const CGEN_OPERAND *operand ATTRIBUTE_UNUSED,
		      fixS *fixP ATTRIBUTE_UNUSED)
{
  printf("md_cgen_lookup_reloc");

  abort();
}
