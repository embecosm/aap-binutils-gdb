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
#undef CGEN_DIS_HASH_SIZE
#define CGEN_DIS_HASH_SIZE 128
#undef CGEN_DIS_HASH
#define CGEN_DIS_HASH(buf, value) (((buf [1]) >> 1) & 0x7f)

/* Allows reason codes to be output when assembler errors occur. */
#define CGEN_VERBOSE_ASSEMBLER_ERRORS

/* -- */
/* Enum declaration for aap instruction types.  */
typedef enum cgen_insn_type {
  AAP_INSN_INVALID, AAP_INSN_L_ADD, AAP_INSN_L_SUB, AAP_INSN_L_AND
 , AAP_INSN_L_OR, AAP_INSN_L_XOR, AAP_INSN_L_ASR, AAP_INSN_L_LSL
 , AAP_INSN_L_LSR, AAP_INSN_L_MOV, AAP_INSN_L_JMP, AAP_INSN_L_JAL
 , AAP_INSN_L_JEQ, AAP_INSN_L_JNE, AAP_INSN_L_JLTS, AAP_INSN_L_JLES
 , AAP_INSN_L_JLTU, AAP_INSN_L_JLEU, AAP_INSN_L_RD, AAP_INSN_L_ADDI
 , AAP_INSN_L_SUBI, AAP_INSN_L_ASRI, AAP_INSN_L_LSLI, AAP_INSN_L_LSRI
 , AAP_INSN_L_BEQ, AAP_INSN_L_BNE, AAP_INSN_L_BLTS, AAP_INSN_L_BLES
 , AAP_INSN_L_BLTU, AAP_INSN_L_BLEU, AAP_INSN_L_LDB, AAP_INSN_L_LDW
 , AAP_INSN_L_LDBPO, AAP_INSN_L_LDWPO, AAP_INSN_L_LDBPR, AAP_INSN_L_LDWPR
 , AAP_INSN_L_SDB, AAP_INSN_L_SDW, AAP_INSN_L_SDBPO, AAP_INSN_L_SDWPO
 , AAP_INSN_L_SDBPR, AAP_INSN_L_SDWPR, AAP_INSN_L_NOP, AAP_INSN_L_MOVI
 , AAP_INSN_L_BAL, AAP_INSN_L_BRA, AAP_INSN_L_ADD32, AAP_INSN_L_SUB32
 , AAP_INSN_L_AND32, AAP_INSN_L_OR32, AAP_INSN_L_XOR32, AAP_INSN_L_ASR32
 , AAP_INSN_L_LSL32, AAP_INSN_L_LSR32, AAP_INSN_L_MOV32, AAP_INSN_L_ADDC32
 , AAP_INSN_L_SUBC32, AAP_INSN_L_JMP32, AAP_INSN_L_JAL32, AAP_INSN_L_JEQ32
 , AAP_INSN_L_JNE32, AAP_INSN_L_JLTS32, AAP_INSN_L_JLES32, AAP_INSN_L_JLTU32
 , AAP_INSN_L_JLEU32, AAP_INSN_L_JMPL32, AAP_INSN_L_JALL32, AAP_INSN_L_JEQL32
 , AAP_INSN_L_JNEL32, AAP_INSN_L_JLTSL32, AAP_INSN_L_JLESL32, AAP_INSN_L_JLTUL32
 , AAP_INSN_L_JLEUL32, AAP_INSN_L_ASRI32, AAP_INSN_L_LSLI32, AAP_INSN_L_LSRI32
 , AAP_INSN_L_ANDI32, AAP_INSN_L_ORI32, AAP_INSN_L_XORI32, AAP_INSN_L_ADDI32
 , AAP_INSN_L_SUBI32, AAP_INSN_L_BEQ32, AAP_INSN_L_BNE32, AAP_INSN_L_BLTS32
 , AAP_INSN_L_BLES32, AAP_INSN_L_BLTU32, AAP_INSN_L_BLEU32, AAP_INSN_L_LDB32
 , AAP_INSN_L_LDW32, AAP_INSN_L_LDBPO32, AAP_INSN_L_LDWPO32, AAP_INSN_L_LDBPR32
 , AAP_INSN_L_LDWPR32, AAP_INSN_L_SDB32, AAP_INSN_L_SDW32, AAP_INSN_L_SDBPO32
 , AAP_INSN_L_SDWPO32, AAP_INSN_L_SDBPR32, AAP_INSN_L_SDWPR32, AAP_INSN_L_NOP32
 , AAP_INSN_L_MOVI32, AAP_INSN_L_BAL32, AAP_INSN_L_BRA32
} CGEN_INSN_TYPE;

/* Index of `invalid' insn place holder.  */
#define CGEN_INSN_INVALID AAP_INSN_INVALID

/* Total number of insns in table.  */
#define MAX_INSNS ((int) AAP_INSN_L_BRA32 + 1)

/* This struct records data prior to insertion or after extraction.  */
struct cgen_fields
{
  int length;
  long f_nil;
  long f_anyof;
  long f_length;
  long f_x_length;
  long f_x_class;
  long f_opcode;
  long f_x_opcode;
  long f_dst_reg;
  long f_x_dst_reg;
  long f_src_reg_1;
  long f_x_src_reg_1;
  long f_src_reg_2;
  long f_x_src_reg_2;
  long f_blank;
  long f_x_blank;
  long f_uint_18_3;
  long f_uint_21_6;
  long f_uint_12_4;
  long f_uint_iii1;
  long f_uint_2_3;
  long f_uint_5_6;
  long f_int_18_3;
  long f_int_24_9;
  long f_int_24_6;
  long f_int_24_3;
  long f_int_12_4;
  long f_int_2_3;
  long f_int_8_3;
  long f_int_8_6;
  long f_int_8_9;
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
