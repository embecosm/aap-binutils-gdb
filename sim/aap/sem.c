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
SEM_FN_NAME (aapbf_aap,x_invalid) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
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
SEM_FN_NAME (aapbf_aap,x_after) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF_AAP
    aapbf_aap_pbb_after (current_cpu, sem_arg);
#endif
  }

  return vpc;
#undef FLD
}

/* x-before: --before-- */

static SEM_PC
SEM_FN_NAME (aapbf_aap,x_before) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF_AAP
    aapbf_aap_pbb_before (current_cpu, sem_arg);
#endif
  }

  return vpc;
#undef FLD
}

/* x-cti-chain: --cti-chain-- */

static SEM_PC
SEM_FN_NAME (aapbf_aap,x_cti_chain) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF_AAP
#ifdef DEFINE_SWITCH
    vpc = aapbf_aap_pbb_cti_chain (current_cpu, sem_arg,
			       pbb_br_type, pbb_br_npc);
    BREAK (sem);
#else
    /* FIXME: Allow provision of explicit ifmt spec in insn spec.  */
    vpc = aapbf_aap_pbb_cti_chain (current_cpu, sem_arg,
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
SEM_FN_NAME (aapbf_aap,x_chain) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF_AAP
    vpc = aapbf_aap_pbb_chain (current_cpu, sem_arg);
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
SEM_FN_NAME (aapbf_aap,x_begin) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF_AAP
#if defined DEFINE_SWITCH || defined FAST_P
    /* In the switch case FAST_P is a constant, allowing several optimizations
       in any called inline functions.  */
    vpc = aapbf_aap_pbb_begin (current_cpu, FAST_P);
#else
#if 0 /* cgen engine can't handle dynamic fast/full switching yet.  */
    vpc = aapbf_aap_pbb_begin (current_cpu, STATE_RUN_FAST_P (CPU_STATE (current_cpu)));
#else
    vpc = aapbf_aap_pbb_begin (current_cpu, 0);
#endif
#endif
#endif
  }

  return vpc;
#undef FLD
}

/* add: add ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,add) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ADDSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* sub: sub ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,sub) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SUBSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* and: and ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,and) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ANDSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* or: or ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,or) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ORSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* xor: xor ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,xor) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = XORSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* asr: asr ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,asr) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SRLSI (ORSI (* FLD (i_a6), SLLSI (CPU (h_cf), 16)), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* lsl: lsl ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,lsl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SLLSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* lsr: lsr ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,lsr) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SRLSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* mov: mov ${d6},${a6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,mov) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = * FLD (i_a6);
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* addc: addc ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,addc) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ADDCSI (* FLD (i_a6), * FLD (i_b6), CPU (h_cf));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* subc: subc ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,subc) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SUBCSI (* FLD (i_a6), * FLD (i_b6), CPU (h_cf));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* jmp: jmp ${d6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,jmp) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_movi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = * FLD (i_d6);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* jal: jal ${d6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,jal) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ADDSI (pc, 2);
    * FLD (i_b6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* jeq: jeq ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,jeq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (EQSI (* FLD (i_a6), * FLD (i_b6))) {
  {
    USI opval = * FLD (i_d6);
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
SEM_FN_NAME (aapbf_aap,jne) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (NESI (* FLD (i_a6), * FLD (i_b6))) {
  {
    USI opval = * FLD (i_d6);
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
SEM_FN_NAME (aapbf_aap,jlts) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (LTSI (* FLD (i_a6), * FLD (i_b6))) {
  {
    USI opval = * FLD (i_d6);
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
SEM_FN_NAME (aapbf_aap,jles) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (LESI (* FLD (i_a6), * FLD (i_b6))) {
  {
    USI opval = * FLD (i_d6);
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
SEM_FN_NAME (aapbf_aap,jltu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (LTUSI (* FLD (i_a6), * FLD (i_b6))) {
  {
    USI opval = * FLD (i_d6);
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
SEM_FN_NAME (aapbf_aap,jleu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (LEUSI (* FLD (i_a6), * FLD (i_b6))) {
  {
    USI opval = * FLD (i_d6);
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
SEM_FN_NAME (aapbf_aap,jmpl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_d6), 1);
    * FLD (i_dest1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* jall: jall ${d6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,jall) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ADDSI (pc, 2);
    * FLD (i_b6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* jeql: jeql ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,jeql) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_d6), 1);
    * FLD (i_dest1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* jnel: jnel ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,jnel) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_d6), 1);
    * FLD (i_dest1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* jltsl: jltsl ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,jltsl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_d6), 1);
    * FLD (i_dest1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* jlesl: jlesl ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,jlesl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_d6), 1);
    * FLD (i_dest1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* jltul: jltul ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,jltul) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_d6), 1);
    * FLD (i_dest1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* jleul: jleul ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,jleul) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_d6), 1);
    * FLD (i_dest1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* asri: asri ${d6},${a6},${i6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,asri) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SRLSI (ORSI (* FLD (i_a6), SLLSI (CPU (h_cf), 16)), FLD (f_i_6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* lsli: lsli ${d6},${a6},${i6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,lsli) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SLLSI (* FLD (i_a6), FLD (f_i_6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* lsri: lsri ${d6},${a6},${i6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,lsri) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SRLSI (* FLD (i_a6), FLD (f_i_6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* andi: andi ${d6},${a6},${i9} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,andi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
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
SEM_FN_NAME (aapbf_aap,ori) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
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
SEM_FN_NAME (aapbf_aap,xori) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
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
SEM_FN_NAME (aapbf_aap,addi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ADDSI (* FLD (i_a6), FLD (f_i_10));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* subi: subi ${d6},${a6},${i10} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,subi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SUBSI (* FLD (i_a6), FLD (f_i_10));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* beq: beq ${s10},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,beq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
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
SEM_FN_NAME (aapbf_aap,bne) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
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
SEM_FN_NAME (aapbf_aap,blts) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
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
SEM_FN_NAME (aapbf_aap,bles) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
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
SEM_FN_NAME (aapbf_aap,bltu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
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
SEM_FN_NAME (aapbf_aap,bleu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
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

/* ldb ${d6},[${a6},${i10}]: ldb ${d6},[${a6},${i10}] */

