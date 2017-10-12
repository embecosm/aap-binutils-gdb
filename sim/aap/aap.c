/* AAP simulator support code -- see LM32  */
/* How to fetch/ store in registers and model insn */

#define WANT_CPU aapbf
#define WANT_CPU_AAPBF

#include "sim-main.h"
#include "cgen-mem.h"
#include "cgen-ops.h"

/* The contents of BUF are in target byte order.  */

int
aapbf_fetch_register (SIM_CPU * current_cpu, int rn, unsigned char *buf,
		       int len)
{
  if (rn < 32)
    SETTSI (buf, aapbf_h_gr_get (current_cpu, rn));
  else
    switch (rn)
      {
      case SIM_AAP_PC_REGNUM:
	SETTSI (buf, aapbf_h_pc_get (current_cpu));
	break;
      default:
	return 0;
      }

  return -1;
}

/* The contents of BUF are in target byte order.  */

int
aapbf_store_register (SIM_CPU * current_cpu, int rn, unsigned char *buf,
		       int len)
{
  if (rn < 32)
    aapbf_h_gr_set (current_cpu, rn, GETTSI (buf));
  else
    switch (rn)
      {
      case SIM_AAP_PC_REGNUM:
	aapbf_h_pc_set (current_cpu, GETTSI (buf));
	break;
      default:
	return 0;
      }

  return -1;
}



#if WITH_PROFILE_MODEL_P

/* Initialize cycle counting for an insn.
   FIRST_P is non-zero if this is the first insn in a set of parallel
   insns.  */

void
aapbf_model_insn_before (SIM_CPU * cpu, int first_p)
{
}

/* Record the cycles computed for an insn.
   LAST_P is non-zero if this is the last insn in a set of parallel insns,
   and we update the total cycle count.
   CYCLES is the cycle count of the insn.  */

void
aapbf_model_insn_after (SIM_CPU * cpu, int last_p, int cycles)
{
}

int
aapbf_model_aap_u_exec (SIM_CPU * cpu, const IDESC * idesc,
			  int unit_num, int referenced)
{
  return idesc->timing->units[unit_num].done;
}

#endif /* WITH_PROFILE_MODEL_P */
