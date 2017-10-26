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
    { AAPBF_INSN_X_INVALID, && case_sem_INSN_X_INVALID },
    { AAPBF_INSN_X_AFTER, && case_sem_INSN_X_AFTER },
    { AAPBF_INSN_X_BEFORE, && case_sem_INSN_X_BEFORE },
    { AAPBF_INSN_X_CTI_CHAIN, && case_sem_INSN_X_CTI_CHAIN },
    { AAPBF_INSN_X_CHAIN, && case_sem_INSN_X_CHAIN },
    { AAPBF_INSN_X_BEGIN, && case_sem_INSN_X_BEGIN },
    { AAPBF_INSN_L_ADD32, && case_sem_INSN_L_ADD32 },
    { AAPBF_INSN_L_SUB32, && case_sem_INSN_L_SUB32 },
    { AAPBF_INSN_L_AND32, && case_sem_INSN_L_AND32 },
    { AAPBF_INSN_L_OR32, && case_sem_INSN_L_OR32 },
    { AAPBF_INSN_L_XOR32, && case_sem_INSN_L_XOR32 },
    { AAPBF_INSN_L_ASR32, && case_sem_INSN_L_ASR32 },
    { AAPBF_INSN_L_LSL32, && case_sem_INSN_L_LSL32 },
    { AAPBF_INSN_L_LSR32, && case_sem_INSN_L_LSR32 },
    { AAPBF_INSN_L_MOV32, && case_sem_INSN_L_MOV32 },
    { AAPBF_INSN_L_ADDC32, && case_sem_INSN_L_ADDC32 },
    { AAPBF_INSN_L_SUBC32, && case_sem_INSN_L_SUBC32 },
    { AAPBF_INSN_L_JMP32, && case_sem_INSN_L_JMP32 },
    { AAPBF_INSN_L_JAL32, && case_sem_INSN_L_JAL32 },
    { AAPBF_INSN_L_JEQ32, && case_sem_INSN_L_JEQ32 },
    { AAPBF_INSN_L_JNE32, && case_sem_INSN_L_JNE32 },
    { AAPBF_INSN_L_JLTS32, && case_sem_INSN_L_JLTS32 },
    { AAPBF_INSN_L_JLES32, && case_sem_INSN_L_JLES32 },
    { AAPBF_INSN_L_JLTU32, && case_sem_INSN_L_JLTU32 },
    { AAPBF_INSN_L_JLEU32, && case_sem_INSN_L_JLEU32 },
    { AAPBF_INSN_L_JMPL32, && case_sem_INSN_L_JMPL32 },
    { AAPBF_INSN_L_JALL32, && case_sem_INSN_L_JALL32 },
    { AAPBF_INSN_L_JEQL32, && case_sem_INSN_L_JEQL32 },
    { AAPBF_INSN_L_JNEL32, && case_sem_INSN_L_JNEL32 },
    { AAPBF_INSN_L_JLTSL32, && case_sem_INSN_L_JLTSL32 },
    { AAPBF_INSN_L_JLESL32, && case_sem_INSN_L_JLESL32 },
    { AAPBF_INSN_L_JLTUL32, && case_sem_INSN_L_JLTUL32 },
    { AAPBF_INSN_L_JLEUL32, && case_sem_INSN_L_JLEUL32 },
    { AAPBF_INSN_L_ASRI32, && case_sem_INSN_L_ASRI32 },
    { AAPBF_INSN_L_LSLI32, && case_sem_INSN_L_LSLI32 },
    { AAPBF_INSN_L_LSRI32, && case_sem_INSN_L_LSRI32 },
    { AAPBF_INSN_L_ANDI32, && case_sem_INSN_L_ANDI32 },
    { AAPBF_INSN_L_ORI32, && case_sem_INSN_L_ORI32 },
    { AAPBF_INSN_L_XORI32, && case_sem_INSN_L_XORI32 },
    { AAPBF_INSN_L_ADDI32, && case_sem_INSN_L_ADDI32 },
    { AAPBF_INSN_L_SUBI32, && case_sem_INSN_L_SUBI32 },
    { AAPBF_INSN_L_BEQ32, && case_sem_INSN_L_BEQ32 },
    { AAPBF_INSN_L_BNE32, && case_sem_INSN_L_BNE32 },
    { AAPBF_INSN_L_BLTS32, && case_sem_INSN_L_BLTS32 },
    { AAPBF_INSN_L_BLES32, && case_sem_INSN_L_BLES32 },
    { AAPBF_INSN_L_BLTU32, && case_sem_INSN_L_BLTU32 },
    { AAPBF_INSN_L_BLEU32, && case_sem_INSN_L_BLEU32 },
    { AAPBF_INSN_L_LDB32___D6_____A6____I10__, && case_sem_INSN_L_LDB32___D6_____A6____I10__ },
    { AAPBF_INSN_L_LDW32___D6_____A6____I10__, && case_sem_INSN_L_LDW32___D6_____A6____I10__ },
    { AAPBF_INSN_L_LDB32___D6_____A6_____I10__, && case_sem_INSN_L_LDB32___D6_____A6_____I10__ },
    { AAPBF_INSN_L_LDW32___D6_____A6_____I10__, && case_sem_INSN_L_LDW32___D6_____A6_____I10__ },
    { AAPBF_INSN_L_LDB32___D6______A6____I10__, && case_sem_INSN_L_LDB32___D6______A6____I10__ },
    { AAPBF_INSN_L_LDW32___D6______A6____I10__, && case_sem_INSN_L_LDW32___D6______A6____I10__ },
    { AAPBF_INSN_L_SDB32____D6____I10_____A6_, && case_sem_INSN_L_SDB32____D6____I10_____A6_ },
    { AAPBF_INSN_L_SDW32____D6____I10_____A6_, && case_sem_INSN_L_SDW32____D6____I10_____A6_ },
    { AAPBF_INSN_L_SDB32____D6_____I10_____A6_, && case_sem_INSN_L_SDB32____D6_____I10_____A6_ },
    { AAPBF_INSN_L_SDW32____D6_____I10_____A6_, && case_sem_INSN_L_SDW32____D6_____I10_____A6_ },
    { AAPBF_INSN_L_SDB32_____D6____I10_____A6_, && case_sem_INSN_L_SDB32_____D6____I10_____A6_ },
    { AAPBF_INSN_L_SDW32_____D6____I10_____A6_, && case_sem_INSN_L_SDW32_____D6____I10_____A6_ },
    { AAPBF_INSN_L_NOP32, && case_sem_INSN_L_NOP32 },
    { AAPBF_INSN_L_MOVI32, && case_sem_INSN_L_MOVI32 },
    { AAPBF_INSN_L_BAL32, && case_sem_INSN_L_BAL32 },
    { AAPBF_INSN_L_BRA32, && case_sem_INSN_L_BRA32 },
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
#if WITH_SCACHE_PBB_AAPBF
    aapbf_pbb_after (current_cpu, sem_arg);
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
#if WITH_SCACHE_PBB_AAPBF
    aapbf_pbb_before (current_cpu, sem_arg);
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
#if WITH_SCACHE_PBB_AAPBF
    vpc = aapbf_pbb_chain (current_cpu, sem_arg);
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

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_ADD32) : /* l.add32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SUB32) : /* l.sub32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SUBSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_AND32) : /* l.and32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ANDSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_OR32) : /* l.or32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ORSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_XOR32) : /* l.xor32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = XORSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_ASR32) : /* l.asr32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SRLSI (ORSI (* FLD (i_a6), SLLSI (CPU (h_cf), 16)), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_LSL32) : /* l.lsl32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SLLSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_LSR32) : /* l.lsr32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SRLSI (* FLD (i_a6), * FLD (i_b6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_MOV32) : /* l.mov32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = * FLD (i_a6);
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_ADDC32) : /* l.addc32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDCSI (* FLD (i_a6), * FLD (i_b6), CPU (h_cf));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SUBC32) : /* l.subc32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_asr32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SUBCSI (* FLD (i_a6), * FLD (i_b6), CPU (h_cf));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_JMP32) : /* l.jmp32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_movi32.f
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

  CASE (sem, INSN_L_JAL32) : /* l.jal32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_beq32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    * FLD (i_b6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_JEQ32) : /* l.jeq32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_asr32.f
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

  CASE (sem, INSN_L_JNE32) : /* l.jne32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_asr32.f
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

  CASE (sem, INSN_L_JLTS32) : /* l.jlts32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_asr32.f
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

  CASE (sem, INSN_L_JLES32) : /* l.jles32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_asr32.f
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

  CASE (sem, INSN_L_JLTU32) : /* l.jltu32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_asr32.f
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

  CASE (sem, INSN_L_JLEU32) : /* l.jleu32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_asr32.f
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

  CASE (sem, INSN_L_JMPL32) : /* l.jmpl32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_jmpl32.f
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

  CASE (sem, INSN_L_JALL32) : /* l.jall32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_beq32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    * FLD (i_b6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_JEQL32) : /* l.jeql32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_jmpl32.f
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

  CASE (sem, INSN_L_JNEL32) : /* l.jnel32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_jmpl32.f
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

  CASE (sem, INSN_L_JLTSL32) : /* l.jltsl32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_jmpl32.f
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

  CASE (sem, INSN_L_JLESL32) : /* l.jlesl32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_jmpl32.f
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

  CASE (sem, INSN_L_JLTUL32) : /* l.jltul32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_jmpl32.f
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

  CASE (sem, INSN_L_JLEUL32) : /* l.jleul32 ${d6},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_jmpl32.f
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

  CASE (sem, INSN_L_ASRI32) : /* l.asri32 ${d6},${a6},${i6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_asri32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SRLSI (ORSI (* FLD (i_a6), SLLSI (CPU (h_cf), 16)), FLD (f_i_6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_LSLI32) : /* l.lsli32 ${d6},${a6},${i6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_asri32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SLLSI (* FLD (i_a6), FLD (f_i_6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_LSRI32) : /* l.lsri32 ${d6},${a6},${i6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_asri32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SRLSI (* FLD (i_a6), FLD (f_i_6));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_ANDI32) : /* l.andi32 ${d6},${a6},${i10i} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_andi32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ANDSI (* FLD (i_a6), FLD (f_i_10i));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_ORI32) : /* l.ori32 ${d6},${a6},${i10i} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_andi32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ORSI (* FLD (i_a6), FLD (f_i_10i));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_XORI32) : /* l.xori32 ${d6},${a6},${i10i} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_andi32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = XORSI (* FLD (i_a6), FLD (f_i_10i));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_ADDI32) : /* l.addi32 ${d6},${a6},${i10} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_a6), FLD (f_i_10));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SUBI32) : /* l.subi32 ${d6},${a6},${i10} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SUBSI (* FLD (i_a6), FLD (f_i_10));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_BEQ32) : /* l.beq32 ${s10},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_beq32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_BNE32) : /* l.bne32 ${s10},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_beq32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_BLTS32) : /* l.blts32 ${s10},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_beq32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_BLES32) : /* l.bles32 ${s10},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_beq32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_BLTU32) : /* l.bltu32 ${s10},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_beq32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_BLEU32) : /* l.bleu32 ${s10},${a6},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_beq32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

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
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_LDB32___D6_____A6____I10__) : /* l.ldb32 ${d6},(${a6},${i10}) */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_a6), EXTHISI (TRUNCSIHI (FLD (f_i_10)))));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_LDW32___D6_____A6____I10__) : /* l.ldw32 ${d6},(${a6},${i10}) */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ORQI (GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_a6), EXTHISI (TRUNCSIHI (FLD (f_i_10))))), SLLQI (GETMEMQI (current_cpu, pc, ADDCSI (* FLD (i_a6), EXTHISI (TRUNCSIHI (FLD (f_i_10))), 1)), 8));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_LDB32___D6_____A6_____I10__) : /* l.ldb32 ${d6},(${a6}+,${i10}) */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_a6), EXTHISI (TRUNCSIHI (FLD (f_i_10)))));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_LDW32___D6_____A6_____I10__) : /* l.ldw32 ${d6},(${a6}+,${i10}) */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ORQI (GETMEMQI (current_cpu, pc, ADDSI (* FLD (i_a6), EXTHISI (TRUNCSIHI (FLD (f_i_10))))), SLLQI (GETMEMQI (current_cpu, pc, ADDCSI (* FLD (i_a6), EXTHISI (TRUNCSIHI (FLD (f_i_10))), 1)), 8));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_LDB32___D6______A6____I10__) : /* l.ldb32 ${d6},(-${a6},${i10}) */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SUBSI (* FLD (i_a6), EXTHISI (TRUNCSIHI (FLD (f_i_10))));
    * FLD (i_a6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_LDW32___D6______A6____I10__) : /* l.ldw32 ${d6},(-${a6},${i10}) */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (* FLD (i_a6), EXTHISI (TRUNCSIHI (FLD (f_i_10))));
    * FLD (i_a6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SDB32____D6____I10_____A6_) : /* l.sdb32 (${d6},${i10}),${a6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDSI (* FLD (i_a6), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_d6), EXTHISI (TRUNCSIHI (FLD (f_i_10)))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SDW32____D6____I10_____A6_) : /* l.sdw32 (${d6},${i10}),${a6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDSI (* FLD (i_a6), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_d6), EXTHISI (TRUNCSIHI (FLD (f_i_10)))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SDB32____D6_____I10_____A6_) : /* l.sdb32 (${d6}+,${i10}),${a6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDSI (* FLD (i_a6), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_d6), EXTHISI (TRUNCSIHI (FLD (f_i_10)))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SDW32____D6_____I10_____A6_) : /* l.sdw32 (${d6}+,${i10}),${a6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    QI opval = ANDSI (* FLD (i_a6), 255);
    SETMEMQI (current_cpu, pc, ADDSI (* FLD (i_d6), EXTHISI (TRUNCSIHI (FLD (f_i_10)))), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SDB32_____D6____I10_____A6_) : /* l.sdb32 (-${d6},${i10}),${a6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SUBSI (* FLD (i_d6), EXTHISI (TRUNCSIHI (FLD (f_i_10))));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SDW32_____D6____I10_____A6_) : /* l.sdw32 (-${d6},${i10}),${a6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = SUBSI (* FLD (i_d6), EXTHISI (TRUNCSIHI (FLD (f_i_10))));
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_NOP32) : /* l.nop32 ${d6},${i12} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_MOVI32) : /* l.movi32 ${d6},${i16} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_movi32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = FLD (f_i_16);
    * FLD (i_d6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_BAL32) : /* l.bal32 ${s16},${b6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_beq32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, 2);
    * FLD (i_b6) = opval;
    TRACE_RESULT (current_cpu, abuf, "gpr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_BRA32) : /* l.bra32 ${s22} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_bra32.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = ADDSI (pc, EXTHISI (TRUNCSIHI (FLD (f_s_22))));
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
