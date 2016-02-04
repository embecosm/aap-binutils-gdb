/* Instruction opcode header for aap.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright (C) 1996-2015 Free Software Foundation, Inc.

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
  AAP_INSN_INVALID, AAP_INSN_NOP, AAP_INSN_ADD, AAP_INSN_SUB
 , AAP_INSN_AND, AAP_INSN_OR, AAP_INSN_XOR, AAP_INSN_ASR
 , AAP_INSN_LSL, AAP_INSN_LSR, AAP_INSN_MOV, AAP_INSN_ADDI
 , AAP_INSN_SUBI, AAP_INSN_ASRI, AAP_INSN_LSLI, AAP_INSN_LSRI
 , AAP_INSN_MOVI, AAP_INSN_LDB_POST_INC, AAP_INSN_LDW_POST_INC, AAP_INSN_STB_POST_INC
 , AAP_INSN_STW_POST_INC, AAP_INSN_BAL, AAP_INSN_BEQ, AAP_INSN_BNE
 , AAP_INSN_BLTS, AAP_INSN_BGTS, AAP_INSN_BLTU, AAP_INSN_BGTU
 , AAP_INSN_JMP, AAP_INSN_JAL, AAP_INSN_JEQ, AAP_INSN_JNE
 , AAP_INSN_JLTS, AAP_INSN_JGTS, AAP_INSN_JLTU, AAP_INSN_JGTU
 , AAP_INSN_RTE, AAP_INSN_ADD_X, AAP_INSN_SUB_X, AAP_INSN_AND_X
 , AAP_INSN_OR_X, AAP_INSN_XOR_X, AAP_INSN_ASR_X, AAP_INSN_LSL_X
 , AAP_INSN_LSR_X, AAP_INSN_MOV_X, AAP_INSN_BRA_X
} CGEN_INSN_TYPE;

/* Index of `invalid' insn place holder.  */
#define CGEN_INSN_INVALID AAP_INSN_INVALID

/* Total number of insns in table.  */
#define MAX_INSNS ((int) AAP_INSN_BRA_X + 1)

/* This struct records data prior to insertion or after extraction.  */
struct cgen_fields
{
  int length;
  long f_nil;
  long f_anyof;
  long f_length;
  long f_class;
  long f_opcode;
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
  long f_int_5_6;
  long f_int_2_3;
  long f_simm9;
  long f_simm6;
  long f_simm3;
  long f_long_dst_reg;
  long f_long_src_reg_1;
  long f_long_src_reg_2;
  long f_apb_1;
  long f_apb_2;
  long f_simm22;
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
