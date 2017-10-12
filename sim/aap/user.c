/* Semantics for user defined instructions on the aap -- see lm32 */

#include "sim-main.h"

/* Handle user defined instructions.  */

UINT
aapbf_user_insn (SIM_CPU * current_cpu, INT r0, INT r1, UINT imm)
{
  /* FIXME: Should probably call code in a user supplied library.  */
  return 0;
}
