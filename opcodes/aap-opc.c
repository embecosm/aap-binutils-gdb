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
#include "elf/aap.h"
#include <stdio.h>
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

static const CGEN_IFMT ifmt_add16 ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_X_DST_REG) }, { F (F_X_SRC_REG_1) }, { F (F_X_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_mov16 ATTRIBUTE_UNUSED = {
  16, 16, 0x80007e00, { { F (F_X_LENGTH) }, { F (F_OPCODE) }, { F (F_X_DST_REG) }, { F (F_X_SRC_REG_1) }, { F (F_X_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_addi16 ATTRIBUTE_UNUSED = {
  16, 16, 0x80007e00, { { F (F_X_LENGTH) }, { F (F_OPCODE) }, { F (F_X_DST_REG) }, { F (F_X_SRC_REG_1) }, { F (F_UINT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_beq16 ATTRIBUTE_UNUSED = {
  16, 16, 0x80007e00, { { F (F_X_LENGTH) }, { F (F_OPCODE) }, { F (F_INT_8_3) }, { F (F_X_SRC_REG_1) }, { F (F_X_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldb___xdest_____xsrc1____int023__16 ATTRIBUTE_UNUSED = {
  16, 16, 0x80007e00, { { F (F_X_LENGTH) }, { F (F_OPCODE) }, { F (F_X_DST_REG) }, { F (F_X_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_nop16 ATTRIBUTE_UNUSED = {
  16, 16, 0x80007e00, { { F (F_X_LENGTH) }, { F (F_OPCODE) }, { F (F_X_DST_REG) }, { F (F_UINT_5_6) }, { 0 } }
};

static const CGEN_IFMT ifmt_bal16 ATTRIBUTE_UNUSED = {
  16, 16, 0x80007e00, { { F (F_X_LENGTH) }, { F (F_OPCODE) }, { F (F_INT_8_6) }, { F (F_X_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_bra16 ATTRIBUTE_UNUSED = {
  16, 16, 0x80007e00, { { F (F_X_LENGTH) }, { F (F_OPCODE) }, { F (F_INT_8_9) }, { 0 } }
};

static const CGEN_IFMT ifmt_add ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00fe00, { { F (F_X_LENGTH) }, { F (F_X_OPCODE) }, { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_D_6) }, { F (F_A_6) }, { F (F_B_6) }, { 0 } }
};

static const CGEN_IFMT ifmt_asri ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00fe00, { { F (F_X_LENGTH) }, { F (F_X_OPCODE) }, { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_D_6) }, { F (F_A_6) }, { F (F_I_6) }, { 0 } }
};

static const CGEN_IFMT ifmt_andi ATTRIBUTE_UNUSED = {
  32, 32, 0xe200fe00, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_CLASS_1) }, { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_D_6) }, { F (F_A_6) }, { F (F_I_9) }, { 0 } }
};

static const CGEN_IFMT ifmt_addi ATTRIBUTE_UNUSED = {
  32, 32, 0xe000fe00, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_D_6) }, { F (F_A_6) }, { F (F_I_10) }, { 0 } }
};

static const CGEN_IFMT ifmt_beq ATTRIBUTE_UNUSED = {
  32, 32, 0xe000fe00, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_S_10_FIN) }, { F (F_A_6) }, { F (F_B_6) }, { 0 } }
};

static const CGEN_IFMT ifmt_nop ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00fe00, { { F (F_X_LENGTH) }, { F (F_X_OPCODE) }, { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_D_6) }, { F (F_I_12) }, { 0 } }
};

static const CGEN_IFMT ifmt_movi ATTRIBUTE_UNUSED = {
  32, 32, 0xe000fe00, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_D_6) }, { F (F_I_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_bal ATTRIBUTE_UNUSED = {
  32, 32, 0xe000fe00, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_S_16) }, { F (F_B_6) }, { 0 } }
};

static const CGEN_IFMT ifmt_bra ATTRIBUTE_UNUSED = {
  32, 32, 0xe000fe00, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_S_22) }, { 0 } }
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
    & ifmt_add16, { 0x200 }
  },
/* sub ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add16, { 0x400 }
  },
/* and ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add16, { 0x600 }
  },
/* or ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add16, { 0x800 }
  },
/* xor ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add16, { 0xa00 }
  },
/* asr ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add16, { 0xc00 }
  },
/* lsl ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add16, { 0xe00 }
  },
/* lsr ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add16, { 0x1000 }
  },
/* mov ${xdest},${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), 0 } },
    & ifmt_mov16, { 0x1200 }
  },
/* jmp ${xdest} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), 0 } },
    & ifmt_mov16, { 0x5000 }
  },
/* jal ${xdest},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC2), 0 } },
    & ifmt_mov16, { 0x5200 }
  },
/* jeq ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add16, { 0x5400 }
  },
/* jne ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add16, { 0x5600 }
  },
/* jlts ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add16, { 0x5800 }
  },
/* jles ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add16, { 0x5a00 }
  },
/* jltu ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add16, { 0x5c00 }
  },
/* jleu ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add16, { 0x5e00 }
  },
/* rte ${xdest} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), 0 } },
    & ifmt_mov16, { 0x6000 }
  },
/* addi ${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_addi16, { 0x1400 }
  },
/* subi ${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_addi16, { 0x1600 }
  },
/* asri ${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_addi16, { 0x1800 }
  },
/* lsli ${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_addi16, { 0x1a00 }
  },
/* lsri ${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_addi16, { 0x1c00 }
  },
/* beq ${int083},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT083), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_beq16, { 0x4400 }
  },
/* bne ${int083},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT083), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_beq16, { 0x4600 }
  },
/* blts ${int083},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT083), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_beq16, { 0x4800 }
  },
/* bles ${int083},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT083), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_beq16, { 0x4a00 }
  },
/* bltu ${int083},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT083), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_beq16, { 0x4c00 }
  },
/* bleu ${int083},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT083), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_beq16, { 0x4e00 }
  },
/* ldb ${xdest},[${xsrc1},${int023}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '[', OP (XSRC1), ',', OP (INT023), ']', 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__16, { 0x2000 }
  },
/* ldw ${xdest},[${xsrc1},${int023}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '[', OP (XSRC1), ',', OP (INT023), ']', 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__16, { 0x2800 }
  },
/* ldb ${xdest},[${xsrc1}+,${int023}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '[', OP (XSRC1), '+', ',', OP (INT023), ']', 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__16, { 0x2200 }
  },
/* ldw ${xdest},[${xsrc1}+,${int023}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '[', OP (XSRC1), '+', ',', OP (INT023), ']', 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__16, { 0x2a00 }
  },
/* ldb ${xdest},[-${xsrc1},${int023}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '[', '-', OP (XSRC1), ',', OP (INT023), ']', 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__16, { 0x2400 }
  },
/* ldw ${xdest},[-${xsrc1},${int023}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '[', '-', OP (XSRC1), ',', OP (INT023), ']', 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__16, { 0x2c00 }
  },
/* stb [${xdest},${int023}],${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (XDEST), ',', OP (INT023), ']', ',', OP (XSRC1), 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__16, { 0x3000 }
  },
/* stw [${xdest},${int023}],${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (XDEST), ',', OP (INT023), ']', ',', OP (XSRC1), 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__16, { 0x3800 }
  },
/* stb [${xdest}+,${int023}],${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (XDEST), '+', ',', OP (INT023), ']', ',', OP (XSRC1), 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__16, { 0x3200 }
  },
/* stw [${xdest}+,${int023}],${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (XDEST), '+', ',', OP (INT023), ']', ',', OP (XSRC1), 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__16, { 0x3a00 }
  },
/* stb [-${xdest},${int023}],${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', '-', OP (XDEST), ',', OP (INT023), ']', ',', OP (XSRC1), 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__16, { 0x3400 }
  },
/* stw [-${xdest},${int023}],${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', '-', OP (XDEST), ',', OP (INT023), ']', ',', OP (XSRC1), 0 } },
    & ifmt_ldb___xdest_____xsrc1____int023__16, { 0x3c00 }
  },
/* nop ${xdest},${uint056} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (UINT056), 0 } },
    & ifmt_nop16, { 0x0 }
  },
/* movi ${xdest},${uint056} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (UINT056), 0 } },
    & ifmt_nop16, { 0x1e00 }
  },
/* bal ${int086},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT086), ',', OP (XSRC2), 0 } },
    & ifmt_bal16, { 0x4200 }
  },
/* bra ${int089} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT089), 0 } },
    & ifmt_bra16, { 0x4000 }
  },
/* add ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0x8200 }
  },
/* sub ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0x8400 }
  },
/* and ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0x8600 }
  },
/* or ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0x8800 }
  },
/* xor ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0x8a00 }
  },
/* asr ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0x8c00 }
  },
/* lsl ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0x8e00 }
  },
/* lsr ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0x9000 }
  },
/* mov ${d6},${a6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), 0 } },
    & ifmt_add, { 0x9200 }
  },
/* addc ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0x2008200 }
  },
/* subc ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0x2008400 }
  },
/* jmp ${d6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), 0 } },
    & ifmt_add, { 0xd000 }
  },
/* jal ${d6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (B6), 0 } },
    & ifmt_add, { 0xd200 }
  },
/* jeq ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0xd400 }
  },
/* jne ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0xd600 }
  },
/* jlts ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0xd800 }
  },
/* jles ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0xda00 }
  },
/* jltu ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0xdc00 }
  },
/* jleu ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0xde00 }
  },
/* jmpl ${d6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), 0 } },
    & ifmt_add, { 0x200d000 }
  },
/* jall ${d6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (B6), 0 } },
    & ifmt_add, { 0x200d200 }
  },
/* jeql ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0x200d400 }
  },
/* jnel ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0x200d600 }
  },
/* jltsl ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0x200d800 }
  },
/* jlesl ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0x200da00 }
  },
/* jltul ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0x200dc00 }
  },
/* jleul ${d6},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_add, { 0x200de00 }
  },
/* asri ${d6},${a6},${i6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (I6), 0 } },
    & ifmt_asri, { 0x9800 }
  },
/* lsli ${d6},${a6},${i6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (I6), 0 } },
    & ifmt_asri, { 0x9a00 }
  },
/* lsri ${d6},${a6},${i6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (I6), 0 } },
    & ifmt_asri, { 0x9c00 }
  },
/* andi ${d6},${a6},${i9} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (I9), 0 } },
    & ifmt_andi, { 0x2008600 }
  },
/* ori ${d6},${a6},${i9} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (I9), 0 } },
    & ifmt_andi, { 0x2008800 }
  },
/* xori ${d6},${a6},${i9} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (I9), 0 } },
    & ifmt_andi, { 0x2008a00 }
  },
/* addi ${d6},${a6},${i10} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (I10), 0 } },
    & ifmt_addi, { 0x9400 }
  },
/* subi ${d6},${a6},${i10} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (A6), ',', OP (I10), 0 } },
    & ifmt_addi, { 0x9600 }
  },
/* beq ${s10},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (S10), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_beq, { 0xc400 }
  },
/* bne ${s10},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (S10), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_beq, { 0xc600 }
  },
/* blts ${s10},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (S10), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_beq, { 0xc800 }
  },
/* bles ${s10},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (S10), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_beq, { 0xca00 }
  },
/* bltu ${s10},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (S10), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_beq, { 0xcc00 }
  },
/* bleu ${s10},${a6},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (S10), ',', OP (A6), ',', OP (B6), 0 } },
    & ifmt_beq, { 0xce00 }
  },
/* ldb ${d6},[${a6},${i10}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', '[', OP (A6), ',', OP (I10), ']', 0 } },
    & ifmt_addi, { 0xa000 }
  },
/* ldw ${d6},[${a6},${i10}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', '[', OP (A6), ',', OP (I10), ']', 0 } },
    & ifmt_addi, { 0xa800 }
  },
/* ldb ${d6},[${a6}+,${i10}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', '[', OP (A6), '+', ',', OP (I10), ']', 0 } },
    & ifmt_addi, { 0xa200 }
  },
/* ldw ${d6},[${a6}+,${i10}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', '[', OP (A6), '+', ',', OP (I10), ']', 0 } },
    & ifmt_addi, { 0xaa00 }
  },
/* ldb ${d6},[-${a6},${i10}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', '[', '-', OP (A6), ',', OP (I10), ']', 0 } },
    & ifmt_addi, { 0xa400 }
  },
/* ldw ${d6},[-${a6},${i10}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', '[', '-', OP (A6), ',', OP (I10), ']', 0 } },
    & ifmt_addi, { 0xac00 }
  },
/* stb [${d6},${i10}],${a6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (D6), ',', OP (I10), ']', ',', OP (A6), 0 } },
    & ifmt_addi, { 0xb000 }
  },
/* stw [${d6},${i10}],${a6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (D6), ',', OP (I10), ']', ',', OP (A6), 0 } },
    & ifmt_addi, { 0xb800 }
  },
/* stb [${d6}+,${i10}],${a6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (D6), '+', ',', OP (I10), ']', ',', OP (A6), 0 } },
    & ifmt_addi, { 0xb200 }
  },
/* stw [${d6}+,${i10}],${a6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (D6), '+', ',', OP (I10), ']', ',', OP (A6), 0 } },
    & ifmt_addi, { 0xba00 }
  },
/* stb [-${d6},${i10}],${a6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', '-', OP (D6), ',', OP (I10), ']', ',', OP (A6), 0 } },
    & ifmt_addi, { 0xb400 }
  },
/* stw [-${d6},${i10}],${a6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', '-', OP (D6), ',', OP (I10), ']', ',', OP (A6), 0 } },
    & ifmt_addi, { 0xbc00 }
  },
/* nop ${d6},${i12} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (I12), 0 } },
    & ifmt_nop, { 0x8000 }
  },
/* movi ${d6},${i16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (D6), ',', OP (I16), 0 } },
    & ifmt_movi, { 0x9e00 }
  },
/* bal ${s16},${b6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (S16), ',', OP (B6), 0 } },
    & ifmt_bal, { 0xc200 }
  },
/* bra ${s22} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (S22), 0 } },
    & ifmt_bra, { 0xc000 }
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
