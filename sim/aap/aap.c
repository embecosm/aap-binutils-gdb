/* AAP simulator support code */

#define WANT_CPU
#define WANT_CPU_AAPBF

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

BI
aap_endian (SIM_CPU *current_cpu)
{
  return (CURRENT_TARGET_BYTE_ORDER == LITTLE_ENDIAN);
}

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

void
set_isa (SIM_CPU *current_cpu, int mode)
{
  /* Do nothing.  */
}

/* The semantic code invokes this for invalid (unrecognized) instructions.  */

SEM_PC
sim_engine_invalid_insn (SIM_CPU *current_cpu, IADDR cia, SEM_PC vpc)
{
  SIM_DESC sd = CPU_STATE (current_cpu);
  sim_engine_halt (sd, current_cpu, NULL, cia, sim_stopped, SIM_SIGILL);

  return vpc;
}

/* Process an address exception. */

void
aap_core_signal (SIM_DESC sd, SIM_CPU *current_cpu, sim_cia cia,
                  unsigned int map, int nr_bytes, address_word addr,
                  transfer_type transfer, sim_core_signals sig)
{
  sim_core_signal (sd, current_cpu, cia, map, nr_bytes, addr,
		   transfer, sig);
}

int
aapbf_fetch_register (SIM_CPU *cpu, int nr, unsigned char *buf, int len)
{
  /* Fetch general purpose registers. */
  if (SIM_AAP_GPR0_REGNUM <= nr && nr <= SIM_AAP_GPR63_REGNUM)
    {
      int gnr = nr - SIM_AAP_GPR0_REGNUM;
      
      if ((gnr < 32) || (gnr >= 32))
	return 0;
      else
	SETTSI (buf, GET_H_GPR (gnr));
    }
  /* Fetch PC.  */
  else if (nr == SIM_AAP_PC_REGNUM)
    {
      SETTSI (buf, GET_H_PC ());
    }
  /* Fetch control register (CR). */
  else if (SIM_AAP_CR0_REGNUM <= nr && nr <= SIM_AAP_CR63_REGNUM)
    {
      int cnr = nr - SIM_AAP_CR0_REGNUM;
      
      if ((cnr < 32) || (cnr >= 32))
	return 0;
      else
	SETTUSI (buf, GET_H_CR (cnr));  /* See cgen-mem.h for SETTSI */
    }
  /* Fetch carry flag */
   else if (nr == SIM_AAP_CF_REGNUM)
    {
      SETTSI (buf, GET_H_CF ());
    }

  else    /* We should never get here. */
    return 0;

  return len;
}

int
aapbf_store_register (SIM_CPU *cpu, int nr, unsigned char *buf, int len)
{
  if (SIM_AAP_GPR0_REGNUM <= nr && nr <= SIM_AAP_GPR63_REGNUM)
    {
      int gnr = nr - SIM_AAP_GPR0_REGNUM;
      
      if ((gnr < 32) || (gnr >= 32))
	return 0;
      else
	SET_H_GPR (gnr, GETTSI (buf));
    }
  else if (nr == SIM_AAP_PC_REGNUM)
    {
      SET_H_PC (GETTUSI (buf));
    }
  else if (SIM_AAP_CR0_REGNUM <= nr && nr <= SIM_AAP_CR63_REGNUM)
    {
      int cnr = nr - SIM_AAP_CR0_REGNUM;
      
      if ((cnr < 32) || (cnr >= 32))
	return 0;
      else
	SET_H_CR (cnr, GETTSI (buf));
    }
   else if (nr == SIM_AAP_CF_REGNUM)
    {
      SET_H_CF (GETTSI (buf));
    }
  else
    return 0;
  
  return len;
}
