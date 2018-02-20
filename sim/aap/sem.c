/* Simulator instruction semantics for aapbf.

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
#include "cgen-mem.h"
#include "cgen-ops.h"

#undef GET_ATTR
#define GET_ATTR(cpu, num, attr) CGEN_ATTR_VALUE (NULL, abuf->idesc->attrs, CGEN_INSN_##attr)

/* This is used so that we can compile two copies of the semantic code,
   one with full feature support and one without that runs fast(er).
   FAST_P, when desired, is defined on the command line, -DFAST_P=1.  */
#if FAST_P
#define SEM_FN_NAME(cpu,fn) XCONCAT3 (cpu,_semf_,fn)
#undef TRACE_RESULT
#define TRACE_RESULT(cpu, abuf, name, type, val)
#else
#define SEM_FN_NAME(cpu,fn) XCONCAT3 (cpu,_sem_,fn)
#endif

/* x-invalid: --invalid-- */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,x_invalid) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
    /* Update the recorded pc in the cpu state struct.
       Only necessary for WITH_SCACHE case, but to avoid the
       conditional compilation ....  */
    SET_H_PC (pc);
    /* Virtual insns have zero size.  Overwrite vpc with address of next insn
       using the default-insn-bitsize spec.  When executing insns in parallel
       we may want to queue the fault and continue execution.  */
    vpc = SEM_NEXT_VPC (sem_arg, pc, 4);
    vpc = sim_engine_invalid_insn (current_cpu, pc, vpc);
  }

  return vpc;
#undef FLD
}

/* x-after: --after-- */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,x_after) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF_AAP32
    aapbf_aap32_pbb_after (current_cpu, sem_arg);
#endif
  }

  return vpc;
#undef FLD
}

/* x-before: --before-- */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,x_before) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF_AAP32
    aapbf_aap32_pbb_before (current_cpu, sem_arg);
#endif
  }

  return vpc;
#undef FLD
}

/* x-cti-chain: --cti-chain-- */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,x_cti_chain) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF_AAP32
#ifdef DEFINE_SWITCH
    vpc = aapbf_aap32_pbb_cti_chain (current_cpu, sem_arg,
			       pbb_br_type, pbb_br_npc);
    BREAK (sem);
#else
    /* FIXME: Allow provision of explicit ifmt spec in insn spec.  */
    vpc = aapbf_aap32_pbb_cti_chain (current_cpu, sem_arg,
			       CPU_PBB_BR_TYPE (current_cpu),
			       CPU_PBB_BR_NPC (current_cpu));
#endif
#endif
  }

  return vpc;
#undef FLD
}

/* x-chain: --chain-- */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,x_chain) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF_AAP32
    vpc = aapbf_aap32_pbb_chain (current_cpu, sem_arg);
#ifdef DEFINE_SWITCH
    BREAK (sem);
#endif
#endif
  }

  return vpc;
#undef FLD
}

/* x-begin: --begin-- */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,x_begin) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF_AAP32
#if defined DEFINE_SWITCH || defined FAST_P
    /* In the switch case FAST_P is a constant, allowing several optimizations
       in any called inline functions.  */
    vpc = aapbf_aap32_pbb_begin (current_cpu, FAST_P);
#else
#if 0 /* cgen engine can't handle dynamic fast/full switching yet.  */
    vpc = aapbf_aap32_pbb_begin (current_cpu, STATE_RUN_FAST_P (CPU_STATE (current_cpu)));
#else
    vpc = aapbf_aap32_pbb_begin (current_cpu, 0);
#endif
#endif
#endif
  }

  return vpc;
#undef FLD
}

