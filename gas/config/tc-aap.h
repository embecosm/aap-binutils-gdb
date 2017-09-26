/* tc-aap.h -- To assemble code for AAP
 *
 * Andrew helped
 * 2017/09/21: todo: write enough hooks to allow a blank page to compile
 */

#define TC_AAP

#define TARGET_ARCH	bfd_arch_aap
#define TARGET_FORMAT	"elf32-aap"

#define WORKING_DOT_WORD

#define md_operand(x)
