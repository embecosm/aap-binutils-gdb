/* Decode header for aapbf_aap.

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

#ifndef AAPBF_AAP_DECODE_H
#define AAPBF_AAP_DECODE_H

extern const IDESC *aapbf_aap_decode (SIM_CPU *, IADDR,
                                  CGEN_INSN_WORD, CGEN_INSN_WORD,
                                  ARGBUF *);
extern void aapbf_aap_init_idesc_table (SIM_CPU *);
extern void aapbf_aap_sem_init_idesc_table (SIM_CPU *);
extern void aapbf_aap_semf_init_idesc_table (SIM_CPU *);

/* Enum declaration for instructions in cpu family aapbf.  */
typedef enum aapbf_aap_insn_type {
  AAPBF_AAP_INSN_X_INVALID, AAPBF_AAP_INSN_X_AFTER, AAPBF_AAP_INSN_X_BEFORE, AAPBF_AAP_INSN_X_CTI_CHAIN
 , AAPBF_AAP_INSN_X_CHAIN, AAPBF_AAP_INSN_X_BEGIN, AAPBF_AAP_INSN_L_ADD32, AAPBF_AAP_INSN_L_SUB32
 , AAPBF_AAP_INSN_L_AND32, AAPBF_AAP_INSN_L_OR32, AAPBF_AAP_INSN_L_XOR32, AAPBF_AAP_INSN_L_ASR32
 , AAPBF_AAP_INSN_L_LSL32, AAPBF_AAP_INSN_L_LSR32, AAPBF_AAP_INSN_L_MOV32, AAPBF_AAP_INSN_L_ADDC32
 , AAPBF_AAP_INSN_L_SUBC32, AAPBF_AAP_INSN_L_JMP32, AAPBF_AAP_INSN_L_JAL32, AAPBF_AAP_INSN_L_JEQ32
 , AAPBF_AAP_INSN_L_JNE32, AAPBF_AAP_INSN_L_JLTS32, AAPBF_AAP_INSN_L_JLES32, AAPBF_AAP_INSN_L_JLTU32
 , AAPBF_AAP_INSN_L_JLEU32, AAPBF_AAP_INSN_L_JMPL32, AAPBF_AAP_INSN_L_JALL32, AAPBF_AAP_INSN_L_JEQL32
 , AAPBF_AAP_INSN_L_JNEL32, AAPBF_AAP_INSN_L_JLTSL32, AAPBF_AAP_INSN_L_JLESL32, AAPBF_AAP_INSN_L_JLTUL32
 , AAPBF_AAP_INSN_L_JLEUL32, AAPBF_AAP_INSN_L_ASRI32, AAPBF_AAP_INSN_L_LSLI32, AAPBF_AAP_INSN_L_LSRI32
 , AAPBF_AAP_INSN_L_BEQ32, AAPBF_AAP_INSN_L_BNE32, AAPBF_AAP_INSN_L_BLTS32, AAPBF_AAP_INSN_L_BLES32
 , AAPBF_AAP_INSN_L_BLTU32, AAPBF_AAP_INSN_L_BLEU32, AAPBF_AAP_INSN_L_NOP32, AAPBF_AAP_INSN_L_BAL32
 , AAPBF_AAP_INSN_L_BRA32, AAPBF_AAP_INSN__MAX
} AAPBF_AAP_INSN_TYPE;

/* Enum declaration for semantic formats in cpu family aapbf.  */
typedef enum aapbf_aap_sfmt_type {
  AAPBF_AAP_SFMT_EMPTY, AAPBF_AAP_SFMT_L_ADD32, AAPBF_AAP_SFMT_L_ASR32, AAPBF_AAP_SFMT_L_MOV32
 , AAPBF_AAP_SFMT_L_JMP32, AAPBF_AAP_SFMT_L_JAL32, AAPBF_AAP_SFMT_L_JEQ32, AAPBF_AAP_SFMT_L_JMPL32
 , AAPBF_AAP_SFMT_L_ASRI32, AAPBF_AAP_SFMT_L_LSLI32, AAPBF_AAP_SFMT_L_BEQ32, AAPBF_AAP_SFMT_L_NOP32
 , AAPBF_AAP_SFMT_L_BAL32, AAPBF_AAP_SFMT_L_BRA32
} AAPBF_AAP_SFMT_TYPE;

/* Function unit handlers (user written).  */

extern int aapbf_model_aap32_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);

/* Profiling before/after handlers (user written) */

extern void aapbf_model_insn_before (SIM_CPU *, int /*first_p*/);
extern void aapbf_model_insn_after (SIM_CPU *, int /*last_p*/, int /*cycles*/);

#endif /* AAPBF_AAP_DECODE_H */