static SEM_PC
SEM_FN_NAME (aapbf_aap,ldb___d6_____a6____i10__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_a6), EXTSISI (FLD (f_i_10))));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* ldw ${d6},[${a6},${i10}]: ldw ${d6},[${a6},${i10}] */

static SEM_PC
SEM_FN_NAME (aapbf_aap,ldw___d6_____a6____i10__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ORQI (GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_a6), EXTSISI (FLD (f_i_10)))), SLLQI (GETMEMQI (current_cpu, pc, ADDCSI (* FLD (i_a6), EXTSISI (FLD (f_i_10)), 1)), 8));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* ldb ${d6},[${a6}+,${i10}]: ldb ${d6},[${a6}+,${i10}] */

static SEM_PC
SEM_FN_NAME (aapbf_aap,ldb___d6_____a6_____i10__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_a6), EXTSISI (FLD (f_i_10))));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* ldw ${d6},[${a6}+,${i10}]: ldw ${d6},[${a6}+,${i10}] */

static SEM_PC
SEM_FN_NAME (aapbf_aap,ldw___d6_____a6_____i10__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ORQI (GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_a6), EXTSISI (FLD (f_i_10)))), SLLQI (GETMEMQI (current_cpu, pc, ADDCSI (* FLD (i_a6), EXTSISI (FLD (f_i_10)), 1)), 8));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* ldb ${d6},[-${a6},${i10}]: ldb ${d6},[-${a6},${i10}] */

