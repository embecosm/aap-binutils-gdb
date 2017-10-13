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
SEM_FN_NAME (aapbf,x_invalid) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
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
SEM_FN_NAME (aapbf,x_after) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF
    aapbf_pbb_after (current_cpu, sem_arg);
#endif
  }

  return vpc;
#undef FLD
}

/* x-before: --before-- */

static SEM_PC
SEM_FN_NAME (aapbf,x_before) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF
    aapbf_pbb_before (current_cpu, sem_arg);
#endif
  }

  return vpc;
#undef FLD
}

/* x-cti-chain: --cti-chain-- */

static SEM_PC
SEM_FN_NAME (aapbf,x_cti_chain) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF
#ifdef DEFINE_SWITCH
    vpc = aapbf_pbb_cti_chain (current_cpu, sem_arg,
			       pbb_br_type, pbb_br_npc);
    BREAK (sem);
#else
    /* FIXME: Allow provision of explicit ifmt spec in insn spec.  */
    vpc = aapbf_pbb_cti_chain (current_cpu, sem_arg,
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
SEM_FN_NAME (aapbf,x_chain) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF
    vpc = aapbf_pbb_chain (current_cpu, sem_arg);
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
SEM_FN_NAME (aapbf,x_begin) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF
#if defined DEFINE_SWITCH || defined FAST_P
    /* In the switch case FAST_P is a constant, allowing several optimizations
       in any called inline functions.  */
    vpc = aapbf_pbb_begin (current_cpu, FAST_P);
#else
#if 0 /* cgen engine can't handle dynamic fast/full switching yet.  */
    vpc = aapbf_pbb_begin (current_cpu, STATE_RUN_FAST_P (CPU_STATE (current_cpu)));
#else
    vpc = aapbf_pbb_begin (current_cpu, 0);
#endif
#endif
#endif
  }

  return vpc;
#undef FLD
}

/* l.add32: l.add32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_add32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.sub32: l.sub32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_sub32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SUBSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.and32: l.and32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_and32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ANDSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.or32: l.or32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_or32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ORSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.xor32: l.xor32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_xor32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = XORSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.asr32: l.asr32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_asr32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SRLSI (ORSI (* FLD (i_a6), SLLBI (CPU (h_cf), 16)), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.lsl32: l.lsl32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_lsl32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SLLSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.lsr32: l.lsr32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_lsr32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SRLSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.mov32: l.mov32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_mov32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = * FLD (i_a6);
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.addc32: l.addc32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_addc32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDCSI (* FLD (i_a6), * FLD (i_b6), CPU (h_cf));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.subc32: l.subc32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_subc32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SUBCSI (* FLD (i_a6), * FLD (i_b6), CPU (h_cf));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.jmp32: l.jmp32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_jmp32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_movi32.f
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

/* l.jal32: l.jal32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_jal32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_beq32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    * FLD (i_b6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.jeq32: l.jeq32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_jeq32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr32.f
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

/* l.jne32: l.jne32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_jne32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr32.f
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

/* l.jlts32: l.jlts32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_jlts32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr32.f
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

/* l.jles32: l.jles32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_jles32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr32.f
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

/* l.jltu32: l.jltu32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_jltu32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (LTUUSI (* FLD (i_a6), * FLD (i_b6))) {
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

/* l.jleu32: l.jleu32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_jleu32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (LEUUSI (* FLD (i_a6), * FLD (i_b6))) {
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

/* l.jmpl32: l.jmpl32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_jmpl32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_jmpl32.f
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

/* l.jall32: l.jall32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_jall32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_beq32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    * FLD (i_b6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.jeql32: l.jeql32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_jeql32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_jmpl32.f
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

/* l.jnel32: l.jnel32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_jnel32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_jmpl32.f
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

/* l.jltsl32: l.jltsl32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_jltsl32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_jmpl32.f
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

/* l.jlesl32: l.jlesl32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_jlesl32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_jmpl32.f
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

/* l.jltul32: l.jltul32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_jltul32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_jmpl32.f
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

/* l.jleul32: l.jleul32 ${d6},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_jleul32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_jmpl32.f
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

/* l.asri32: l.asri32 ${d6},${a6},${i6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_asri32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asri32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SRLSI (ORSI (* FLD (i_a6), SLLBI (CPU (h_cf), 16)), FLD (f_i_6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.lsli32: l.lsli32 ${d6},${a6},${i6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_lsli32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asri32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SLLSI (* FLD (i_a6), FLD (f_i_6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.lsri32: l.lsri32 ${d6},${a6},${i6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_lsri32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asri32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SRLSI (* FLD (i_a6), FLD (f_i_6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.andi32: l.andi32 ${d6},${a6},${i10i} */

