/* Simulator instruction decoder for aapbf16.

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
#include "sim-assert.h"

/* The instruction descriptor array.
   This is computed at runtime.  Space for it is not malloc'd to save a
   teensy bit of cpu in the decoder.  Moving it to malloc space is trivial
   but won't be done until necessary (we don't currently support the runtime
   addition of instructions nor an SMP machine with different cpus).  */
static IDESC aapbf16_insn_data[AAPBF16_INSN__MAX];

/* Commas between elements are contained in the macros.
   Some of these are conditionally compiled out.  */

static const struct insn_sem aapbf16_insn_sem[] =
{
  { VIRTUAL_INSN_X_INVALID, AAPBF16_INSN_X_INVALID, AAPBF16_SFMT_EMPTY },
  { VIRTUAL_INSN_X_AFTER, AAPBF16_INSN_X_AFTER, AAPBF16_SFMT_EMPTY },
  { VIRTUAL_INSN_X_BEFORE, AAPBF16_INSN_X_BEFORE, AAPBF16_SFMT_EMPTY },
  { VIRTUAL_INSN_X_CTI_CHAIN, AAPBF16_INSN_X_CTI_CHAIN, AAPBF16_SFMT_EMPTY },
  { VIRTUAL_INSN_X_CHAIN, AAPBF16_INSN_X_CHAIN, AAPBF16_SFMT_EMPTY },
  { VIRTUAL_INSN_X_BEGIN, AAPBF16_INSN_X_BEGIN, AAPBF16_SFMT_EMPTY },
  { AAP_INSN_ADD, AAPBF16_INSN_ADD, AAPBF16_SFMT_ADD },
  { AAP_INSN_SUB, AAPBF16_INSN_SUB, AAPBF16_SFMT_ADD },
  { AAP_INSN_AND, AAPBF16_INSN_AND, AAPBF16_SFMT_ADD },
  { AAP_INSN_OR, AAPBF16_INSN_OR, AAPBF16_SFMT_ADD },
  { AAP_INSN_XOR, AAPBF16_INSN_XOR, AAPBF16_SFMT_ADD },
  { AAP_INSN_ASR, AAPBF16_INSN_ASR, AAPBF16_SFMT_ASR },
  { AAP_INSN_LSL, AAPBF16_INSN_LSL, AAPBF16_SFMT_ADD },
  { AAP_INSN_LSR, AAPBF16_INSN_LSR, AAPBF16_SFMT_ADD },
  { AAP_INSN_MOV, AAPBF16_INSN_MOV, AAPBF16_SFMT_MOV },
  { AAP_INSN_JMP, AAPBF16_INSN_JMP, AAPBF16_SFMT_JMP },
  { AAP_INSN_JAL, AAPBF16_INSN_JAL, AAPBF16_SFMT_JAL },
  { AAP_INSN_JEQ, AAPBF16_INSN_JEQ, AAPBF16_SFMT_JEQ },
  { AAP_INSN_JNE, AAPBF16_INSN_JNE, AAPBF16_SFMT_JEQ },
  { AAP_INSN_JLTS, AAPBF16_INSN_JLTS, AAPBF16_SFMT_JEQ },
  { AAP_INSN_JLES, AAPBF16_INSN_JLES, AAPBF16_SFMT_JEQ },
  { AAP_INSN_JLTU, AAPBF16_INSN_JLTU, AAPBF16_SFMT_JEQ },
  { AAP_INSN_JLEU, AAPBF16_INSN_JLEU, AAPBF16_SFMT_JEQ },
  { AAP_INSN_RTE, AAPBF16_INSN_RTE, AAPBF16_SFMT_JMP },
  { AAP_INSN_ADDI, AAPBF16_INSN_ADDI, AAPBF16_SFMT_ADDI },
  { AAP_INSN_SUBI, AAPBF16_INSN_SUBI, AAPBF16_SFMT_ADDI },
  { AAP_INSN_ASRI, AAPBF16_INSN_ASRI, AAPBF16_SFMT_ASRI },
  { AAP_INSN_LSLI, AAPBF16_INSN_LSLI, AAPBF16_SFMT_LSLI },
  { AAP_INSN_LSRI, AAPBF16_INSN_LSRI, AAPBF16_SFMT_LSLI },
  { AAP_INSN_BEQ, AAPBF16_INSN_BEQ, AAPBF16_SFMT_BEQ },
  { AAP_INSN_BNE, AAPBF16_INSN_BNE, AAPBF16_SFMT_BEQ },
  { AAP_INSN_BLTS, AAPBF16_INSN_BLTS, AAPBF16_SFMT_BEQ },
  { AAP_INSN_BLES, AAPBF16_INSN_BLES, AAPBF16_SFMT_BEQ },
  { AAP_INSN_BLTU, AAPBF16_INSN_BLTU, AAPBF16_SFMT_BEQ },
  { AAP_INSN_BLEU, AAPBF16_INSN_BLEU, AAPBF16_SFMT_BEQ },
  { AAP_INSN_LDB___XDEST_____XSRC1____INT023__, AAPBF16_INSN_LDB___XDEST_____XSRC1____INT023__, AAPBF16_SFMT_LDB___XDEST_____XSRC1____INT023__ },
  { AAP_INSN_LDW___XDEST_____XSRC1____INT023__, AAPBF16_INSN_LDW___XDEST_____XSRC1____INT023__, AAPBF16_SFMT_LDW___XDEST_____XSRC1____INT023__ },
  { AAP_INSN_LDB___XDEST_____XSRC1_____INT023__, AAPBF16_INSN_LDB___XDEST_____XSRC1_____INT023__, AAPBF16_SFMT_LDB___XDEST_____XSRC1____INT023__ },
  { AAP_INSN_LDW___XDEST_____XSRC1_____INT023__, AAPBF16_INSN_LDW___XDEST_____XSRC1_____INT023__, AAPBF16_SFMT_LDW___XDEST_____XSRC1____INT023__ },
  { AAP_INSN_LDB___XDEST______XSRC1____INT023__, AAPBF16_INSN_LDB___XDEST______XSRC1____INT023__, AAPBF16_SFMT_LDB___XDEST______XSRC1____INT023__ },
  { AAP_INSN_LDW___XDEST______XSRC1____INT023__, AAPBF16_INSN_LDW___XDEST______XSRC1____INT023__, AAPBF16_SFMT_LDB___XDEST______XSRC1____INT023__ },
  { AAP_INSN_STB____XDEST____INT023_____XSRC1_, AAPBF16_INSN_STB____XDEST____INT023_____XSRC1_, AAPBF16_SFMT_STB____XDEST____INT023_____XSRC1_ },
  { AAP_INSN_STW____XDEST____INT023_____XSRC1_, AAPBF16_INSN_STW____XDEST____INT023_____XSRC1_, AAPBF16_SFMT_STB____XDEST____INT023_____XSRC1_ },
  { AAP_INSN_STB____XDEST_____INT023_____XSRC1_, AAPBF16_INSN_STB____XDEST_____INT023_____XSRC1_, AAPBF16_SFMT_STB____XDEST____INT023_____XSRC1_ },
  { AAP_INSN_STW____XDEST_____INT023_____XSRC1_, AAPBF16_INSN_STW____XDEST_____INT023_____XSRC1_, AAPBF16_SFMT_STB____XDEST____INT023_____XSRC1_ },
  { AAP_INSN_STB_____XDEST____INT023_____XSRC1_, AAPBF16_INSN_STB_____XDEST____INT023_____XSRC1_, AAPBF16_SFMT_STB_____XDEST____INT023_____XSRC1_ },
  { AAP_INSN_STW_____XDEST____INT023_____XSRC1_, AAPBF16_INSN_STW_____XDEST____INT023_____XSRC1_, AAPBF16_SFMT_STB_____XDEST____INT023_____XSRC1_ },
  { AAP_INSN_NOP, AAPBF16_INSN_NOP, AAPBF16_SFMT_NOP },
  { AAP_INSN_MOVI, AAPBF16_INSN_MOVI, AAPBF16_SFMT_MOVI },
  { AAP_INSN_BAL, AAPBF16_INSN_BAL, AAPBF16_SFMT_BAL },
  { AAP_INSN_BRA, AAPBF16_INSN_BRA, AAPBF16_SFMT_BRA },
};

