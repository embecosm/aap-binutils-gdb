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
 , AAPBF16_INSN_X_CHAIN, AAPBF16_INSN_X_BEGIN, AAPBF16_INSN_L_ADD, AAPBF16_INSN_L_SUB
 , AAPBF16_INSN_L_AND, AAPBF16_INSN_L_OR, AAPBF16_INSN_L_XOR, AAPBF16_INSN_L_ASR
 , AAPBF16_INSN_L_LSL, AAPBF16_INSN_L_LSR, AAPBF16_INSN_L_MOV, AAPBF16_INSN_L_JMP
 , AAPBF16_INSN_L_JAL, AAPBF16_INSN_L_JEQ, AAPBF16_INSN_L_JNE, AAPBF16_INSN_L_JLTS
 , AAPBF16_INSN_L_JLES, AAPBF16_INSN_L_JLTU, AAPBF16_INSN_L_JLEU, AAPBF16_INSN_L_RTE
 , AAPBF16_INSN_L_ADDI, AAPBF16_INSN_L_SUBI, AAPBF16_INSN_L_ASRI, AAPBF16_INSN_L_LSLI
 , AAPBF16_INSN_L_LSRI, AAPBF16_INSN_L_BEQ, AAPBF16_INSN_L_BNE, AAPBF16_INSN_L_BLTS
 , AAPBF16_INSN_L_BLES, AAPBF16_INSN_L_BLTU, AAPBF16_INSN_L_BLEU, AAPBF16_INSN_L_LDB___XDEST_____XSRC1____INT023__
 , AAPBF16_INSN_L_LDW___XDEST_____XSRC1____INT023__, AAPBF16_INSN_L_LDB___XDEST_____XSRC1_____INT023__, AAPBF16_INSN_L_LDW___XDEST_____XSRC1_____INT023__, AAPBF16_INSN_L_LDB___XDEST______XSRC1____INT023__
 , AAPBF16_INSN_L_LDW___XDEST______XSRC1____INT023__, AAPBF16_INSN_L_SDB____XDEST____INT023_____XSRC1_, AAPBF16_INSN_L_SDW____XDEST____INT023_____XSRC1_, AAPBF16_INSN_L_SDB____XDEST_____INT023_____XSRC1_
 , AAPBF16_INSN_L_SDW____XDEST_____INT023_____XSRC1_, AAPBF16_INSN_L_SDB_____XDEST____INT023_____XSRC1_, AAPBF16_INSN_L_SDW_____XDEST____INT023_____XSRC1_, AAPBF16_INSN_L_NOP
 , AAPBF16_INSN_L_MOVI, AAPBF16_INSN_L_BAL, AAPBF16_INSN_L_BRA, AAPBF16_INSN__MAX
} AAPBF16_INSN_TYPE;

/* Enum declaration for semantic formats in cpu family aapbf16.  */
typedef enum aapbf16_sfmt_type {
  AAPBF16_SFMT_EMPTY, AAPBF16_SFMT_L_ADD, AAPBF16_SFMT_L_ASR, AAPBF16_SFMT_L_MOV
 , AAPBF16_SFMT_L_JMP, AAPBF16_SFMT_L_JAL, AAPBF16_SFMT_L_JEQ, AAPBF16_SFMT_L_ADDI
 , AAPBF16_SFMT_L_ASRI, AAPBF16_SFMT_L_LSLI, AAPBF16_SFMT_L_BEQ, AAPBF16_SFMT_L_LDB___XDEST_____XSRC1____INT023__
 , AAPBF16_SFMT_L_LDW___XDEST_____XSRC1____INT023__, AAPBF16_SFMT_L_LDB___XDEST______XSRC1____INT023__, AAPBF16_SFMT_L_SDB____XDEST____INT023_____XSRC1_, AAPBF16_SFMT_L_SDB_____XDEST____INT023_____XSRC1_
 , AAPBF16_SFMT_L_NOP, AAPBF16_SFMT_L_MOVI, AAPBF16_SFMT_L_BAL, AAPBF16_SFMT_L_BRA
} AAPBF16_SFMT_TYPE;

/* Function unit handlers (user written).  */

extern int aapbf16_model_aap16_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);

/* Profiling before/after handlers (user written) */

extern void aapbf16_model_insn_before (SIM_CPU *, int /*first_p*/);
extern void aapbf16_model_insn_after (SIM_CPU *, int /*last_p*/, int /*cycles*/);

#endif /* AAPBF16_DECODE_H */
