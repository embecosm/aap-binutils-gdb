/* Simulator instruction semantics for aapbf16.

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

#define WANT_CPU aapbf16
#define WANT_CPU_AAPBF16

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
SEM_FN_NAME (aapbf16,x_invalid) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
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
SEM_FN_NAME (aapbf16,x_after) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF16
    aapbf16_pbb_after (current_cpu, sem_arg);
#endif
  }

  return vpc;
#undef FLD
}

/* x-before: --before-- */

static SEM_PC
SEM_FN_NAME (aapbf16,x_before) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF16
    aapbf16_pbb_before (current_cpu, sem_arg);
#endif
  }

  return vpc;
#undef FLD
}

/* x-cti-chain: --cti-chain-- */

static SEM_PC
SEM_FN_NAME (aapbf16,x_cti_chain) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF16
#ifdef DEFINE_SWITCH
    vpc = aapbf16_pbb_cti_chain (current_cpu, sem_arg,
			       pbb_br_type, pbb_br_npc);
    BREAK (sem);
#else
    /* FIXME: Allow provision of explicit ifmt spec in insn spec.  */
    vpc = aapbf16_pbb_cti_chain (current_cpu, sem_arg,
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
SEM_FN_NAME (aapbf16,x_chain) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF16
    vpc = aapbf16_pbb_chain (current_cpu, sem_arg);
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
SEM_FN_NAME (aapbf16,x_begin) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF16
#if defined DEFINE_SWITCH || defined FAST_P
    /* In the switch case FAST_P is a constant, allowing several optimizations
       in any called inline functions.  */
    vpc = aapbf16_pbb_begin (current_cpu, FAST_P);
#else
#if 0 /* cgen engine can't handle dynamic fast/full switching yet.  */
    vpc = aapbf16_pbb_begin (current_cpu, STATE_RUN_FAST_P (CPU_STATE (current_cpu)));
#else
    vpc = aapbf16_pbb_begin (current_cpu, 0);
#endif
#endif
#endif
  }

  return vpc;
#undef FLD
}

