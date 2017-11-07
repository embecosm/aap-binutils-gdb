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

/* add: add dest,${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,add) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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

/* sub: sub dest,${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,sub) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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

/* and: and dest,${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,and) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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

/* or: or dest,${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,or) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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

/* xor: xor dest,${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,xor) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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

/* asr: asr dest,${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,asr) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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

/* lsl: lsl dest,${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,lsl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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

/* lsr: lsr dest,${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,lsr) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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

/* mov: mov ${xdest},${xsrc1} */

static SEM_PC
SEM_FN_NAME (aapbf16,mov) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
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

/* jmp: jmp ${xdest} */

static SEM_PC
SEM_FN_NAME (aapbf16,jmp) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_movi.f
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

/* jal: jal ${xdest},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,jal) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
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

/* jeq: jeq dest,${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,jeq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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

/* jne: jne dest,${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,jne) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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

/* jlts: jlts dest,${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,jlts) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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

/* jles: jles dest,${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,jles) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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

/* jltu: jltu dest,${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,jltu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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

/* jleu: jleu dest,${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,jleu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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

/* rte: rte ${xdest} */

static SEM_PC
SEM_FN_NAME (aapbf16,rte) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_movi.f
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

/* addi: addi ${xdest},${xsrc1},${uint023} */

static SEM_PC
SEM_FN_NAME (aapbf16,addi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asri.f
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

/* subi: subi ${xdest},${xsrc1},${uint023} */

static SEM_PC
SEM_FN_NAME (aapbf16,subi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asri.f
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

/* asri: asri ${xdest},${xsrc1},${uint023} */

static SEM_PC
SEM_FN_NAME (aapbf16,asri) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asri.f
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

/* lsli: lsli ${xdest},${xsrc1},${uint023} */

static SEM_PC
SEM_FN_NAME (aapbf16,lsli) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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

/* lsri: lsri ${xdest},${xsrc1},${uint023} */

static SEM_PC
SEM_FN_NAME (aapbf16,lsri) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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

/* beq: beq ${int083},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,beq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (EQSI (* FLD (i_xsrc1), * FLD (i_xsrc2))) {
  {
    USI opval = ADDSI (pc, EXTSISI (FLD (f_int_8_3)));
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

/* bne: bne ${int083},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,bne) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (NESI (* FLD (i_xsrc1), * FLD (i_xsrc2))) {
  {
    USI opval = ADDSI (pc, EXTSISI (FLD (f_int_8_3)));
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

/* blts: blts ${int083},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,blts) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (LTUSI (* FLD (i_xsrc1), * FLD (i_xsrc2))) {
  {
    USI opval = ADDSI (pc, EXTSISI (FLD (f_int_8_3)));
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

/* bles: bles ${int083},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,bles) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (LEUSI (* FLD (i_xsrc1), * FLD (i_xsrc2))) {
  {
    USI opval = ADDSI (pc, EXTSISI (FLD (f_int_8_3)));
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

/* bltu: bltu ${int083},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,bltu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (LTUSI (* FLD (i_xsrc1), * FLD (i_xsrc2))) {
  {
    USI opval = ADDSI (pc, EXTSISI (FLD (f_int_8_3)));
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

/* bleu: bleu ${int083},${xsrc1},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,bleu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (LEUSI (* FLD (i_xsrc1), * FLD (i_xsrc2))) {
  {
    USI opval = ADDSI (pc, EXTSISI (FLD (f_int_8_3)));
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

/* ldb ${xdest},[${xsrc1},${int023}]: ldb ${xdest},[${xsrc1},${int023}] */

static SEM_PC
SEM_FN_NAME (aapbf16,ldb___xdest_____xsrc1____int023__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xsrc1), EXTSISI (FLD (f_int_2_3))));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* ldw ${xdest},[${xsrc1},${int023}]: ldw ${xdest},[${xsrc1},${int023}] */

static SEM_PC
SEM_FN_NAME (aapbf16,ldw___xdest_____xsrc1____int023__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ORQI (GETMEMQI (current_cpu, pc, ADDCSI (* FLD (i_xsrc1), EXTSISI (FLD (f_int_2_3)), 1)), SLLQI (GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xsrc1), EXTSISI (FLD (f_int_2_3)))), 8));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* ldb ${xdest},[${xsrc1}+,${int023}]: ldb ${xdest},[${xsrc1}+,${int023}] */

static SEM_PC
SEM_FN_NAME (aapbf16,ldb___xdest_____xsrc1_____int023__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xsrc1), EXTSISI (FLD (f_int_2_3))));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* ldw ${xdest},[${xsrc1}+,${int023}]: ldw ${xdest},[${xsrc1}+,${int023}] */

