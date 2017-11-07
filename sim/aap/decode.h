/* Decode header for aapbf.

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

#ifndef AAPBF_DECODE_H
#define AAPBF_DECODE_H

extern const IDESC *aapbf_decode (SIM_CPU *, IADDR,
                                  CGEN_INSN_WORD, CGEN_INSN_WORD,
                                  ARGBUF *);
extern void aapbf_init_idesc_table (SIM_CPU *);
extern void aapbf_sem_init_idesc_table (SIM_CPU *);
extern void aapbf_semf_init_idesc_table (SIM_CPU *);

/* Enum declaration for instructions in cpu family aapbf.  */
typedef enum aapbf_insn_type {
  AAPBF_INSN_X_INVALID, AAPBF_INSN_X_AFTER, AAPBF_INSN_X_BEFORE, AAPBF_INSN_X_CTI_CHAIN
 , AAPBF_INSN_X_CHAIN, AAPBF_INSN_X_BEGIN, AAPBF_INSN_ADD32, AAPBF_INSN_SUB32
 , AAPBF_INSN_AND32, AAPBF_INSN_OR32, AAPBF_INSN_XOR32, AAPBF_INSN_ASR32
 , AAPBF_INSN_LSL32, AAPBF_INSN_LSR32, AAPBF_INSN_MOV32, AAPBF_INSN_ADDC32
 , AAPBF_INSN_SUBC32, AAPBF_INSN_JMP32, AAPBF_INSN_JAL32, AAPBF_INSN_JEQ32
 , AAPBF_INSN_JNE32, AAPBF_INSN_JLTS32, AAPBF_INSN_JLES32, AAPBF_INSN_JLTU32
 , AAPBF_INSN_JLEU32, AAPBF_INSN_JMPL32, AAPBF_INSN_JALL32, AAPBF_INSN_JEQL32
 , AAPBF_INSN_JNEL32, AAPBF_INSN_JLTSL32, AAPBF_INSN_JLESL32, AAPBF_INSN_JLTUL32
 , AAPBF_INSN_JLEUL32, AAPBF_INSN_ASRI32, AAPBF_INSN_LSLI32, AAPBF_INSN_LSRI32
 , AAPBF_INSN_ANDI32, AAPBF_INSN_ORI32, AAPBF_INSN_XORI32, AAPBF_INSN_ADDI32
 , AAPBF_INSN_SUBI32, AAPBF_INSN_BEQ32, AAPBF_INSN_BNE32, AAPBF_INSN_BLTS32
 , AAPBF_INSN_BLES32, AAPBF_INSN_BLTU32, AAPBF_INSN_BLEU32, AAPBF_INSN_LDB32___D6_____A6____I10__
 , AAPBF_INSN_LDW32___D6_____A6____I10__, AAPBF_INSN_LDB32___D6_____A6_____I10__, AAPBF_INSN_LDW32___D6_____A6_____I10__, AAPBF_INSN_LDB32___D6______A6____I10__
 , AAPBF_INSN_LDW32___D6______A6____I10__, AAPBF_INSN_STB32____D6____I10_____A6_, AAPBF_INSN_STW32____D6____I10_____A6_, AAPBF_INSN_STB32____D6_____I10_____A6_
 , AAPBF_INSN_STW32____D6_____I10_____A6_, AAPBF_INSN_STB32_____D6____I10_____A6_, AAPBF_INSN_STW32_____D6____I10_____A6_, AAPBF_INSN_NOP32
 , AAPBF_INSN_MOVI32, AAPBF_INSN_BAL32, AAPBF_INSN_BRA32, AAPBF_INSN__MAX
} AAPBF_INSN_TYPE;

/* Enum declaration for semantic formats in cpu family aapbf.  */
typedef enum aapbf_sfmt_type {
  AAPBF_SFMT_EMPTY, AAPBF_SFMT_ADD32, AAPBF_SFMT_ASR32, AAPBF_SFMT_MOV32
 , AAPBF_SFMT_JMP32, AAPBF_SFMT_JAL32, AAPBF_SFMT_JEQ32, AAPBF_SFMT_JMPL32
 , AAPBF_SFMT_JEQL32, AAPBF_SFMT_ASRI32, AAPBF_SFMT_LSLI32, AAPBF_SFMT_ANDI32
 , AAPBF_SFMT_ADDI32, AAPBF_SFMT_BEQ32, AAPBF_SFMT_LDB32___D6_____A6____I10__, AAPBF_SFMT_LDW32___D6_____A6____I10__
 , AAPBF_SFMT_LDB32___D6______A6____I10__, AAPBF_SFMT_STB32____D6____I10_____A6_, AAPBF_SFMT_STB32_____D6____I10_____A6_, AAPBF_SFMT_NOP32
 , AAPBF_SFMT_MOVI32, AAPBF_SFMT_BAL32, AAPBF_SFMT_BRA32
} AAPBF_SFMT_TYPE;

/* Function unit handlers (user written).  */

extern int aapbf_model_aap32_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);

/* Profiling before/after handlers (user written) */

extern void aapbf_model_insn_before (SIM_CPU *, int /*first_p*/);
extern void aapbf_model_insn_after (SIM_CPU *, int /*last_p*/, int /*cycles*/);

#endif /* AAPBF_DECODE_H */
