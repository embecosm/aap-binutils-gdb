/* Simulator instruction decoder for aapbf_aap32.

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
#include "sim-assert.h"

/* The instruction descriptor array.
   This is computed at runtime.  Space for it is not malloc'd to save a
   teensy bit of cpu in the decoder.  Moving it to malloc space is trivial
   but won't be done until necessary (we don't currently support the runtime
   addition of instructions nor an SMP machine with different cpus).  */
static IDESC aapbf_aap32_insn_data[AAPBF_AAP32_INSN__MAX];

/* Commas between elements are contained in the macros.
   Some of these are conditionally compiled out.  */

static const struct insn_sem aapbf_aap32_insn_sem[] =
{
  { VIRTUAL_INSN_X_INVALID, AAPBF_AAP32_INSN_X_INVALID, AAPBF_AAP32_SFMT_EMPTY },
  { VIRTUAL_INSN_X_AFTER, AAPBF_AAP32_INSN_X_AFTER, AAPBF_AAP32_SFMT_EMPTY },
  { VIRTUAL_INSN_X_BEFORE, AAPBF_AAP32_INSN_X_BEFORE, AAPBF_AAP32_SFMT_EMPTY },
  { VIRTUAL_INSN_X_CTI_CHAIN, AAPBF_AAP32_INSN_X_CTI_CHAIN, AAPBF_AAP32_SFMT_EMPTY },
  { VIRTUAL_INSN_X_CHAIN, AAPBF_AAP32_INSN_X_CHAIN, AAPBF_AAP32_SFMT_EMPTY },
  { VIRTUAL_INSN_X_BEGIN, AAPBF_AAP32_INSN_X_BEGIN, AAPBF_AAP32_SFMT_EMPTY },
  { AAP_INSN_ADD, AAPBF_AAP32_INSN_ADD, AAPBF_AAP32_SFMT_ADD },
  { AAP_INSN_SUB, AAPBF_AAP32_INSN_SUB, AAPBF_AAP32_SFMT_ADD },
  { AAP_INSN_AND, AAPBF_AAP32_INSN_AND, AAPBF_AAP32_SFMT_ADD },
  { AAP_INSN_OR, AAPBF_AAP32_INSN_OR, AAPBF_AAP32_SFMT_ADD },
  { AAP_INSN_XOR, AAPBF_AAP32_INSN_XOR, AAPBF_AAP32_SFMT_ADD },
  { AAP_INSN_ASR, AAPBF_AAP32_INSN_ASR, AAPBF_AAP32_SFMT_ASR },
  { AAP_INSN_LSL, AAPBF_AAP32_INSN_LSL, AAPBF_AAP32_SFMT_ADD },
  { AAP_INSN_LSR, AAPBF_AAP32_INSN_LSR, AAPBF_AAP32_SFMT_ADD },
  { AAP_INSN_MOV, AAPBF_AAP32_INSN_MOV, AAPBF_AAP32_SFMT_MOV },
  { AAP_INSN_ADDC, AAPBF_AAP32_INSN_ADDC, AAPBF_AAP32_SFMT_ASR },
  { AAP_INSN_SUBC, AAPBF_AAP32_INSN_SUBC, AAPBF_AAP32_SFMT_ASR },
  { AAP_INSN_JMP, AAPBF_AAP32_INSN_JMP, AAPBF_AAP32_SFMT_JMP },
  { AAP_INSN_JAL, AAPBF_AAP32_INSN_JAL, AAPBF_AAP32_SFMT_JAL },
  { AAP_INSN_JEQ, AAPBF_AAP32_INSN_JEQ, AAPBF_AAP32_SFMT_JEQ },
  { AAP_INSN_JNE, AAPBF_AAP32_INSN_JNE, AAPBF_AAP32_SFMT_JEQ },
  { AAP_INSN_JLTS, AAPBF_AAP32_INSN_JLTS, AAPBF_AAP32_SFMT_JEQ },
  { AAP_INSN_JLES, AAPBF_AAP32_INSN_JLES, AAPBF_AAP32_SFMT_JEQ },
  { AAP_INSN_JLTU, AAPBF_AAP32_INSN_JLTU, AAPBF_AAP32_SFMT_JEQ },
  { AAP_INSN_JLEU, AAPBF_AAP32_INSN_JLEU, AAPBF_AAP32_SFMT_JEQ },
  { AAP_INSN_JMPL, AAPBF_AAP32_INSN_JMPL, AAPBF_AAP32_SFMT_JMPL },
  { AAP_INSN_JALL, AAPBF_AAP32_INSN_JALL, AAPBF_AAP32_SFMT_JAL },
  { AAP_INSN_JEQL, AAPBF_AAP32_INSN_JEQL, AAPBF_AAP32_SFMT_JMPL },
  { AAP_INSN_JNEL, AAPBF_AAP32_INSN_JNEL, AAPBF_AAP32_SFMT_JMPL },
  { AAP_INSN_JLTSL, AAPBF_AAP32_INSN_JLTSL, AAPBF_AAP32_SFMT_JMPL },
  { AAP_INSN_JLESL, AAPBF_AAP32_INSN_JLESL, AAPBF_AAP32_SFMT_JMPL },
  { AAP_INSN_JLTUL, AAPBF_AAP32_INSN_JLTUL, AAPBF_AAP32_SFMT_JMPL },
  { AAP_INSN_JLEUL, AAPBF_AAP32_INSN_JLEUL, AAPBF_AAP32_SFMT_JMPL },
  { AAP_INSN_ASRI, AAPBF_AAP32_INSN_ASRI, AAPBF_AAP32_SFMT_ASRI },
  { AAP_INSN_LSLI, AAPBF_AAP32_INSN_LSLI, AAPBF_AAP32_SFMT_LSLI },
  { AAP_INSN_LSRI, AAPBF_AAP32_INSN_LSRI, AAPBF_AAP32_SFMT_LSLI },
  { AAP_INSN_ANDI, AAPBF_AAP32_INSN_ANDI, AAPBF_AAP32_SFMT_ANDI },
  { AAP_INSN_ORI, AAPBF_AAP32_INSN_ORI, AAPBF_AAP32_SFMT_ANDI },
  { AAP_INSN_XORI, AAPBF_AAP32_INSN_XORI, AAPBF_AAP32_SFMT_ANDI },
  { AAP_INSN_ADDI, AAPBF_AAP32_INSN_ADDI, AAPBF_AAP32_SFMT_ADDI },
  { AAP_INSN_SUBI, AAPBF_AAP32_INSN_SUBI, AAPBF_AAP32_SFMT_ADDI },
  { AAP_INSN_BEQ, AAPBF_AAP32_INSN_BEQ, AAPBF_AAP32_SFMT_ANDI },
  { AAP_INSN_BNE, AAPBF_AAP32_INSN_BNE, AAPBF_AAP32_SFMT_ANDI },
  { AAP_INSN_BLTS, AAPBF_AAP32_INSN_BLTS, AAPBF_AAP32_SFMT_ANDI },
  { AAP_INSN_BLES, AAPBF_AAP32_INSN_BLES, AAPBF_AAP32_SFMT_ANDI },
  { AAP_INSN_BLTU, AAPBF_AAP32_INSN_BLTU, AAPBF_AAP32_SFMT_ANDI },
  { AAP_INSN_BLEU, AAPBF_AAP32_INSN_BLEU, AAPBF_AAP32_SFMT_ANDI },
  { AAP_INSN_LDB___D6_____A6____S10_13__, AAPBF_AAP32_INSN_LDB___D6_____A6____S10_13__, AAPBF_AAP32_SFMT_LDB___D6_____A6____S10_13__ },
  { AAP_INSN_LDW___D6_____A6____S10_13__, AAPBF_AAP32_INSN_LDW___D6_____A6____S10_13__, AAPBF_AAP32_SFMT_LDW___D6_____A6____S10_13__ },
  { AAP_INSN_LDB___D6_____A6_____S10_13__, AAPBF_AAP32_INSN_LDB___D6_____A6_____S10_13__, AAPBF_AAP32_SFMT_LDB___D6_____A6____S10_13__ },
  { AAP_INSN_LDW___D6_____A6_____S10_13__, AAPBF_AAP32_INSN_LDW___D6_____A6_____S10_13__, AAPBF_AAP32_SFMT_LDW___D6_____A6____S10_13__ },
  { AAP_INSN_LDB___D6______A6____S10_13__, AAPBF_AAP32_INSN_LDB___D6______A6____S10_13__, AAPBF_AAP32_SFMT_LDB___D6______A6____S10_13__ },
  { AAP_INSN_LDW___D6______A6____S10_13__, AAPBF_AAP32_INSN_LDW___D6______A6____S10_13__, AAPBF_AAP32_SFMT_LDB___D6______A6____S10_13__ },
  { AAP_INSN_STB____D6____S10_13_____A6_, AAPBF_AAP32_INSN_STB____D6____S10_13_____A6_, AAPBF_AAP32_SFMT_STB____D6____S10_13_____A6_ },
  { AAP_INSN_STW____D6____S10_13_____A6_, AAPBF_AAP32_INSN_STW____D6____S10_13_____A6_, AAPBF_AAP32_SFMT_STB____D6____S10_13_____A6_ },
  { AAP_INSN_STB____D6_____S10_13_____A6_, AAPBF_AAP32_INSN_STB____D6_____S10_13_____A6_, AAPBF_AAP32_SFMT_STB____D6____S10_13_____A6_ },
  { AAP_INSN_STW____D6_____S10_13_____A6_, AAPBF_AAP32_INSN_STW____D6_____S10_13_____A6_, AAPBF_AAP32_SFMT_STB____D6____S10_13_____A6_ },
  { AAP_INSN_STB_____D6____S10_13_____A6_, AAPBF_AAP32_INSN_STB_____D6____S10_13_____A6_, AAPBF_AAP32_SFMT_STB_____D6____S10_13_____A6_ },
  { AAP_INSN_STW_____D6____S10_13_____A6_, AAPBF_AAP32_INSN_STW_____D6____S10_13_____A6_, AAPBF_AAP32_SFMT_STB_____D6____S10_13_____A6_ },
  { AAP_INSN_NOP, AAPBF_AAP32_INSN_NOP, AAPBF_AAP32_SFMT_NOP },
  { AAP_INSN_MOVI, AAPBF_AAP32_INSN_MOVI, AAPBF_AAP32_SFMT_MOVI },
  { AAP_INSN_BAL, AAPBF_AAP32_INSN_BAL, AAPBF_AAP32_SFMT_BAL },
  { AAP_INSN_BRA, AAPBF_AAP32_INSN_BRA, AAPBF_AAP32_SFMT_BRA },
};

