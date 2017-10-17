/* AAP simulator support code
   Copyright (C) 2000-2015 Free Software Foundation, Inc.
   Contributed by Red Hat, Inc.

This file is part of the GNU simulators.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#define WANT_CPU
#define WANT_CPU_AAPBF

#include "sim-main.h"
#include "sim-fpu.h"
#include "cgen-mem.h"
#include "cgen-ops.h"

#include "gdb/callback.h"

#include "bfd.h"
/* From include/gdb/.  */
#include "gdb/sim-sh.h"

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


IDESC * aap_idesc;
static void aap_init_cpu (SIM_CPU *cpu);
static void aap_model_init ();
static void aap_prepare_run (SIM_CPU *cpu);


static const MACH_IMP_PROPERTIES aap_imp_properties =
{
  sizeof (SIM_CPU),
#if WITH_SCACHE
  sizeof (SCACHE),
#else
  0
#endif
};

static const MODEL aap_models [] =
{
  { "aap32", &aap32_mach, MODEL_AAP32, NULL, aap_model_init },
  { 0 }
};

const MACH aap32_mach =
{
  "aap", "aap", MACH_AAP32,
  32, 32, &aap_models[0], &aap_imp_properties,
  aap_init_cpu,
  aap_prepare_run
};

static void
aap_prepare_run (SIM_CPU *cpu)
{
  /* Nothing.  */
}

static const CGEN_INSN *
aapbf_get_idata (SIM_CPU *cpu, int inum)
{
  return CPU_IDESC (cpu) [inum].idata;
}

SEM_PC
sim_engine_invalid_insn (SIM_CPU *current_cpu, IADDR cia, SEM_PC vpc)
{
  // TODO
  return 0;
}

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
  return 0;
}

int
aapbf_store_register (SIM_CPU *cpu, int nr, unsigned char *buf, int len)
{
  return 0;
}

USI
aapbf_h_cr_get_handler (SIM_CPU *current_cpu, UINT cr)
{
	// TODO
  return 0;
}

void
aapbf_h_cr_set_handler (SIM_CPU *current_cpu, UINT gr, USI newval)
{
	// TODO
	return;
}

void                                                                            
aapbf_model_insn_before (SIM_CPU *cpu, int first_p) {
  return;
}
void                                                                            
aapbf_model_insn_after (SIM_CPU *cpu, int last_p, int cycles) {
  return;
}

static void
aap_init_cpu (SIM_CPU *cpu)
{
  CPU_REG_FETCH (cpu) = aapbf_fetch_register;
  CPU_REG_STORE (cpu) = aapbf_store_register;
  CPU_PC_FETCH (cpu) = aapbf_h_pc_get;
  CPU_PC_STORE (cpu) = aapbf_h_pc_set;
  CPU_GET_IDATA (cpu) = aapbf_get_idata;
  /* Only used by profiling.  0 disables it. */
  CPU_MAX_INSNS (cpu) = 0;
  CPU_INSN_NAME (cpu) = cgen_insn_name;
  CPU_FULL_ENGINE_FN (cpu) = aapbf_engine_run_full;
}

static void
aap_model_init ()
{
  /* Do nothing */
}

