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

#ifdef DEFINE_LABELS

  /* The labels have the case they have because the enum of insn types
     is all uppercase and in the non-stdc case the insn symbol is built
     into the enum name.  */

  static struct {
    int index;
    void *label;
  } labels[] = {
    { AAPBF16_INSN_X_INVALID, && case_sem_INSN_X_INVALID },
    { AAPBF16_INSN_X_AFTER, && case_sem_INSN_X_AFTER },
    { AAPBF16_INSN_X_BEFORE, && case_sem_INSN_X_BEFORE },
    { AAPBF16_INSN_X_CTI_CHAIN, && case_sem_INSN_X_CTI_CHAIN },
    { AAPBF16_INSN_X_CHAIN, && case_sem_INSN_X_CHAIN },
    { AAPBF16_INSN_X_BEGIN, && case_sem_INSN_X_BEGIN },
    { AAPBF16_INSN_ADD, && case_sem_INSN_ADD },
    { AAPBF16_INSN_SUB, && case_sem_INSN_SUB },
    { AAPBF16_INSN_AND, && case_sem_INSN_AND },
    { AAPBF16_INSN_OR, && case_sem_INSN_OR },
    { AAPBF16_INSN_XOR, && case_sem_INSN_XOR },
    { AAPBF16_INSN_ASR, && case_sem_INSN_ASR },
    { AAPBF16_INSN_LSL, && case_sem_INSN_LSL },
    { AAPBF16_INSN_LSR, && case_sem_INSN_LSR },
    { AAPBF16_INSN_MOV, && case_sem_INSN_MOV },
    { AAPBF16_INSN_JMP, && case_sem_INSN_JMP },
    { AAPBF16_INSN_JAL, && case_sem_INSN_JAL },
    { AAPBF16_INSN_JEQ, && case_sem_INSN_JEQ },
    { AAPBF16_INSN_JNE, && case_sem_INSN_JNE },
    { AAPBF16_INSN_JLTS, && case_sem_INSN_JLTS },
    { AAPBF16_INSN_JLES, && case_sem_INSN_JLES },
    { AAPBF16_INSN_JLTU, && case_sem_INSN_JLTU },
    { AAPBF16_INSN_JLEU, && case_sem_INSN_JLEU },
    { AAPBF16_INSN_RTE, && case_sem_INSN_RTE },
    { AAPBF16_INSN_ADDI, && case_sem_INSN_ADDI },
    { AAPBF16_INSN_SUBI, && case_sem_INSN_SUBI },
    { AAPBF16_INSN_ASRI, && case_sem_INSN_ASRI },
    { AAPBF16_INSN_LSLI, && case_sem_INSN_LSLI },
    { AAPBF16_INSN_LSRI, && case_sem_INSN_LSRI },
    { AAPBF16_INSN_BEQ, && case_sem_INSN_BEQ },
    { AAPBF16_INSN_BNE, && case_sem_INSN_BNE },
    { AAPBF16_INSN_BLTS, && case_sem_INSN_BLTS },
    { AAPBF16_INSN_BLES, && case_sem_INSN_BLES },
    { AAPBF16_INSN_BLTU, && case_sem_INSN_BLTU },
    { AAPBF16_INSN_BLEU, && case_sem_INSN_BLEU },
    { AAPBF16_INSN_LDB___XDEST_____XSRC1____INT023__, && case_sem_INSN_LDB___XDEST_____XSRC1____INT023__ },
    { AAPBF16_INSN_LDW___XDEST_____XSRC1____INT023__, && case_sem_INSN_LDW___XDEST_____XSRC1____INT023__ },
    { AAPBF16_INSN_LDB___XDEST_____XSRC1_____INT023__, && case_sem_INSN_LDB___XDEST_____XSRC1_____INT023__ },
    { AAPBF16_INSN_LDW___XDEST_____XSRC1_____INT023__, && case_sem_INSN_LDW___XDEST_____XSRC1_____INT023__ },
    { AAPBF16_INSN_LDB___XDEST______XSRC1____INT023__, && case_sem_INSN_LDB___XDEST______XSRC1____INT023__ },
    { AAPBF16_INSN_LDW___XDEST______XSRC1____INT023__, && case_sem_INSN_LDW___XDEST______XSRC1____INT023__ },
    { AAPBF16_INSN_STB____XDEST____INT023_____XSRC1_, && case_sem_INSN_STB____XDEST____INT023_____XSRC1_ },
    { AAPBF16_INSN_STW____XDEST____INT023_____XSRC1_, && case_sem_INSN_STW____XDEST____INT023_____XSRC1_ },
    { AAPBF16_INSN_STB____XDEST_____INT023_____XSRC1_, && case_sem_INSN_STB____XDEST_____INT023_____XSRC1_ },
    { AAPBF16_INSN_STW____XDEST_____INT023_____XSRC1_, && case_sem_INSN_STW____XDEST_____INT023_____XSRC1_ },
    { AAPBF16_INSN_STB_____XDEST____INT023_____XSRC1_, && case_sem_INSN_STB_____XDEST____INT023_____XSRC1_ },
    { AAPBF16_INSN_STW_____XDEST____INT023_____XSRC1_, && case_sem_INSN_STW_____XDEST____INT023_____XSRC1_ },
    { AAPBF16_INSN_NOP, && case_sem_INSN_NOP },
    { AAPBF16_INSN_MOVI, && case_sem_INSN_MOVI },
    { AAPBF16_INSN_BAL, && case_sem_INSN_BAL },
    { AAPBF16_INSN_BRA, && case_sem_INSN_BRA },
    { 0, 0 }
  };
  int i;

  for (i = 0; labels[i].label != 0; ++i)
    {
#if FAST_P
      CPU_IDESC (current_cpu) [labels[i].index].sem_fast_lab = labels[i].label;
#else
      CPU_IDESC (current_cpu) [labels[i].index].sem_full_lab = labels[i].label;
#endif
    }