/* l.add: l.add ${xdest},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_add) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ADDSI (* FLD (i_xsrc1), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.sub: l.sub ${xdest},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_sub) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SUBSI (* FLD (i_xsrc1), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.and: l.and ${xdest},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_and) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ANDSI (* FLD (i_xsrc1), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.or: l.or ${xdest},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_or) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ORSI (* FLD (i_xsrc1), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.xor: l.xor ${xdest},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_xor) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = XORSI (* FLD (i_xsrc1), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.asr: l.asr ${xdest},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_asr) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SRLSI (ORSI (* FLD (i_xsrc1), SLLSI (CPU (h_cf), 16)), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.lsl: l.lsl ${xdest},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_lsl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SLLSI (* FLD (i_xsrc1), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.lsr: l.lsr ${xdest},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_lsr) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SRLSI (* FLD (i_xsrc1), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.mov: l.mov ${xdest},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_mov) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = * FLD (i_xsrc1);
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.jmp: l.jmp ${xdest},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_jmp) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_movi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = * FLD (i_xdest);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* l.jal: l.jal ${xdest},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_jal) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ADDSI (pc, 1);
    * FLD (i_xsrc2) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.jeq: l.jeq ${xdest},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_jeq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (EQSI (* FLD (i_xsrc1), * FLD (i_xsrc2))) {
  {
    USI opval = * FLD (i_xdest);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
} else {
  {
    USI opval = ADDSI (pc, 1);
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

/* l.jne: l.jne ${xdest},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_jne) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (NESI (* FLD (i_xsrc1), * FLD (i_xsrc2))) {
  {
    USI opval = * FLD (i_xdest);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
} else {
  {
    USI opval = ADDSI (pc, 1);
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

/* l.jlts: l.jlts ${xdest},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_jlts) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (LTUSI (* FLD (i_xsrc1), * FLD (i_xsrc2))) {
  {
    USI opval = * FLD (i_xdest);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
} else {
  {
    USI opval = ADDSI (pc, 1);
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

/* l.jles: l.jles ${xdest},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_jles) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (LEUSI (* FLD (i_xsrc1), * FLD (i_xsrc2))) {
  {
    USI opval = * FLD (i_xdest);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
} else {
  {
    USI opval = ADDSI (pc, 1);
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

/* l.jltu: l.jltu ${xdest},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_jltu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (LTUSI (* FLD (i_xsrc1), * FLD (i_xsrc2))) {
  {
    USI opval = * FLD (i_xdest);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
} else {
  {
    USI opval = ADDSI (pc, 1);
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

/* l.jleu: l.jleu ${xdest},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_jleu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (LEUSI (* FLD (i_xsrc1), * FLD (i_xsrc2))) {
  {
    USI opval = * FLD (i_xdest);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
} else {
  {
    USI opval = ADDSI (pc, 1);
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

/* l.rte: l.rte ${xdest},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_rte) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_movi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = * FLD (i_xdest);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* l.addi: l.addi ${xdest},${xsrc1},${uint023} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_addi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ADDSI (* FLD (i_xsrc1), FLD (f_uint_2_3));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.subi: l.subi ${xdest},${xsrc1},${uint023} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_subi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SUBSI (* FLD (i_xsrc1), FLD (f_uint_2_3));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.asri: l.asri ${xdest},${xsrc1},${uint023} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_asri) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SRLSI (ORSI (* FLD (i_xsrc1), SLLSI (CPU (h_cf), 16)), FLD (f_uint_2_3));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.lsli: l.lsli ${xdest},${xsrc1},${uint023} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_lsli) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SLLSI (* FLD (i_xsrc1), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.lsri: l.lsri ${xdest},${xsrc1},${uint023} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_lsri) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_asr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SRLSI (* FLD (i_xsrc1), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.beq: l.beq ${int083},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_beq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (EQSI (* FLD (i_xsrc1), * FLD (i_xsrc2))) {
  {
    USI opval = ADDSI (pc, EXTHISI (TRUNCSIHI (FLD (f_int_8_3))));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
} else {
  {
    USI opval = ADDSI (pc, 1);
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

/* l.bne: l.bne ${int083},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_bne) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (NESI (* FLD (i_xsrc1), * FLD (i_xsrc2))) {
  {
    USI opval = ADDSI (pc, EXTHISI (TRUNCSIHI (FLD (f_int_8_3))));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
} else {
  {
    USI opval = ADDSI (pc, 1);
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

/* l.blts: l.blts ${int083},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_blts) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (LTUSI (* FLD (i_xsrc1), * FLD (i_xsrc2))) {
  {
    USI opval = ADDSI (pc, EXTHISI (TRUNCSIHI (FLD (f_int_8_3))));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
} else {
  {
    USI opval = ADDSI (pc, 1);
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

/* l.bles: l.bles ${int083},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_bles) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (LEUSI (* FLD (i_xsrc1), * FLD (i_xsrc2))) {
  {
    USI opval = ADDSI (pc, EXTHISI (TRUNCSIHI (FLD (f_int_8_3))));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
} else {
  {
    USI opval = ADDSI (pc, 1);
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

/* l.bltu: l.bltu ${int083},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_bltu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (LTUSI (* FLD (i_xsrc1), * FLD (i_xsrc2))) {
  {
    USI opval = ADDSI (pc, EXTHISI (TRUNCSIHI (FLD (f_int_8_3))));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
} else {
  {
    USI opval = ADDSI (pc, 1);
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

/* l.bleu: l.bleu ${int083},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_bleu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (LEUSI (* FLD (i_xsrc1), * FLD (i_xsrc2))) {
  {
    USI opval = ADDSI (pc, EXTHISI (TRUNCSIHI (FLD (f_int_8_3))));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
} else {
  {
    USI opval = ADDSI (pc, 1);
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

/* l.ldb ${xdest},(${xsrc1},${int023}): l.ldb ${xdest},(${xsrc1},${int023}) */