static SEM_PC
SEM_FN_NAME (aapbf_aap,ldb___d6______a6____i10__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SUBSI (* FLD (i_a6), EXTSISI (FLD (f_i_10)));
    * FLD (i_a6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* ldw ${d6},[-${a6},${i10}]: ldw ${d6},[-${a6},${i10}] */

static SEM_PC
SEM_FN_NAME (aapbf_aap,ldw___d6______a6____i10__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ADDSI (* FLD (i_a6), EXTSISI (FLD (f_i_10)));
    * FLD (i_a6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* stb [${d6},${i10}],${a6}: stb [${d6},${i10}],${a6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,stb____d6____i10_____a6_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDSI (* FLD (i_a6), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_d6), EXTSISI (FLD (f_i_10))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* stw [${d6},${i10}],${a6}: stw [${d6},${i10}],${a6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,stw____d6____i10_____a6_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDSI (* FLD (i_a6), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_d6), EXTSISI (FLD (f_i_10))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* stb [${d6}+,${i10}],${a6}: stb [${d6}+,${i10}],${a6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,stb____d6_____i10_____a6_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDSI (* FLD (i_a6), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_d6), EXTSISI (FLD (f_i_10))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* stw [${d6}+,${i10}],${a6}: stw [${d6}+,${i10}],${a6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,stw____d6_____i10_____a6_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDSI (* FLD (i_a6), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_d6), EXTSISI (FLD (f_i_10))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* stb [-${d6},${i10}],${a6}: stb [-${d6},${i10}],${a6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,stb_____d6____i10_____a6_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SUBSI (* FLD (i_d6), EXTSISI (FLD (f_i_10)));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* stw [-${d6},${i10}],${a6}: stw [-${d6},${i10}],${a6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,stw_____d6____i10_____a6_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SUBSI (* FLD (i_d6), EXTSISI (FLD (f_i_10)));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* nop: nop ${d6},${i12} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,nop) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_nop.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (LEUSI (FLD (f_i_12), 4)) {
  {
    SI opval = FLD (f_i_12);
    * FLD (i_d6) = opval;
    written |= (1 << 2);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* movi: movi ${d6},${i16} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,movi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_movi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = FLD (f_i_16);
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* bal: bal ${s16},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,bal) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ADDSI (pc, 2);
    * FLD (i_b6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* bra: bra ${s22} */

static SEM_PC
SEM_FN_NAME (aapbf_aap,bra) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
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
  { AAPBF_AAP_INSN_X_INVALID, SEM_FN_NAME (aapbf_aap,x_invalid) },
  { AAPBF_AAP_INSN_X_AFTER, SEM_FN_NAME (aapbf_aap,x_after) },
  { AAPBF_AAP_INSN_X_BEFORE, SEM_FN_NAME (aapbf_aap,x_before) },
  { AAPBF_AAP_INSN_X_CTI_CHAIN, SEM_FN_NAME (aapbf_aap,x_cti_chain) },
  { AAPBF_AAP_INSN_X_CHAIN, SEM_FN_NAME (aapbf_aap,x_chain) },
  { AAPBF_AAP_INSN_X_BEGIN, SEM_FN_NAME (aapbf_aap,x_begin) },
  { AAPBF_AAP_INSN_ADD, SEM_FN_NAME (aapbf_aap,add) },
  { AAPBF_AAP_INSN_SUB, SEM_FN_NAME (aapbf_aap,sub) },
  { AAPBF_AAP_INSN_AND, SEM_FN_NAME (aapbf_aap,and) },
  { AAPBF_AAP_INSN_OR, SEM_FN_NAME (aapbf_aap,or) },
  { AAPBF_AAP_INSN_XOR, SEM_FN_NAME (aapbf_aap,xor) },
  { AAPBF_AAP_INSN_ASR, SEM_FN_NAME (aapbf_aap,asr) },
  { AAPBF_AAP_INSN_LSL, SEM_FN_NAME (aapbf_aap,lsl) },
  { AAPBF_AAP_INSN_LSR, SEM_FN_NAME (aapbf_aap,lsr) },
  { AAPBF_AAP_INSN_MOV, SEM_FN_NAME (aapbf_aap,mov) },
  { AAPBF_AAP_INSN_ADDC, SEM_FN_NAME (aapbf_aap,addc) },
  { AAPBF_AAP_INSN_SUBC, SEM_FN_NAME (aapbf_aap,subc) },
  { AAPBF_AAP_INSN_JMP, SEM_FN_NAME (aapbf_aap,jmp) },
  { AAPBF_AAP_INSN_JAL, SEM_FN_NAME (aapbf_aap,jal) },
  { AAPBF_AAP_INSN_JEQ, SEM_FN_NAME (aapbf_aap,jeq) },
  { AAPBF_AAP_INSN_JNE, SEM_FN_NAME (aapbf_aap,jne) },
  { AAPBF_AAP_INSN_JLTS, SEM_FN_NAME (aapbf_aap,jlts) },
  { AAPBF_AAP_INSN_JLES, SEM_FN_NAME (aapbf_aap,jles) },
  { AAPBF_AAP_INSN_JLTU, SEM_FN_NAME (aapbf_aap,jltu) },
  { AAPBF_AAP_INSN_JLEU, SEM_FN_NAME (aapbf_aap,jleu) },
  { AAPBF_AAP_INSN_JMPL, SEM_FN_NAME (aapbf_aap,jmpl) },
  { AAPBF_AAP_INSN_JALL, SEM_FN_NAME (aapbf_aap,jall) },
  { AAPBF_AAP_INSN_JEQL, SEM_FN_NAME (aapbf_aap,jeql) },
  { AAPBF_AAP_INSN_JNEL, SEM_FN_NAME (aapbf_aap,jnel) },
  { AAPBF_AAP_INSN_JLTSL, SEM_FN_NAME (aapbf_aap,jltsl) },
  { AAPBF_AAP_INSN_JLESL, SEM_FN_NAME (aapbf_aap,jlesl) },
  { AAPBF_AAP_INSN_JLTUL, SEM_FN_NAME (aapbf_aap,jltul) },
  { AAPBF_AAP_INSN_JLEUL, SEM_FN_NAME (aapbf_aap,jleul) },
  { AAPBF_AAP_INSN_ASRI, SEM_FN_NAME (aapbf_aap,asri) },
  { AAPBF_AAP_INSN_LSLI, SEM_FN_NAME (aapbf_aap,lsli) },
  { AAPBF_AAP_INSN_LSRI, SEM_FN_NAME (aapbf_aap,lsri) },
  { AAPBF_AAP_INSN_ANDI, SEM_FN_NAME (aapbf_aap,andi) },
  { AAPBF_AAP_INSN_ORI, SEM_FN_NAME (aapbf_aap,ori) },
  { AAPBF_AAP_INSN_XORI, SEM_FN_NAME (aapbf_aap,xori) },
  { AAPBF_AAP_INSN_ADDI, SEM_FN_NAME (aapbf_aap,addi) },
  { AAPBF_AAP_INSN_SUBI, SEM_FN_NAME (aapbf_aap,subi) },
  { AAPBF_AAP_INSN_BEQ, SEM_FN_NAME (aapbf_aap,beq) },
  { AAPBF_AAP_INSN_BNE, SEM_FN_NAME (aapbf_aap,bne) },
  { AAPBF_AAP_INSN_BLTS, SEM_FN_NAME (aapbf_aap,blts) },
  { AAPBF_AAP_INSN_BLES, SEM_FN_NAME (aapbf_aap,bles) },
  { AAPBF_AAP_INSN_BLTU, SEM_FN_NAME (aapbf_aap,bltu) },
  { AAPBF_AAP_INSN_BLEU, SEM_FN_NAME (aapbf_aap,bleu) },
  { AAPBF_AAP_INSN_LDB___D6_____A6____I10__, SEM_FN_NAME (aapbf_aap,ldb___d6_____a6____i10__) },
  { AAPBF_AAP_INSN_LDW___D6_____A6____I10__, SEM_FN_NAME (aapbf_aap,ldw___d6_____a6____i10__) },
  { AAPBF_AAP_INSN_LDB___D6_____A6_____I10__, SEM_FN_NAME (aapbf_aap,ldb___d6_____a6_____i10__) },
  { AAPBF_AAP_INSN_LDW___D6_____A6_____I10__, SEM_FN_NAME (aapbf_aap,ldw___d6_____a6_____i10__) },
  { AAPBF_AAP_INSN_LDB___D6______A6____I10__, SEM_FN_NAME (aapbf_aap,ldb___d6______a6____i10__) },
  { AAPBF_AAP_INSN_LDW___D6______A6____I10__, SEM_FN_NAME (aapbf_aap,ldw___d6______a6____i10__) },
  { AAPBF_AAP_INSN_STB____D6____I10_____A6_, SEM_FN_NAME (aapbf_aap,stb____d6____i10_____a6_) },
  { AAPBF_AAP_INSN_STW____D6____I10_____A6_, SEM_FN_NAME (aapbf_aap,stw____d6____i10_____a6_) },
  { AAPBF_AAP_INSN_STB____D6_____I10_____A6_, SEM_FN_NAME (aapbf_aap,stb____d6_____i10_____a6_) },
  { AAPBF_AAP_INSN_STW____D6_____I10_____A6_, SEM_FN_NAME (aapbf_aap,stw____d6_____i10_____a6_) },
  { AAPBF_AAP_INSN_STB_____D6____I10_____A6_, SEM_FN_NAME (aapbf_aap,stb_____d6____i10_____a6_) },
  { AAPBF_AAP_INSN_STW_____D6____I10_____A6_, SEM_FN_NAME (aapbf_aap,stw_____d6____i10_____a6_) },
  { AAPBF_AAP_INSN_NOP, SEM_FN_NAME (aapbf_aap,nop) },
  { AAPBF_AAP_INSN_MOVI, SEM_FN_NAME (aapbf_aap,movi) },
  { AAPBF_AAP_INSN_BAL, SEM_FN_NAME (aapbf_aap,bal) },
  { AAPBF_AAP_INSN_BRA, SEM_FN_NAME (aapbf_aap,bra) },
  { 0, 0 }
};

/* Add the semantic fns to IDESC_TABLE.  */

void
SEM_FN_NAME (aapbf_aap,init_idesc_table) (SIM_CPU *current_cpu)
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
	idesc_table[sf->index].sem_fast = SEM_FN_NAME (aapbf_aap,x_invalid);
#else
      if (valid_p)
	idesc_table[sf->index].sem_full = sf->fn;
      else
	idesc_table[sf->index].sem_full = SEM_FN_NAME (aapbf_aap,x_invalid);
#endif
    }
}