static SEM_PC
SEM_FN_NAME (aapbf,l_andi32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_andi32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ANDSI (* FLD (i_a6), FLD (f_i_10i));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.ori32: l.ori32 ${d6},${a6},${i10i} */

static SEM_PC
SEM_FN_NAME (aapbf,l_ori32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_andi32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ORSI (* FLD (i_a6), FLD (f_i_10i));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.xori32: l.xori32 ${d6},${a6},${i10i} */

static SEM_PC
SEM_FN_NAME (aapbf,l_xori32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_andi32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = XORSI (* FLD (i_a6), FLD (f_i_10i));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.addi32: l.addi32 ${d6},${a6},${i10} */

static SEM_PC
SEM_FN_NAME (aapbf,l_addi32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_a6), FLD (f_i_10));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.subi32: l.subi32 ${d6},${a6},${i10} */

static SEM_PC
SEM_FN_NAME (aapbf,l_subi32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SUBSI (* FLD (i_a6), FLD (f_i_10));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.beq32: l.beq32 ${s10},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_beq32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_beq32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (EQSI (* FLD (i_a6), * FLD (i_b6))) {
  {
    USI opval = ADDSI (pc, EXTHISI (TRUNCSIHI (FLD (f_s_10))));
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

/* l.bne32: l.bne32 ${s10},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_bne32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_beq32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (NESI (* FLD (i_a6), * FLD (i_b6))) {
  {
    USI opval = ADDSI (pc, EXTHISI (TRUNCSIHI (FLD (f_s_10))));
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

/* l.blts32: l.blts32 ${s10},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_blts32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_beq32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (LTUSI (* FLD (i_a6), * FLD (i_b6))) {
  {
    USI opval = ADDSI (pc, EXTHISI (TRUNCSIHI (FLD (f_s_10))));
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

/* l.bles32: l.bles32 ${s10},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_bles32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_beq32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (LEUSI (* FLD (i_a6), * FLD (i_b6))) {
  {
    USI opval = ADDSI (pc, EXTHISI (TRUNCSIHI (FLD (f_s_10))));
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

/* l.bltu32: l.bltu32 ${s10},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_bltu32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_beq32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (LTUUSI (* FLD (i_a6), * FLD (i_b6))) {
  {
    USI opval = ADDSI (pc, EXTHISI (TRUNCSIHI (FLD (f_s_10))));
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

/* l.bleu32: l.bleu32 ${s10},${a6},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_bleu32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_beq32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (LEUUSI (* FLD (i_a6), * FLD (i_b6))) {
  {
    USI opval = ADDSI (pc, EXTHISI (TRUNCSIHI (FLD (f_s_10))));
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

/* l.ldb32 ${d6},(${a6},${i10}): l.ldb32 ${d6},(${a6},${i10}) */

static SEM_PC
SEM_FN_NAME (aapbf,l_ldb32___d6_____a6____i10__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_a6), EXTHISI (TRUNCSIHI (FLD (f_i_10)))));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.ldw32 ${d6},(${a6},${i10}): l.ldw32 ${d6},(${a6},${i10}) */

static SEM_PC
SEM_FN_NAME (aapbf,l_ldw32___d6_____a6____i10__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ORQI (GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_a6), EXTHISI (TRUNCSIHI (FLD (f_i_10))))), SLLQI (GETMEMQI (current_cpu, pc, ADDCSI (* FLD (i_a6), EXTHISI (TRUNCSIHI (FLD (f_i_10))), 1)), 8));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.ldb32 ${d6},(${a6}+,${i10}): l.ldb32 ${d6},(${a6}+,${i10}) */

static SEM_PC
SEM_FN_NAME (aapbf,l_ldb32___d6_____a6_____i10__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_a6), EXTHISI (TRUNCSIHI (FLD (f_i_10)))));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.ldw32 ${d6},(${a6}+,${i10}): l.ldw32 ${d6},(${a6}+,${i10}) */

