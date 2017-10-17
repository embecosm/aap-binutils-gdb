/* Simulator instruction decoder for aapbf_aap.

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
static IDESC aapbf_aap_insn_data[AAPBF_AAP_INSN__MAX];

/* Commas between elements are contained in the macros.
   Some of these are conditionally compiled out.  */

static const struct insn_sem aapbf_aap_insn_sem[] =
{
  { VIRTUAL_INSN_X_INVALID, AAPBF_AAP_INSN_X_INVALID, AAPBF_AAP_SFMT_EMPTY },
  { VIRTUAL_INSN_X_AFTER, AAPBF_AAP_INSN_X_AFTER, AAPBF_AAP_SFMT_EMPTY },
  { VIRTUAL_INSN_X_BEFORE, AAPBF_AAP_INSN_X_BEFORE, AAPBF_AAP_SFMT_EMPTY },
  { VIRTUAL_INSN_X_CTI_CHAIN, AAPBF_AAP_INSN_X_CTI_CHAIN, AAPBF_AAP_SFMT_EMPTY },
  { VIRTUAL_INSN_X_CHAIN, AAPBF_AAP_INSN_X_CHAIN, AAPBF_AAP_SFMT_EMPTY },
  { VIRTUAL_INSN_X_BEGIN, AAPBF_AAP_INSN_X_BEGIN, AAPBF_AAP_SFMT_EMPTY },
  { AAP_INSN_L_ADD32, AAPBF_AAP_INSN_L_ADD32, AAPBF_AAP_SFMT_L_ADD32 },
  { AAP_INSN_L_SUB32, AAPBF_AAP_INSN_L_SUB32, AAPBF_AAP_SFMT_L_ADD32 },
  { AAP_INSN_L_AND32, AAPBF_AAP_INSN_L_AND32, AAPBF_AAP_SFMT_L_ADD32 },
  { AAP_INSN_L_OR32, AAPBF_AAP_INSN_L_OR32, AAPBF_AAP_SFMT_L_ADD32 },
  { AAP_INSN_L_XOR32, AAPBF_AAP_INSN_L_XOR32, AAPBF_AAP_SFMT_L_ADD32 },
  { AAP_INSN_L_ASR32, AAPBF_AAP_INSN_L_ASR32, AAPBF_AAP_SFMT_L_ASR32 },
  { AAP_INSN_L_LSL32, AAPBF_AAP_INSN_L_LSL32, AAPBF_AAP_SFMT_L_ADD32 },
  { AAP_INSN_L_LSR32, AAPBF_AAP_INSN_L_LSR32, AAPBF_AAP_SFMT_L_ADD32 },
  { AAP_INSN_L_MOV32, AAPBF_AAP_INSN_L_MOV32, AAPBF_AAP_SFMT_L_MOV32 },
  { AAP_INSN_L_ADDC32, AAPBF_AAP_INSN_L_ADDC32, AAPBF_AAP_SFMT_L_ASR32 },
  { AAP_INSN_L_SUBC32, AAPBF_AAP_INSN_L_SUBC32, AAPBF_AAP_SFMT_L_ASR32 },
  { AAP_INSN_L_JMP32, AAPBF_AAP_INSN_L_JMP32, AAPBF_AAP_SFMT_L_JMP32 },
  { AAP_INSN_L_JAL32, AAPBF_AAP_INSN_L_JAL32, AAPBF_AAP_SFMT_L_JAL32 },
  { AAP_INSN_L_JEQ32, AAPBF_AAP_INSN_L_JEQ32, AAPBF_AAP_SFMT_L_JEQ32 },
  { AAP_INSN_L_JNE32, AAPBF_AAP_INSN_L_JNE32, AAPBF_AAP_SFMT_L_JEQ32 },
  { AAP_INSN_L_JLTS32, AAPBF_AAP_INSN_L_JLTS32, AAPBF_AAP_SFMT_L_JEQ32 },
  { AAP_INSN_L_JLES32, AAPBF_AAP_INSN_L_JLES32, AAPBF_AAP_SFMT_L_JEQ32 },
  { AAP_INSN_L_JLTU32, AAPBF_AAP_INSN_L_JLTU32, AAPBF_AAP_SFMT_L_JEQ32 },
  { AAP_INSN_L_JLEU32, AAPBF_AAP_INSN_L_JLEU32, AAPBF_AAP_SFMT_L_JEQ32 },
  { AAP_INSN_L_JMPL32, AAPBF_AAP_INSN_L_JMPL32, AAPBF_AAP_SFMT_L_JMPL32 },
  { AAP_INSN_L_JALL32, AAPBF_AAP_INSN_L_JALL32, AAPBF_AAP_SFMT_L_JAL32 },
  { AAP_INSN_L_JEQL32, AAPBF_AAP_INSN_L_JEQL32, AAPBF_AAP_SFMT_L_JMPL32 },
  { AAP_INSN_L_JNEL32, AAPBF_AAP_INSN_L_JNEL32, AAPBF_AAP_SFMT_L_JMPL32 },
  { AAP_INSN_L_JLTSL32, AAPBF_AAP_INSN_L_JLTSL32, AAPBF_AAP_SFMT_L_JMPL32 },
  { AAP_INSN_L_JLESL32, AAPBF_AAP_INSN_L_JLESL32, AAPBF_AAP_SFMT_L_JMPL32 },
  { AAP_INSN_L_JLTUL32, AAPBF_AAP_INSN_L_JLTUL32, AAPBF_AAP_SFMT_L_JMPL32 },
  { AAP_INSN_L_JLEUL32, AAPBF_AAP_INSN_L_JLEUL32, AAPBF_AAP_SFMT_L_JMPL32 },
  { AAP_INSN_L_ASRI32, AAPBF_AAP_INSN_L_ASRI32, AAPBF_AAP_SFMT_L_ASRI32 },
  { AAP_INSN_L_LSLI32, AAPBF_AAP_INSN_L_LSLI32, AAPBF_AAP_SFMT_L_LSLI32 },
  { AAP_INSN_L_LSRI32, AAPBF_AAP_INSN_L_LSRI32, AAPBF_AAP_SFMT_L_LSLI32 },
  { AAP_INSN_L_BEQ32, AAPBF_AAP_INSN_L_BEQ32, AAPBF_AAP_SFMT_L_BEQ32 },
  { AAP_INSN_L_BNE32, AAPBF_AAP_INSN_L_BNE32, AAPBF_AAP_SFMT_L_BEQ32 },
  { AAP_INSN_L_BLTS32, AAPBF_AAP_INSN_L_BLTS32, AAPBF_AAP_SFMT_L_BEQ32 },
  { AAP_INSN_L_BLES32, AAPBF_AAP_INSN_L_BLES32, AAPBF_AAP_SFMT_L_BEQ32 },
  { AAP_INSN_L_BLTU32, AAPBF_AAP_INSN_L_BLTU32, AAPBF_AAP_SFMT_L_BEQ32 },
  { AAP_INSN_L_BLEU32, AAPBF_AAP_INSN_L_BLEU32, AAPBF_AAP_SFMT_L_BEQ32 },
  { AAP_INSN_L_NOP32, AAPBF_AAP_INSN_L_NOP32, AAPBF_AAP_SFMT_L_NOP32 },
  { AAP_INSN_L_BAL32, AAPBF_AAP_INSN_L_BAL32, AAPBF_AAP_SFMT_L_BAL32 },
  { AAP_INSN_L_BRA32, AAPBF_AAP_INSN_L_BRA32, AAPBF_AAP_SFMT_L_BRA32 },
};