static SEM_PC
SEM_FN_NAME (aapbf16,l_ldb___xdest_____xsrc1____int023__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xsrc1), EXTHISI (TRUNCSIHI (FLD (f_int_2_3)))));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.ldw ${xdest},(${xsrc1},${int023}): l.ldw ${xdest},(${xsrc1},${int023}) */

static SEM_PC
SEM_FN_NAME (aapbf16,l_ldw___xdest_____xsrc1____int023__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ORQI (GETMEMQI (current_cpu, pc, ADDCSI (* FLD (i_xsrc1), EXTHISI (TRUNCSIHI (FLD (f_int_2_3))), 1)), SLLQI (GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xsrc1), EXTHISI (TRUNCSIHI (FLD (f_int_2_3))))), 8));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.ldb ${xdest},(${xsrc1}+,${int023}): l.ldb ${xdest},(${xsrc1}+,${int023}) */

static SEM_PC
SEM_FN_NAME (aapbf16,l_ldb___xdest_____xsrc1_____int023__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xsrc1), EXTHISI (TRUNCSIHI (FLD (f_int_2_3)))));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.ldw ${xdest},(${xsrc1}+,${int023}): l.ldw ${xdest},(${xsrc1}+,${int023}) */

static SEM_PC
SEM_FN_NAME (aapbf16,l_ldw___xdest_____xsrc1_____int023__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ORQI (GETMEMQI (current_cpu, pc, ADDCSI (* FLD (i_xsrc1), EXTHISI (TRUNCSIHI (FLD (f_int_2_3))), 1)), SLLQI (GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xsrc1), EXTHISI (TRUNCSIHI (FLD (f_int_2_3))))), 8));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.ldb ${xdest},(-${xsrc1},${int023}): l.ldb ${xdest},(-${xsrc1},${int023}) */