static const struct insn_sem aapbf16_insn_sem_invalid =
{
  VIRTUAL_INSN_X_INVALID, AAPBF16_INSN_X_INVALID, AAPBF16_SFMT_EMPTY
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
aapbf16_init_idesc_table (SIM_CPU *cpu)
{
  IDESC *id,*tabend;
  const struct insn_sem *t,*tend;
  int tabsize = AAPBF16_INSN__MAX;
  IDESC *table = aapbf16_insn_data;

  memset (table, 0, tabsize * sizeof (IDESC));

  /* First set all entries to the `invalid insn'.  */
  t = & aapbf16_insn_sem_invalid;
  for (id = table, tabend = table + tabsize; id < tabend; ++id)
    init_idesc (cpu, id, t);

  /* Now fill in the values for the chosen cpu.  */
  for (t = aapbf16_insn_sem, tend = t + sizeof (aapbf16_insn_sem) / sizeof (*t);
       t != tend; ++t)
    {
      init_idesc (cpu, & table[t->index], t);
    }

  /* Link the IDESC table into the cpu.  */
  CPU_IDESC (cpu) = table;
}

/* Given an instruction, return a pointer to its IDESC entry.  */

const IDESC *
aapbf16_decode (SIM_CPU *current_cpu, IADDR pc,
              CGEN_INSN_WORD base_insn, CGEN_INSN_WORD entire_insn,
              ARGBUF *abuf)
{
  /* Result of decoder.  */
  AAPBF16_INSN_TYPE itype;

  {
    CGEN_INSN_WORD insn = base_insn;

    {
      unsigned int val = (((insn >> 9) & (63 << 0)));
      switch (val)
      {
      case 0 :
        if ((entire_insn & 0xfe00) == 0x0)
          { itype = AAPBF16_INSN_NOP; goto extract_sfmt_nop; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 1 :
        if ((entire_insn & 0xfe00) == 0x200)
          { itype = AAPBF16_INSN_ADD; goto extract_sfmt_add; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 2 :
        if ((entire_insn & 0xfe00) == 0x400)
          { itype = AAPBF16_INSN_SUB; goto extract_sfmt_add; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 3 :
        if ((entire_insn & 0xfe00) == 0x600)
          { itype = AAPBF16_INSN_AND; goto extract_sfmt_add; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 4 :
        if ((entire_insn & 0xfe00) == 0x800)
          { itype = AAPBF16_INSN_OR; goto extract_sfmt_add; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 5 :
        if ((entire_insn & 0xfe00) == 0xa00)
          { itype = AAPBF16_INSN_XOR; goto extract_sfmt_add; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 6 :
        if ((entire_insn & 0xfe00) == 0xc00)
          { itype = AAPBF16_INSN_ASR; goto extract_sfmt_asr; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 7 :
        if ((entire_insn & 0xfe00) == 0xe00)
          { itype = AAPBF16_INSN_LSL; goto extract_sfmt_add; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 8 :
        if ((entire_insn & 0xfe00) == 0x1000)
          { itype = AAPBF16_INSN_LSR; goto extract_sfmt_add; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 9 :
        if ((entire_insn & 0xfe00) == 0x1200)
          { itype = AAPBF16_INSN_MOV; goto extract_sfmt_mov; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 10 :
        if ((entire_insn & 0xfe00) == 0x1400)
          { itype = AAPBF16_INSN_ADDI; goto extract_sfmt_addi; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 11 :
        if ((entire_insn & 0xfe00) == 0x1600)
          { itype = AAPBF16_INSN_SUBI; goto extract_sfmt_addi; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 12 :
        if ((entire_insn & 0xfe00) == 0x1800)
          { itype = AAPBF16_INSN_ASRI; goto extract_sfmt_asri; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 13 :
        if ((entire_insn & 0xfe00) == 0x1a00)
          { itype = AAPBF16_INSN_LSLI; goto extract_sfmt_lsli; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 14 :
        if ((entire_insn & 0xfe00) == 0x1c00)
          { itype = AAPBF16_INSN_LSRI; goto extract_sfmt_lsli; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 15 :
        if ((entire_insn & 0xfe00) == 0x1e00)
          { itype = AAPBF16_INSN_MOVI; goto extract_sfmt_movi; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 16 :
        if ((entire_insn & 0xfe00) == 0x2000)
          { itype = AAPBF16_INSN_LDB___XDEST_____XSRC1____INT023__; goto extract_sfmt_ldb___xdest_____xsrc1____int023__; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 17 :
        if ((entire_insn & 0xfe00) == 0x2200)
          { itype = AAPBF16_INSN_LDB___XDEST_____XSRC1_____INT023__; goto extract_sfmt_ldb___xdest_____xsrc1____int023__; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 18 :
        if ((entire_insn & 0xfe00) == 0x2400)
          { itype = AAPBF16_INSN_LDB___XDEST______XSRC1____INT023__; goto extract_sfmt_ldb___xdest______xsrc1____int023__; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 20 :
        if ((entire_insn & 0xfe00) == 0x2800)
          { itype = AAPBF16_INSN_LDW___XDEST_____XSRC1____INT023__; goto extract_sfmt_ldw___xdest_____xsrc1____int023__; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 21 :
        if ((entire_insn & 0xfe00) == 0x2a00)
          { itype = AAPBF16_INSN_LDW___XDEST_____XSRC1_____INT023__; goto extract_sfmt_ldw___xdest_____xsrc1____int023__; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 22 :
        if ((entire_insn & 0xfe00) == 0x2c00)
          { itype = AAPBF16_INSN_LDW___XDEST______XSRC1____INT023__; goto extract_sfmt_ldb___xdest______xsrc1____int023__; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 24 :
        if ((entire_insn & 0xfe00) == 0x3000)
          { itype = AAPBF16_INSN_STB____XDEST____INT023_____XSRC1_; goto extract_sfmt_stb____xdest____int023_____xsrc1_; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 25 :
        if ((entire_insn & 0xfe00) == 0x3200)
          { itype = AAPBF16_INSN_STB____XDEST_____INT023_____XSRC1_; goto extract_sfmt_stb____xdest____int023_____xsrc1_; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 26 :
        if ((entire_insn & 0xfe00) == 0x3400)
          { itype = AAPBF16_INSN_STB_____XDEST____INT023_____XSRC1_; goto extract_sfmt_stb_____xdest____int023_____xsrc1_; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 28 :
        if ((entire_insn & 0xfe00) == 0x3800)
          { itype = AAPBF16_INSN_STW____XDEST____INT023_____XSRC1_; goto extract_sfmt_stb____xdest____int023_____xsrc1_; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 29 :
        if ((entire_insn & 0xfe00) == 0x3a00)
          { itype = AAPBF16_INSN_STW____XDEST_____INT023_____XSRC1_; goto extract_sfmt_stb____xdest____int023_____xsrc1_; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 30 :
        if ((entire_insn & 0xfe00) == 0x3c00)
          { itype = AAPBF16_INSN_STW_____XDEST____INT023_____XSRC1_; goto extract_sfmt_stb_____xdest____int023_____xsrc1_; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 32 :
        if ((entire_insn & 0xfe00) == 0x4000)
          { itype = AAPBF16_INSN_BRA; goto extract_sfmt_bra; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 33 :
        if ((entire_insn & 0xfe00) == 0x4200)
          { itype = AAPBF16_INSN_BAL; goto extract_sfmt_bal; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 34 :
        if ((entire_insn & 0xfe00) == 0x4400)
          { itype = AAPBF16_INSN_BEQ; goto extract_sfmt_beq; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 35 :
        if ((entire_insn & 0xfe00) == 0x4600)
          { itype = AAPBF16_INSN_BNE; goto extract_sfmt_beq; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 36 :
        if ((entire_insn & 0xfe00) == 0x4800)
          { itype = AAPBF16_INSN_BLTS; goto extract_sfmt_beq; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 37 :
        if ((entire_insn & 0xfe00) == 0x4a00)
          { itype = AAPBF16_INSN_BLES; goto extract_sfmt_beq; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 38 :
        if ((entire_insn & 0xfe00) == 0x4c00)
          { itype = AAPBF16_INSN_BLTU; goto extract_sfmt_beq; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 39 :
        if ((entire_insn & 0xfe00) == 0x4e00)
          { itype = AAPBF16_INSN_BLEU; goto extract_sfmt_beq; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 40 :
        if ((entire_insn & 0xfe00) == 0x5000)
          { itype = AAPBF16_INSN_JMP; goto extract_sfmt_jmp; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 41 :
        if ((entire_insn & 0xfe00) == 0x5200)
          { itype = AAPBF16_INSN_JAL; goto extract_sfmt_jal; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 42 :
        if ((entire_insn & 0xfe00) == 0x5400)
          { itype = AAPBF16_INSN_JEQ; goto extract_sfmt_jeq; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 43 :
        if ((entire_insn & 0xfe00) == 0x5600)
          { itype = AAPBF16_INSN_JNE; goto extract_sfmt_jeq; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 44 :
        if ((entire_insn & 0xfe00) == 0x5800)
          { itype = AAPBF16_INSN_JLTS; goto extract_sfmt_jeq; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 45 :
        if ((entire_insn & 0xfe00) == 0x5a00)
          { itype = AAPBF16_INSN_JLES; goto extract_sfmt_jeq; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 46 :
        if ((entire_insn & 0xfe00) == 0x5c00)
          { itype = AAPBF16_INSN_JLTU; goto extract_sfmt_jeq; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 47 :
        if ((entire_insn & 0xfe00) == 0x5e00)
          { itype = AAPBF16_INSN_JLEU; goto extract_sfmt_jeq; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      case 48 :
        if ((entire_insn & 0xfe00) == 0x6000)
          { itype = AAPBF16_INSN_RTE; goto extract_sfmt_jmp; }
        itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      default : itype = AAPBF16_INSN_X_INVALID; goto extract_sfmt_empty;
      }
    }
  }

  /* The instruction has been decoded, now extract the fields.  */

 extract_sfmt_empty:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
#define FLD(f) abuf->fields.sfmt_empty.f


  /* Record the fields for the semantic handler.  */
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_empty", (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_add:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_asr.f
    UINT f_x_dst_reg;
    UINT f_x_src_reg_1;
    UINT f_x_src_reg_2;

    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 16, 8, 3);
    f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 16, 5, 3);
    f_x_src_reg_2 = EXTRACT_LSB0_UINT (insn, 16, 2, 3);

  /* Record the fields for the semantic handler.  */
  FLD (f_x_src_reg_1) = f_x_src_reg_1;
  FLD (f_x_src_reg_2) = f_x_src_reg_2;
  FLD (f_x_dst_reg) = f_x_dst_reg;
  FLD (i_xsrc1) = & CPU (h_gpr)[f_x_src_reg_1];
  FLD (i_xsrc2) = & CPU (h_gpr)[f_x_src_reg_2];
  FLD (i_xdest) = & CPU (h_gpr)[f_x_dst_reg];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_add", "f_x_src_reg_1 0x%x", 'x', f_x_src_reg_1, "f_x_src_reg_2 0x%x", 'x', f_x_src_reg_2, "f_x_dst_reg 0x%x", 'x', f_x_dst_reg, "xsrc1 0x%x", 'x', f_x_src_reg_1, "xsrc2 0x%x", 'x', f_x_src_reg_2, "xdest 0x%x", 'x', f_x_dst_reg, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_asr:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_asr.f
    UINT f_x_dst_reg;
    UINT f_x_src_reg_1;
    UINT f_x_src_reg_2;
    UINT f_carry;

    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 16, 8, 3);
    f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 16, 5, 3);
    f_x_src_reg_2 = EXTRACT_LSB0_UINT (insn, 16, 2, 3);
    f_carry = EXTRACT_LSB0_UINT (insn, 16, 0, 1);

  /* Record the fields for the semantic handler.  */
  FLD (f_carry) = f_carry;
  FLD (f_x_src_reg_1) = f_x_src_reg_1;
  FLD (f_x_src_reg_2) = f_x_src_reg_2;
  FLD (f_x_dst_reg) = f_x_dst_reg;
  FLD (i_xsrc1) = & CPU (h_gpr)[f_x_src_reg_1];
  FLD (i_xsrc2) = & CPU (h_gpr)[f_x_src_reg_2];
  FLD (i_xdest) = & CPU (h_gpr)[f_x_dst_reg];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_asr", "f_carry 0x%x", 'x', f_carry, "f_x_src_reg_1 0x%x", 'x', f_x_src_reg_1, "f_x_src_reg_2 0x%x", 'x', f_x_src_reg_2, "f_x_dst_reg 0x%x", 'x', f_x_dst_reg, "xsrc1 0x%x", 'x', f_x_src_reg_1, "xsrc2 0x%x", 'x', f_x_src_reg_2, "xdest 0x%x", 'x', f_x_dst_reg, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_mov:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
    UINT f_x_dst_reg;
    UINT f_x_src_reg_1;

    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 16, 8, 3);
    f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 16, 5, 3);

  /* Record the fields for the semantic handler.  */
  FLD (f_x_src_reg_1) = f_x_src_reg_1;
  FLD (f_x_dst_reg) = f_x_dst_reg;
  FLD (i_xsrc1) = & CPU (h_gpr)[f_x_src_reg_1];
  FLD (i_xdest) = & CPU (h_gpr)[f_x_dst_reg];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_mov", "f_x_src_reg_1 0x%x", 'x', f_x_src_reg_1, "f_x_dst_reg 0x%x", 'x', f_x_dst_reg, "xsrc1 0x%x", 'x', f_x_src_reg_1, "xdest 0x%x", 'x', f_x_dst_reg, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_jmp:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_movi.f
    UINT f_x_dst_reg;

    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 16, 8, 3);

  /* Record the fields for the semantic handler.  */
  FLD (f_x_dst_reg) = f_x_dst_reg;
  FLD (i_xdest) = & CPU (h_gpr)[f_x_dst_reg];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_jmp", "f_x_dst_reg 0x%x", 'x', f_x_dst_reg, "xdest 0x%x", 'x', f_x_dst_reg, (char *) 0));

#if WITH_PROFILE_MODEL_P
  /* Record the fields for profiling.  */
  if (PROFILE_MODEL_P (current_cpu))
    {
    }
#endif
#undef FLD
    return idesc;
  }

 extract_sfmt_jal:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_beq.f
    UINT f_x_src_reg_2;

    f_x_src_reg_2 = EXTRACT_LSB0_UINT (insn, 16, 2, 3);

  /* Record the fields for the semantic handler.  */
  FLD (f_x_src_reg_2) = f_x_src_reg_2;
  FLD (i_xsrc2) = & CPU (h_gpr)[f_x_src_reg_2];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_jal", "f_x_src_reg_2 0x%x", 'x', f_x_src_reg_2, "xsrc2 0x%x", 'x', f_x_src_reg_2, (char *) 0));

#if WITH_PROFILE_MODEL_P
  /* Record the fields for profiling.  */
  if (PROFILE_MODEL_P (current_cpu))
    {
    }
#endif
#undef FLD
    return idesc;
  }

 extract_sfmt_jeq:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_asr.f
    UINT f_x_dst_reg;
    UINT f_x_src_reg_1;
    UINT f_x_src_reg_2;

    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 16, 8, 3);
    f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 16, 5, 3);
    f_x_src_reg_2 = EXTRACT_LSB0_UINT (insn, 16, 2, 3);

  /* Record the fields for the semantic handler.  */
  FLD (f_x_dst_reg) = f_x_dst_reg;
  FLD (f_x_src_reg_1) = f_x_src_reg_1;
  FLD (f_x_src_reg_2) = f_x_src_reg_2;
  FLD (i_xdest) = & CPU (h_gpr)[f_x_dst_reg];
  FLD (i_xsrc1) = & CPU (h_gpr)[f_x_src_reg_1];
  FLD (i_xsrc2) = & CPU (h_gpr)[f_x_src_reg_2];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_jeq", "f_x_dst_reg 0x%x", 'x', f_x_dst_reg, "f_x_src_reg_1 0x%x", 'x', f_x_src_reg_1, "f_x_src_reg_2 0x%x", 'x', f_x_src_reg_2, "xdest 0x%x", 'x', f_x_dst_reg, "xsrc1 0x%x", 'x', f_x_src_reg_1, "xsrc2 0x%x", 'x', f_x_src_reg_2, (char *) 0));

#if WITH_PROFILE_MODEL_P
  /* Record the fields for profiling.  */
  if (PROFILE_MODEL_P (current_cpu))
    {
    }
#endif
#undef FLD
    return idesc;
  }

 extract_sfmt_addi:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_asri.f
    UINT f_x_dst_reg;
    UINT f_x_src_reg_1;
    UINT f_uint_2_3;

    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 16, 8, 3);
    f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 16, 5, 3);
    f_uint_2_3 = EXTRACT_LSB0_UINT (insn, 16, 2, 3);

  /* Record the fields for the semantic handler.  */
  FLD (f_uint_2_3) = f_uint_2_3;
  FLD (f_x_src_reg_1) = f_x_src_reg_1;
  FLD (f_x_dst_reg) = f_x_dst_reg;
  FLD (i_xsrc1) = & CPU (h_gpr)[f_x_src_reg_1];
  FLD (i_xdest) = & CPU (h_gpr)[f_x_dst_reg];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_addi", "f_uint_2_3 0x%x", 'x', f_uint_2_3, "f_x_src_reg_1 0x%x", 'x', f_x_src_reg_1, "f_x_dst_reg 0x%x", 'x', f_x_dst_reg, "xsrc1 0x%x", 'x', f_x_src_reg_1, "xdest 0x%x", 'x', f_x_dst_reg, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_asri:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_asri.f
    UINT f_x_dst_reg;
    UINT f_x_src_reg_1;
    UINT f_uint_2_3;
    UINT f_carry;

    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 16, 8, 3);
    f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 16, 5, 3);
    f_uint_2_3 = EXTRACT_LSB0_UINT (insn, 16, 2, 3);
    f_carry = EXTRACT_LSB0_UINT (insn, 16, 0, 1);

  /* Record the fields for the semantic handler.  */
  FLD (f_carry) = f_carry;
  FLD (f_uint_2_3) = f_uint_2_3;
  FLD (f_x_src_reg_1) = f_x_src_reg_1;
  FLD (f_x_dst_reg) = f_x_dst_reg;
  FLD (i_xsrc1) = & CPU (h_gpr)[f_x_src_reg_1];
  FLD (i_xdest) = & CPU (h_gpr)[f_x_dst_reg];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_asri", "f_carry 0x%x", 'x', f_carry, "f_uint_2_3 0x%x", 'x', f_uint_2_3, "f_x_src_reg_1 0x%x", 'x', f_x_src_reg_1, "f_x_dst_reg 0x%x", 'x', f_x_dst_reg, "xsrc1 0x%x", 'x', f_x_src_reg_1, "xdest 0x%x", 'x', f_x_dst_reg, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_lsli:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_asr.f
    UINT f_x_dst_reg;
    UINT f_x_src_reg_1;
    UINT f_x_src_reg_2;

    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 16, 8, 3);
    f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 16, 5, 3);
    f_x_src_reg_2 = EXTRACT_LSB0_UINT (insn, 16, 2, 3);

  /* Record the fields for the semantic handler.  */
  FLD (f_x_src_reg_1) = f_x_src_reg_1;
  FLD (f_x_src_reg_2) = f_x_src_reg_2;
  FLD (f_x_dst_reg) = f_x_dst_reg;
  FLD (i_xsrc1) = & CPU (h_gpr)[f_x_src_reg_1];
  FLD (i_xsrc2) = & CPU (h_gpr)[f_x_src_reg_2];
  FLD (i_xdest) = & CPU (h_gpr)[f_x_dst_reg];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_lsli", "f_x_src_reg_1 0x%x", 'x', f_x_src_reg_1, "f_x_src_reg_2 0x%x", 'x', f_x_src_reg_2, "f_x_dst_reg 0x%x", 'x', f_x_dst_reg, "xsrc1 0x%x", 'x', f_x_src_reg_1, "xsrc2 0x%x", 'x', f_x_src_reg_2, "xdest 0x%x", 'x', f_x_dst_reg, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_beq:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_beq.f
    INT f_int_8_3;
    UINT f_x_src_reg_1;
    UINT f_x_src_reg_2;

    f_int_8_3 = EXTRACT_LSB0_SINT (insn, 16, 8, 3);
    f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 16, 5, 3);
    f_x_src_reg_2 = EXTRACT_LSB0_UINT (insn, 16, 2, 3);

  /* Record the fields for the semantic handler.  */
  FLD (f_int_8_3) = f_int_8_3;
  FLD (f_x_src_reg_1) = f_x_src_reg_1;
  FLD (f_x_src_reg_2) = f_x_src_reg_2;
  FLD (i_xsrc1) = & CPU (h_gpr)[f_x_src_reg_1];
  FLD (i_xsrc2) = & CPU (h_gpr)[f_x_src_reg_2];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_beq", "f_int_8_3 0x%x", 'x', f_int_8_3, "f_x_src_reg_1 0x%x", 'x', f_x_src_reg_1, "f_x_src_reg_2 0x%x", 'x', f_x_src_reg_2, "xsrc1 0x%x", 'x', f_x_src_reg_1, "xsrc2 0x%x", 'x', f_x_src_reg_2, (char *) 0));

#if WITH_PROFILE_MODEL_P
  /* Record the fields for profiling.  */
  if (PROFILE_MODEL_P (current_cpu))
    {
    }
#endif
#undef FLD
    return idesc;
  }

 extract_sfmt_ldb___xdest_____xsrc1____int023__:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
    UINT f_x_dst_reg;
    UINT f_x_src_reg_1;
    INT f_int_2_3;

    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 16, 8, 3);
    f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 16, 5, 3);
    f_int_2_3 = EXTRACT_LSB0_SINT (insn, 16, 2, 3);

  /* Record the fields for the semantic handler.  */
  FLD (f_int_2_3) = f_int_2_3;
  FLD (f_x_src_reg_1) = f_x_src_reg_1;
  FLD (f_x_dst_reg) = f_x_dst_reg;
  FLD (i_xsrc1) = & CPU (h_gpr)[f_x_src_reg_1];
  FLD (i_xdest) = & CPU (h_gpr)[f_x_dst_reg];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_ldb___xdest_____xsrc1____int023__", "f_int_2_3 0x%x", 'x', f_int_2_3, "f_x_src_reg_1 0x%x", 'x', f_x_src_reg_1, "f_x_dst_reg 0x%x", 'x', f_x_dst_reg, "xsrc1 0x%x", 'x', f_x_src_reg_1, "xdest 0x%x", 'x', f_x_dst_reg, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_ldw___xdest_____xsrc1____int023__:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
    UINT f_x_dst_reg;
    UINT f_x_src_reg_1;
    INT f_int_2_3;

    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 16, 8, 3);
    f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 16, 5, 3);
    f_int_2_3 = EXTRACT_LSB0_SINT (insn, 16, 2, 3);

  /* Record the fields for the semantic handler.  */
  FLD (f_int_2_3) = f_int_2_3;
  FLD (f_x_src_reg_1) = f_x_src_reg_1;
  FLD (f_x_dst_reg) = f_x_dst_reg;
  FLD (i_xsrc1) = & CPU (h_gpr)[f_x_src_reg_1];
  FLD (i_xdest) = & CPU (h_gpr)[f_x_dst_reg];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_ldw___xdest_____xsrc1____int023__", "f_int_2_3 0x%x", 'x', f_int_2_3, "f_x_src_reg_1 0x%x", 'x', f_x_src_reg_1, "f_x_dst_reg 0x%x", 'x', f_x_dst_reg, "xsrc1 0x%x", 'x', f_x_src_reg_1, "xdest 0x%x", 'x', f_x_dst_reg, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_ldb___xdest______xsrc1____int023__:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
    UINT f_x_src_reg_1;
    INT f_int_2_3;

    f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 16, 5, 3);
    f_int_2_3 = EXTRACT_LSB0_SINT (insn, 16, 2, 3);

  /* Record the fields for the semantic handler.  */
  FLD (f_int_2_3) = f_int_2_3;
  FLD (f_x_src_reg_1) = f_x_src_reg_1;
  FLD (i_xsrc1) = & CPU (h_gpr)[f_x_src_reg_1];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_ldb___xdest______xsrc1____int023__", "f_int_2_3 0x%x", 'x', f_int_2_3, "f_x_src_reg_1 0x%x", 'x', f_x_src_reg_1, "xsrc1 0x%x", 'x', f_x_src_reg_1, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_stb____xdest____int023_____xsrc1_:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
    UINT f_x_dst_reg;
    UINT f_x_src_reg_1;
    INT f_int_2_3;

    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 16, 8, 3);
    f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 16, 5, 3);
    f_int_2_3 = EXTRACT_LSB0_SINT (insn, 16, 2, 3);

  /* Record the fields for the semantic handler.  */
  FLD (f_int_2_3) = f_int_2_3;
  FLD (f_x_dst_reg) = f_x_dst_reg;
  FLD (f_x_src_reg_1) = f_x_src_reg_1;
  FLD (i_xdest) = & CPU (h_gpr)[f_x_dst_reg];
  FLD (i_xsrc1) = & CPU (h_gpr)[f_x_src_reg_1];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_stb____xdest____int023_____xsrc1_", "f_int_2_3 0x%x", 'x', f_int_2_3, "f_x_dst_reg 0x%x", 'x', f_x_dst_reg, "f_x_src_reg_1 0x%x", 'x', f_x_src_reg_1, "xdest 0x%x", 'x', f_x_dst_reg, "xsrc1 0x%x", 'x', f_x_src_reg_1, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_stb_____xdest____int023_____xsrc1_:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_stb_____xdest____int023_____xsrc1_.f
    UINT f_dst_reg;
    UINT f_x_dst_reg;
    INT f_int_2_3;
    UINT f_d_6;

    f_dst_reg = EXTRACT_LSB0_UINT (insn, 16, 24, 3);
    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 16, 8, 3);
    f_int_2_3 = EXTRACT_LSB0_SINT (insn, 16, 2, 3);
  f_d_6 = ((HI) (UINT) (((((f_dst_reg) << (3))) | (f_x_dst_reg))));

  /* Record the fields for the semantic handler.  */
  FLD (f_d_6) = f_d_6;
  FLD (f_int_2_3) = f_int_2_3;
  FLD (i_d6) = & CPU (h_gpr)[f_d_6];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_stb_____xdest____int023_____xsrc1_", "f_d_6 0x%x", 'x', f_d_6, "f_int_2_3 0x%x", 'x', f_int_2_3, "d6 0x%x", 'x', f_d_6, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_nop:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
#define FLD(f) abuf->fields.sfmt_empty.f


  /* Record the fields for the semantic handler.  */
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_nop", (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_movi:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_movi.f
    UINT f_x_dst_reg;
    UINT f_uint_5_6;

    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 16, 8, 3);
    f_uint_5_6 = EXTRACT_LSB0_UINT (insn, 16, 5, 6);

  /* Record the fields for the semantic handler.  */
  FLD (f_uint_5_6) = f_uint_5_6;
  FLD (f_x_dst_reg) = f_x_dst_reg;
  FLD (i_xdest) = & CPU (h_gpr)[f_x_dst_reg];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_movi", "f_uint_5_6 0x%x", 'x', f_uint_5_6, "f_x_dst_reg 0x%x", 'x', f_x_dst_reg, "xdest 0x%x", 'x', f_x_dst_reg, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_bal:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_beq.f
    UINT f_x_src_reg_2;

    f_x_src_reg_2 = EXTRACT_LSB0_UINT (insn, 16, 2, 3);

  /* Record the fields for the semantic handler.  */
  FLD (f_x_src_reg_2) = f_x_src_reg_2;
  FLD (i_xsrc2) = & CPU (h_gpr)[f_x_src_reg_2];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_bal", "f_x_src_reg_2 0x%x", 'x', f_x_src_reg_2, "xsrc2 0x%x", 'x', f_x_src_reg_2, (char *) 0));

#if WITH_PROFILE_MODEL_P
  /* Record the fields for profiling.  */
  if (PROFILE_MODEL_P (current_cpu))
    {
    }
#endif
#undef FLD
    return idesc;
  }

 extract_sfmt_bra:
  {
    const IDESC *idesc = &aapbf16_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_bra.f
    INT f_int_8_9;

    f_int_8_9 = EXTRACT_LSB0_SINT (insn, 16, 8, 9);

  /* Record the fields for the semantic handler.  */
  FLD (f_int_8_9) = f_int_8_9;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_bra", "f_int_8_9 0x%x", 'x', f_int_8_9, (char *) 0));

#if WITH_PROFILE_MODEL_P
  /* Record the fields for profiling.  */
  if (PROFILE_MODEL_P (current_cpu))
    {
    }
#endif
#undef FLD
    return idesc;
  }

}