static SEM_PC
SEM_FN_NAME (aapbf16,ldw___xdest_____xsrc1_____int023__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ORQI (GETMEMQI (current_cpu, pc, ADDCSI (* FLD (i_xsrc1), EXTSISI (FLD (f_int_2_3)), 1)), SLLQI (GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xsrc1), EXTSISI (FLD (f_int_2_3)))), 8));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* ldb ${xdest},[-${xsrc1},${int023}]: ldb ${xdest},[-${xsrc1},${int023}] */

static SEM_PC
SEM_FN_NAME (aapbf16,ldb___xdest______xsrc1____int023__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SUBSI (* FLD (i_xsrc1), EXTSISI (FLD (f_int_2_3)));
    * FLD (i_xsrc1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* ldw ${xdest},[-${xsrc1},${int023}]: ldw ${xdest},[-${xsrc1},${int023}] */

static SEM_PC
SEM_FN_NAME (aapbf16,ldw___xdest______xsrc1____int023__) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SUBSI (* FLD (i_xsrc1), EXTSISI (FLD (f_int_2_3)));
    * FLD (i_xsrc1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* stb [${xdest},${int023}],${xsrc1}: stb [${xdest},${int023}],${xsrc1} */

static SEM_PC
SEM_FN_NAME (aapbf16,stb____xdest____int023_____xsrc1_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    QI opval = ANDSI (* FLD (i_xsrc1), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xdest), EXTSISI (FLD (f_int_2_3))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* stw [${xdest},${int023}],${xsrc1}: stw [${xdest},${int023}],${xsrc1} */

static SEM_PC
SEM_FN_NAME (aapbf16,stw____xdest____int023_____xsrc1_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    QI opval = ANDSI (* FLD (i_xsrc1), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xdest), EXTSISI (FLD (f_int_2_3))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* stb [${xdest}+,${int023}],${xsrc1}: stb [${xdest}+,${int023}],${xsrc1} */

static SEM_PC
SEM_FN_NAME (aapbf16,stb____xdest_____int023_____xsrc1_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    QI opval = ANDSI (* FLD (i_xsrc1), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xdest), EXTSISI (FLD (f_int_2_3))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* stw [${xdest}+,${int023}],${xsrc1}: stw [${xdest}+,${int023}],${xsrc1} */

static SEM_PC
SEM_FN_NAME (aapbf16,stw____xdest_____int023_____xsrc1_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    QI opval = ANDSI (* FLD (i_xsrc1), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xdest), EXTSISI (FLD (f_int_2_3))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* stb [-${xdest},${int023}],${xsrc1}: stb [-${xdest},${int023}],${xsrc1} */

static SEM_PC
SEM_FN_NAME (aapbf16,stb_____xdest____int023_____xsrc1_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_stb_____xdest____int023_____xsrc1_.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SUBSI (* FLD (i_d6), EXTSISI (FLD (f_int_2_3)));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* stw [-${xdest},${int023}],${xsrc1}: stw [-${xdest},${int023}],${xsrc1} */

static SEM_PC
SEM_FN_NAME (aapbf16,stw_____xdest____int023_____xsrc1_) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_stb_____xdest____int023_____xsrc1_.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SUBSI (* FLD (i_d6), EXTSISI (FLD (f_int_2_3)));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* nop: nop ${xdest},${uint056} */

static SEM_PC
SEM_FN_NAME (aapbf16,nop) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
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

/* movi: movi ${xdest},${uint056} */

static SEM_PC
SEM_FN_NAME (aapbf16,movi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_movi.f
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

/* bal: bal ${int086},${xsrc2} */

static SEM_PC
SEM_FN_NAME (aapbf16,bal) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
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

/* bra: bra ${int089} */

static SEM_PC
SEM_FN_NAME (aapbf16,bra) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_bra.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ADDSI (pc, EXTSISI (FLD (f_int_8_9)));
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
  { AAPBF16_INSN_ADD, SEM_FN_NAME (aapbf16,add) },
  { AAPBF16_INSN_SUB, SEM_FN_NAME (aapbf16,sub) },
  { AAPBF16_INSN_AND, SEM_FN_NAME (aapbf16,and) },
  { AAPBF16_INSN_OR, SEM_FN_NAME (aapbf16,or) },
  { AAPBF16_INSN_XOR, SEM_FN_NAME (aapbf16,xor) },
  { AAPBF16_INSN_ASR, SEM_FN_NAME (aapbf16,asr) },
  { AAPBF16_INSN_LSL, SEM_FN_NAME (aapbf16,lsl) },
  { AAPBF16_INSN_LSR, SEM_FN_NAME (aapbf16,lsr) },
  { AAPBF16_INSN_MOV, SEM_FN_NAME (aapbf16,mov) },
  { AAPBF16_INSN_JMP, SEM_FN_NAME (aapbf16,jmp) },
  { AAPBF16_INSN_JAL, SEM_FN_NAME (aapbf16,jal) },
  { AAPBF16_INSN_JEQ, SEM_FN_NAME (aapbf16,jeq) },
  { AAPBF16_INSN_JNE, SEM_FN_NAME (aapbf16,jne) },
  { AAPBF16_INSN_JLTS, SEM_FN_NAME (aapbf16,jlts) },
  { AAPBF16_INSN_JLES, SEM_FN_NAME (aapbf16,jles) },
  { AAPBF16_INSN_JLTU, SEM_FN_NAME (aapbf16,jltu) },
  { AAPBF16_INSN_JLEU, SEM_FN_NAME (aapbf16,jleu) },
  { AAPBF16_INSN_RTE, SEM_FN_NAME (aapbf16,rte) },
  { AAPBF16_INSN_ADDI, SEM_FN_NAME (aapbf16,addi) },
  { AAPBF16_INSN_SUBI, SEM_FN_NAME (aapbf16,subi) },
  { AAPBF16_INSN_ASRI, SEM_FN_NAME (aapbf16,asri) },
  { AAPBF16_INSN_LSLI, SEM_FN_NAME (aapbf16,lsli) },
  { AAPBF16_INSN_LSRI, SEM_FN_NAME (aapbf16,lsri) },
  { AAPBF16_INSN_BEQ, SEM_FN_NAME (aapbf16,beq) },
  { AAPBF16_INSN_BNE, SEM_FN_NAME (aapbf16,bne) },
  { AAPBF16_INSN_BLTS, SEM_FN_NAME (aapbf16,blts) },
  { AAPBF16_INSN_BLES, SEM_FN_NAME (aapbf16,bles) },
  { AAPBF16_INSN_BLTU, SEM_FN_NAME (aapbf16,bltu) },
  { AAPBF16_INSN_BLEU, SEM_FN_NAME (aapbf16,bleu) },
  { AAPBF16_INSN_LDB___XDEST_____XSRC1____INT023__, SEM_FN_NAME (aapbf16,ldb___xdest_____xsrc1____int023__) },
  { AAPBF16_INSN_LDW___XDEST_____XSRC1____INT023__, SEM_FN_NAME (aapbf16,ldw___xdest_____xsrc1____int023__) },
  { AAPBF16_INSN_LDB___XDEST_____XSRC1_____INT023__, SEM_FN_NAME (aapbf16,ldb___xdest_____xsrc1_____int023__) },
  { AAPBF16_INSN_LDW___XDEST_____XSRC1_____INT023__, SEM_FN_NAME (aapbf16,ldw___xdest_____xsrc1_____int023__) },
  { AAPBF16_INSN_LDB___XDEST______XSRC1____INT023__, SEM_FN_NAME (aapbf16,ldb___xdest______xsrc1____int023__) },
  { AAPBF16_INSN_LDW___XDEST______XSRC1____INT023__, SEM_FN_NAME (aapbf16,ldw___xdest______xsrc1____int023__) },
  { AAPBF16_INSN_STB____XDEST____INT023_____XSRC1_, SEM_FN_NAME (aapbf16,stb____xdest____int023_____xsrc1_) },
  { AAPBF16_INSN_STW____XDEST____INT023_____XSRC1_, SEM_FN_NAME (aapbf16,stw____xdest____int023_____xsrc1_) },
  { AAPBF16_INSN_STB____XDEST_____INT023_____XSRC1_, SEM_FN_NAME (aapbf16,stb____xdest_____int023_____xsrc1_) },
  { AAPBF16_INSN_STW____XDEST_____INT023_____XSRC1_, SEM_FN_NAME (aapbf16,stw____xdest_____int023_____xsrc1_) },
  { AAPBF16_INSN_STB_____XDEST____INT023_____XSRC1_, SEM_FN_NAME (aapbf16,stb_____xdest____int023_____xsrc1_) },
  { AAPBF16_INSN_STW_____XDEST____INT023_____XSRC1_, SEM_FN_NAME (aapbf16,stw_____xdest____int023_____xsrc1_) },
  { AAPBF16_INSN_NOP, SEM_FN_NAME (aapbf16,nop) },
  { AAPBF16_INSN_MOVI, SEM_FN_NAME (aapbf16,movi) },
  { AAPBF16_INSN_BAL, SEM_FN_NAME (aapbf16,bal) },
  { AAPBF16_INSN_BRA, SEM_FN_NAME (aapbf16,bra) },
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