/* add: add ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,add) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ADDDI (GET_H_GPR (FLD (f_a_6)), GET_H_GPR (FLD (f_b_6)));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sub: sub ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,sub) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SUBDI (GET_H_GPR (FLD (f_a_6)), GET_H_GPR (FLD (f_b_6)));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* and: and ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,and) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ANDDI (GET_H_GPR (FLD (f_a_6)), GET_H_GPR (FLD (f_b_6)));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* or: or ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,or) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ORDI (GET_H_GPR (FLD (f_a_6)), GET_H_GPR (FLD (f_b_6)));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* xor: xor ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,xor) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = XORDI (GET_H_GPR (FLD (f_a_6)), GET_H_GPR (FLD (f_b_6)));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* asr: asr ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,asr) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SRLDI (ORDI (GET_H_GPR (FLD (f_a_6)), SLLSI (CPU (h_cf), 16)), GET_H_GPR (FLD (f_b_6)));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* lsl: lsl ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,lsl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SLLDI (GET_H_GPR (FLD (f_a_6)), GET_H_GPR (FLD (f_b_6)));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* lsr: lsr ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,lsr) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SRLDI (GET_H_GPR (FLD (f_a_6)), GET_H_GPR (FLD (f_b_6)));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* mov: mov ${d6},${a6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,mov) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___d6_____a6____s10_13__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = GET_H_GPR (FLD (f_a_6));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* addc: addc ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,addc) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ADDCDI (GET_H_GPR (FLD (f_a_6)), GET_H_GPR (FLD (f_b_6)), CPU (h_cf));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* subc: subc ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,subc) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SUBCDI (GET_H_GPR (FLD (f_a_6)), GET_H_GPR (FLD (f_b_6)), CPU (h_cf));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* jmp: jmp ${d6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,jmp) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_movi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = GET_H_GPR (FLD (f_d_6));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* jal: jal ${d6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,jal) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ADDSI (pc, 2);
    SET_H_GPR (FLD (f_b_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* jeq: jeq ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,jeq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (EQDI (GET_H_GPR (FLD (f_a_6)), GET_H_GPR (FLD (f_b_6)))) {
  {
    USI opval = GET_H_GPR (FLD (f_d_6));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
} else {
  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  abuf->written = written;
  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* jne: jne ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,jne) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (NEDI (GET_H_GPR (FLD (f_a_6)), GET_H_GPR (FLD (f_b_6)))) {
  {
    USI opval = GET_H_GPR (FLD (f_d_6));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
} else {
  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  abuf->written = written;
  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* jlts: jlts ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,jlts) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (LTDI (GET_H_GPR (FLD (f_a_6)), GET_H_GPR (FLD (f_b_6)))) {
  {
    USI opval = GET_H_GPR (FLD (f_d_6));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
} else {
  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  abuf->written = written;
  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* jles: jles ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,jles) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (LEDI (GET_H_GPR (FLD (f_a_6)), GET_H_GPR (FLD (f_b_6)))) {
  {
    USI opval = GET_H_GPR (FLD (f_d_6));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
} else {
  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  abuf->written = written;
  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* jltu: jltu ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,jltu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (LTUDI (GET_H_GPR (FLD (f_a_6)), GET_H_GPR (FLD (f_b_6)))) {
  {
    USI opval = GET_H_GPR (FLD (f_d_6));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
} else {
  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  abuf->written = written;
  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* jleu: jleu ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,jleu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (LEUDI (GET_H_GPR (FLD (f_a_6)), GET_H_GPR (FLD (f_b_6)))) {
  {
    USI opval = GET_H_GPR (FLD (f_d_6));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
} else {
  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  abuf->written = written;
  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* jmpl: jmpl ${d6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,jmpl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ADDDI (GET_H_GPR (FLD (f_d_6)), 1);
    SET_H_GPR (FLD (f_dst_1_reg), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* jall: jall ${d6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,jall) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ADDSI (pc, 2);
    SET_H_GPR (FLD (f_b_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* jeql: jeql ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,jeql) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ADDDI (GET_H_GPR (FLD (f_d_6)), 1);
    SET_H_GPR (FLD (f_dst_1_reg), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* jnel: jnel ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,jnel) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ADDDI (GET_H_GPR (FLD (f_d_6)), 1);
    SET_H_GPR (FLD (f_dst_1_reg), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* jltsl: jltsl ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,jltsl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ADDDI (GET_H_GPR (FLD (f_d_6)), 1);
    SET_H_GPR (FLD (f_dst_1_reg), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* jlesl: jlesl ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,jlesl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ADDDI (GET_H_GPR (FLD (f_d_6)), 1);
    SET_H_GPR (FLD (f_dst_1_reg), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* jltul: jltul ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,jltul) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ADDDI (GET_H_GPR (FLD (f_d_6)), 1);
    SET_H_GPR (FLD (f_dst_1_reg), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* jleul: jleul ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,jleul) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ADDDI (GET_H_GPR (FLD (f_d_6)), 1);
    SET_H_GPR (FLD (f_dst_1_reg), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* asri: asri ${d6},${a6},${i6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,asri) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SRLDI (ORDI (GET_H_GPR (FLD (f_a_6)), SLLSI (CPU (h_cf), 16)), FLD (f_i_6));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* lsli: lsli ${d6},${a6},${i6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,lsli) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SLLDI (GET_H_GPR (FLD (f_a_6)), FLD (f_i_6));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* lsri: lsri ${d6},${a6},${i6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,lsri) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SRLDI (GET_H_GPR (FLD (f_a_6)), FLD (f_i_6));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* andi: andi ${d6},${a6},${i9} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,andi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* ori: ori ${d6},${a6},${i9} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,ori) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* xori: xori ${d6},${a6},${i9} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,xori) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* addi: addi ${d6},${a6},${i10} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,addi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ADDDI (GET_H_GPR (FLD (f_a_6)), FLD (f_i_10));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* subi: subi ${d6},${a6},${i10} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,subi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SUBDI (GET_H_GPR (FLD (f_a_6)), FLD (f_i_10));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* beq: beq ${s10},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,beq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* bne: bne ${s10},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,bne) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* blts: blts ${s10},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,blts) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* bles: bles ${s10},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,bles) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* bltu: bltu ${s10},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,bltu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* bleu: bleu ${s10},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,bleu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* ldb ${d6},[${a6},${s10-13}]: ldb ${d6},[${a6},${s10-13}] */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,ldb___d6_____a6____s10_13__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___d6_____a6____s10_13__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = GETMEMQI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_a_6)), EXTSISI (FLD (f_s_form_13))));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* ldw ${d6},[${a6},${s10-13}]: ldw ${d6},[${a6},${s10-13}] */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,ldw___d6_____a6____s10_13__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___d6_____a6____s10_13__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ORQI (GETMEMQI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_a_6)), EXTSISI (FLD (f_s_form_13)))), SLLQI (GETMEMQI (current_cpu, pc, ADDCDI (GET_H_GPR (FLD (f_a_6)), EXTSISI (FLD (f_s_form_13)), 1)), 8));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* ldb ${d6},[${a6}+,${s10-13}]: ldb ${d6},[${a6}+,${s10-13}] */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,ldb___d6_____a6_____s10_13__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___d6_____a6____s10_13__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = GETMEMQI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_a_6)), EXTSISI (FLD (f_s_form_13))));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* ldw ${d6},[${a6}+,${s10-13}]: ldw ${d6},[${a6}+,${s10-13}] */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,ldw___d6_____a6_____s10_13__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___d6_____a6____s10_13__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ORQI (GETMEMQI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_a_6)), EXTSISI (FLD (f_s_form_13)))), SLLQI (GETMEMQI (current_cpu, pc, ADDCDI (GET_H_GPR (FLD (f_a_6)), EXTSISI (FLD (f_s_form_13)), 1)), 8));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* ldb ${d6},[-${a6},${s10-13}]: ldb ${d6},[-${a6},${s10-13}] */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,ldb___d6______a6____s10_13__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___d6_____a6____s10_13__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SUBDI (GET_H_GPR (FLD (f_a_6)), EXTSISI (FLD (f_s_form_13)));
    SET_H_GPR (FLD (f_a_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* ldw ${d6},[-${a6},${s10-13}]: ldw ${d6},[-${a6},${s10-13}] */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,ldw___d6______a6____s10_13__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___d6_____a6____s10_13__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ADDDI (GET_H_GPR (FLD (f_a_6)), EXTSISI (FLD (f_s_form_13)));
    SET_H_GPR (FLD (f_a_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* stb [${d6},${s10-13}],${a6}: stb [${d6},${s10-13}],${a6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,stb____d6____s10_13_____a6_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___d6_____a6____s10_13__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDDI (GET_H_GPR (FLD (f_a_6)), 255);
    SETMEMQI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_d_6)), EXTSISI (FLD (f_s_form_13))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* stw [${d6},${s10-13}],${a6}: stw [${d6},${s10-13}],${a6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,stw____d6____s10_13_____a6_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___d6_____a6____s10_13__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDDI (GET_H_GPR (FLD (f_a_6)), 255);
    SETMEMQI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_d_6)), EXTSISI (FLD (f_s_form_13))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* stb [${d6}+,${s10-13}],${a6}: stb [${d6}+,${s10-13}],${a6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,stb____d6_____s10_13_____a6_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___d6_____a6____s10_13__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDDI (GET_H_GPR (FLD (f_a_6)), 255);
    SETMEMQI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_d_6)), EXTSISI (FLD (f_s_form_13))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* stw [${d6}+,${s10-13}],${a6}: stw [${d6}+,${s10-13}],${a6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,stw____d6_____s10_13_____a6_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___d6_____a6____s10_13__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDDI (GET_H_GPR (FLD (f_a_6)), 255);
    SETMEMQI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_d_6)), EXTSISI (FLD (f_s_form_13))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* stb [-${d6},${s10-13}],${a6}: stb [-${d6},${s10-13}],${a6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,stb_____d6____s10_13_____a6_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___d6_____a6____s10_13__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SUBDI (GET_H_GPR (FLD (f_d_6)), EXTSISI (FLD (f_s_form_13)));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* stw [-${d6},${s10-13}],${a6}: stw [-${d6},${s10-13}],${a6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,stw_____d6____s10_13_____a6_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___d6_____a6____s10_13__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SUBDI (GET_H_GPR (FLD (f_d_6)), EXTSISI (FLD (f_s_form_13)));
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* nop: nop ${d6},${i12} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,nop) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_nop.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (LEUSI (FLD (f_i_12), 4)) {
  {
    DI opval = aapbf_nop_insn (current_cpu, FLD (f_i_12), GET_H_GPR (FLD (f_d_6)));
    SET_H_GPR (FLD (f_d_6), opval);
    written |= (1 << 2);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* movi: movi ${d6},${i16} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,movi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_movi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = FLD (f_i_16);
    SET_H_GPR (FLD (f_d_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* bal: bal ${s16},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,bal) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ADDSI (pc, 2);
    SET_H_GPR (FLD (f_b_6), opval);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* bra: bra ${s22} */

static SEM_PC
SEM_FN_NAME (aapbf_aap32,bra) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_bra.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, EXTSISI (FLD (f_s_22)));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* Table of all semantic fns.  */

static const struct sem_fn_desc sem_fns[] = {
  { AAPBF_AAP32_INSN_X_INVALID, SEM_FN_NAME (aapbf_aap32,x_invalid) },
  { AAPBF_AAP32_INSN_X_AFTER, SEM_FN_NAME (aapbf_aap32,x_after) },
  { AAPBF_AAP32_INSN_X_BEFORE, SEM_FN_NAME (aapbf_aap32,x_before) },
  { AAPBF_AAP32_INSN_X_CTI_CHAIN, SEM_FN_NAME (aapbf_aap32,x_cti_chain) },
  { AAPBF_AAP32_INSN_X_CHAIN, SEM_FN_NAME (aapbf_aap32,x_chain) },
  { AAPBF_AAP32_INSN_X_BEGIN, SEM_FN_NAME (aapbf_aap32,x_begin) },
  { AAPBF_AAP32_INSN_ADD, SEM_FN_NAME (aapbf_aap32,add) },
  { AAPBF_AAP32_INSN_SUB, SEM_FN_NAME (aapbf_aap32,sub) },
  { AAPBF_AAP32_INSN_AND, SEM_FN_NAME (aapbf_aap32,and) },
  { AAPBF_AAP32_INSN_OR, SEM_FN_NAME (aapbf_aap32,or) },
  { AAPBF_AAP32_INSN_XOR, SEM_FN_NAME (aapbf_aap32,xor) },
  { AAPBF_AAP32_INSN_ASR, SEM_FN_NAME (aapbf_aap32,asr) },
  { AAPBF_AAP32_INSN_LSL, SEM_FN_NAME (aapbf_aap32,lsl) },
  { AAPBF_AAP32_INSN_LSR, SEM_FN_NAME (aapbf_aap32,lsr) },
  { AAPBF_AAP32_INSN_MOV, SEM_FN_NAME (aapbf_aap32,mov) },
  { AAPBF_AAP32_INSN_ADDC, SEM_FN_NAME (aapbf_aap32,addc) },
  { AAPBF_AAP32_INSN_SUBC, SEM_FN_NAME (aapbf_aap32,subc) },
  { AAPBF_AAP32_INSN_JMP, SEM_FN_NAME (aapbf_aap32,jmp) },
  { AAPBF_AAP32_INSN_JAL, SEM_FN_NAME (aapbf_aap32,jal) },
  { AAPBF_AAP32_INSN_JEQ, SEM_FN_NAME (aapbf_aap32,jeq) },
  { AAPBF_AAP32_INSN_JNE, SEM_FN_NAME (aapbf_aap32,jne) },
  { AAPBF_AAP32_INSN_JLTS, SEM_FN_NAME (aapbf_aap32,jlts) },
  { AAPBF_AAP32_INSN_JLES, SEM_FN_NAME (aapbf_aap32,jles) },
  { AAPBF_AAP32_INSN_JLTU, SEM_FN_NAME (aapbf_aap32,jltu) },
  { AAPBF_AAP32_INSN_JLEU, SEM_FN_NAME (aapbf_aap32,jleu) },
  { AAPBF_AAP32_INSN_JMPL, SEM_FN_NAME (aapbf_aap32,jmpl) },
  { AAPBF_AAP32_INSN_JALL, SEM_FN_NAME (aapbf_aap32,jall) },
  { AAPBF_AAP32_INSN_JEQL, SEM_FN_NAME (aapbf_aap32,jeql) },
  { AAPBF_AAP32_INSN_JNEL, SEM_FN_NAME (aapbf_aap32,jnel) },
  { AAPBF_AAP32_INSN_JLTSL, SEM_FN_NAME (aapbf_aap32,jltsl) },
  { AAPBF_AAP32_INSN_JLESL, SEM_FN_NAME (aapbf_aap32,jlesl) },
  { AAPBF_AAP32_INSN_JLTUL, SEM_FN_NAME (aapbf_aap32,jltul) },
  { AAPBF_AAP32_INSN_JLEUL, SEM_FN_NAME (aapbf_aap32,jleul) },
  { AAPBF_AAP32_INSN_ASRI, SEM_FN_NAME (aapbf_aap32,asri) },
  { AAPBF_AAP32_INSN_LSLI, SEM_FN_NAME (aapbf_aap32,lsli) },
  { AAPBF_AAP32_INSN_LSRI, SEM_FN_NAME (aapbf_aap32,lsri) },
  { AAPBF_AAP32_INSN_ANDI, SEM_FN_NAME (aapbf_aap32,andi) },
  { AAPBF_AAP32_INSN_ORI, SEM_FN_NAME (aapbf_aap32,ori) },
  { AAPBF_AAP32_INSN_XORI, SEM_FN_NAME (aapbf_aap32,xori) },
  { AAPBF_AAP32_INSN_ADDI, SEM_FN_NAME (aapbf_aap32,addi) },
  { AAPBF_AAP32_INSN_SUBI, SEM_FN_NAME (aapbf_aap32,subi) },
  { AAPBF_AAP32_INSN_BEQ, SEM_FN_NAME (aapbf_aap32,beq) },
  { AAPBF_AAP32_INSN_BNE, SEM_FN_NAME (aapbf_aap32,bne) },
  { AAPBF_AAP32_INSN_BLTS, SEM_FN_NAME (aapbf_aap32,blts) },
  { AAPBF_AAP32_INSN_BLES, SEM_FN_NAME (aapbf_aap32,bles) },
  { AAPBF_AAP32_INSN_BLTU, SEM_FN_NAME (aapbf_aap32,bltu) },
  { AAPBF_AAP32_INSN_BLEU, SEM_FN_NAME (aapbf_aap32,bleu) },
  { AAPBF_AAP32_INSN_LDB___D6_____A6____S10_13__, SEM_FN_NAME (aapbf_aap32,ldb___d6_____a6____s10_13__) },
  { AAPBF_AAP32_INSN_LDW___D6_____A6____S10_13__, SEM_FN_NAME (aapbf_aap32,ldw___d6_____a6____s10_13__) },
  { AAPBF_AAP32_INSN_LDB___D6_____A6_____S10_13__, SEM_FN_NAME (aapbf_aap32,ldb___d6_____a6_____s10_13__) },
  { AAPBF_AAP32_INSN_LDW___D6_____A6_____S10_13__, SEM_FN_NAME (aapbf_aap32,ldw___d6_____a6_____s10_13__) },
  { AAPBF_AAP32_INSN_LDB___D6______A6____S10_13__, SEM_FN_NAME (aapbf_aap32,ldb___d6______a6____s10_13__) },
  { AAPBF_AAP32_INSN_LDW___D6______A6____S10_13__, SEM_FN_NAME (aapbf_aap32,ldw___d6______a6____s10_13__) },
  { AAPBF_AAP32_INSN_STB____D6____S10_13_____A6_, SEM_FN_NAME (aapbf_aap32,stb____d6____s10_13_____a6_) },
  { AAPBF_AAP32_INSN_STW____D6____S10_13_____A6_, SEM_FN_NAME (aapbf_aap32,stw____d6____s10_13_____a6_) },
  { AAPBF_AAP32_INSN_STB____D6_____S10_13_____A6_, SEM_FN_NAME (aapbf_aap32,stb____d6_____s10_13_____a6_) },
  { AAPBF_AAP32_INSN_STW____D6_____S10_13_____A6_, SEM_FN_NAME (aapbf_aap32,stw____d6_____s10_13_____a6_) },
  { AAPBF_AAP32_INSN_STB_____D6____S10_13_____A6_, SEM_FN_NAME (aapbf_aap32,stb_____d6____s10_13_____a6_) },
  { AAPBF_AAP32_INSN_STW_____D6____S10_13_____A6_, SEM_FN_NAME (aapbf_aap32,stw_____d6____s10_13_____a6_) },
  { AAPBF_AAP32_INSN_NOP, SEM_FN_NAME (aapbf_aap32,nop) },
  { AAPBF_AAP32_INSN_MOVI, SEM_FN_NAME (aapbf_aap32,movi) },
  { AAPBF_AAP32_INSN_BAL, SEM_FN_NAME (aapbf_aap32,bal) },
  { AAPBF_AAP32_INSN_BRA, SEM_FN_NAME (aapbf_aap32,bra) },
  { 0, 0 }
};

/* Add the semantic fns to IDESC_TABLE.  */

void
SEM_FN_NAME (aapbf_aap32,init_idesc_table) (SIM_CPU *current_cpu)
{
  IDESC *idesc_table = CPU_IDESC (current_cpu);
  const struct sem_fn_desc *sf;
  int mach_num = MACH_NUM (CPU_MACH (current_cpu));

  for (sf = &sem_fns[0]; sf->fn != 0; ++sf)
    {
      const CGEN_INSN *insn = idesc_table[sf->index].idata;
      int valid_p = (CGEN_INSN_VIRTUAL_P (insn)
		     || CGEN_INSN_MACH_HAS_P (insn, mach_num));
#if FAST_P
      if (valid_p)
	idesc_table[sf->index].sem_fast = sf->fn;
      else
	idesc_table[sf->index].sem_fast = SEM_FN_NAME (aapbf_aap32,x_invalid);
#else
      if (valid_p)
	idesc_table[sf->index].sem_full = sf->fn;
      else
	idesc_table[sf->index].sem_full = SEM_FN_NAME (aapbf_aap32,x_invalid);
#endif
    }
}

