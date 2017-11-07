/* Instruction opcode table for aap.

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

#include "sysdep.h"
#include "ansidecl.h"
#include "bfd.h"
#include "symcat.h"
#include "aap-desc.h"
#include "aap-opc.h"
#include "libiberty.h"

/* -- opc.c */
/* -- */
/* The hash functions are recorded here to help keep assembler code out of
   the disassembler and vice versa.  */

static int asm_hash_insn_p        (const CGEN_INSN *);
static unsigned int asm_hash_insn (const char *);
static int dis_hash_insn_p        (const CGEN_INSN *);
static unsigned int dis_hash_insn (const char *, CGEN_INSN_INT);

/* Instruction formats.  */

#define F(f) & aap_cgen_ifld_table[AAP_##f]
static const CGEN_IFMT ifmt_empty ATTRIBUTE_UNUSED = {
  0, 0, 0x0, { { 0 } }
};

static const CGEN_IFMT ifmt_add ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_X_LENGTH) }, { F (F_X_OPCODE) }, { F (F_X_DST_REG) }, { F (F_X_SRC_REG_1) }, { F (F_X_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_addi ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_X_LENGTH) }, { F (F_X_OPCODE) }, { F (F_X_DST_REG) }, { F (F_X_SRC_REG_1) }, { F (F_UINT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_beq ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_X_LENGTH) }, { F (F_X_OPCODE) }, { F (F_INT_8_3) }, { F (F_X_SRC_REG_1) }, { F (F_X_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldb___xdest_____xsrc1____int023__ ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_X_LENGTH) }, { F (F_X_OPCODE) }, { F (F_X_DST_REG) }, { F (F_X_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_nop ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_X_LENGTH) }, { F (F_X_OPCODE) }, { F (F_X_DST_REG) }, { F (F_UINT_5_6) }, { 0 } }
};

static const CGEN_IFMT ifmt_bal ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_X_LENGTH) }, { F (F_X_OPCODE) }, { F (F_INT_8_6) }, { F (F_X_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_bra ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_X_LENGTH) }, { F (F_X_OPCODE) }, { F (F_INT_8_9) }, { 0 } }
};

static const CGEN_IFMT ifmt_add32 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00fe00, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_X_LENGTH) }, { F (F_X_OPCODE) }, { F (F_D_6) }, { F (F_A_6) }, { F (F_B_6) }, { 0 } }
};

static const CGEN_IFMT ifmt_asri32 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00fe00, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_X_LENGTH) }, { F (F_X_OPCODE) }, { F (F_D_6) }, { F (F_A_6) }, { F (F_I_6) }, { 0 } }
};

static const CGEN_IFMT ifmt_andi32 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_D_6) }, { F (F_A_6) }, { F (F_I_10I) }, { 0 } }
};

static const CGEN_IFMT ifmt_addi32 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_D_6) }, { F (F_A_6) }, { F (F_I_10) }, { 0 } }
};

static const CGEN_IFMT ifmt_beq32 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_S_10) }, { F (F_A_6) }, { F (F_B_6) }, { 0 } }
};

static const CGEN_IFMT ifmt_nop32 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00fe00, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_X_LENGTH) }, { F (F_X_OPCODE) }, { F (F_D_6) }, { F (F_I_12) }, { 0 } }
};

static const CGEN_IFMT ifmt_movi32 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_D_6) }, { F (F_I_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_bal32 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_S_16) }, { F (F_B_6) }, { 0 } }
};

static const CGEN_IFMT ifmt_bra32 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_S_22) }, { 0 } }
};

#undef F

#define A(a) (1 << CGEN_INSN_##a)
#define OPERAND(op) AAP_OPERAND_##op
#define MNEM CGEN_SYNTAX_MNEMONIC /* syntax value for mnemonic */
#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))

/* The instruction table.  */