static const struct insn_sem aapbf_aap_insn_sem_invalid =
{
  VIRTUAL_INSN_X_INVALID, AAPBF_AAP_INSN_X_INVALID, AAPBF_AAP_SFMT_EMPTY
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
aapbf_aap_init_idesc_table (SIM_CPU *cpu)
{
  IDESC *id,*tabend;
  const struct insn_sem *t,*tend;
  int tabsize = AAPBF_AAP_INSN__MAX;
  IDESC *table = aapbf_aap_insn_data;

  memset (table, 0, tabsize * sizeof (IDESC));

  /* First set all entries to the `invalid insn'.  */
  t = & aapbf_aap_insn_sem_invalid;
  for (id = table, tabend = table + tabsize; id < tabend; ++id)
    init_idesc (cpu, id, t);

  /* Now fill in the values for the chosen cpu.  */
  for (t = aapbf_aap_insn_sem, tend = t + sizeof (aapbf_aap_insn_sem) / sizeof (*t);
       t != tend; ++t)
    {
      init_idesc (cpu, & table[t->index], t);
    }

  /* Link the IDESC table into the cpu.  */
  CPU_IDESC (cpu) = table;
}

/* Given an instruction, return a pointer to its IDESC entry.  */

const IDESC *
aapbf_aap_decode (SIM_CPU *current_cpu, IADDR pc,
              CGEN_INSN_WORD base_insn, CGEN_INSN_WORD entire_insn,
              ARGBUF *abuf)
{
  /* Result of decoder.  */
  AAPBF_AAP_INSN_TYPE itype;

  {
    CGEN_INSN_WORD insn = base_insn;

    {
      unsigned int val = (((insn >> 26) & (63 << 0)));
      switch (val)
      {
      case 32 :
        {
          unsigned int val = (((insn >> 24) & (1 << 1)) | ((insn >> 9) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00fe00) == 0x80000000)
              { itype = AAPBF_AAP_INSN_L_NOP32; goto extract_sfmt_l_nop32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00fe00) == 0x82000000)
              { itype = AAPBF_AAP_INSN_L_ADD32; goto extract_sfmt_l_add32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00fe00) == 0x82000200)
              { itype = AAPBF_AAP_INSN_L_ADDC32; goto extract_sfmt_l_asr32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 33 :
        {
          unsigned int val = (((insn >> 24) & (1 << 1)) | ((insn >> 9) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00fe00) == 0x84000000)
              { itype = AAPBF_AAP_INSN_L_SUB32; goto extract_sfmt_l_add32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00fe00) == 0x84000200)
              { itype = AAPBF_AAP_INSN_L_SUBC32; goto extract_sfmt_l_asr32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00fe00) == 0x86000000)
              { itype = AAPBF_AAP_INSN_L_AND32; goto extract_sfmt_l_add32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 34 :
        {
          unsigned int val = (((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00fe00) == 0x88000000)
              { itype = AAPBF_AAP_INSN_L_OR32; goto extract_sfmt_l_add32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00fe00) == 0x8a000000)
              { itype = AAPBF_AAP_INSN_L_XOR32; goto extract_sfmt_l_add32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 35 :
        {
          unsigned int val = (((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00fe00) == 0x8c000000)
              { itype = AAPBF_AAP_INSN_L_ASR32; goto extract_sfmt_l_asr32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00fe00) == 0x8e000000)
              { itype = AAPBF_AAP_INSN_L_LSL32; goto extract_sfmt_l_add32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 36 :
        {
          unsigned int val = (((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00fe00) == 0x90000000)
              { itype = AAPBF_AAP_INSN_L_LSR32; goto extract_sfmt_l_add32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00fe00) == 0x92000000)
              { itype = AAPBF_AAP_INSN_L_MOV32; goto extract_sfmt_l_mov32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 38 :
        {
          unsigned int val = (((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00fe00) == 0x98000000)
              { itype = AAPBF_AAP_INSN_L_ASRI32; goto extract_sfmt_l_asri32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00fe00) == 0x9a000000)
              { itype = AAPBF_AAP_INSN_L_LSLI32; goto extract_sfmt_l_lsli32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 39 :
        if ((entire_insn & 0xfe00fe00) == 0x9c000000)
          { itype = AAPBF_AAP_INSN_L_LSRI32; goto extract_sfmt_l_lsli32; }
        itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
      case 48 :
        {
          unsigned int val = (((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00e000) == 0xc0000000)
              { itype = AAPBF_AAP_INSN_L_BRA32; goto extract_sfmt_l_bra32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00e000) == 0xc2000000)
              { itype = AAPBF_AAP_INSN_L_BAL32; goto extract_sfmt_l_bal32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 49 :
        {
          unsigned int val = (((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00e000) == 0xc4000000)
              { itype = AAPBF_AAP_INSN_L_BEQ32; goto extract_sfmt_l_beq32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00e000) == 0xc6000000)
              { itype = AAPBF_AAP_INSN_L_BNE32; goto extract_sfmt_l_beq32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 50 :
        {
          unsigned int val = (((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00e000) == 0xc8000000)
              { itype = AAPBF_AAP_INSN_L_BLTS32; goto extract_sfmt_l_beq32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00e000) == 0xca000000)
              { itype = AAPBF_AAP_INSN_L_BLES32; goto extract_sfmt_l_beq32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 51 :
        {
          unsigned int val = (((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00e000) == 0xcc000000)
              { itype = AAPBF_AAP_INSN_L_BLTU32; goto extract_sfmt_l_beq32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00e000) == 0xce000000)
              { itype = AAPBF_AAP_INSN_L_BLEU32; goto extract_sfmt_l_beq32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 52 :
        {
          unsigned int val = (((insn >> 24) & (1 << 1)) | ((insn >> 9) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00fe00) == 0xd0000000)
              { itype = AAPBF_AAP_INSN_L_JMP32; goto extract_sfmt_l_jmp32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00fe00) == 0xd0000200)
              { itype = AAPBF_AAP_INSN_L_JMPL32; goto extract_sfmt_l_jmpl32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00fe00) == 0xd2000000)
              { itype = AAPBF_AAP_INSN_L_JAL32; goto extract_sfmt_l_jal32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00fe00) == 0xd2000200)
              { itype = AAPBF_AAP_INSN_L_JALL32; goto extract_sfmt_l_jal32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 53 :
        {
          unsigned int val = (((insn >> 24) & (1 << 1)) | ((insn >> 9) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00fe00) == 0xd4000000)
              { itype = AAPBF_AAP_INSN_L_JEQ32; goto extract_sfmt_l_jeq32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00fe00) == 0xd4000200)
              { itype = AAPBF_AAP_INSN_L_JEQL32; goto extract_sfmt_l_jmpl32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00fe00) == 0xd6000000)
              { itype = AAPBF_AAP_INSN_L_JNE32; goto extract_sfmt_l_jeq32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00fe00) == 0xd6000200)
              { itype = AAPBF_AAP_INSN_L_JNEL32; goto extract_sfmt_l_jmpl32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 54 :
        {
          unsigned int val = (((insn >> 24) & (1 << 1)) | ((insn >> 9) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00fe00) == 0xd8000000)
              { itype = AAPBF_AAP_INSN_L_JLTS32; goto extract_sfmt_l_jeq32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00fe00) == 0xd8000200)
              { itype = AAPBF_AAP_INSN_L_JLTSL32; goto extract_sfmt_l_jmpl32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00fe00) == 0xda000000)
              { itype = AAPBF_AAP_INSN_L_JLES32; goto extract_sfmt_l_jeq32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00fe00) == 0xda000200)
              { itype = AAPBF_AAP_INSN_L_JLESL32; goto extract_sfmt_l_jmpl32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 55 :
        {
          unsigned int val = (((insn >> 24) & (1 << 1)) | ((insn >> 9) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00fe00) == 0xdc000000)
              { itype = AAPBF_AAP_INSN_L_JLTU32; goto extract_sfmt_l_jeq32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00fe00) == 0xdc000200)
              { itype = AAPBF_AAP_INSN_L_JLTUL32; goto extract_sfmt_l_jmpl32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00fe00) == 0xde000000)
              { itype = AAPBF_AAP_INSN_L_JLEU32; goto extract_sfmt_l_jeq32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00fe00) == 0xde000200)
              { itype = AAPBF_AAP_INSN_L_JLEUL32; goto extract_sfmt_l_jmpl32; }
            itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      default : itype = AAPBF_AAP_INSN_X_INVALID; goto extract_sfmt_empty;
      }
    }
  }

  /* The instruction has been decoded, now extract the fields.  */

 extract_sfmt_empty:
  {
    const IDESC *idesc = &aapbf_aap_insn_data[itype];
#define FLD(f) abuf->fields.sfmt_empty.f


  /* Record the fields for the semantic handler.  */
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_empty", (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_l_add32:
  {
    const IDESC *idesc = &aapbf_aap_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_l_asr32.f
    UINT f_dst_reg;
    UINT f_src_reg_1;
    UINT f_src_reg_2;
    UINT f_x_dst_reg;
    UINT f_x_src_reg_1;
    UINT f_x_src_reg_2;
    UINT f_d_6;
    UINT f_a_6;
    UINT f_b_6;

    f_dst_reg = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_src_reg_1 = EXTRACT_LSB0_UINT (insn, 32, 21, 3);
    f_src_reg_2 = EXTRACT_LSB0_UINT (insn, 32, 18, 3);
    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
    f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 32, 5, 3);
    f_x_src_reg_2 = EXTRACT_LSB0_UINT (insn, 32, 2, 3);
  f_d_6 = ((HI) (UINT) (((((f_dst_reg) << (3))) | (f_x_dst_reg))));
  f_a_6 = ((HI) (UINT) (((((f_src_reg_1) << (3))) | (f_x_src_reg_1))));
  f_b_6 = ((HI) (UINT) (((((f_src_reg_2) << (3))) | (f_x_src_reg_2))));

  /* Record the fields for the semantic handler.  */
  FLD (f_a_6) = f_a_6;
  FLD (f_b_6) = f_b_6;
  FLD (f_d_6) = f_d_6;
  FLD (i_a6) = & CPU (h_gpr)[f_a_6];
  FLD (i_b6) = & CPU (h_gpr)[f_b_6];
  FLD (i_d6) = & CPU (h_gpr)[f_d_6];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_l_add32", "f_a_6 0x%x", 'x', f_a_6, "f_b_6 0x%x", 'x', f_b_6, "f_d_6 0x%x", 'x', f_d_6, "a6 0x%x", 'x', f_a_6, "b6 0x%x", 'x', f_b_6, "d6 0x%x", 'x', f_d_6, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_l_asr32:
  {
    const IDESC *idesc = &aapbf_aap_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_l_asr32.f
    UINT f_dst_reg;
    UINT f_src_reg_1;
    UINT f_src_reg_2;
    UINT f_x_dst_reg;
    UINT f_x_src_reg_1;
    UINT f_x_src_reg_2;
    UINT f_carry;
    UINT f_d_6;
    UINT f_a_6;
    UINT f_b_6;

    f_dst_reg = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_src_reg_1 = EXTRACT_LSB0_UINT (insn, 32, 21, 3);
    f_src_reg_2 = EXTRACT_LSB0_UINT (insn, 32, 18, 3);
    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
    f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 32, 5, 3);
    f_x_src_reg_2 = EXTRACT_LSB0_UINT (insn, 32, 2, 3);
    f_carry = EXTRACT_LSB0_UINT (insn, 32, 0, 1);
  f_d_6 = ((HI) (UINT) (((((f_dst_reg) << (3))) | (f_x_dst_reg))));
  f_a_6 = ((HI) (UINT) (((((f_src_reg_1) << (3))) | (f_x_src_reg_1))));
  f_b_6 = ((HI) (UINT) (((((f_src_reg_2) << (3))) | (f_x_src_reg_2))));

  /* Record the fields for the semantic handler.  */
  FLD (f_a_6) = f_a_6;
  FLD (f_b_6) = f_b_6;
  FLD (f_carry) = f_carry;
  FLD (f_d_6) = f_d_6;
  FLD (i_a6) = & CPU (h_gpr)[f_a_6];
  FLD (i_b6) = & CPU (h_gpr)[f_b_6];
  FLD (i_d6) = & CPU (h_gpr)[f_d_6];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_l_asr32", "f_a_6 0x%x", 'x', f_a_6, "f_b_6 0x%x", 'x', f_b_6, "f_carry 0x%x", 'x', f_carry, "f_d_6 0x%x", 'x', f_d_6, "a6 0x%x", 'x', f_a_6, "b6 0x%x", 'x', f_b_6, "d6 0x%x", 'x', f_d_6, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_l_mov32:
  {
    const IDESC *idesc = &aapbf_aap_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_l_asri32.f
    UINT f_dst_reg;
    UINT f_src_reg_1;
    UINT f_x_dst_reg;
    UINT f_x_src_reg_1;
    UINT f_d_6;
    UINT f_a_6;

    f_dst_reg = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_src_reg_1 = EXTRACT_LSB0_UINT (insn, 32, 21, 3);
    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
    f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 32, 5, 3);
  f_d_6 = ((HI) (UINT) (((((f_dst_reg) << (3))) | (f_x_dst_reg))));
  f_a_6 = ((HI) (UINT) (((((f_src_reg_1) << (3))) | (f_x_src_reg_1))));

  /* Record the fields for the semantic handler.  */
  FLD (f_a_6) = f_a_6;
  FLD (f_d_6) = f_d_6;
  FLD (i_a6) = & CPU (h_gpr)[f_a_6];
  FLD (i_d6) = & CPU (h_gpr)[f_d_6];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_l_mov32", "f_a_6 0x%x", 'x', f_a_6, "f_d_6 0x%x", 'x', f_d_6, "a6 0x%x", 'x', f_a_6, "d6 0x%x", 'x', f_d_6, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_l_jmp32:
  {
    const IDESC *idesc = &aapbf_aap_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_l_jmpl32.f
    UINT f_dst_reg;
    UINT f_x_dst_reg;
    UINT f_d_6;

    f_dst_reg = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
  f_d_6 = ((HI) (UINT) (((((f_dst_reg) << (3))) | (f_x_dst_reg))));

  /* Record the fields for the semantic handler.  */
  FLD (f_d_6) = f_d_6;
  FLD (i_d6) = & CPU (h_gpr)[f_d_6];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_l_jmp32", "f_d_6 0x%x", 'x', f_d_6, "d6 0x%x", 'x', f_d_6, (char *) 0));

#if WITH_PROFILE_MODEL_P
  /* Record the fields for profiling.  */
  if (PROFILE_MODEL_P (current_cpu))
    {
    }
#endif
#undef FLD
    return idesc;
  }

 extract_sfmt_l_jal32:
  {
    const IDESC *idesc = &aapbf_aap_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_l_beq32.f
    UINT f_src_reg_2;
    UINT f_x_src_reg_2;
    UINT f_b_6;

    f_src_reg_2 = EXTRACT_LSB0_UINT (insn, 32, 18, 3);
    f_x_src_reg_2 = EXTRACT_LSB0_UINT (insn, 32, 2, 3);
  f_b_6 = ((HI) (UINT) (((((f_src_reg_2) << (3))) | (f_x_src_reg_2))));

  /* Record the fields for the semantic handler.  */
  FLD (f_b_6) = f_b_6;
  FLD (i_b6) = & CPU (h_gpr)[f_b_6];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_l_jal32", "f_b_6 0x%x", 'x', f_b_6, "b6 0x%x", 'x', f_b_6, (char *) 0));

#if WITH_PROFILE_MODEL_P
  /* Record the fields for profiling.  */
  if (PROFILE_MODEL_P (current_cpu))
    {
    }
#endif
#undef FLD
    return idesc;
  }

 extract_sfmt_l_jeq32:
  {
    const IDESC *idesc = &aapbf_aap_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_l_asr32.f
    UINT f_dst_reg;
    UINT f_src_reg_1;
    UINT f_src_reg_2;
    UINT f_x_dst_reg;
    UINT f_x_src_reg_1;
    UINT f_x_src_reg_2;
    UINT f_d_6;
    UINT f_a_6;
    UINT f_b_6;

    f_dst_reg = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_src_reg_1 = EXTRACT_LSB0_UINT (insn, 32, 21, 3);
    f_src_reg_2 = EXTRACT_LSB0_UINT (insn, 32, 18, 3);
    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
    f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 32, 5, 3);
    f_x_src_reg_2 = EXTRACT_LSB0_UINT (insn, 32, 2, 3);
  f_d_6 = ((HI) (UINT) (((((f_dst_reg) << (3))) | (f_x_dst_reg))));
  f_a_6 = ((HI) (UINT) (((((f_src_reg_1) << (3))) | (f_x_src_reg_1))));
  f_b_6 = ((HI) (UINT) (((((f_src_reg_2) << (3))) | (f_x_src_reg_2))));

  /* Record the fields for the semantic handler.  */
  FLD (f_a_6) = f_a_6;
  FLD (f_b_6) = f_b_6;
  FLD (f_d_6) = f_d_6;
  FLD (i_a6) = & CPU (h_gpr)[f_a_6];
  FLD (i_b6) = & CPU (h_gpr)[f_b_6];
  FLD (i_d6) = & CPU (h_gpr)[f_d_6];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_l_jeq32", "f_a_6 0x%x", 'x', f_a_6, "f_b_6 0x%x", 'x', f_b_6, "f_d_6 0x%x", 'x', f_d_6, "a6 0x%x", 'x', f_a_6, "b6 0x%x", 'x', f_b_6, "d6 0x%x", 'x', f_d_6, (char *) 0));

#if WITH_PROFILE_MODEL_P
  /* Record the fields for profiling.  */
  if (PROFILE_MODEL_P (current_cpu))
    {
    }
#endif
#undef FLD
    return idesc;
  }

 extract_sfmt_l_jmpl32:
  {
    const IDESC *idesc = &aapbf_aap_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_l_jmpl32.f
    UINT f_dst_1_reg;
    UINT f_dst_reg;
    UINT f_x_dst_reg;
    UINT f_d_6;

    f_dst_1_reg = EXTRACT_LSB0_UINT (insn, 32, 24, 6);
    f_dst_reg = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
  f_d_6 = ((HI) (UINT) (((((f_dst_reg) << (3))) | (f_x_dst_reg))));

  /* Record the fields for the semantic handler.  */
  FLD (f_d_6) = f_d_6;
  FLD (f_dst_1_reg) = f_dst_1_reg;
  FLD (i_d6) = & CPU (h_gpr)[f_d_6];
  FLD (i_dest1) = & CPU (h_gpr)[f_dst_1_reg];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_l_jmpl32", "f_d_6 0x%x", 'x', f_d_6, "f_dst_1_reg 0x%x", 'x', f_dst_1_reg, "d6 0x%x", 'x', f_d_6, "dest1 0x%x", 'x', f_dst_1_reg, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_l_asri32:
  {
    const IDESC *idesc = &aapbf_aap_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_l_asri32.f
    UINT f_dst_reg;
    UINT f_src_reg_1;
    UINT f_uint_18_3;
    UINT f_x_dst_reg;
    UINT f_x_src_reg_1;
    UINT f_uint_2_3;
    UINT f_carry;
    UINT f_d_6;
    UINT f_a_6;
    UINT f_i_6;

    f_dst_reg = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_src_reg_1 = EXTRACT_LSB0_UINT (insn, 32, 21, 3);
    f_uint_18_3 = EXTRACT_LSB0_UINT (insn, 32, 18, 3);
    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
    f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 32, 5, 3);
    f_uint_2_3 = EXTRACT_LSB0_UINT (insn, 32, 2, 3);
    f_carry = EXTRACT_LSB0_UINT (insn, 32, 0, 1);
  f_d_6 = ((HI) (UINT) (((((f_dst_reg) << (3))) | (f_x_dst_reg))));
  f_a_6 = ((HI) (UINT) (((((f_src_reg_1) << (3))) | (f_x_src_reg_1))));
  f_i_6 = ((HI) (UINT) (((((f_uint_18_3) << (3))) | (f_uint_2_3))));

  /* Record the fields for the semantic handler.  */
  FLD (f_a_6) = f_a_6;
  FLD (f_carry) = f_carry;
  FLD (f_i_6) = f_i_6;
  FLD (f_d_6) = f_d_6;
  FLD (i_a6) = & CPU (h_gpr)[f_a_6];
  FLD (i_d6) = & CPU (h_gpr)[f_d_6];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_l_asri32", "f_a_6 0x%x", 'x', f_a_6, "f_carry 0x%x", 'x', f_carry, "f_i_6 0x%x", 'x', f_i_6, "f_d_6 0x%x", 'x', f_d_6, "a6 0x%x", 'x', f_a_6, "d6 0x%x", 'x', f_d_6, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_l_lsli32:
  {
    const IDESC *idesc = &aapbf_aap_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_l_asri32.f
    UINT f_dst_reg;
    UINT f_src_reg_1;
    UINT f_uint_18_3;
    UINT f_x_dst_reg;
    UINT f_x_src_reg_1;
    UINT f_uint_2_3;
    UINT f_d_6;
    UINT f_a_6;
    UINT f_i_6;

    f_dst_reg = EXTRACT_LSB0_UINT (insn, 32, 24, 3);
    f_src_reg_1 = EXTRACT_LSB0_UINT (insn, 32, 21, 3);
    f_uint_18_3 = EXTRACT_LSB0_UINT (insn, 32, 18, 3);
    f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 32, 8, 3);
    f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 32, 5, 3);
    f_uint_2_3 = EXTRACT_LSB0_UINT (insn, 32, 2, 3);
  f_d_6 = ((HI) (UINT) (((((f_dst_reg) << (3))) | (f_x_dst_reg))));
  f_a_6 = ((HI) (UINT) (((((f_src_reg_1) << (3))) | (f_x_src_reg_1))));
  f_i_6 = ((HI) (UINT) (((((f_uint_18_3) << (3))) | (f_uint_2_3))));

  /* Record the fields for the semantic handler.  */
  FLD (f_a_6) = f_a_6;
  FLD (f_i_6) = f_i_6;
  FLD (f_d_6) = f_d_6;
  FLD (i_a6) = & CPU (h_gpr)[f_a_6];
  FLD (i_d6) = & CPU (h_gpr)[f_d_6];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_l_lsli32", "f_a_6 0x%x", 'x', f_a_6, "f_i_6 0x%x", 'x', f_i_6, "f_d_6 0x%x", 'x', f_d_6, "a6 0x%x", 'x', f_a_6, "d6 0x%x", 'x', f_d_6, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_l_beq32:
  {
    const IDESC *idesc = &aapbf_aap_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_l_beq32.f
    INT f_int_24_3;
    UINT f_src_reg_1;
    UINT f_src_reg_2;
    INT f_int_12_7;
    UINT f_x_src_reg_1;
    UINT f_x_src_reg_2;
    INT f_s_10;
    UINT f_a_6;
    UINT f_b_6;

    f_int_24_3 = EXTRACT_LSB0_SINT (insn, 32, 24, 3);
    f_src_reg_1 = EXTRACT_LSB0_UINT (insn, 32, 21, 3);
    f_src_reg_2 = EXTRACT_LSB0_UINT (insn, 32, 18, 3);
    f_int_12_7 = EXTRACT_LSB0_SINT (insn, 32, 12, 7);
    f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 32, 5, 3);
    f_x_src_reg_2 = EXTRACT_LSB0_UINT (insn, 32, 2, 3);
  f_s_10 = ((HI) (INT) (((((f_int_24_3) << (7))) | (f_int_12_7))));
  f_a_6 = ((HI) (UINT) (((((f_src_reg_1) << (3))) | (f_x_src_reg_1))));
  f_b_6 = ((HI) (UINT) (((((f_src_reg_2) << (3))) | (f_x_src_reg_2))));

  /* Record the fields for the semantic handler.  */
  FLD (f_a_6) = f_a_6;
  FLD (f_b_6) = f_b_6;
  FLD (f_s_10) = f_s_10;
  FLD (i_a6) = & CPU (h_gpr)[f_a_6];
  FLD (i_b6) = & CPU (h_gpr)[f_b_6];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_l_beq32", "f_a_6 0x%x", 'x', f_a_6, "f_b_6 0x%x", 'x', f_b_6, "f_s_10 0x%x", 'x', f_s_10, "a6 0x%x", 'x', f_a_6, "b6 0x%x", 'x', f_b_6, (char *) 0));

#if WITH_PROFILE_MODEL_P
  /* Record the fields for profiling.  */
  if (PROFILE_MODEL_P (current_cpu))
    {
    }
#endif
#undef FLD
    return idesc;
  }

 extract_sfmt_l_nop32:
  {
    const IDESC *idesc = &aapbf_aap_insn_data[itype];
#define FLD(f) abuf->fields.sfmt_empty.f


  /* Record the fields for the semantic handler.  */
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_l_nop32", (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_l_bal32:
  {
    const IDESC *idesc = &aapbf_aap_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_l_beq32.f
    UINT f_src_reg_2;
    UINT f_x_src_reg_2;
    UINT f_b_6;

    f_src_reg_2 = EXTRACT_LSB0_UINT (insn, 32, 18, 3);
    f_x_src_reg_2 = EXTRACT_LSB0_UINT (insn, 32, 2, 3);
  f_b_6 = ((HI) (UINT) (((((f_src_reg_2) << (3))) | (f_x_src_reg_2))));

  /* Record the fields for the semantic handler.  */
  FLD (f_b_6) = f_b_6;
  FLD (i_b6) = & CPU (h_gpr)[f_b_6];
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_l_bal32", "f_b_6 0x%x", 'x', f_b_6, "b6 0x%x", 'x', f_b_6, (char *) 0));

#if WITH_PROFILE_MODEL_P
  /* Record the fields for profiling.  */
  if (PROFILE_MODEL_P (current_cpu))
    {
    }
#endif
#undef FLD
    return idesc;
  }

 extract_sfmt_l_bra32:
  {
    const IDESC *idesc = &aapbf_aap_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_l_bra32.f
    INT f_int_24_9;
    INT f_int_12_13;
    INT f_s_22;

    f_int_24_9 = EXTRACT_LSB0_SINT (insn, 32, 24, 9);
    f_int_12_13 = EXTRACT_LSB0_SINT (insn, 32, 12, 13);
  f_s_22 = ((HI) (INT) (((((f_int_24_9) << (13))) | (f_int_12_13))));

  /* Record the fields for the semantic handler.  */
  FLD (f_s_22) = f_s_22;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_l_bra32", "f_s_22 0x%x", 'x', f_s_22, (char *) 0));

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
