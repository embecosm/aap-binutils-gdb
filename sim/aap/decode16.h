/* Decode header for aapbf16.

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

#ifndef AAPBF16_DECODE_H
#define AAPBF16_DECODE_H

extern const IDESC *aapbf16_decode (SIM_CPU *, IADDR,
                                  CGEN_INSN_WORD, CGEN_INSN_WORD,
                                  ARGBUF *);
extern void aapbf16_init_idesc_table (SIM_CPU *);
extern void aapbf16_sem_init_idesc_table (SIM_CPU *);
extern void aapbf16_semf_init_idesc_table (SIM_CPU *);

/* Enum declaration for instructions in cpu family aapbf16.  */
typedef enum aapbf16_insn_type {
  AAPBF16_INSN_X_INVALID, AAPBF16_INSN_X_AFTER, AAPBF16_INSN_X_BEFORE, AAPBF16_INSN_X_CTI_CHAIN
 , AAPBF16_INSN_X_CHAIN, AAPBF16_INSN_X_BEGIN, AAPBF16_INSN_ADD, AAPBF16_INSN_SUB
 , AAPBF16_INSN_AND, AAPBF16_INSN_OR, AAPBF16_INSN_XOR, AAPBF16_INSN_ASR
 , AAPBF16_INSN_LSL, AAPBF16_INSN_LSR, AAPBF16_INSN_MOV, AAPBF16_INSN_JMP
 , AAPBF16_INSN_JAL, AAPBF16_INSN_JEQ, AAPBF16_INSN_JNE, AAPBF16_INSN_JLTS
 , AAPBF16_INSN_JLES, AAPBF16_INSN_JLTU, AAPBF16_INSN_JLEU, AAPBF16_INSN_RTE
 , AAPBF16_INSN_ADDI, AAPBF16_INSN_SUBI, AAPBF16_INSN_ASRI, AAPBF16_INSN_LSLI
 , AAPBF16_INSN_LSRI, AAPBF16_INSN_BEQ, AAPBF16_INSN_BNE, AAPBF16_INSN_BLTS
 , AAPBF16_INSN_BLES, AAPBF16_INSN_BLTU, AAPBF16_INSN_BLEU, AAPBF16_INSN_LDB___XDEST_____XSRC1____INT023__
 , AAPBF16_INSN_LDW___XDEST_____XSRC1____INT023__, AAPBF16_INSN_LDB___XDEST_____XSRC1_____INT023__, AAPBF16_INSN_LDW___XDEST_____XSRC1_____INT023__, AAPBF16_INSN_LDB___XDEST______XSRC1____INT023__
 , AAPBF16_INSN_LDW___XDEST______XSRC1____INT023__, AAPBF16_INSN_STB____XDEST____INT023_____XSRC1_, AAPBF16_INSN_STW____XDEST____INT023_____XSRC1_, AAPBF16_INSN_STB____XDEST_____INT023_____XSRC1_
 , AAPBF16_INSN_STW____XDEST_____INT023_____XSRC1_, AAPBF16_INSN_STB_____XDEST____INT023_____XSRC1_, AAPBF16_INSN_STW_____XDEST____INT023_____XSRC1_, AAPBF16_INSN_NOP
 , AAPBF16_INSN_MOVI, AAPBF16_INSN_BAL, AAPBF16_INSN_BRA, AAPBF16_INSN__MAX
} AAPBF16_INSN_TYPE;

/* Enum declaration for semantic formats in cpu family aapbf16.  */
typedef enum aapbf16_sfmt_type {
  AAPBF16_SFMT_EMPTY, AAPBF16_SFMT_ADD, AAPBF16_SFMT_ASR, AAPBF16_SFMT_MOV
 , AAPBF16_SFMT_JMP, AAPBF16_SFMT_JAL, AAPBF16_SFMT_JEQ, AAPBF16_SFMT_ADDI
 , AAPBF16_SFMT_ASRI, AAPBF16_SFMT_LSLI, AAPBF16_SFMT_BEQ, AAPBF16_SFMT_LDB___XDEST_____XSRC1____INT023__
 , AAPBF16_SFMT_LDW___XDEST_____XSRC1____INT023__, AAPBF16_SFMT_LDB___XDEST______XSRC1____INT023__, AAPBF16_SFMT_STB____XDEST____INT023_____XSRC1_, AAPBF16_SFMT_STB_____XDEST____INT023_____XSRC1_
 , AAPBF16_SFMT_NOP, AAPBF16_SFMT_MOVI, AAPBF16_SFMT_BAL, AAPBF16_SFMT_BRA
} AAPBF16_SFMT_TYPE;

/* Function unit handlers (user written).  */

extern int aapbf16_model_aap16_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);

/* Profiling before/after handlers (user written) */

extern void aapbf16_model_insn_before (SIM_CPU *, int /*first_p*/);
extern void aapbf16_model_insn_after (SIM_CPU *, int /*last_p*/, int /*cycles*/);

#endif /* AAPBF16_DECODE_H */