static const CGEN_OPCODE aap_cgen_insn_opcode_table[MAX_INSNS] =
{
  /* Special null first entry.
     A `num' value of zero is thus invalid.
     Also, the special `invalid' insn resides here.  */
  { { 0, 0, 0, 0 }, {{0}}, 0, {0}},
/* add ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add, { 0x200 }
  },
/* sub ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add, { 0x400 }
  },
/* and ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add, { 0x600 }
  },
/* or ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add, { 0x800 }
  },
/* xor ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add, { 0xa00 }
  },
/* asr ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add, { 0xc00 }
  },
/* lsl ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add, { 0xe00 }
  },
/* lsr ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add, { 0x1000 }
  },
/* mov ${xdest},${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), 0 } },
    & ifmt_add, { 0x1200 }
  },
/* jmp ${xdest} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), 0 } },
    & ifmt_add, { 0x5000 }
  },
/* jal ${xdest},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC2), 0 } },
    & ifmt_add, { 0x5200 }
  },
/* jeq ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add, { 0x5400 }
  },
/* jne ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add, { 0x5600 }
  },
/* jlts ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add, { 0x5800 }
  },
/* jles ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add, { 0x5a00 }
  },
/* jltu ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add, { 0x5c00 }
  },
/* jleu ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add, { 0x5e00 }
  },
/* rte ${xdest} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), 0 } },
    & ifmt_add, { 0x6000 }
  },
/* addi ${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_addi, { 0x1400 }
  },
/* subi ${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_addi, { 0x1600 }
  },
/* asri ${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_addi, { 0x1800 }
  },
/* lsli ${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_addi, { 0x1a00 }
  },
/* lsri ${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_addi, { 0x1c00 }
  },
/* beq ${int083},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT083), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_beq, { 0x4400 }
  },
/* bne ${int083},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT083), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_beq, { 0x4600 }
  },
/* blts ${int083},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT083), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_beq, { 0x4800 }
  },
/* bles ${int083},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT083), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_beq, { 0x4a00 }
  },
/* bltu ${int083},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT083), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_beq, { 0x4c00 }
  },
/* bleu ${int083},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT083), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_beq, { 0x4e00 }
  },
/* ldb ${xdest},[${xsrc1},${int023}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '[', OP (XSRC1), ',', OP (INT023), ']', 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__, { 0x2000 }
  },
/* ldw ${xdest},[${xsrc1},${int023}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '[', OP (XSRC1), ',', OP (INT023), ']', 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__, { 0x2800 }
  },
/* ldb ${xdest},[${xsrc1}+,${int023}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '[', OP (XSRC1), '+', ',', OP (INT023), ']', 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__, { 0x2200 }
  },
/* ldw ${xdest},[${xsrc1}+,${int023}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '[', OP (XSRC1), '+', ',', OP (INT023), ']', 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__, { 0x2a00 }
  },
/* ldb ${xdest},[-${xsrc1},${int023}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '[', '-', OP (XSRC1), ',', OP (INT023), ']', 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__, { 0x2400 }
  },
/* ldw ${xdest},[-${xsrc1},${int023}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '[', '-', OP (XSRC1), ',', OP (INT023), ']', 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__, { 0x2c00 }
  },
/* stb [${xdest},${int023}],${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (XDEST), ',', OP (INT023), ']', ',', OP (XSRC1), 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__, { 0x3000 }
  },
/* stw [${xdest},${int023}],${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (XDEST), ',', OP (INT023), ']', ',', OP (XSRC1), 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__, { 0x3800 }
  },
/* stb [${xdest}+,${int023}],${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (XDEST), '+', ',', OP (INT023), ']', ',', OP (XSRC1), 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__, { 0x3200 }
  },
/* stw [${xdest}+,${int023}],${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (XDEST), '+', ',', OP (INT023), ']', ',', OP (XSRC1), 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__, { 0x3a00 }
  },
/* stb [-${xdest},${int023}],${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', '-', OP (XDEST), ',', OP (INT023), ']', ',', OP (XSRC1), 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__, { 0x3400 }
  },
/* stw [-${xdest},${int023}],${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', '-', OP (XDEST), ',', OP (INT023), ']', ',', OP (XSRC1), 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__, { 0x3c00 }
  },
/* nop ${xdest},${uint056} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (UINT056), 0 } },
    & ifmt_nop, { 0x0 }
  },
/* movi ${xdest},${uint056} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (UINT056), 0 } },
    & ifmt_nop, { 0x1e00 }
  },
/* bal ${int086},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT086), ',', OP (XSRC2), 0 } },
    & ifmt_bal, { 0x4200 }
  },
/* bra ${int089} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT089), 0 } },
    & ifmt_bra, { 0x4000 }
  },
/* add32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0x82000000 }
  },
/* sub32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0x84000000 }
  },
/* and32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0x86000000 }
  },
/* or32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0x88000000 }
  },
/* xor32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0x8a000000 }
  },
/* asr32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0x8c000000 }
  },
/* lsl32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0x8e000000 }
  },
/* lsr32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0x90000000 }
  },
/* mov32 ${d6},${a6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), 0 } },
    & ifmt_add32, { 0x92000000 }
  },
/* addc32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0x82000200 }
  },
/* subc32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0x84000200 }
  },
/* jmp32 ${d6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), 0 } },
    & ifmt_add32, { 0xd0000000 }
  },
/* jal32 ${d6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0xd2000000 }
  },
/* jeq32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0xd4000000 }
  },
/* jne32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0xd6000000 }
  },
/* jlts32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0xd8000000 }
  },
/* jles32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0xda000000 }
  },
/* jltu32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0xdc000000 }
  },
/* jleu32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0xde000000 }
  },
/* jmpl32 ${d6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), 0 } },
    & ifmt_add32, { 0xd0000200 }
  },
/* jall32 ${d6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0xd2000200 }
  },
/* jeql32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0xd4000200 }
  },
/* jnel32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0xd6000200 }
  },
/* jltsl32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0xd8000200 }
  },
/* jlesl32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0xda000200 }
  },
/* jltul32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0xdc000200 }
  },
/* jleul32 ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add32, { 0xde000200 }
  },
/* asri32 ${d6},${a6},${i6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (I6), 0 } },
    & ifmt_asri32, { 0x98000000 }
  },
/* lsli32 ${d6},${a6},${i6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (I6), 0 } },
    & ifmt_asri32, { 0x9a000000 }
  },
/* lsri32 ${d6},${a6},${i6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (I6), 0 } },
    & ifmt_asri32, { 0x9c000000 }
  },
/* andi32 ${d6},${a6},${i10i} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (I10I), 0 } },
    & ifmt_andi32, { 0x86000000 }
  },
/* ori32 ${d6},${a6},${i10i} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (I10I), 0 } },
    & ifmt_andi32, { 0x88000000 }
  },
/* xori32 ${d6},${a6},${i10i} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (I10I), 0 } },
    & ifmt_andi32, { 0x8a000000 }
  },
/* addi32 ${d6},${a6},${i10} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (I10), 0 } },
    & ifmt_addi32, { 0x94000000 }
  },
/* subi32 ${d6},${a6},${i10} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (I10), 0 } },
    & ifmt_addi32, { 0x96000000 }
  },
/* beq32 ${s10},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (S10), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_beq32, { 0xc4000000 }
  },
/* bne32 ${s10},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (S10), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_beq32, { 0xc6000000 }
  },
/* blts32 ${s10},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (S10), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_beq32, { 0xc8000000 }
  },
/* bles32 ${s10},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (S10), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_beq32, { 0xca000000 }
  },
/* bltu32 ${s10},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (S10), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_beq32, { 0xcc000000 }
  },
/* bleu32 ${s10},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (S10), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_beq32, { 0xce000000 }
  },
/* ldb32 ${d6},[${a6},${i10}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', '[', OP (A6), ',', OP (I10), ']', 0 } },
    & ifmt_addi32, { 0xa0000000 }
  },
/* ldw32 ${d6},[${a6},${i10}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', '[', OP (A6), ',', OP (I10), ']', 0 } },
    & ifmt_addi32, { 0xa8000000 }
  },
/* ldb32 ${d6},[${a6}+,${i10}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', '[', OP (A6), '+', ',', OP (I10), ']', 0 } },
    & ifmt_addi32, { 0xa2000000 }
  },
/* ldw32 ${d6},[${a6}+,${i10}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', '[', OP (A6), '+', ',', OP (I10), ']', 0 } },
    & ifmt_addi32, { 0xaa000000 }
  },
/* ldb32 ${d6},[-${a6},${i10}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', '[', '-', OP (A6), ',', OP (I10), ']', 0 } },
    & ifmt_addi32, { 0xa4000000 }
  },
/* ldw32 ${d6},[-${a6},${i10}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', '[', '-', OP (A6), ',', OP (I10), ']', 0 } },
    & ifmt_addi32, { 0xac000000 }
  },
/* stb32 [${d6},${i10}],${a6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (D6), ',', OP (I10), ']', ',', OP (A6), 0 } },
    & ifmt_addi32, { 0xb0000000 }
  },
/* stw32 [${d6},${i10}],${a6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (D6), ',', OP (I10), ']', ',', OP (A6), 0 } },
    & ifmt_addi32, { 0xb8000000 }
  },
/* stb32 [${d6}+,${i10}],${a6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (D6), '+', ',', OP (I10), ']', ',', OP (A6), 0 } },
    & ifmt_addi32, { 0xb2000000 }
  },
/* stw32 [${d6}+,${i10}],${a6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (D6), '+', ',', OP (I10), ']', ',', OP (A6), 0 } },
    & ifmt_addi32, { 0xba000000 }
  },
/* stb32 [-${d6},${i10}],${a6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', '-', OP (D6), ',', OP (I10), ']', ',', OP (A6), 0 } },
    & ifmt_addi32, { 0xb4000000 }
  },
/* stw32 [-${d6},${i10}],${a6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', '-', OP (D6), ',', OP (I10), ']', ',', OP (A6), 0 } },
    & ifmt_addi32, { 0xbc000000 }
  },
/* nop32 ${d6},${i12} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (I12), 0 } },
    & ifmt_nop32, { 0x80000000 }
  },
/* movi32 ${d6},${i16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (I16), 0 } },
    & ifmt_movi32, { 0x9e000000 }
  },
/* bal32 ${s16},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (S16), ',', OP (B6), 0 } },
    & ifmt_bal32, { 0xc2000000 }
  },
/* bra32 ${s22} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (S22), 0 } },
    & ifmt_bra32, { 0xc0000000 }
  },
};

#undef A
#undef OPERAND
#undef MNEM
#undef OP

/* Formats for ALIAS macro-insns.  */

#define F(f) & aap_cgen_ifld_table[AAP_##f]
#undef F

/* Each non-simple macro entry points to an array of expansion possibilities.  */

#define A(a) (1 << CGEN_INSN_##a)
#define OPERAND(op) AAP_OPERAND_##op
#define MNEM CGEN_SYNTAX_MNEMONIC /* syntax value for mnemonic */
#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))

/* The macro instruction table.  */

static const CGEN_IBASE aap_cgen_macro_insn_table[] =
{
};

/* The macro instruction opcode table.  */

static const CGEN_OPCODE aap_cgen_macro_insn_opcode_table[] =
{
};

#undef A
#undef OPERAND
#undef MNEM
#undef OP

#ifndef CGEN_ASM_HASH_P
#define CGEN_ASM_HASH_P(insn) 1
#endif

#ifndef CGEN_DIS_HASH_P
#define CGEN_DIS_HASH_P(insn) 1
#endif

/* Return non-zero if INSN is to be added to the hash table.
   Targets are free to override CGEN_{ASM,DIS}_HASH_P in the .opc file.  */

static int
asm_hash_insn_p (insn)
     const CGEN_INSN *insn ATTRIBUTE_UNUSED;
{
  return CGEN_ASM_HASH_P (insn);
}

static int
dis_hash_insn_p (insn)
     const CGEN_INSN *insn;
{
  /* If building the hash table and the NO-DIS attribute is present,
     ignore.  */
  if (CGEN_INSN_ATTR_VALUE (insn, CGEN_INSN_NO_DIS))
    return 0;
  return CGEN_DIS_HASH_P (insn);
}

#ifndef CGEN_ASM_HASH
#define CGEN_ASM_HASH_SIZE 127
#ifdef CGEN_MNEMONIC_OPERANDS
#define CGEN_ASM_HASH(mnem) (*(unsigned char *) (mnem) % CGEN_ASM_HASH_SIZE)
#else
#define CGEN_ASM_HASH(mnem) (*(unsigned char *) (mnem) % CGEN_ASM_HASH_SIZE) /*FIXME*/
#endif
#endif

/* It doesn't make much sense to provide a default here,
   but while this is under development we do.
   BUFFER is a pointer to the bytes of the insn, target order.
   VALUE is the first base_insn_bitsize bits as an int in host order.  */

#ifndef CGEN_DIS_HASH
#define CGEN_DIS_HASH_SIZE 256
#define CGEN_DIS_HASH(buf, value) (*(unsigned char *) (buf))
#endif

/* The result is the hash value of the insn.
   Targets are free to override CGEN_{ASM,DIS}_HASH in the .opc file.  */

static unsigned int
asm_hash_insn (mnem)
     const char * mnem;
{
  return CGEN_ASM_HASH (mnem);
}

/* BUF is a pointer to the bytes of the insn, target order.
   VALUE is the first base_insn_bitsize bits as an int in host order.  */

static unsigned int
dis_hash_insn (buf, value)
     const char * buf ATTRIBUTE_UNUSED;
     CGEN_INSN_INT value ATTRIBUTE_UNUSED;
{
  return CGEN_DIS_HASH (buf, value);
}

/* Set the recorded length of the insn in the CGEN_FIELDS struct.  */

static void
set_fields_bitsize (CGEN_FIELDS *fields, int size)
{
  CGEN_FIELDS_BITSIZE (fields) = size;
}

/* Function to call before using the operand instance table.
   This plugs the opcode entries and macro instructions into the cpu table.  */

void
aap_cgen_init_opcode_table (CGEN_CPU_DESC cd)
{
  int i;
  int num_macros = (sizeof (aap_cgen_macro_insn_table) /
		    sizeof (aap_cgen_macro_insn_table[0]));
  const CGEN_IBASE *ib = & aap_cgen_macro_insn_table[0];
  const CGEN_OPCODE *oc = & aap_cgen_macro_insn_opcode_table[0];
  CGEN_INSN *insns = xmalloc (num_macros * sizeof (CGEN_INSN));

  /* This test has been added to avoid a warning generated
     if memset is called with a third argument of value zero.  */
  if (num_macros >= 1)
    memset (insns, 0, num_macros * sizeof (CGEN_INSN));
  for (i = 0; i < num_macros; ++i)
    {
      insns[i].base = &ib[i];
      insns[i].opcode = &oc[i];
      aap_cgen_build_insn_regex (& insns[i]);
    }
  cd->macro_insn_table.init_entries = insns;
  cd->macro_insn_table.entry_size = sizeof (CGEN_IBASE);
  cd->macro_insn_table.num_init_entries = num_macros;

  oc = & aap_cgen_insn_opcode_table[0];
  insns = (CGEN_INSN *) cd->insn_table.init_entries;
  for (i = 0; i < MAX_INSNS; ++i)
    {
      insns[i].opcode = &oc[i];
      aap_cgen_build_insn_regex (& insns[i]);
    }

  cd->sizeof_fields = sizeof (CGEN_FIELDS);
  cd->set_fields_bitsize = set_fields_bitsize;

  cd->asm_hash_p = asm_hash_insn_p;
  cd->asm_hash = asm_hash_insn;
  cd->asm_hash_size = CGEN_ASM_HASH_SIZE;

  cd->dis_hash_p = dis_hash_insn_p;
  cd->dis_hash = dis_hash_insn;
  cd->dis_hash_size = CGEN_DIS_HASH_SIZE;
}