static SEM_PC
SEM_FN_NAME (aapbf16,l_ldb___xdest______xsrc1____int023__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SUBSI (* FLD (i_xsrc1), EXTHISI (TRUNCSIHI (FLD (f_int_2_3))));
    * FLD (i_xsrc1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.ldw ${xdest},(-${xsrc1},${int023}): l.ldw ${xdest},(-${xsrc1},${int023}) */

static SEM_PC
SEM_FN_NAME (aapbf16,l_ldw___xdest______xsrc1____int023__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SUBSI (* FLD (i_xsrc1), EXTHISI (TRUNCSIHI (FLD (f_int_2_3))));
    * FLD (i_xsrc1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.sdb (${xdest},${int023}),${xsrc1}: l.sdb (${xdest},${int023}),${xsrc1} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_sdb____xdest____int023_____xsrc1_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    QI opval = ANDSI (* FLD (i_xsrc1), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xdest), EXTHISI (TRUNCSIHI (FLD (f_int_2_3)))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.sdw (${xdest},${int023}),${xsrc1}: l.sdw (${xdest},${int023}),${xsrc1} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_sdw____xdest____int023_____xsrc1_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    QI opval = ANDSI (* FLD (i_xsrc1), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xdest), EXTHISI (TRUNCSIHI (FLD (f_int_2_3)))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.sdb (${xdest}+,${int023}),${xsrc1}: l.sdb (${xdest}+,${int023}),${xsrc1} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_sdb____xdest_____int023_____xsrc1_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    QI opval = ANDSI (* FLD (i_xsrc1), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xdest), EXTHISI (TRUNCSIHI (FLD (f_int_2_3)))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.sdw (${xdest}+,${int023}),${xsrc1}: l.sdw (${xdest}+,${int023}),${xsrc1} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_sdw____xdest_____int023_____xsrc1_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    QI opval = ANDSI (* FLD (i_xsrc1), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xdest), EXTHISI (TRUNCSIHI (FLD (f_int_2_3)))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.sdb (-${xdest},${int023}),${xsrc1}: l.sdb (-${xdest},${int023}),${xsrc1} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_sdb_____xdest____int023_____xsrc1_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_sdb_____xdest____int023_____xsrc1_.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SUBSI (* FLD (i_d6), EXTHISI (TRUNCSIHI (FLD (f_int_2_3))));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.sdw (-${xdest},${int023}),${xsrc1}: l.sdw (-${xdest},${int023}),${xsrc1} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_sdw_____xdest____int023_____xsrc1_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_sdb_____xdest____int023_____xsrc1_.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SUBSI (* FLD (i_d6), EXTHISI (TRUNCSIHI (FLD (f_int_2_3))));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.nop: l.nop ${xdest},${uint056} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_nop) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* l.movi: l.movi ${xdest},${uint056} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_movi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_movi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = FLD (f_uint_5_6);
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.bal: l.bal ${int086},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_bal) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ADDSI (pc, 1);
    * FLD (i_xsrc2) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.bra: l.bra ${int089} */

static SEM_PC
SEM_FN_NAME (aapbf16,l_bra) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_bra.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ADDSI (pc, EXTHISI (TRUNCSIHI (FLD (f_int_8_9))));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* Table of all semantic fns.  */

static const struct sem_fn_desc sem_fns[] = {
  { AAPBF16_INSN_X_INVALID, SEM_FN_NAME (aapbf16,x_invalid) },
  { AAPBF16_INSN_X_AFTER, SEM_FN_NAME (aapbf16,x_after) },
  { AAPBF16_INSN_X_BEFORE, SEM_FN_NAME (aapbf16,x_before) },
  { AAPBF16_INSN_X_CTI_CHAIN, SEM_FN_NAME (aapbf16,x_cti_chain) },
  { AAPBF16_INSN_X_CHAIN, SEM_FN_NAME (aapbf16,x_chain) },
  { AAPBF16_INSN_X_BEGIN, SEM_FN_NAME (aapbf16,x_begin) },
  { AAPBF16_INSN_L_ADD, SEM_FN_NAME (aapbf16,l_add) },
  { AAPBF16_INSN_L_SUB, SEM_FN_NAME (aapbf16,l_sub) },
  { AAPBF16_INSN_L_AND, SEM_FN_NAME (aapbf16,l_and) },
  { AAPBF16_INSN_L_OR, SEM_FN_NAME (aapbf16,l_or) },
  { AAPBF16_INSN_L_XOR, SEM_FN_NAME (aapbf16,l_xor) },
  { AAPBF16_INSN_L_ASR, SEM_FN_NAME (aapbf16,l_asr) },
  { AAPBF16_INSN_L_LSL, SEM_FN_NAME (aapbf16,l_lsl) },
  { AAPBF16_INSN_L_LSR, SEM_FN_NAME (aapbf16,l_lsr) },
  { AAPBF16_INSN_L_MOV, SEM_FN_NAME (aapbf16,l_mov) },
  { AAPBF16_INSN_L_JMP, SEM_FN_NAME (aapbf16,l_jmp) },
  { AAPBF16_INSN_L_JAL, SEM_FN_NAME (aapbf16,l_jal) },
  { AAPBF16_INSN_L_JEQ, SEM_FN_NAME (aapbf16,l_jeq) },
  { AAPBF16_INSN_L_JNE, SEM_FN_NAME (aapbf16,l_jne) },
  { AAPBF16_INSN_L_JLTS, SEM_FN_NAME (aapbf16,l_jlts) },
  { AAPBF16_INSN_L_JLES, SEM_FN_NAME (aapbf16,l_jles) },
  { AAPBF16_INSN_L_JLTU, SEM_FN_NAME (aapbf16,l_jltu) },
  { AAPBF16_INSN_L_JLEU, SEM_FN_NAME (aapbf16,l_jleu) },
  { AAPBF16_INSN_L_RTE, SEM_FN_NAME (aapbf16,l_rte) },
  { AAPBF16_INSN_L_ADDI, SEM_FN_NAME (aapbf16,l_addi) },
  { AAPBF16_INSN_L_SUBI, SEM_FN_NAME (aapbf16,l_subi) },
  { AAPBF16_INSN_L_ASRI, SEM_FN_NAME (aapbf16,l_asri) },
  { AAPBF16_INSN_L_LSLI, SEM_FN_NAME (aapbf16,l_lsli) },
  { AAPBF16_INSN_L_LSRI, SEM_FN_NAME (aapbf16,l_lsri) },
  { AAPBF16_INSN_L_BEQ, SEM_FN_NAME (aapbf16,l_beq) },
  { AAPBF16_INSN_L_BNE, SEM_FN_NAME (aapbf16,l_bne) },
  { AAPBF16_INSN_L_BLTS, SEM_FN_NAME (aapbf16,l_blts) },
  { AAPBF16_INSN_L_BLES, SEM_FN_NAME (aapbf16,l_bles) },
  { AAPBF16_INSN_L_BLTU, SEM_FN_NAME (aapbf16,l_bltu) },
  { AAPBF16_INSN_L_BLEU, SEM_FN_NAME (aapbf16,l_bleu) },
  { AAPBF16_INSN_L_LDB___XDEST_____XSRC1____INT023__, SEM_FN_NAME (aapbf16,l_ldb___xdest_____xsrc1____int023__) },
  { AAPBF16_INSN_L_LDW___XDEST_____XSRC1____INT023__, SEM_FN_NAME (aapbf16,l_ldw___xdest_____xsrc1____int023__) },
  { AAPBF16_INSN_L_LDB___XDEST_____XSRC1_____INT023__, SEM_FN_NAME (aapbf16,l_ldb___xdest_____xsrc1_____int023__) },
  { AAPBF16_INSN_L_LDW___XDEST_____XSRC1_____INT023__, SEM_FN_NAME (aapbf16,l_ldw___xdest_____xsrc1_____int023__) },
  { AAPBF16_INSN_L_LDB___XDEST______XSRC1____INT023__, SEM_FN_NAME (aapbf16,l_ldb___xdest______xsrc1____int023__) },
  { AAPBF16_INSN_L_LDW___XDEST______XSRC1____INT023__, SEM_FN_NAME (aapbf16,l_ldw___xdest______xsrc1____int023__) },
  { AAPBF16_INSN_L_SDB____XDEST____INT023_____XSRC1_, SEM_FN_NAME (aapbf16,l_sdb____xdest____int023_____xsrc1_) },
  { AAPBF16_INSN_L_SDW____XDEST____INT023_____XSRC1_, SEM_FN_NAME (aapbf16,l_sdw____xdest____int023_____xsrc1_) },
  { AAPBF16_INSN_L_SDB____XDEST_____INT023_____XSRC1_, SEM_FN_NAME (aapbf16,l_sdb____xdest_____int023_____xsrc1_) },
  { AAPBF16_INSN_L_SDW____XDEST_____INT023_____XSRC1_, SEM_FN_NAME (aapbf16,l_sdw____xdest_____int023_____xsrc1_) },
  { AAPBF16_INSN_L_SDB_____XDEST____INT023_____XSRC1_, SEM_FN_NAME (aapbf16,l_sdb_____xdest____int023_____xsrc1_) },
  { AAPBF16_INSN_L_SDW_____XDEST____INT023_____XSRC1_, SEM_FN_NAME (aapbf16,l_sdw_____xdest____int023_____xsrc1_) },
  { AAPBF16_INSN_L_NOP, SEM_FN_NAME (aapbf16,l_nop) },
  { AAPBF16_INSN_L_MOVI, SEM_FN_NAME (aapbf16,l_movi) },
  { AAPBF16_INSN_L_BAL, SEM_FN_NAME (aapbf16,l_bal) },
  { AAPBF16_INSN_L_BRA, SEM_FN_NAME (aapbf16,l_bra) },
  { 0, 0 }
};

/* Add the semantic fns to IDESC_TABLE.  */

void
SEM_FN_NAME (aapbf16,init_idesc_table) (SIM_CPU *current_cpu)
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
	idesc_table[sf->index].sem_fast = SEM_FN_NAME (aapbf16,x_invalid);
#else
      if (valid_p)
	idesc_table[sf->index].sem_full = sf->fn;
      else
	idesc_table[sf->index].sem_full = SEM_FN_NAME (aapbf16,x_invalid);
#endif
    }
}

