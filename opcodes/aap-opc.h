/* Instruction opcode header for aap.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright (C) 1996-2016 Free Software Foundation, Inc.

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
  AAP_INSN_INVALID, AAP_INSN_NOP
} CGEN_INSN_TYPE;

/* Index of `invalid' insn place holder.  */
#define CGEN_INSN_INVALID AAP_INSN_INVALID

/* Total number of insns in table.  */
#define MAX_INSNS ((int) AAP_INSN_NOP + 1)

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
  long f_x_dst_reg;
  long f_src_reg_1;
  long f_x_scr_reg_1;
  long f_src_reg_2;
  long f_x_src_reg_2;
  long f_blank;
  long f_uint_18_3;
  long f_uint_21_6;
  long f_uint_12_4;
  long f_uint_iii1;
  long f_uint_2_3;
  long f_uint_6_3;
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