static const struct insn_sem aapbf_aap32_insn_sem_invalid =
{
  VIRTUAL_INSN_X_INVALID, AAPBF_AAP32_INSN_X_INVALID, AAPBF_AAP32_SFMT_EMPTY
};

/* Initialize an IDESC from the compile-time computable parts.  */

static INLINE void
init_idesc (SIM_CPU *cpu, IDESC *id, const struct insn_sem *t)
{
  const CGEN_INSN *insn_table = CGEN_CPU_INSN_TABLE (CPU_CPU_DESC (cpu))->init_entries;

  id->num = t->index;
  id->sfmt = t->sfmt;
  if ((int) t->type <= 0)
    id->idata = & cgen_virtual_insn_table[- (int) t->type];
  else
    id->idata = & insn_table[t->type];
  id->attrs = CGEN_INSN_ATTRS (id->idata);
  /* Oh my god, a magic number.  */
  id->length = CGEN_INSN_BITSIZE (id->idata) / 8;

#if WITH_PROFILE_MODEL_P
  id->timing = & MODEL_TIMING (CPU_MODEL (cpu)) [t->index];
  {
    SIM_DESC sd = CPU_STATE (cpu);
    SIM_ASSERT (t->index == id->timing->num);
  }
#endif

  /* Semantic pointers are initialized elsewhere.  */
}

