/* Decode header for aapbf_aap32.

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

#ifndef AAPBF_AAP32_DECODE_H
#define AAPBF_AAP32_DECODE_H

extern const IDESC *aapbf_aap32_decode (SIM_CPU *, IADDR,
                                  CGEN_INSN_WORD, CGEN_INSN_WORD,
                                  ARGBUF *);
extern void aapbf_aap32_init_idesc_table (SIM_CPU *);
extern void aapbf_aap32_sem_init_idesc_table (SIM_CPU *);
extern void aapbf_aap32_semf_init_idesc_table (SIM_CPU *);

/* Enum declaration for instructions in cpu family aapbf.  */
typedef enum aapbf_aap32_insn_type {
  AAPBF_AAP32_INSN_X_INVALID, AAPBF_AAP32_INSN_X_AFTER, AAPBF_AAP32_INSN_X_BEFORE, AAPBF_AAP32_INSN_X_CTI_CHAIN
 , AAPBF_AAP32_INSN_X_CHAIN, AAPBF_AAP32_INSN_X_BEGIN, AAPBF_AAP32_INSN_ADD, AAPBF_AAP32_INSN_SUB
 , AAPBF_AAP32_INSN_AND, AAPBF_AAP32_INSN_OR, AAPBF_AAP32_INSN_XOR, AAPBF_AAP32_INSN_ASR
 , AAPBF_AAP32_INSN_LSL, AAPBF_AAP32_INSN_LSR, AAPBF_AAP32_INSN_MOV, AAPBF_AAP32_INSN_ADDC
 , AAPBF_AAP32_INSN_SUBC, AAPBF_AAP32_INSN_JMP, AAPBF_AAP32_INSN_JAL, AAPBF_AAP32_INSN_JEQ
 , AAPBF_AAP32_INSN_JNE, AAPBF_AAP32_INSN_JLTS, AAPBF_AAP32_INSN_JLES, AAPBF_AAP32_INSN_JLTU
 , AAPBF_AAP32_INSN_JLEU, AAPBF_AAP32_INSN_JMPL, AAPBF_AAP32_INSN_JALL, AAPBF_AAP32_INSN_JEQL
 , AAPBF_AAP32_INSN_JNEL, AAPBF_AAP32_INSN_JLTSL, AAPBF_AAP32_INSN_JLESL, AAPBF_AAP32_INSN_JLTUL
 , AAPBF_AAP32_INSN_JLEUL, AAPBF_AAP32_INSN_ASRI, AAPBF_AAP32_INSN_LSLI, AAPBF_AAP32_INSN_LSRI
 , AAPBF_AAP32_INSN_ANDI, AAPBF_AAP32_INSN_ORI, AAPBF_AAP32_INSN_XORI, AAPBF_AAP32_INSN_ADDI
 , AAPBF_AAP32_INSN_SUBI, AAPBF_AAP32_INSN_BEQ, AAPBF_AAP32_INSN_BNE, AAPBF_AAP32_INSN_BLTS
 , AAPBF_AAP32_INSN_BLES, AAPBF_AAP32_INSN_BLTU, AAPBF_AAP32_INSN_BLEU, AAPBF_AAP32_INSN_LDB___D6_____A6____S10_13__
 , AAPBF_AAP32_INSN_LDW___D6_____A6____S10_13__, AAPBF_AAP32_INSN_LDB___D6_____A6_____S10_13__, AAPBF_AAP32_INSN_LDW___D6_____A6_____S10_13__, AAPBF_AAP32_INSN_LDB___D6______A6____S10_13__
 , AAPBF_AAP32_INSN_LDW___D6______A6____S10_13__, AAPBF_AAP32_INSN_STB____D6____S10_13_____A6_, AAPBF_AAP32_INSN_STW____D6____S10_13_____A6_, AAPBF_AAP32_INSN_STB____D6_____S10_13_____A6_
 , AAPBF_AAP32_INSN_STW____D6_____S10_13_____A6_, AAPBF_AAP32_INSN_STB_____D6____S10_13_____A6_, AAPBF_AAP32_INSN_STW_____D6____S10_13_____A6_, AAPBF_AAP32_INSN_NOP
 , AAPBF_AAP32_INSN_MOVI, AAPBF_AAP32_INSN_BAL, AAPBF_AAP32_INSN_BRA, AAPBF_AAP32_INSN__MAX
} AAPBF_AAP32_INSN_TYPE;

/* Enum declaration for semantic formats in cpu family aapbf.  */
typedef enum aapbf_aap32_sfmt_type {
  AAPBF_AAP32_SFMT_EMPTY, AAPBF_AAP32_SFMT_ADD, AAPBF_AAP32_SFMT_ASR, AAPBF_AAP32_SFMT_MOV
 , AAPBF_AAP32_SFMT_JMP, AAPBF_AAP32_SFMT_JAL, AAPBF_AAP32_SFMT_JEQ, AAPBF_AAP32_SFMT_JMPL
 , AAPBF_AAP32_SFMT_ASRI, AAPBF_AAP32_SFMT_LSLI, AAPBF_AAP32_SFMT_ANDI, AAPBF_AAP32_SFMT_ADDI
 , AAPBF_AAP32_SFMT_LDB___D6_____A6____S10_13__, AAPBF_AAP32_SFMT_LDW___D6_____A6____S10_13__, AAPBF_AAP32_SFMT_LDB___D6______A6____S10_13__, AAPBF_AAP32_SFMT_STB____D6____S10_13_____A6_
 , AAPBF_AAP32_SFMT_STB_____D6____S10_13_____A6_, AAPBF_AAP32_SFMT_NOP, AAPBF_AAP32_SFMT_MOVI, AAPBF_AAP32_SFMT_BAL
 , AAPBF_AAP32_SFMT_BRA
} AAPBF_AAP32_SFMT_TYPE;

/* Function unit handlers (user written).  */


/* Profiling before/after handlers (user written) */

extern void aapbf_model_insn_before (SIM_CPU *, int /*first_p*/);
extern void aapbf_model_insn_after (SIM_CPU *, int /*last_p*/, int /*cycles*/);

#endif /* AAPBF_AAP32_DECODE_H */
