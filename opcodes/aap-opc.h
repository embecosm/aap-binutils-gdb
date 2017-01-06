/* Instruction opcode header for aap.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright 1996-2010 Free Software Foundation, Inc.

This file is part of the GNU Binutils and/or GDB, the GNU debugger.

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

#ifndef AAP_OPC_H
#define AAP_OPC_H

/* -- opc.h */

/* -- opc.c */
/* Enum declaration for aap instruction types.  */
typedef enum cgen_insn_type {
  AAP_INSN_INVALID, AAP_INSN_NOP, AAP_INSN_ADD, AAP_INSN_ADD_X
 , AAP_INSN_SUB, AAP_INSN_SUB_X, AAP_INSN_AND, AAP_INSN_AND_X
 , AAP_INSN_OR, AAP_INSN_OR_X, AAP_INSN_XOR, AAP_INSN_XOR_X
 , AAP_INSN_ASR, AAP_INSN_ASR_X, AAP_INSN_LSL, AAP_INSN_LSL_X
 , AAP_INSN_LSR, AAP_INSN_LSR_X, AAP_INSN_MOV, AAP_INSN_MOV_X
 , AAP_INSN_ADDI, AAP_INSN_SUBI, AAP_INSN_ASRI, AAP_INSN_LSLI
 , AAP_INSN_LSRI, AAP_INSN_MOVI, AAP_INSN_LDB, AAP_INSN_LDB_POST_INC
 , AAP_INSN_LDB_PRE_DEC, AAP_INSN_LDB_X, AAP_INSN_LDB_POST_INC_X, AAP_INSN_LDB_PRE_DEC_X
 , AAP_INSN_LDW, AAP_INSN_LDW_POST_INC, AAP_INSN_LDW_PRE_DEC, AAP_INSN_LDW_X
 , AAP_INSN_LDW_POST_INC_X, AAP_INSN_LDW_PRE_DEC_X, AAP_INSN_STB, AAP_INSN_STB_POST_INC
 , AAP_INSN_STB_PRE_DEC, AAP_INSN_STB_X, AAP_INSN_STB_POST_INC_X, AAP_INSN_STB_PRE_DEC_X
 , AAP_INSN_STW, AAP_INSN_STW_POST_INC, AAP_INSN_STW_PRE_DEC, AAP_INSN_STW_X
 , AAP_INSN_STW_POST_INC_X, AAP_INSN_STW_PRE_DEC_X, AAP_INSN_BRA, AAP_INSN_BRA_X
 , AAP_INSN_BAL, AAP_INSN_BAL_X, AAP_INSN_BEQ, AAP_INSN_BEQ_X
 , AAP_INSN_BNE, AAP_INSN_BNE_X, AAP_INSN_BLTS, AAP_INSN_BLTS_X
 , AAP_INSN_BLES, AAP_INSN_BLES_X, AAP_INSN_BLTU, AAP_INSN_BLTU_X
 , AAP_INSN_BLEU, AAP_INSN_BLEU_X, AAP_INSN_JMP, AAP_INSN_JMP_X
 , AAP_INSN_JAL, AAP_INSN_JAL_X, AAP_INSN_JEQ, AAP_INSN_JEQ_X
 , AAP_INSN_JNE, AAP_INSN_JNE_X, AAP_INSN_JLTS, AAP_INSN_JLTS_X
 , AAP_INSN_JLES, AAP_INSN_JLES_X, AAP_INSN_JLTU, AAP_INSN_JLTU_X
 , AAP_INSN_JLEU, AAP_INSN_JLEU_X, AAP_INSN_RTE
} CGEN_INSN_TYPE;

/* Index of `invalid' insn place holder.  */
#define CGEN_INSN_INVALID AAP_INSN_INVALID

/* Total number of insns in table.  */
#define MAX_INSNS ((int) AAP_INSN_RTE + 1)

/* This struct records data prior to insertion or after extraction.  */
struct cgen_fields
{
  int length;
  long f_nil;
  long f_anyof;
  long f_length;
  long f_x_length;
  long f_class;
  long f_x_class;
  long f_opcode;
  long f_x_opcode;
  long f_dst_reg;
  long f_src_reg_1;
  long f_src_reg_2;
  long f_x_dst_reg;
  long f_x_src_reg_1;
  long f_x_src_reg_2;
  long f_x_filler_7;
  long f_x_filler_3;
  long f_uint_5_6;
  long f_uint_2_3;
  long f_uint_8_9;
  long f_int_5_6;
  long f_int_2_3;
  long f_int_12_4;
  long f_int_12_7;
  long f_int_12_10;
  long f_x_uint_2_3;
  long f_x_uint_8_3;
  long f_x_uint_8_6;
  long f_x_int_12_13;
  long f_pcrel_simm9;
  long f_pcrel_simm6;
  long f_pcrel_simm3;
  long f_long_dst_reg;
  long f_long_src_reg_1;
  long f_long_src_reg_2;
  long f_simm10;
  long f_pcrel_simm22;
  long f_pcrel_simm16;
  long f_pcrel_simm10;
};

#define CGEN_INIT_PARSE(od) \
{\
}
#define CGEN_INIT_INSERT(od) \
{\
}
#define CGEN_INIT_EXTRACT(od) \
{\
}
#define CGEN_INIT_PRINT(od) \
{\
}


#endif /* AAP_OPC_H */
