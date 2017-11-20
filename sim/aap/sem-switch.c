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

#ifdef DEFINE_LABELS

  /* The labels have the case they have because the enum of insn types
     is all uppercase and in the non-stdc case the insn symbol is built
     into the enum name.  */

  static struct {
    int index;
    void *label;
  } labels[] = {
    { AAPBF_AAP_INSN_X_INVALID, && case_sem_INSN_X_INVALID },
    { AAPBF_AAP_INSN_X_AFTER, && case_sem_INSN_X_AFTER },
    { AAPBF_AAP_INSN_X_BEFORE, && case_sem_INSN_X_BEFORE },
    { AAPBF_AAP_INSN_X_CTI_CHAIN, && case_sem_INSN_X_CTI_CHAIN },
    { AAPBF_AAP_INSN_X_CHAIN, && case_sem_INSN_X_CHAIN },
    { AAPBF_AAP_INSN_X_BEGIN, && case_sem_INSN_X_BEGIN },
    { AAPBF_AAP_INSN_ADD, && case_sem_INSN_ADD },
    { AAPBF_AAP_INSN_SUB, && case_sem_INSN_SUB },
    { AAPBF_AAP_INSN_AND, && case_sem_INSN_AND },
    { AAPBF_AAP_INSN_OR, && case_sem_INSN_OR },
    { AAPBF_AAP_INSN_XOR, && case_sem_INSN_XOR },
    { AAPBF_AAP_INSN_ASR, && case_sem_INSN_ASR },
    { AAPBF_AAP_INSN_LSL, && case_sem_INSN_LSL },
    { AAPBF_AAP_INSN_LSR, && case_sem_INSN_LSR },
    { AAPBF_AAP_INSN_MOV, && case_sem_INSN_MOV },
    { AAPBF_AAP_INSN_ADDC, && case_sem_INSN_ADDC },
    { AAPBF_AAP_INSN_SUBC, && case_sem_INSN_SUBC },
    { AAPBF_AAP_INSN_JMP, && case_sem_INSN_JMP },
    { AAPBF_AAP_INSN_JAL, && case_sem_INSN_JAL },
    { AAPBF_AAP_INSN_JEQ, && case_sem_INSN_JEQ },
    { AAPBF_AAP_INSN_JNE, && case_sem_INSN_JNE },
    { AAPBF_AAP_INSN_JLTS, && case_sem_INSN_JLTS },
    { AAPBF_AAP_INSN_JLES, && case_sem_INSN_JLES },
    { AAPBF_AAP_INSN_JLTU, && case_sem_INSN_JLTU },
    { AAPBF_AAP_INSN_JLEU, && case_sem_INSN_JLEU },
    { AAPBF_AAP_INSN_JMPL, && case_sem_INSN_JMPL },
    { AAPBF_AAP_INSN_JALL, && case_sem_INSN_JALL },
    { AAPBF_AAP_INSN_JEQL, && case_sem_INSN_JEQL },
    { AAPBF_AAP_INSN_JNEL, && case_sem_INSN_JNEL },
    { AAPBF_AAP_INSN_JLTSL, && case_sem_INSN_JLTSL },
    { AAPBF_AAP_INSN_JLESL, && case_sem_INSN_JLESL },
    { AAPBF_AAP_INSN_JLTUL, && case_sem_INSN_JLTUL },
    { AAPBF_AAP_INSN_JLEUL, && case_sem_INSN_JLEUL },
    { AAPBF_AAP_INSN_ASRI, && case_sem_INSN_ASRI },
    { AAPBF_AAP_INSN_LSLI, && case_sem_INSN_LSLI },
    { AAPBF_AAP_INSN_LSRI, && case_sem_INSN_LSRI },
    { AAPBF_AAP_INSN_ANDI, && case_sem_INSN_ANDI },
    { AAPBF_AAP_INSN_ORI, && case_sem_INSN_ORI },
    { AAPBF_AAP_INSN_XORI, && case_sem_INSN_XORI },
    { AAPBF_AAP_INSN_ADDI, && case_sem_INSN_ADDI },
    { AAPBF_AAP_INSN_SUBI, && case_sem_INSN_SUBI },
    { AAPBF_AAP_INSN_BEQ, && case_sem_INSN_BEQ },
    { AAPBF_AAP_INSN_BNE, && case_sem_INSN_BNE },
    { AAPBF_AAP_INSN_BLTS, && case_sem_INSN_BLTS },
    { AAPBF_AAP_INSN_BLES, && case_sem_INSN_BLES },
    { AAPBF_AAP_INSN_BLTU, && case_sem_INSN_BLTU },
    { AAPBF_AAP_INSN_BLEU, && case_sem_INSN_BLEU },
    { AAPBF_AAP_INSN_LDB___D6_____A6____I10__, && case_sem_INSN_LDB___D6_____A6____I10__ },
    { AAPBF_AAP_INSN_LDW___D6_____A6____I10__, && case_sem_INSN_LDW___D6_____A6____I10__ },
    { AAPBF_AAP_INSN_LDB___D6_____A6_____I10__, && case_sem_INSN_LDB___D6_____A6_____I10__ },
    { AAPBF_AAP_INSN_LDW___D6_____A6_____I10__, && case_sem_INSN_LDW___D6_____A6_____I10__ },
    { AAPBF_AAP_INSN_LDB___D6______A6____I10__, && case_sem_INSN_LDB___D6______A6____I10__ },
    { AAPBF_AAP_INSN_LDW___D6______A6____I10__, && case_sem_INSN_LDW___D6______A6____I10__ },
    { AAPBF_AAP_INSN_STB____D6____I10_____A6_, && case_sem_INSN_STB____D6____I10_____A6_ },
    { AAPBF_AAP_INSN_STW____D6____I10_____A6_, && case_sem_INSN_STW____D6____I10_____A6_ },
    { AAPBF_AAP_INSN_STB____D6_____I10_____A6_, && case_sem_INSN_STB____D6_____I10_____A6_ },
    { AAPBF_AAP_INSN_STW____D6_____I10_____A6_, && case_sem_INSN_STW____D6_____I10_____A6_ },
    { AAPBF_AAP_INSN_STB_____D6____I10_____A6_, && case_sem_INSN_STB_____D6____I10_____A6_ },
    { AAPBF_AAP_INSN_STW_____D6____I10_____A6_, && case_sem_INSN_STW_____D6____I10_____A6_ },
    { AAPBF_AAP_INSN_NOP, && case_sem_INSN_NOP },
    { AAPBF_AAP_INSN_MOVI, && case_sem_INSN_MOVI },
    { AAPBF_AAP_INSN_BAL, && case_sem_INSN_BAL },
    { AAPBF_AAP_INSN_BRA, && case_sem_INSN_BRA },
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
#if WITH_SCACHE_PBB_AAPBF_AAP
    aapbf_aap_pbb_after (current_cpu, sem_arg);
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
#if WITH_SCACHE_PBB_AAPBF_AAP
    aapbf_aap_pbb_before (current_cpu, sem_arg);
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
#if WITH_SCACHE_PBB_AAPBF_AAP
    vpc = aapbf_aap_pbb_chain (current_cpu, sem_arg);
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

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_ADD) : /* add ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ADDSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_SUB) : /* sub ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SUBSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_AND) : /* and ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ANDSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_OR) : /* or ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ORSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_XOR) : /* xor ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = XORSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_ASR) : /* asr ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SRLSI (ORSI (* FLD (i_a6), SLLSI (CPU (h_cf), 16)), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LSL) : /* lsl ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SLLSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LSR) : /* lsr ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SRLSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_MOV) : /* mov ${d6},${a6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = * FLD (i_a6);
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_ADDC) : /* addc ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ADDCSI (* FLD (i_a6), * FLD (i_b6), CPU (h_cf));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_SUBC) : /* subc ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SUBCSI (* FLD (i_a6), * FLD (i_b6), CPU (h_cf));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JMP) : /* jmp ${d6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_movi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = * FLD (i_d6);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JAL) : /* jal ${d6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ADDSI (pc, 2);
    * FLD (i_b6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JEQ) : /* jeq ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JNE) : /* jne ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JLTS) : /* jlts ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JLES) : /* jles ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JLTU) : /* jltu ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JLEU) : /* jleu ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JMPL) : /* jmpl ${d6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_jmpl.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_d6), 1);
    * FLD (i_dest1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JALL) : /* jall ${d6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ADDSI (pc, 2);
    * FLD (i_b6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JEQL) : /* jeql ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_jmpl.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_d6), 1);
    * FLD (i_dest1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JNEL) : /* jnel ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_jmpl.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_d6), 1);
    * FLD (i_dest1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JLTSL) : /* jltsl ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_jmpl.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_d6), 1);
    * FLD (i_dest1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JLESL) : /* jlesl ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_jmpl.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_d6), 1);
    * FLD (i_dest1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JLTUL) : /* jltul ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_jmpl.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_d6), 1);
    * FLD (i_dest1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_JLEUL) : /* jleul ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_jmpl.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_d6), 1);
    * FLD (i_dest1) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_ASRI) : /* asri ${d6},${a6},${i6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asri.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SRLSI (ORSI (* FLD (i_a6), SLLSI (CPU (h_cf), 16)), FLD (f_i_6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LSLI) : /* lsli ${d6},${a6},${i6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asri.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SLLSI (* FLD (i_a6), FLD (f_i_6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LSRI) : /* lsri ${d6},${a6},${i6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asri.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SRLSI (* FLD (i_a6), FLD (f_i_6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_ANDI) : /* andi ${d6},${a6},${i9} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_ORI) : /* ori ${d6},${a6},${i9} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_XORI) : /* xori ${d6},${a6},${i9} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_ADDI) : /* addi ${d6},${a6},${i10} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ADDSI (* FLD (i_a6), FLD (f_i_10));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_SUBI) : /* subi ${d6},${a6},${i10} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SUBSI (* FLD (i_a6), FLD (f_i_10));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_BEQ) : /* beq ${s10},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_BNE) : /* bne ${s10},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_BLTS) : /* blts ${s10},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_BLES) : /* bles ${s10},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_BLTU) : /* bltu ${s10},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_BLEU) : /* bleu ${s10},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LDB___D6_____A6____I10__) : /* ldb ${d6},[${a6},${i10}] */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_a6), EXTSISI (FLD (f_i_10))));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LDW___D6_____A6____I10__) : /* ldw ${d6},[${a6},${i10}] */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ORQI (GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_a6), EXTSISI (FLD (f_i_10)))), SLLQI (GETMEMQI (current_cpu, pc, ADDCSI (* FLD (i_a6), EXTSISI (FLD (f_i_10)), 1)), 8));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LDB___D6_____A6_____I10__) : /* ldb ${d6},[${a6}+,${i10}] */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_a6), EXTSISI (FLD (f_i_10))));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LDW___D6_____A6_____I10__) : /* ldw ${d6},[${a6}+,${i10}] */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ORQI (GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_a6), EXTSISI (FLD (f_i_10)))), SLLQI (GETMEMQI (current_cpu, pc, ADDCSI (* FLD (i_a6), EXTSISI (FLD (f_i_10)), 1)), 8));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LDB___D6______A6____I10__) : /* ldb ${d6},[-${a6},${i10}] */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SUBSI (* FLD (i_a6), EXTSISI (FLD (f_i_10)));
    * FLD (i_a6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_LDW___D6______A6____I10__) : /* ldw ${d6},[-${a6},${i10}] */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ADDSI (* FLD (i_a6), EXTSISI (FLD (f_i_10)));
    * FLD (i_a6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_STB____D6____I10_____A6_) : /* stb [${d6},${i10}],${a6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDSI (* FLD (i_a6), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_d6), EXTSISI (FLD (f_i_10))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_STW____D6____I10_____A6_) : /* stw [${d6},${i10}],${a6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDSI (* FLD (i_a6), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_d6), EXTSISI (FLD (f_i_10))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_STB____D6_____I10_____A6_) : /* stb [${d6}+,${i10}],${a6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDSI (* FLD (i_a6), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_d6), EXTSISI (FLD (f_i_10))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_STW____D6_____I10_____A6_) : /* stw [${d6}+,${i10}],${a6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDSI (* FLD (i_a6), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_d6), EXTSISI (FLD (f_i_10))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_STB_____D6____I10_____A6_) : /* stb [-${d6},${i10}],${a6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SUBSI (* FLD (i_d6), EXTSISI (FLD (f_i_10)));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_STW_____D6____I10_____A6_) : /* stw [-${d6},${i10}],${a6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = SUBSI (* FLD (i_d6), EXTSISI (FLD (f_i_10)));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_NOP) : /* nop ${d6},${i12} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_nop.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (LEUSI (FLD (f_i_12), 4)) {
  {
    SI opval = FLD (f_i_12);
    * FLD (i_d6) = opval;
    written |= (1 << 2);
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }
}

  abuf->written = written;
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_MOVI) : /* movi ${d6},${i16} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_movi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = FLD (f_i_16);
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_BAL) : /* bal ${s16},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_asr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = ADDSI (pc, 2);
    * FLD (i_b6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_BRA) : /* bra ${s22} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_bra.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, EXTSISI (FLD (f_s_22)));
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
