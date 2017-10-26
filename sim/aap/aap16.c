/* AAP simulator support code */

#define WANT_CPU
#define WANT_CPU_AAPBF16

#include "sim-main.h"
#include "cgen-mem.h"
#include "cgen-ops.h"

#include "gdb/callback.h"

#include "bfd.h"
/* From include/gdb/.  */
#include "gdb/sim-aap.h"

#define SYS_exit        1
#define	SYS_read	3
#define SYS_write       4
#define	SYS_open	5
#define	SYS_close	6
#define	SYS_lseek	19
#define	SYS_time	23
#define	SYS_argc	172
#define	SYS_argnlen	173
#define	SYS_argn	174

/* Don't need fldi0, fldi1, fabsd, fabss, faddd, fadds, fcmpeqd, fcmpeqs, 
   fcmpged, fcmpges, fcmpgtd, fcmpgts, fcmpund, fcmpuns, fcnvds, fcnvsd, fdivd
   fdivs, floatld, floatls, floatqd, floatqs, fmacs, fmuld, fmuls... pref */

/* Read a null terminated string from memory, return in a buffer */
static char *
fetch_str (current_cpu, pc, addr)
     SIM_CPU *current_cpu;
     PCADDR pc;
     DI addr;
{
  char *buf;
  int nr = 0;
  while (sim_core_read_1 (current_cpu,
			  pc, read_map, addr + nr) != 0)
    nr++;
  buf = NZALLOC (char, nr + 1);
  sim_read (CPU_STATE (current_cpu), addr, buf, nr);
  return buf;
}

/* Initialize cycle counting for an insn.
   FIRST_P is non-zero if this is the first insn in a set of parallel
   insns.  */
void
aapbf16_model_insn_before (SIM_CPU *current_cpu, int first_p)
{
  /*FIX ME: probably need stuff here */
}

/* Record the cycles computed for an insn.
   LAST_P is non-zero if this is the last insn in a set of parallel insns,
   and we update the total cycle count.
   CYCLES is the cycle count of the insn.  */
void
aapbf16_model_insn_after (SIM_CPU *current_cpu, int last_p, int cycles)
{
  /*FIX ME: probably need stuff here */
}

/* FIX ME: should it be an int? */
int
aapbf16_fetch_register (SIM_CPU *current_cpu, int rn,
			unsigned char *buf, int len)
{
  if (rn < 64)
    SETTSI (buf, aapbf16_h_gpr_get (current_cpu, rn));
  else if (rn == 64)
    SETTSI (buf, aapbf16_h_pc_get (current_cpu));
  else if (rn < 128)
    SETTSI (buf, aapbf16_h_cr_get (current_cpu, rn));
  else if (rn == 128)
    SETTSI (buf, aapbf16_h_cf_get (current_cpu));
  else 
    return 0; //Fail

  return len;
}

int
aapbf16_store_register  (SIM_CPU *current_cpu, int rn,
			 unsigned char *buf, int len)
{
  if (rn < 64)  //GPR
  {
    int grn = rn - SIM_AAP_GPR0_REGNUM;
    SET_H_GPR (grn, GETTSI (buf));
  }
  else if (rn == 64)  //PC
  {
    SET_H_PC (GETTSI (buf));
  }
  else if (rn < 128)  //CR
  {
    int crn = rn - SIM_AAP_CR0_REGNUM;
    SET_H_CR (crn, GETTSI (buf));
  }
  else if (rn == 128)  //CF
  {
    SET_H_CF (GETTSI (buf));
  }
  else 
    return 0;

  return len;
}

/* Function unit handlers */
int
aapbf16_model_aap16_u_exec (SIM_CPU *cpu, const IDESC *idesc, int unit_num, int referenced)
{
  return idesc->timing->units[unit_num].done;
}

void
aapbf16_h_cr_set_handler (SIM_CPU *current_cpu, UINT cr, USI newval)
{
  return;
}

USI
aapbf16_h_cr_get_handler (SIM_CPU *current_cpu, UINT cr)
{
  return 0;
}
