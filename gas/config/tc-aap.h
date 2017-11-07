/* tc-aap.h -- To assemble code for AAP -- header for tc-aap.c
 *
 * Andrew helped
 * 2017/09/21: enough hooks to allow a blank page to compile
 * 2017/09/28: assembler for all instructions
 */

#define TC_AAP

#define TARGET_ARCH	bfd_arch_aap
#define TARGET_FORMAT	"elf32-aap"

#define WORKING_DOT_WORD

#define md_operand(x)

#define NO_RELOC	BFD_RELOC_NONE

/* for create jumps */
#define AAP_JMP (0x17)		/* Useful for branch optimising. Jump instr*/
#define AAP_ABSOLUTE_MODE (0x9F)/* Use as @#...			           */
#define AAP_BRW (0x31)		/* Another canonical branch		   */

/* Call md_pcrel_from_section(), not md_pcrel_from().  */
#define MD_PCREL_FROM_SECTION(FIX, SEC) md_pcrel_from_section (FIX, SEC)
extern long md_pcrel_from_section (struct fix *, segT);

#define TC_FORCE_RELOCATION(fix) aap_force_relocation (fix)
extern int aap_force_relocation (struct fix *);

extern void aap_apply_fix (struct fix *, valueT *, segT);
#define md_apply_fix aap_apply_fix

extern void aap_assemble (char *);
#define md_assemble aap_assemble

extern char *aap_atof (int , char *, int *);
#define md_atof aap_atof

extern void aap_begin (void);
#define md_begin aap_begin

extern void aap_convert_frag (bfd *, segT, fragS *);                                /*unfinished*/
#define md_convert_frag aap_convert_frag

extern void aap_create_short_jump (char *, addressT, addressT, fragS *, symbolS *);
#define md_create_short_jump aap_create_short_jump

extern void aap_create_long_jump (char *, addressT, addressT, fragS *, symbolS *);
#define md_create_long_jump aap_create_long_jump

extern int aap_estimate_size_before_relax (fragS *, segT);
#define md_estimate_size_before_relax aap_estimate_size_before_relax

extern void aap_number_to_chars (char *, valueT, int);
#define md_number_to_chars aap_number_to_chars

extern int aap_parse_option (int, char *);
#define md_parse_option aap_parse_option

extern valueT aap_section_align (segT, valueT);
#define md_section_align aap_section_align

extern void aap_show_usage (FILE *);
#define md_show_usage aap_show_usage

extern symbolS *aap_undefined_symbol (char *);
#define md_undefined_symbol aap_undefined_symbol

/* After creating a fixup for an instruction operand, we need to check for
   HI16 relocs and queue them up for later sorting.  */
#define md_cgen_record_fixup_exp aap_cgen_record_fixup_exp