/* Initialize the instruction descriptor table.  */

void
aapbf_aap32_init_idesc_table (SIM_CPU *cpu)
{
  IDESC *id,*tabend;
  const struct insn_sem *t,*tend;
  int tabsize = AAPBF_AAP32_INSN__MAX;
  IDESC *table = aapbf_aap32_insn_data;

  memset (table, 0, tabsize * sizeof (IDESC));

  /* First set all entries to the `invalid insn'.  */
  t = & aapbf_aap32_insn_sem_invalid;
  for (id = table, tabend = table + tabsize; id < tabend; ++id)
    init_idesc (cpu, id, t);

  /* Now fill in the values for the chosen cpu.  */
  for (t = aapbf_aap32_insn_sem, tend = t + sizeof (aapbf_aap32_insn_sem) / sizeof (*t);
       t != tend; ++t)
    {
      init_idesc (cpu, & table[t->index], t);
    }

  /* Link the IDESC table into the cpu.  */
  CPU_IDESC (cpu) = table;
}

/* Given an instruction, return a pointer to its IDESC entry.  */

const IDESC *
aapbf_aap32_decode (SIM_CPU *current_cpu, IADDR pc,
              CGEN_INSN_WORD base_insn, CGEN_INSN_WORD entire_insn,
              ARGBUF *abuf)
{
  /* Result of decoder.  */
  AAPBF_AAP32_INSN_TYPE itype;

  {
    CGEN_INSN_WORD insn = base_insn;

    {
      unsigned int val = (((insn >> 19) & (1 << 6)) | ((insn >> 9) & (63 << 0)));
      switch (val)
      {
      case 0 :
        if ((entire_insn & 0xfe00fe00) == 0x8000)
          { itype = AAPBF_AAP32_INSN_NOP; goto extract_sfmt_nop; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 1 :
        if ((entire_insn & 0xfe00fe00) == 0x8200)
          { itype = AAPBF_AAP32_INSN_ADD; goto extract_sfmt_add; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 2 :
        if ((entire_insn & 0xfe00fe00) == 0x8400)
          { itype = AAPBF_AAP32_INSN_SUB; goto extract_sfmt_add; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 3 :
        if ((entire_insn & 0xfe00fe00) == 0x8600)
          { itype = AAPBF_AAP32_INSN_AND; goto extract_sfmt_add; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 4 :
        if ((entire_insn & 0xfe00fe00) == 0x8800)
          { itype = AAPBF_AAP32_INSN_OR; goto extract_sfmt_add; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 5 :
        if ((entire_insn & 0xfe00fe00) == 0x8a00)
          { itype = AAPBF_AAP32_INSN_XOR; goto extract_sfmt_add; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 6 :
        if ((entire_insn & 0xfe00fe00) == 0x8c00)
          { itype = AAPBF_AAP32_INSN_ASR; goto extract_sfmt_asr; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 7 :
        if ((entire_insn & 0xfe00fe00) == 0x8e00)
          { itype = AAPBF_AAP32_INSN_LSL; goto extract_sfmt_add; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 8 :
        if ((entire_insn & 0xfe00fe00) == 0x9000)
          { itype = AAPBF_AAP32_INSN_LSR; goto extract_sfmt_add; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 9 :
        if ((entire_insn & 0xfe00fe00) == 0x9200)
          { itype = AAPBF_AAP32_INSN_MOV; goto extract_sfmt_mov; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 10 : /* fall through */
      case 74 :
        if ((entire_insn & 0xe000fe00) == 0x9400)
          { itype = AAPBF_AAP32_INSN_ADDI; goto extract_sfmt_addi; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 11 : /* fall through */
      case 75 :
        if ((entire_insn & 0xe000fe00) == 0x9600)
          { itype = AAPBF_AAP32_INSN_SUBI; goto extract_sfmt_addi; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 12 :
        if ((entire_insn & 0xfe00fe00) == 0x9800)
          { itype = AAPBF_AAP32_INSN_ASRI; goto extract_sfmt_asri; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 13 :
        if ((entire_insn & 0xfe00fe00) == 0x9a00)
          { itype = AAPBF_AAP32_INSN_LSLI; goto extract_sfmt_lsli; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 14 :
        if ((entire_insn & 0xfe00fe00) == 0x9c00)
          { itype = AAPBF_AAP32_INSN_LSRI; goto extract_sfmt_lsli; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 15 : /* fall through */
      case 79 :
        if ((entire_insn & 0xe000fe00) == 0x9e00)
          { itype = AAPBF_AAP32_INSN_MOVI; goto extract_sfmt_movi; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 16 : /* fall through */
      case 80 :
        if ((entire_insn & 0xe000fe00) == 0xa000)
          { itype = AAPBF_AAP32_INSN_LDB___D6_____A6____S10_13__; goto extract_sfmt_ldb___d6_____a6____s10_13__; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 17 : /* fall through */
      case 81 :
        if ((entire_insn & 0xe000fe00) == 0xa200)
          { itype = AAPBF_AAP32_INSN_LDB___D6_____A6_____S10_13__; goto extract_sfmt_ldb___d6_____a6____s10_13__; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 18 : /* fall through */
      case 82 :
        if ((entire_insn & 0xe000fe00) == 0xa400)
          { itype = AAPBF_AAP32_INSN_LDB___D6______A6____S10_13__; goto extract_sfmt_ldb___d6______a6____s10_13__; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 20 : /* fall through */
      case 84 :
        if ((entire_insn & 0xe000fe00) == 0xa800)
          { itype = AAPBF_AAP32_INSN_LDW___D6_____A6____S10_13__; goto extract_sfmt_ldw___d6_____a6____s10_13__; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 21 : /* fall through */
      case 85 :
        if ((entire_insn & 0xe000fe00) == 0xaa00)
          { itype = AAPBF_AAP32_INSN_LDW___D6_____A6_____S10_13__; goto extract_sfmt_ldw___d6_____a6____s10_13__; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 22 : /* fall through */
      case 86 :
        if ((entire_insn & 0xe000fe00) == 0xac00)
          { itype = AAPBF_AAP32_INSN_LDW___D6______A6____S10_13__; goto extract_sfmt_ldb___d6______a6____s10_13__; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 24 : /* fall through */
      case 88 :
        if ((entire_insn & 0xe000fe00) == 0xb000)
          { itype = AAPBF_AAP32_INSN_STB____D6____S10_13_____A6_; goto extract_sfmt_stb____d6____s10_13_____a6_; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 25 : /* fall through */
      case 89 :
        if ((entire_insn & 0xe000fe00) == 0xb200)
          { itype = AAPBF_AAP32_INSN_STB____D6_____S10_13_____A6_; goto extract_sfmt_stb____d6____s10_13_____a6_; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 26 : /* fall through */
      case 90 :
        if ((entire_insn & 0xe000fe00) == 0xb400)
          { itype = AAPBF_AAP32_INSN_STB_____D6____S10_13_____A6_; goto extract_sfmt_stb_____d6____s10_13_____a6_; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 28 : /* fall through */
      case 92 :
        if ((entire_insn & 0xe000fe00) == 0xb800)
          { itype = AAPBF_AAP32_INSN_STW____D6____S10_13_____A6_; goto extract_sfmt_stb____d6____s10_13_____a6_; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 29 : /* fall through */
      case 93 :
        if ((entire_insn & 0xe000fe00) == 0xba00)
          { itype = AAPBF_AAP32_INSN_STW____D6_____S10_13_____A6_; goto extract_sfmt_stb____d6____s10_13_____a6_; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 30 : /* fall through */
      case 94 :
        if ((entire_insn & 0xe000fe00) == 0xbc00)
          { itype = AAPBF_AAP32_INSN_STW_____D6____S10_13_____A6_; goto extract_sfmt_stb_____d6____s10_13_____a6_; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 32 : /* fall through */
      case 96 :
        if ((entire_insn & 0xe000fe00) == 0xc000)
          { itype = AAPBF_AAP32_INSN_BRA; goto extract_sfmt_bra; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 33 : /* fall through */
      case 97 :
        if ((entire_insn & 0xe000fe00) == 0xc200)
          { itype = AAPBF_AAP32_INSN_BAL; goto extract_sfmt_bal; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 34 : /* fall through */
      case 98 :
        if ((entire_insn & 0xe000fe00) == 0xc400)
          { itype = AAPBF_AAP32_INSN_BEQ; goto extract_sfmt_andi; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 35 : /* fall through */
      case 99 :
        if ((entire_insn & 0xe000fe00) == 0xc600)
          { itype = AAPBF_AAP32_INSN_BNE; goto extract_sfmt_andi; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 36 : /* fall through */
      case 100 :
        if ((entire_insn & 0xe000fe00) == 0xc800)
          { itype = AAPBF_AAP32_INSN_BLTS; goto extract_sfmt_andi; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 37 : /* fall through */
      case 101 :
        if ((entire_insn & 0xe000fe00) == 0xca00)
          { itype = AAPBF_AAP32_INSN_BLES; goto extract_sfmt_andi; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 38 : /* fall through */
      case 102 :
        if ((entire_insn & 0xe000fe00) == 0xcc00)
          { itype = AAPBF_AAP32_INSN_BLTU; goto extract_sfmt_andi; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 39 : /* fall through */
      case 103 :
        if ((entire_insn & 0xe000fe00) == 0xce00)
          { itype = AAPBF_AAP32_INSN_BLEU; goto extract_sfmt_andi; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 40 :
        if ((entire_insn & 0xfe00fe00) == 0xd000)
          { itype = AAPBF_AAP32_INSN_JMP; goto extract_sfmt_jmp; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 41 :
        if ((entire_insn & 0xfe00fe00) == 0xd200)
          { itype = AAPBF_AAP32_INSN_JAL; goto extract_sfmt_jal; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 42 :
        if ((entire_insn & 0xfe00fe00) == 0xd400)
          { itype = AAPBF_AAP32_INSN_JEQ; goto extract_sfmt_jeq; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 43 :
        if ((entire_insn & 0xfe00fe00) == 0xd600)
          { itype = AAPBF_AAP32_INSN_JNE; goto extract_sfmt_jeq; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 44 :
        if ((entire_insn & 0xfe00fe00) == 0xd800)
          { itype = AAPBF_AAP32_INSN_JLTS; goto extract_sfmt_jeq; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 45 :
        if ((entire_insn & 0xfe00fe00) == 0xda00)
          { itype = AAPBF_AAP32_INSN_JLES; goto extract_sfmt_jeq; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 46 :
        if ((entire_insn & 0xfe00fe00) == 0xdc00)
          { itype = AAPBF_AAP32_INSN_JLTU; goto extract_sfmt_jeq; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 47 :
        if ((entire_insn & 0xfe00fe00) == 0xde00)
          { itype = AAPBF_AAP32_INSN_JLEU; goto extract_sfmt_jeq; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 65 :
        if ((entire_insn & 0xfe00fe00) == 0x2008200)
          { itype = AAPBF_AAP32_INSN_ADDC; goto extract_sfmt_asr; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 66 :
        if ((entire_insn & 0xfe00fe00) == 0x2008400)
          { itype = AAPBF_AAP32_INSN_SUBC; goto extract_sfmt_asr; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 67 :
        if ((entire_insn & 0xe200fe00) == 0x2008600)
          { itype = AAPBF_AAP32_INSN_ANDI; goto extract_sfmt_andi; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 68 :
        if ((entire_insn & 0xe200fe00) == 0x2008800)
          { itype = AAPBF_AAP32_INSN_ORI; goto extract_sfmt_andi; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 69 :
        if ((entire_insn & 0xe200fe00) == 0x2008a00)
          { itype = AAPBF_AAP32_INSN_XORI; goto extract_sfmt_andi; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 104 :
        if ((entire_insn & 0xfe00fe00) == 0x200d000)
          { itype = AAPBF_AAP32_INSN_JMPL; goto extract_sfmt_jmpl; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 105 :
        if ((entire_insn & 0xfe00fe00) == 0x200d200)
          { itype = AAPBF_AAP32_INSN_JALL; goto extract_sfmt_jal; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 106 :
        if ((entire_insn & 0xfe00fe00) == 0x200d400)
          { itype = AAPBF_AAP32_INSN_JEQL; goto extract_sfmt_jmpl; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 107 :
        if ((entire_insn & 0xfe00fe00) == 0x200d600)
          { itype = AAPBF_AAP32_INSN_JNEL; goto extract_sfmt_jmpl; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 108 :
        if ((entire_insn & 0xfe00fe00) == 0x200d800)
          { itype = AAPBF_AAP32_INSN_JLTSL; goto extract_sfmt_jmpl; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 109 :
        if ((entire_insn & 0xfe00fe00) == 0x200da00)
          { itype = AAPBF_AAP32_INSN_JLESL; goto extract_sfmt_jmpl; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 110 :
        if ((entire_insn & 0xfe00fe00) == 0x200dc00)
          { itype = AAPBF_AAP32_INSN_JLTUL; goto extract_sfmt_jmpl; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 111 :
        if ((entire_insn & 0xfe00fe00) == 0x200de00)
          { itype = AAPBF_AAP32_INSN_JLEUL; goto extract_sfmt_jmpl; }
        itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      default : itype = AAPBF_AAP32_INSN_X_INVALID; goto extract_sfmt_empty;
      }
    }
  }

  /* The instruction has been decoded, now extract the fields.  */

 extract_sfmt_empty:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
#define FLD(f) abuf->fields.sfmt_empty.f


  /* Record the fields for the semantic handler.  */
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_empty", (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_add:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_asr.f
    UINT f_dst_hi;
    UINT f_src_1_hi;
    UINT f_src_2_hi;
    UINT f_dst_lo;
    UINT f_src_1_lo;
    UINT f_src_2_lo;
    SI f_d_6;
    SI f_a_6;
    SI f_b_6;

    f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_src_1_hi = EXTRACT_LSB0_UINT (insn, 32, 21, 3);
    f_src_2_hi = EXTRACT_LSB0_UINT (insn, 32, 18, 3);
    f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
    f_src_1_lo = EXTRACT_LSB0_UINT (insn, 32, 5, 3);
    f_src_2_lo = EXTRACT_LSB0_UINT (insn, 32, 2, 3);
{
  f_d_6 = ((((f_dst_hi) << (3))) | (((f_dst_lo) << (0))));
}
{
  f_a_6 = ((((f_src_1_hi) << (3))) | (((f_src_1_lo) << (0))));
}
{
  f_b_6 = ((((f_src_2_hi) << (3))) | (((f_src_2_lo) << (0))));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_a_6) = f_a_6;
  FLD (f_b_6) = f_b_6;
  FLD (f_d_6) = f_d_6;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_add", "f_a_6 0x%x", 'x', f_a_6, "f_b_6 0x%x", 'x', f_b_6, "f_d_6 0x%x", 'x', f_d_6, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_asr:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_asr.f
    UINT f_dst_hi;
    UINT f_src_1_hi;
    UINT f_src_2_hi;
    UINT f_dst_lo;
    UINT f_src_1_lo;
    UINT f_src_2_lo;
    UINT f_carry;
    SI f_d_6;
    SI f_a_6;
    SI f_b_6;

    f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_src_1_hi = EXTRACT_LSB0_UINT (insn, 32, 21, 3);
    f_src_2_hi = EXTRACT_LSB0_UINT (insn, 32, 18, 3);
    f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
    f_src_1_lo = EXTRACT_LSB0_UINT (insn, 32, 5, 3);
    f_src_2_lo = EXTRACT_LSB0_UINT (insn, 32, 2, 3);
    f_carry = EXTRACT_LSB0_UINT (insn, 32, 0, 1);
{
  f_d_6 = ((((f_dst_hi) << (3))) | (((f_dst_lo) << (0))));
}
{
  f_a_6 = ((((f_src_1_hi) << (3))) | (((f_src_1_lo) << (0))));
}
{
  f_b_6 = ((((f_src_2_hi) << (3))) | (((f_src_2_lo) << (0))));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_a_6) = f_a_6;
  FLD (f_b_6) = f_b_6;
  FLD (f_carry) = f_carry;
  FLD (f_d_6) = f_d_6;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_asr", "f_a_6 0x%x", 'x', f_a_6, "f_b_6 0x%x", 'x', f_b_6, "f_carry 0x%x", 'x', f_carry, "f_d_6 0x%x", 'x', f_d_6, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_mov:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldb___d6_____a6____s10_13__.f
    UINT f_dst_hi;
    UINT f_src_1_hi;
    UINT f_dst_lo;
    UINT f_src_1_lo;
    SI f_d_6;
    SI f_a_6;

    f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_src_1_hi = EXTRACT_LSB0_UINT (insn, 32, 21, 3);
    f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
    f_src_1_lo = EXTRACT_LSB0_UINT (insn, 32, 5, 3);
{
  f_d_6 = ((((f_dst_hi) << (3))) | (((f_dst_lo) << (0))));
}
{
  f_a_6 = ((((f_src_1_hi) << (3))) | (((f_src_1_lo) << (0))));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_a_6) = f_a_6;
  FLD (f_d_6) = f_d_6;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_mov", "f_a_6 0x%x", 'x', f_a_6, "f_d_6 0x%x", 'x', f_d_6, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_jmp:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_movi.f
    UINT f_dst_hi;
    UINT f_dst_lo;
    SI f_d_6;

    f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
{
  f_d_6 = ((((f_dst_hi) << (3))) | (((f_dst_lo) << (0))));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_d_6) = f_d_6;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_jmp", "f_d_6 0x%x", 'x', f_d_6, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_jal:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_asr.f
    UINT f_src_2_hi;
    UINT f_src_2_lo;
    SI f_b_6;

    f_src_2_hi = EXTRACT_LSB0_UINT (insn, 32, 18, 3);
    f_src_2_lo = EXTRACT_LSB0_UINT (insn, 32, 2, 3);
{
  f_b_6 = ((((f_src_2_hi) << (3))) | (((f_src_2_lo) << (0))));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_b_6) = f_b_6;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_jal", "f_b_6 0x%x", 'x', f_b_6, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_jeq:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_asr.f
    UINT f_dst_hi;
    UINT f_src_1_hi;
    UINT f_src_2_hi;
    UINT f_dst_lo;
    UINT f_src_1_lo;
    UINT f_src_2_lo;
    SI f_d_6;
    SI f_a_6;
    SI f_b_6;

    f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_src_1_hi = EXTRACT_LSB0_UINT (insn, 32, 21, 3);
    f_src_2_hi = EXTRACT_LSB0_UINT (insn, 32, 18, 3);
    f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
    f_src_1_lo = EXTRACT_LSB0_UINT (insn, 32, 5, 3);
    f_src_2_lo = EXTRACT_LSB0_UINT (insn, 32, 2, 3);
{
  f_d_6 = ((((f_dst_hi) << (3))) | (((f_dst_lo) << (0))));
}
{
  f_a_6 = ((((f_src_1_hi) << (3))) | (((f_src_1_lo) << (0))));
}
{
  f_b_6 = ((((f_src_2_hi) << (3))) | (((f_src_2_lo) << (0))));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_a_6) = f_a_6;
  FLD (f_b_6) = f_b_6;
  FLD (f_d_6) = f_d_6;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_jeq", "f_a_6 0x%x", 'x', f_a_6, "f_b_6 0x%x", 'x', f_b_6, "f_d_6 0x%x", 'x', f_d_6, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_jmpl:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_jmpl.f
    UINT f_dst_1_reg;
    UINT f_dst_hi;
    UINT f_dst_lo;
    SI f_d_6;

    f_dst_1_reg = EXTRACT_LSB0_UINT (insn, 32, 24, 6);
    f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
{
  f_d_6 = ((((f_dst_hi) << (3))) | (((f_dst_lo) << (0))));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_d_6) = f_d_6;
  FLD (f_dst_1_reg) = f_dst_1_reg;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_jmpl", "f_d_6 0x%x", 'x', f_d_6, "f_dst_1_reg 0x%x", 'x', f_dst_1_reg, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_asri:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_asri.f
    UINT f_dst_hi;
    UINT f_src_1_hi;
    UINT f_uint_18_3_hi;
    UINT f_dst_lo;
    UINT f_src_1_lo;
    UINT f_uint_2_3_lo;
    UINT f_carry;
    SI f_d_6;
    SI f_a_6;
    USI f_i_6;

    f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_src_1_hi = EXTRACT_LSB0_UINT (insn, 32, 21, 3);
    f_uint_18_3_hi = EXTRACT_LSB0_UINT (insn, 32, 18, 3);
    f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
    f_src_1_lo = EXTRACT_LSB0_UINT (insn, 32, 5, 3);
    f_uint_2_3_lo = EXTRACT_LSB0_UINT (insn, 32, 2, 3);
    f_carry = EXTRACT_LSB0_UINT (insn, 32, 0, 1);
{
  f_d_6 = ((((f_dst_hi) << (3))) | (((f_dst_lo) << (0))));
}
{
  f_a_6 = ((((f_src_1_hi) << (3))) | (((f_src_1_lo) << (0))));
}
{
  f_i_6 = ((((f_uint_18_3_hi) << (3))) | (((f_uint_2_3_lo) << (0))));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_a_6) = f_a_6;
  FLD (f_carry) = f_carry;
  FLD (f_i_6) = f_i_6;
  FLD (f_d_6) = f_d_6;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_asri", "f_a_6 0x%x", 'x', f_a_6, "f_carry 0x%x", 'x', f_carry, "f_i_6 0x%x", 'x', f_i_6, "f_d_6 0x%x", 'x', f_d_6, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_lsli:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_asri.f
    UINT f_dst_hi;
    UINT f_src_1_hi;
    UINT f_uint_18_3_hi;
    UINT f_dst_lo;
    UINT f_src_1_lo;
    UINT f_uint_2_3_lo;
    SI f_d_6;
    SI f_a_6;
    USI f_i_6;

    f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_src_1_hi = EXTRACT_LSB0_UINT (insn, 32, 21, 3);
    f_uint_18_3_hi = EXTRACT_LSB0_UINT (insn, 32, 18, 3);
    f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
    f_src_1_lo = EXTRACT_LSB0_UINT (insn, 32, 5, 3);
    f_uint_2_3_lo = EXTRACT_LSB0_UINT (insn, 32, 2, 3);
{
  f_d_6 = ((((f_dst_hi) << (3))) | (((f_dst_lo) << (0))));
}
{
  f_a_6 = ((((f_src_1_hi) << (3))) | (((f_src_1_lo) << (0))));
}
{
  f_i_6 = ((((f_uint_18_3_hi) << (3))) | (((f_uint_2_3_lo) << (0))));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_a_6) = f_a_6;
  FLD (f_i_6) = f_i_6;
  FLD (f_d_6) = f_d_6;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_lsli", "f_a_6 0x%x", 'x', f_a_6, "f_i_6 0x%x", 'x', f_i_6, "f_d_6 0x%x", 'x', f_d_6, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_andi:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
#define FLD(f) abuf->fields.sfmt_empty.f


  /* Record the fields for the semantic handler.  */
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_andi", (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_addi:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_addi.f
    UINT f_uint_28_4;
    UINT f_dst_hi;
    UINT f_src_1_hi;
    UINT f_dst_lo;
    UINT f_src_1_lo;
    SI f_d_6;
    SI f_a_6;
    USI f_i_6;
    USI f_i_10;

    f_uint_28_4 = EXTRACT_LSB0_UINT (insn, 32, 28, 4);
    f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_src_1_hi = EXTRACT_LSB0_UINT (insn, 32, 21, 3);
    f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
    f_src_1_lo = EXTRACT_LSB0_UINT (insn, 32, 5, 3);
{
  f_d_6 = ((((f_dst_hi) << (3))) | (((f_dst_lo) << (0))));
}
{
  f_a_6 = ((((f_src_1_hi) << (3))) | (((f_src_1_lo) << (0))));
}
{
  f_i_6 = ((((f_uint_18_3_hi) << (3))) | (((f_uint_2_3_lo) << (0))));
}
{
  f_i_10 = ((((f_uint_28_4) << (4))) | (((f_i_6) << (0))));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_a_6) = f_a_6;
  FLD (f_i_10) = f_i_10;
  FLD (f_d_6) = f_d_6;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_addi", "f_a_6 0x%x", 'x', f_a_6, "f_i_10 0x%x", 'x', f_i_10, "f_d_6 0x%x", 'x', f_d_6, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_ldb___d6_____a6____s10_13__:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldb___d6_____a6____s10_13__.f
    UINT f_dst_hi;
    UINT f_src_1_hi;
    INT f_int_18_3;
    UINT f_dst_lo;
    UINT f_src_1_lo;
    SI f_d_6;
    SI f_a_6;
    SI f_s_7_13;
    SI f_s_form_13;

    f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_src_1_hi = EXTRACT_LSB0_UINT (insn, 32, 21, 3);
    f_int_18_3 = EXTRACT_LSB0_SINT (insn, 32, 18, 3);
    f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
    f_src_1_lo = EXTRACT_LSB0_UINT (insn, 32, 5, 3);
{
  f_d_6 = ((((f_dst_hi) << (3))) | (((f_dst_lo) << (0))));
}
{
  f_a_6 = ((((f_src_1_hi) << (3))) | (((f_src_1_lo) << (0))));
}
{
  f_s_7_13 = ((((f_int_28_4_lo) << (3))) | (((f_int_2_3) << (0))));
}
{
  f_s_form_13 = ((((f_int_18_3) << (7))) | (((f_s_7_13) << (0))));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_a_6) = f_a_6;
  FLD (f_s_form_13) = f_s_form_13;
  FLD (f_d_6) = f_d_6;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_ldb___d6_____a6____s10_13__", "f_a_6 0x%x", 'x', f_a_6, "f_s_form_13 0x%x", 'x', f_s_form_13, "f_d_6 0x%x", 'x', f_d_6, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_ldw___d6_____a6____s10_13__:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldb___d6_____a6____s10_13__.f
    UINT f_dst_hi;
    UINT f_src_1_hi;
    INT f_int_18_3;
    UINT f_dst_lo;
    UINT f_src_1_lo;
    SI f_d_6;
    SI f_a_6;
    SI f_s_7_13;
    SI f_s_form_13;

    f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_src_1_hi = EXTRACT_LSB0_UINT (insn, 32, 21, 3);
    f_int_18_3 = EXTRACT_LSB0_SINT (insn, 32, 18, 3);
    f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
    f_src_1_lo = EXTRACT_LSB0_UINT (insn, 32, 5, 3);
{
  f_d_6 = ((((f_dst_hi) << (3))) | (((f_dst_lo) << (0))));
}
{
  f_a_6 = ((((f_src_1_hi) << (3))) | (((f_src_1_lo) << (0))));
}
{
  f_s_7_13 = ((((f_int_28_4_lo) << (3))) | (((f_int_2_3) << (0))));
}
{
  f_s_form_13 = ((((f_int_18_3) << (7))) | (((f_s_7_13) << (0))));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_a_6) = f_a_6;
  FLD (f_s_form_13) = f_s_form_13;
  FLD (f_d_6) = f_d_6;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_ldw___d6_____a6____s10_13__", "f_a_6 0x%x", 'x', f_a_6, "f_s_form_13 0x%x", 'x', f_s_form_13, "f_d_6 0x%x", 'x', f_d_6, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_ldb___d6______a6____s10_13__:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldb___d6_____a6____s10_13__.f
    UINT f_src_1_hi;
    INT f_int_18_3;
    UINT f_src_1_lo;
    SI f_a_6;
    SI f_s_7_13;
    SI f_s_form_13;

    f_src_1_hi = EXTRACT_LSB0_UINT (insn, 32, 21, 3);
    f_int_18_3 = EXTRACT_LSB0_SINT (insn, 32, 18, 3);
    f_src_1_lo = EXTRACT_LSB0_UINT (insn, 32, 5, 3);
{
  f_a_6 = ((((f_src_1_hi) << (3))) | (((f_src_1_lo) << (0))));
}
{
  f_s_7_13 = ((((f_int_28_4_lo) << (3))) | (((f_int_2_3) << (0))));
}
{
  f_s_form_13 = ((((f_int_18_3) << (7))) | (((f_s_7_13) << (0))));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_a_6) = f_a_6;
  FLD (f_s_form_13) = f_s_form_13;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_ldb___d6______a6____s10_13__", "f_a_6 0x%x", 'x', f_a_6, "f_s_form_13 0x%x", 'x', f_s_form_13, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_stb____d6____s10_13_____a6_:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldb___d6_____a6____s10_13__.f
    UINT f_dst_hi;
    UINT f_src_1_hi;
    INT f_int_18_3;
    UINT f_dst_lo;
    UINT f_src_1_lo;
    SI f_d_6;
    SI f_a_6;
    SI f_s_7_13;
    SI f_s_form_13;

    f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_src_1_hi = EXTRACT_LSB0_UINT (insn, 32, 21, 3);
    f_int_18_3 = EXTRACT_LSB0_SINT (insn, 32, 18, 3);
    f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
    f_src_1_lo = EXTRACT_LSB0_UINT (insn, 32, 5, 3);
{
  f_d_6 = ((((f_dst_hi) << (3))) | (((f_dst_lo) << (0))));
}
{
  f_a_6 = ((((f_src_1_hi) << (3))) | (((f_src_1_lo) << (0))));
}
{
  f_s_7_13 = ((((f_int_28_4_lo) << (3))) | (((f_int_2_3) << (0))));
}
{
  f_s_form_13 = ((((f_int_18_3) << (7))) | (((f_s_7_13) << (0))));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_a_6) = f_a_6;
  FLD (f_d_6) = f_d_6;
  FLD (f_s_form_13) = f_s_form_13;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_stb____d6____s10_13_____a6_", "f_a_6 0x%x", 'x', f_a_6, "f_d_6 0x%x", 'x', f_d_6, "f_s_form_13 0x%x", 'x', f_s_form_13, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_stb_____d6____s10_13_____a6_:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldb___d6_____a6____s10_13__.f
    UINT f_dst_hi;
    INT f_int_18_3;
    UINT f_dst_lo;
    SI f_d_6;
    SI f_s_7_13;
    SI f_s_form_13;

    f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_int_18_3 = EXTRACT_LSB0_SINT (insn, 32, 18, 3);
    f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
{
  f_d_6 = ((((f_dst_hi) << (3))) | (((f_dst_lo) << (0))));
}
{
  f_s_7_13 = ((((f_int_28_4_lo) << (3))) | (((f_int_2_3) << (0))));
}
{
  f_s_form_13 = ((((f_int_18_3) << (7))) | (((f_s_7_13) << (0))));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_d_6) = f_d_6;
  FLD (f_s_form_13) = f_s_form_13;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_stb_____d6____s10_13_____a6_", "f_d_6 0x%x", 'x', f_d_6, "f_s_form_13 0x%x", 'x', f_s_form_13, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_nop:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_nop.f
    UINT f_dst_hi;
    UINT f_uint_21_6;
    UINT f_dst_lo;
    UINT f_uint_5_6;
    SI f_d_6;
    USI f_i_12;

    f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_uint_21_6 = EXTRACT_LSB0_UINT (insn, 32, 21, 6);
    f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
    f_uint_5_6 = EXTRACT_LSB0_UINT (insn, 32, 5, 6);
{
  f_d_6 = ((((f_dst_hi) << (3))) | (((f_dst_lo) << (0))));
}
{
  f_i_12 = ((((f_uint_21_6) << (6))) | (((f_uint_5_6) << (0))));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_d_6) = f_d_6;
  FLD (f_i_12) = f_i_12;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_nop", "f_d_6 0x%x", 'x', f_d_6, "f_i_12 0x%x", 'x', f_i_12, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_movi:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_movi.f
    UINT f_uint_28_4;
    UINT f_dst_hi;
    UINT f_dst_lo;
    SI f_d_6;
    USI f_i_12;
    USI f_i_16;

    f_uint_28_4 = EXTRACT_LSB0_UINT (insn, 32, 28, 4);
    f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
{
  f_d_6 = ((((f_dst_hi) << (3))) | (((f_dst_lo) << (0))));
}
{
  f_i_12 = ((((f_uint_21_6) << (6))) | (((f_uint_5_6) << (0))));
}
{
  f_i_16 = ((((f_uint_28_4) << (4))) | (((f_i_12) << (0))));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_i_16) = f_i_16;
  FLD (f_d_6) = f_d_6;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_movi", "f_i_16 0x%x", 'x', f_i_16, "f_d_6 0x%x", 'x', f_d_6, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_bal:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_asr.f
    UINT f_src_2_hi;
    UINT f_src_2_lo;
    SI f_b_6;

    f_src_2_hi = EXTRACT_LSB0_UINT (insn, 32, 18, 3);
    f_src_2_lo = EXTRACT_LSB0_UINT (insn, 32, 2, 3);
{
  f_b_6 = ((((f_src_2_hi) << (3))) | (((f_src_2_lo) << (0))));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_b_6) = f_b_6;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_bal", "f_b_6 0x%x", 'x', f_b_6, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_bra:
  {
    const IDESC *idesc = &aapbf_aap32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_bra.f
    INT f_int_24_9;
    SI f_s_13;
    SI f_s_22;

    f_int_24_9 = EXTRACT_LSB0_SINT (insn, 32, 24, 9);
{
  f_s_13 = ((((f_int_28_4_lo) << (9))) | (((f_int_8_9) << (0))));
}
{
  f_s_22 = ((((f_int_24_9) << (13))) | (((f_s_13) << (0))));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_s_22) = f_s_22;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_bra", "f_s_22 0x%x", 'x', f_s_22, (char *) 0));

#undef FLD
    return idesc;
  }

}
