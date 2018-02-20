/* Simulator model support for aapbf.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright 1996-2010 Free Software Foundation, Inc.

This file is part of the GNU simulators.

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.

*/

#define WANT_CPU aapbf
#define WANT_CPU_AAPBF

#include "sim-main.h"

/* The profiling data is recorded here, but is accessed via the profiling
   mechanism.  After all, this is information for profiling.  */

#if WITH_PROFILE_MODEL_P

/* Model handlers for each insn.  */

/* We assume UNIT_NONE == 0 because the tables don't always terminate
   entries with it.  */

#endif /* WITH_PROFILE_MODEL_P */

#if WITH_PROFILE_MODEL_P
#define TIMING_DATA(td) td
#else
#define TIMING_DATA(td) 0
#endif

static const MODEL aap_a32_models[] =
{
  { 0 }
};

/* The properties of this cpu's implementation.  */

static const MACH_IMP_PROPERTIES aapbf_imp_properties =
{
  sizeof (SIM_CPU),
#if WITH_SCACHE
  sizeof (SCACHE)
#else
  0
#endif
};


static void
aapbf_prepare_run (SIM_CPU *cpu)
{
  if (CPU_IDESC (cpu) == NULL)
    aapbf_aap32_init_idesc_table (cpu);
}

static const CGEN_INSN *
aapbf_get_idata (SIM_CPU *cpu, int inum)
{
  return CPU_IDESC (cpu) [inum].idata;
}

static void
aap_a32_init_cpu (SIM_CPU *cpu)
{
  CPU_REG_FETCH (cpu) = aapbf_fetch_register;
  CPU_REG_STORE (cpu) = aapbf_store_register;
  CPU_PC_FETCH (cpu) = aapbf_h_pc_get;
  CPU_PC_STORE (cpu) = aapbf_h_pc_set;
  CPU_GET_IDATA (cpu) = aapbf_get_idata;
  CPU_MAX_INSNS (cpu) = AAPBF_AAP32_INSN__MAX;
  CPU_INSN_NAME (cpu) = cgen_insn_name;
  CPU_FULL_ENGINE_FN (cpu) = aapbf_aap32_engine_run_full;
#if WITH_FAST
  CPU_FAST_ENGINE_FN (cpu) = aapbf_aap32_engine_run_fast;
#else
  CPU_FAST_ENGINE_FN (cpu) = aapbf_aap32_engine_run_full;
#endif
}

const MACH aap_a32_mach =
{
  "aap:a32", "aap", MACH_AAP_A32,
  32, 32, & aap_a32_models[0], & aapbf_imp_properties,
  aap_a32_init_cpu,
  aapbf_prepare_run
};