static SEM_PC
SEM_FN_NAME (aapbf,l_ldw32___d6_____a6_____i10__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ORQI (GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_a6), EXTHISI (TRUNCSIHI (FLD (f_i_10))))), SLLQI (GETMEMQI (current_cpu, pc, ADDCSI (* FLD (i_a6), EXTHISI (TRUNCSIHI (FLD (f_i_10))), 1)), 8));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.ldb32 ${d6},(-${a6},${i10}): l.ldb32 ${d6},(-${a6},${i10}) */

static SEM_PC
SEM_FN_NAME (aapbf,l_ldb32___d6______a6____i10__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SUBSI (* FLD (i_a6), EXTHISI (TRUNCSIHI (FLD (f_i_10))));
    * FLD (i_a6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.ldw32 ${d6},(-${a6},${i10}): l.ldw32 ${d6},(-${a6},${i10}) */

static SEM_PC
SEM_FN_NAME (aapbf,l_ldw32___d6______a6____i10__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_a6), EXTHISI (TRUNCSIHI (FLD (f_i_10))));
    * FLD (i_a6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.sdb32 (${d6},${i10}),${a6}: l.sdb32 (${d6},${i10}),${a6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_sdb32____d6____i10_____a6_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDSI (* FLD (i_a6), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_d6), EXTHISI (TRUNCSIHI (FLD (f_i_10)))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.sdw32 (${d6},${i10}),${a6}: l.sdw32 (${d6},${i10}),${a6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_sdw32____d6____i10_____a6_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDSI (* FLD (i_a6), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_d6), EXTHISI (TRUNCSIHI (FLD (f_i_10)))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.sdb32 (${d6}+,${i10}),${a6}: l.sdb32 (${d6}+,${i10}),${a6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_sdb32____d6_____i10_____a6_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDSI (* FLD (i_a6), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_d6), EXTHISI (TRUNCSIHI (FLD (f_i_10)))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.sdw32 (${d6}+,${i10}),${a6}: l.sdw32 (${d6}+,${i10}),${a6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_sdw32____d6_____i10_____a6_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDSI (* FLD (i_a6), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_d6), EXTHISI (TRUNCSIHI (FLD (f_i_10)))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.sdb32 (-${d6},${i10}),${a6}: l.sdb32 (-${d6},${i10}),${a6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_sdb32_____d6____i10_____a6_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SUBSI (* FLD (i_d6), EXTHISI (TRUNCSIHI (FLD (f_i_10))));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.sdw32 (-${d6},${i10}),${a6}: l.sdw32 (-${d6},${i10}),${a6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_sdw32_____d6____i10_____a6_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SUBSI (* FLD (i_d6), EXTHISI (TRUNCSIHI (FLD (f_i_10))));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.nop32: l.nop32 ${d6},${i12} */

static SEM_PC
SEM_FN_NAME (aapbf,l_nop32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* l.movi32: l.movi32 ${d6},${i16} */

static SEM_PC
SEM_FN_NAME (aapbf,l_movi32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_movi32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = FLD (f_i_16);
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.bal32: l.bal32 ${s16},${b6} */

static SEM_PC
SEM_FN_NAME (aapbf,l_bal32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_beq32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    * FLD (i_b6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.bra32: l.bra32 ${s22} */

static SEM_PC
SEM_FN_NAME (aapbf,l_bra32) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_bra32.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, EXTHISI (TRUNCSIHI (FLD (f_s_22))));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* Table of all semantic fns.  */

static const struct sem_fn_desc sem_fns[] = {
  { AAPBF_INSN_X_INVALID, SEM_FN_NAME (aapbf,x_invalid) },
  { AAPBF_INSN_X_AFTER, SEM_FN_NAME (aapbf,x_after) },
  { AAPBF_INSN_X_BEFORE, SEM_FN_NAME (aapbf,x_before) },
  { AAPBF_INSN_X_CTI_CHAIN, SEM_FN_NAME (aapbf,x_cti_chain) },
  { AAPBF_INSN_X_CHAIN, SEM_FN_NAME (aapbf,x_chain) },
  { AAPBF_INSN_X_BEGIN, SEM_FN_NAME (aapbf,x_begin) },
  { AAPBF_INSN_L_ADD32, SEM_FN_NAME (aapbf,l_add32) },
  { AAPBF_INSN_L_SUB32, SEM_FN_NAME (aapbf,l_sub32) },
  { AAPBF_INSN_L_AND32, SEM_FN_NAME (aapbf,l_and32) },
  { AAPBF_INSN_L_OR32, SEM_FN_NAME (aapbf,l_or32) },
  { AAPBF_INSN_L_XOR32, SEM_FN_NAME (aapbf,l_xor32) },
  { AAPBF_INSN_L_ASR32, SEM_FN_NAME (aapbf,l_asr32) },
  { AAPBF_INSN_L_LSL32, SEM_FN_NAME (aapbf,l_lsl32) },
  { AAPBF_INSN_L_LSR32, SEM_FN_NAME (aapbf,l_lsr32) },
  { AAPBF_INSN_L_MOV32, SEM_FN_NAME (aapbf,l_mov32) },
  { AAPBF_INSN_L_ADDC32, SEM_FN_NAME (aapbf,l_addc32) },
  { AAPBF_INSN_L_SUBC32, SEM_FN_NAME (aapbf,l_subc32) },
  { AAPBF_INSN_L_JMP32, SEM_FN_NAME (aapbf,l_jmp32) },
  { AAPBF_INSN_L_JAL32, SEM_FN_NAME (aapbf,l_jal32) },
  { AAPBF_INSN_L_JEQ32, SEM_FN_NAME (aapbf,l_jeq32) },
  { AAPBF_INSN_L_JNE32, SEM_FN_NAME (aapbf,l_jne32) },
  { AAPBF_INSN_L_JLTS32, SEM_FN_NAME (aapbf,l_jlts32) },
  { AAPBF_INSN_L_JLES32, SEM_FN_NAME (aapbf,l_jles32) },
  { AAPBF_INSN_L_JLTU32, SEM_FN_NAME (aapbf,l_jltu32) },
  { AAPBF_INSN_L_JLEU32, SEM_FN_NAME (aapbf,l_jleu32) },
  { AAPBF_INSN_L_JMPL32, SEM_FN_NAME (aapbf,l_jmpl32) },
  { AAPBF_INSN_L_JALL32, SEM_FN_NAME (aapbf,l_jall32) },
  { AAPBF_INSN_L_JEQL32, SEM_FN_NAME (aapbf,l_jeql32) },
  { AAPBF_INSN_L_JNEL32, SEM_FN_NAME (aapbf,l_jnel32) },
  { AAPBF_INSN_L_JLTSL32, SEM_FN_NAME (aapbf,l_jltsl32) },
  { AAPBF_INSN_L_JLESL32, SEM_FN_NAME (aapbf,l_jlesl32) },
  { AAPBF_INSN_L_JLTUL32, SEM_FN_NAME (aapbf,l_jltul32) },
  { AAPBF_INSN_L_JLEUL32, SEM_FN_NAME (aapbf,l_jleul32) },
  { AAPBF_INSN_L_ASRI32, SEM_FN_NAME (aapbf,l_asri32) },
  { AAPBF_INSN_L_LSLI32, SEM_FN_NAME (aapbf,l_lsli32) },
  { AAPBF_INSN_L_LSRI32, SEM_FN_NAME (aapbf,l_lsri32) },
  { AAPBF_INSN_L_ANDI32, SEM_FN_NAME (aapbf,l_andi32) },
  { AAPBF_INSN_L_ORI32, SEM_FN_NAME (aapbf,l_ori32) },
  { AAPBF_INSN_L_XORI32, SEM_FN_NAME (aapbf,l_xori32) },
  { AAPBF_INSN_L_ADDI32, SEM_FN_NAME (aapbf,l_addi32) },
  { AAPBF_INSN_L_SUBI32, SEM_FN_NAME (aapbf,l_subi32) },
  { AAPBF_INSN_L_BEQ32, SEM_FN_NAME (aapbf,l_beq32) },
  { AAPBF_INSN_L_BNE32, SEM_FN_NAME (aapbf,l_bne32) },
  { AAPBF_INSN_L_BLTS32, SEM_FN_NAME (aapbf,l_blts32) },
  { AAPBF_INSN_L_BLES32, SEM_FN_NAME (aapbf,l_bles32) },
  { AAPBF_INSN_L_BLTU32, SEM_FN_NAME (aapbf,l_bltu32) },
  { AAPBF_INSN_L_BLEU32, SEM_FN_NAME (aapbf,l_bleu32) },
  { AAPBF_INSN_L_LDB32___D6_____A6____I10__, SEM_FN_NAME (aapbf,l_ldb32___d6_____a6____i10__) },
  { AAPBF_INSN_L_LDW32___D6_____A6____I10__, SEM_FN_NAME (aapbf,l_ldw32___d6_____a6____i10__) },
  { AAPBF_INSN_L_LDB32___D6_____A6_____I10__, SEM_FN_NAME (aapbf,l_ldb32___d6_____a6_____i10__) },
  { AAPBF_INSN_L_LDW32___D6_____A6_____I10__, SEM_FN_NAME (aapbf,l_ldw32___d6_____a6_____i10__) },
  { AAPBF_INSN_L_LDB32___D6______A6____I10__, SEM_FN_NAME (aapbf,l_ldb32___d6______a6____i10__) },
  { AAPBF_INSN_L_LDW32___D6______A6____I10__, SEM_FN_NAME (aapbf,l_ldw32___d6______a6____i10__) },
  { AAPBF_INSN_L_SDB32____D6____I10_____A6_, SEM_FN_NAME (aapbf,l_sdb32____d6____i10_____a6_) },
  { AAPBF_INSN_L_SDW32____D6____I10_____A6_, SEM_FN_NAME (aapbf,l_sdw32____d6____i10_____a6_) },
  { AAPBF_INSN_L_SDB32____D6_____I10_____A6_, SEM_FN_NAME (aapbf,l_sdb32____d6_____i10_____a6_) },
  { AAPBF_INSN_L_SDW32____D6_____I10_____A6_, SEM_FN_NAME (aapbf,l_sdw32____d6_____i10_____a6_) },
  { AAPBF_INSN_L_SDB32_____D6____I10_____A6_, SEM_FN_NAME (aapbf,l_sdb32_____d6____i10_____a6_) },
  { AAPBF_INSN_L_SDW32_____D6____I10_____A6_, SEM_FN_NAME (aapbf,l_sdw32_____d6____i10_____a6_) },
  { AAPBF_INSN_L_NOP32, SEM_FN_NAME (aapbf,l_nop32) },
  { AAPBF_INSN_L_MOVI32, SEM_FN_NAME (aapbf,l_movi32) },
  { AAPBF_INSN_L_BAL32, SEM_FN_NAME (aapbf,l_bal32) },
  { AAPBF_INSN_L_BRA32, SEM_FN_NAME (aapbf,l_bra32) },
  { 0, 0 }
};

/* Add the semantic fns to IDESC_TABLE.  */

void
SEM_FN_NAME (aapbf,init_idesc_table) (SIM_CPU *current_cpu)
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
	idesc_table[sf->index].sem_fast = SEM_FN_NAME (aapbf,x_invalid);
#else
      if (valid_p)
	idesc_table[sf->index].sem_full = sf->fn;
      else
	idesc_table[sf->index].sem_full = SEM_FN_NAME (aapbf,x_invalid);
#endif
    }
}

