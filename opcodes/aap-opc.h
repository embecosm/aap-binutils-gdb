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
#define CGEN_DIS_HASH(buf, value) (1)

/* Allows reason codes to be output when assembler errors occur. */
#define CGEN_VERBOSE_ASSEMBLER_ERRORS

//#include "../cpu/aap_ifield.h"
/* -- */
/* Enum declaration for aap instruction types.  */
typedef enum cgen_insn_type {
  AAP_INSN_INVALID, AAP_INSN_ADD16, AAP_INSN_SUB16, AAP_INSN_AND16
 , AAP_INSN_OR16, AAP_INSN_XOR16, AAP_INSN_ASR16, AAP_INSN_LSL16
 , AAP_INSN_LSR16, AAP_INSN_MOV16, AAP_INSN_JMP16, AAP_INSN_JAL16
 , AAP_INSN_JEQ16, AAP_INSN_JNE16, AAP_INSN_JLTS16, AAP_INSN_JLES16
 , AAP_INSN_JLTU16, AAP_INSN_JLEU16, AAP_INSN_RTE16, AAP_INSN_ADDI16
 , AAP_INSN_SUBI16, AAP_INSN_ASRI16, AAP_INSN_LSLI16, AAP_INSN_LSRI16
 , AAP_INSN_BEQ16, AAP_INSN_BNE16, AAP_INSN_BLTS16, AAP_INSN_BLES16
 , AAP_INSN_BLTU16, AAP_INSN_BLEU16, AAP_INSN_LDB___XDEST_____XSRC1____INT023__16, AAP_INSN_LDW___XDEST_____XSRC1____INT023__16
 , AAP_INSN_LDB___XDEST_____XSRC1_____INT023__16, AAP_INSN_LDW___XDEST_____XSRC1_____INT023__16, AAP_INSN_LDB___XDEST______XSRC1____INT023__16, AAP_INSN_LDW___XDEST______XSRC1____INT023__16
 , AAP_INSN_STB____XDEST____INT023_____XSRC1_16, AAP_INSN_STW____XDEST____INT023_____XSRC1_16, AAP_INSN_STB____XDEST_____INT023_____XSRC1_16, AAP_INSN_STW____XDEST_____INT023_____XSRC1_16
 , AAP_INSN_STB_____XDEST____INT023_____XSRC1_16, AAP_INSN_STW_____XDEST____INT023_____XSRC1_16, AAP_INSN_NOP16, AAP_INSN_MOVI16
 , AAP_INSN_BAL16, AAP_INSN_BRA16, AAP_INSN_ADD, AAP_INSN_SUB
 , AAP_INSN_AND, AAP_INSN_OR, AAP_INSN_XOR, AAP_INSN_ASR
 , AAP_INSN_LSL, AAP_INSN_LSR, AAP_INSN_MOV, AAP_INSN_ADDC
 , AAP_INSN_SUBC, AAP_INSN_JMP, AAP_INSN_JAL, AAP_INSN_JEQ
 , AAP_INSN_JNE, AAP_INSN_JLTS, AAP_INSN_JLES, AAP_INSN_JLTU
 , AAP_INSN_JLEU, AAP_INSN_JMPL, AAP_INSN_JALL, AAP_INSN_JEQL
 , AAP_INSN_JNEL, AAP_INSN_JLTSL, AAP_INSN_JLESL, AAP_INSN_JLTUL
 , AAP_INSN_JLEUL, AAP_INSN_ASRI, AAP_INSN_LSLI, AAP_INSN_LSRI
 , AAP_INSN_ANDI, AAP_INSN_ORI, AAP_INSN_XORI, AAP_INSN_ADDI
 , AAP_INSN_SUBI, AAP_INSN_BEQ, AAP_INSN_BNE, AAP_INSN_BLTS
 , AAP_INSN_BLES, AAP_INSN_BLTU, AAP_INSN_BLEU, AAP_INSN_LDB___D6_____A6____I10__
 , AAP_INSN_LDW___D6_____A6____I10__, AAP_INSN_LDB___D6_____A6_____I10__, AAP_INSN_LDW___D6_____A6_____I10__, AAP_INSN_LDB___D6______A6____I10__
 , AAP_INSN_LDW___D6______A6____I10__, AAP_INSN_STB____D6____I10_____A6_, AAP_INSN_STW____D6____I10_____A6_, AAP_INSN_STB____D6_____I10_____A6_
 , AAP_INSN_STW____D6_____I10_____A6_, AAP_INSN_STB_____D6____I10_____A6_, AAP_INSN_STW_____D6____I10_____A6_, AAP_INSN_NOP
 , AAP_INSN_MOVI, AAP_INSN_BAL, AAP_INSN_BRA
} CGEN_INSN_TYPE;

/* Index of `invalid' insn place holder.  */
#define CGEN_INSN_INVALID AAP_INSN_INVALID

/* Total number of insns in table.  */
#define MAX_INSNS ((int) AAP_INSN_BRA + 1)

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
  long f_class_1;
  long f_dst_hi;
  long f_dst_lo;
  long f_x_dst_reg;
  long f_src_1_hi;
  long f_src_1_lo;
  long f_x_src_reg_1;
  long f_src_2_hi;
  long f_src_2_lo;
  long f_x_src_reg_2;
  long f_uint_18_3_hi;
  long f_uint_21_6;
  long f_uint_28_4;
  long f_uint_28_3;
  long f_uint_2_3;
  long f_uint_2_3_lo;
  long f_uint_5_6;
  long f_int_18_3;
  long f_int_24_9;
  long f_int_24_6;
  long f_int_24_3;
  long f_int_28_4_lo;
  long f_int_2_3;
  long f_int_8_3;
  long f_int_8_6;
  long f_int_8_9;
  long f_int_12_7;
  long f_int_12_10;
  long f_int_12_13;
  long f_u16;
  long f_carry;
  long f_dst_1_reg;
  long f_s_13;
  long f_s_10;
  long f_s_7;
  long f_s_22;
  long f_s_16;
  long f_s_10_fin;
  long f_i_12;
  long f_i_16;
  long f_i_6;
  long f_i_9;
  long f_i_10;
  long f_d_6;
  long f_a_6;
  long f_b_6;
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