#undef DEFINE_LABELS
#endif /* DEFINE_LABELS */

#ifdef DEFINE_SWITCH

/* If hyper-fast [well not unnecessarily slow] execution is selected, turn
   off frills like tracing and profiling.  */
/* FIXME: A better way would be to have TRACE_RESULT check for something
   that can cause it to be optimized out.  Another way would be to emit
   special handlers into the instruction "stream".  */

#if FAST_P
#undef TRACE_RESULT
#define TRACE_RESULT(cpu, abuf, name, type, val)
#endif

#undef GET_ATTR
#define GET_ATTR(cpu, num, attr) CGEN_ATTR_VALUE (NULL, abuf->idesc->attrs, CGEN_INSN_##attr)

{

#if WITH_SCACHE_PBB

/* Branch to next handler without going around main loop.  */
#define NEXT(vpc) goto * SEM_ARGBUF (vpc) -> semantic.sem_case
SWITCH (sem, SEM_ARGBUF (vpc) -> semantic.sem_case)

#else /* ! WITH_SCACHE_PBB */

#define NEXT(vpc) BREAK (sem)
#ifdef __GNUC__
#if FAST_P
  SWITCH (sem, SEM_ARGBUF (sc) -> idesc->sem_fast_lab)
#else
  SWITCH (sem, SEM_ARGBUF (sc) -> idesc->sem_full_lab)
#endif
#else
  SWITCH (sem, SEM_ARGBUF (sc) -> idesc->num)
#endif

#endif /* ! WITH_SCACHE_PBB */

    {

  CASE (sem, INSN_X_INVALID) : /* --invalid-- */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

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

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_X_AFTER) : /* --after-- */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF16
    aapbf16_pbb_after (current_cpu, sem_arg);
#endif
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_X_BEFORE) : /* --before-- */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF16
    aapbf16_pbb_before (current_cpu, sem_arg);
#endif
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_X_CTI_CHAIN) : /* --cti-chain-- */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

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

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_X_CHAIN) : /* --chain-- */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_AAPBF16
    vpc = aapbf16_pbb_chain (current_cpu, sem_arg);
#ifdef DEFINE_SWITCH
    BREAK (sem);
#endif
#endif
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_X_BEGIN) : /* --begin-- */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

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

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_ADD) : /* add dest,${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ADDSI (* FLD (i_xsrc1), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_SUB) : /* sub dest,${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SUBSI (* FLD (i_xsrc1), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_AND) : /* and dest,${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ANDSI (* FLD (i_xsrc1), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_OR) : /* or dest,${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ORSI (* FLD (i_xsrc1), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_XOR) : /* xor dest,${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = XORSI (* FLD (i_xsrc1), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_ASR) : /* asr dest,${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SRLSI (ORSI (* FLD (i_xsrc1), SLLSI (CPU (h_cf), 16)), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LSL) : /* lsl dest,${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SLLSI (* FLD (i_xsrc1), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LSR) : /* lsr dest,${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SRLSI (* FLD (i_xsrc1), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_MOV) : /* mov ${xdest},${xsrc1} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = * FLD (i_xsrc1);
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JMP) : /* jmp ${xdest} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_movi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = * FLD (i_xdest);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JAL) : /* jal ${xdest},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_beq.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ADDSI (pc, 1);
    * FLD (i_xsrc2) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JEQ) : /* jeq dest,${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JNE) : /* jne dest,${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JLTS) : /* jlts dest,${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JLES) : /* jles dest,${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JLTU) : /* jltu dest,${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JLEU) : /* jleu dest,${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_RTE) : /* rte ${xdest} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_movi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = * FLD (i_xdest);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_ADDI) : /* addi ${xdest},${xsrc1},${uint023} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asri.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ADDSI (* FLD (i_xsrc1), FLD (f_uint_2_3));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_SUBI) : /* subi ${xdest},${xsrc1},${uint023} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asri.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SUBSI (* FLD (i_xsrc1), FLD (f_uint_2_3));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_ASRI) : /* asri ${xdest},${xsrc1},${uint023} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asri.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SRLSI (ORSI (* FLD (i_xsrc1), SLLSI (CPU (h_cf), 16)), FLD (f_uint_2_3));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LSLI) : /* lsli ${xdest},${xsrc1},${uint023} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SLLSI (* FLD (i_xsrc1), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LSRI) : /* lsri ${xdest},${xsrc1},${uint023} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SRLSI (* FLD (i_xsrc1), * FLD (i_xsrc2));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_BEQ) : /* beq ${int083},${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_beq.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_BNE) : /* bne ${int083},${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_beq.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_BLTS) : /* blts ${int083},${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_beq.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_BLES) : /* bles ${int083},${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_beq.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_BLTU) : /* bltu ${int083},${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_beq.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_BLEU) : /* bleu ${int083},${xsrc1},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_beq.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LDB___XDEST_____XSRC1____INT023__) : /* ldb ${xdest},[${xsrc1},${int023}] */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xsrc1), EXTSISI (FLD (f_int_2_3))));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LDW___XDEST_____XSRC1____INT023__) : /* ldw ${xdest},[${xsrc1},${int023}] */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ORQI (GETMEMQI (current_cpu, pc, ADDCSI (* FLD (i_xsrc1), EXTSISI (FLD (f_int_2_3)), 1)), SLLQI (GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xsrc1), EXTSISI (FLD (f_int_2_3)))), 8));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LDB___XDEST_____XSRC1_____INT023__) : /* ldb ${xdest},[${xsrc1}+,${int023}] */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xsrc1), EXTSISI (FLD (f_int_2_3))));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LDW___XDEST_____XSRC1_____INT023__) : /* ldw ${xdest},[${xsrc1}+,${int023}] */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ORQI (GETMEMQI (current_cpu, pc, ADDCSI (* FLD (i_xsrc1), EXTSISI (FLD (f_int_2_3)), 1)), SLLQI (GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xsrc1), EXTSISI (FLD (f_int_2_3)))), 8));
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LDB___XDEST______XSRC1____INT023__) : /* ldb ${xdest},[-${xsrc1},${int023}] */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SUBSI (* FLD (i_xsrc1), EXTSISI (FLD (f_int_2_3)));
    * FLD (i_xsrc1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LDW___XDEST______XSRC1____INT023__) : /* ldw ${xdest},[-${xsrc1},${int023}] */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SUBSI (* FLD (i_xsrc1), EXTSISI (FLD (f_int_2_3)));
    * FLD (i_xsrc1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_STB____XDEST____INT023_____XSRC1_) : /* stb [${xdest},${int023}],${xsrc1} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    QI opval = ANDSI (* FLD (i_xsrc1), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xdest), EXTSISI (FLD (f_int_2_3))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_STW____XDEST____INT023_____XSRC1_) : /* stw [${xdest},${int023}],${xsrc1} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    QI opval = ANDSI (* FLD (i_xsrc1), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xdest), EXTSISI (FLD (f_int_2_3))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_STB____XDEST_____INT023_____XSRC1_) : /* stb [${xdest}+,${int023}],${xsrc1} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    QI opval = ANDSI (* FLD (i_xsrc1), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xdest), EXTSISI (FLD (f_int_2_3))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_STW____XDEST_____INT023_____XSRC1_) : /* stw [${xdest}+,${int023}],${xsrc1} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    QI opval = ANDSI (* FLD (i_xsrc1), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_xdest), EXTSISI (FLD (f_int_2_3))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_STB_____XDEST____INT023_____XSRC1_) : /* stb [-${xdest},${int023}],${xsrc1} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_stb_____xdest____int023_____xsrc1_.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SUBSI (* FLD (i_d6), EXTSISI (FLD (f_int_2_3)));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_STW_____XDEST____INT023_____XSRC1_) : /* stw [-${xdest},${int023}],${xsrc1} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_stb_____xdest____int023_____xsrc1_.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = SUBSI (* FLD (i_d6), EXTSISI (FLD (f_int_2_3)));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_NOP) : /* nop ${xdest},${uint056} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

((void) 0); /*nop*/

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_MOVI) : /* movi ${xdest},${uint056} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_movi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = FLD (f_uint_5_6);
    * FLD (i_xdest) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_BAL) : /* bal ${int086},${xsrc2} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_beq.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ADDSI (pc, 1);
    * FLD (i_xsrc2) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_BRA) : /* bra ${int089} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_bra.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ADDSI (pc, EXTSISI (FLD (f_int_8_9)));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);


    }
  ENDSWITCH (sem) /* End of semantic switch.  */

  /* At this point `vpc' contains the next insn to execute.  */
}

#undef DEFINE_SWITCH
#endif /* DEFINE_SWITCH */
