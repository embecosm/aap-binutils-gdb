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

#define CGEN_DIS_HASH_SIZE 128
#define CGEN_DIS_HASH(buf, value) (((buf [1]) >> 1) & 0x7f)

/* -- asm.c */
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

static const CGEN_IFMT ifmt_nop ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_UINT_5_6) }, { 0 } }
};

static const CGEN_IFMT ifmt_add ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_add_x ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00fe00, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_OPCODE) }, { F (F_X_FILLER_7) }, { F (F_LONG_DST_REG) }, { F (F_LONG_SRC_REG_1) }, { F (F_LONG_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_mov ATTRIBUTE_UNUSED = {
  16, 16, 0xfe07, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_mov_x ATTRIBUTE_UNUSED = {
  32, 32, 0xfe07fe07, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_OPCODE) }, { F (F_X_SRC_REG_2) }, { F (F_X_FILLER_7) }, { F (F_LONG_DST_REG) }, { F (F_LONG_SRC_REG_1) }, { F (F_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_addi ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_UINT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldb ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldb_x ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_OPCODE) }, { F (F_X_FILLER_3) }, { F (F_LONG_DST_REG) }, { F (F_LONG_SRC_REG_1) }, { F (F_SIMM10) }, { 0 } }
};

static const CGEN_IFMT ifmt_bra ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_PCREL_SIMM9) }, { 0 } }
};

static const CGEN_IFMT ifmt_bra_x ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_OPCODE) }, { F (F_X_FILLER_3) }, { F (F_PCREL_SIMM22) }, { 0 } }
};

static const CGEN_IFMT ifmt_bal ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_PCREL_SIMM6) }, { F (F_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_bal_x ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_OPCODE) }, { F (F_X_FILLER_3) }, { F (F_PCREL_SIMM16) }, { F (F_LONG_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_beq ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_PCREL_SIMM3) }, { F (F_SRC_REG_1) }, { F (F_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_beq_x ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_OPCODE) }, { F (F_X_FILLER_3) }, { F (F_PCREL_SIMM10) }, { F (F_LONG_SRC_REG_1) }, { F (F_LONG_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_jmp ATTRIBUTE_UNUSED = {
  16, 16, 0xfe3f, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_jmp_x ATTRIBUTE_UNUSED = {
  32, 32, 0xfe3ffe3f, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_OPCODE) }, { F (F_X_SRC_REG_1) }, { F (F_X_SRC_REG_2) }, { F (F_X_FILLER_7) }, { F (F_LONG_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_jal ATTRIBUTE_UNUSED = {
  16, 16, 0xfe38, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_jal_x ATTRIBUTE_UNUSED = {
  32, 32, 0xfe38fe38, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_OPCODE) }, { F (F_X_SRC_REG_1) }, { F (F_X_FILLER_7) }, { F (F_LONG_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_LONG_SRC_REG_2) }, { 0 } }
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
/* nop ${dest},${uint6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (UINT6), 0 } },
    & ifmt_nop, { 0x0 }
  },
/* add ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_add, { 0x200 }
  },
/* add ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add_x, { 0x82000000 }
  },
/* sub ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_add, { 0x400 }
  },
/* sub ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add_x, { 0x84000000 }
  },
/* and ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_add, { 0x600 }
  },
/* and ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add_x, { 0x86000000 }
  },
/* or ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_add, { 0x800 }
  },
/* or ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add_x, { 0x88000000 }
  },
/* xor ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_add, { 0xa00 }
  },
/* xor ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add_x, { 0x8a000000 }
  },
/* asr ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_add, { 0xc00 }
  },
/* asr ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add_x, { 0x8c000000 }
  },
/* lsl ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_add, { 0xe00 }
  },
/* lsl ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add_x, { 0x8e000000 }
  },
/* lsr ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_add, { 0x1000 }
  },
/* lsr ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add_x, { 0x90000000 }
  },
/* mov ${dest},${src1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), 0 } },
    & ifmt_mov, { 0x1200 }
  },
/* mov ${xdest},${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), 0 } },
    & ifmt_mov_x, { 0x92000000 }
  },
/* addi ${dest},${src1},#${uint3} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', '#', OP (UINT3), 0 } },
    & ifmt_addi, { 0x1400 }
  },
/* subi ${dest},${src1},#${uint3} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', '#', OP (UINT3), 0 } },
    & ifmt_addi, { 0x1600 }
  },
/* asri ${dest},${src1},#${uint3} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', '#', OP (UINT3), 0 } },
    & ifmt_addi, { 0x1800 }
  },
/* lsli ${dest},${src1},#${uint3} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', '#', OP (UINT3), 0 } },
    & ifmt_addi, { 0x1a00 }
  },
/* lsri ${dest},${src1},#${uint3} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', '#', OP (UINT3), 0 } },
    & ifmt_addi, { 0x1c00 }
  },
/* movi ${dest},${uint6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (UINT6), 0 } },
    & ifmt_nop, { 0x1e00 }
  },
/* ldb ${dest},(${src1},${int3}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', '(', OP (SRC1), ',', OP (INT3), ')', 0 } },
    & ifmt_ldb, { 0x2000 }
  },
/* ldb ${dest},(${src1}+,${int3}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', '(', OP (SRC1), '+', ',', OP (INT3), ')', 0 } },
    & ifmt_ldb, { 0x2200 }
  },
/* ldb ${dest},(-${src1},${int3}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', '(', '-', OP (SRC1), ',', OP (INT3), ')', 0 } },
    & ifmt_ldb, { 0x2400 }
  },
/* ldb ${xdest},(${xsrc1},${int10}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '(', OP (XSRC1), ',', OP (INT10), ')', 0 } },
    & ifmt_ldb_x, { 0xa0000000 }
  },
/* ldb ${xdest},(${xsrc1}+,${int10}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '(', OP (XSRC1), '+', ',', OP (INT10), ')', 0 } },
    & ifmt_ldb_x, { 0xa2000000 }
  },
/* ldb ${xdest},(-${xsrc1},${int10}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '(', '-', OP (XSRC1), ',', OP (INT10), ')', 0 } },
    & ifmt_ldb_x, { 0xa4000000 }
  },
/* ldw ${dest},(${src1},${int3}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', '(', OP (SRC1), ',', OP (INT3), ')', 0 } },
    & ifmt_ldb, { 0x2800 }
  },
/* ldw ${dest},(${src1}+,${int3}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', '(', OP (SRC1), '+', ',', OP (INT3), ')', 0 } },
    & ifmt_ldb, { 0x2a00 }
  },
/* ldw ${dest},(-${src1},${int3}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', '(', '-', OP (SRC1), ',', OP (INT3), ')', 0 } },
    & ifmt_ldb, { 0x2c00 }
  },
/* ldw ${xdest},(${xsrc1},${int10}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '(', OP (XSRC1), ',', OP (INT10), ')', 0 } },
    & ifmt_ldb_x, { 0xa8000000 }
  },
/* ldw ${xdest},(${xsrc1}+,${int10}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '(', OP (XSRC1), '+', ',', OP (INT10), ')', 0 } },
    & ifmt_ldb_x, { 0xaa000000 }
  },
/* ldw ${xdest},(-${xsrc1},${int10}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '(', '-', OP (XSRC1), ',', OP (INT10), ')', 0 } },
    & ifmt_ldb_x, { 0xac000000 }
  },
/* stb (${dest},${int3}),${src1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', OP (DEST), ',', OP (INT3), ')', ',', OP (SRC1), 0 } },
    & ifmt_ldb, { 0x3000 }
  },
/* stb (${dest}+,${int3}),${src1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', OP (DEST), '+', ',', OP (INT3), ')', ',', OP (SRC1), 0 } },
    & ifmt_ldb, { 0x3200 }
  },
/* stb (-${dest},${int3}),${src1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', '-', OP (DEST), ',', OP (INT3), ')', ',', OP (SRC1), 0 } },
    & ifmt_ldb, { 0x3400 }
  },
/* stb (${xdest},${int10}),${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', OP (XDEST), ',', OP (INT10), ')', ',', OP (XSRC1), 0 } },
    & ifmt_ldb_x, { 0xb0000000 }
  },
/* stb (${xdest}+,${int10}),${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', OP (XDEST), '+', ',', OP (INT10), ')', ',', OP (XSRC1), 0 } },
    & ifmt_ldb_x, { 0xb2000000 }
  },
/* stb (-${xdest},${int10}),${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', '-', OP (XDEST), ',', OP (INT10), ')', ',', OP (XSRC1), 0 } },
    & ifmt_ldb_x, { 0xb4000000 }
  },
/* stw (${dest},${int3}),${src1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', OP (DEST), ',', OP (INT3), ')', ',', OP (SRC1), 0 } },
    & ifmt_ldb, { 0x3800 }
  },
/* stw (${dest}+,${int3}),${src1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', OP (DEST), '+', ',', OP (INT3), ')', ',', OP (SRC1), 0 } },
    & ifmt_ldb, { 0x3a00 }
  },
/* stw (-${dest},${int3}),${src1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', '-', OP (DEST), ',', OP (INT3), ')', ',', OP (SRC1), 0 } },
    & ifmt_ldb, { 0x3c00 }
  },
/* stw (${xdest},${int10}),${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', OP (XDEST), ',', OP (INT10), ')', ',', OP (XSRC1), 0 } },
    & ifmt_ldb_x, { 0xb8000000 }
  },
/* stw (${xdest}+,${int10}),${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', OP (XDEST), '+', ',', OP (INT10), ')', ',', OP (XSRC1), 0 } },
    & ifmt_ldb_x, { 0xba000000 }
  },
/* stw (-${xdest},${int10}),${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', '-', OP (XDEST), ',', OP (INT10), ')', ',', OP (XSRC1), 0 } },
    & ifmt_ldb_x, { 0xbc000000 }
  },
/* bra ${iaddr9} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IADDR9), 0 } },
    & ifmt_bra, { 0x4000 }
  },
/* bra ${iaddr22} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IADDR22), 0 } },
    & ifmt_bra_x, { 0xc0000000 }
  },
/* bal ${iaddr6},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IADDR6), ',', OP (SRC2), 0 } },
    & ifmt_bal, { 0x4200 }
  },
/* bal ${iaddr16},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IADDR16), ',', OP (XSRC2), 0 } },
    & ifmt_bal_x, { 0xc2000000 }
  },
/* beq ${iaddr3},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IADDR3), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_beq, { 0x4400 }
  },
/* beq ${iaddr10},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IADDR10), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_beq_x, { 0xc4000000 }
  },
/* bne ${iaddr3},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IADDR3), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_beq, { 0x4600 }
  },
/* bne ${iaddr10},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IADDR10), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_beq_x, { 0xc6000000 }
  },
/* blts ${iaddr3},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IADDR3), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_beq, { 0x4800 }
  },
/* blts ${iaddr10},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IADDR10), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_beq_x, { 0xc8000000 }
  },
/* bles ${iaddr3},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IADDR3), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_beq, { 0x4a00 }
  },
/* bles ${iaddr10},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IADDR10), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_beq_x, { 0xca000000 }
  },
/* bltu ${iaddr3},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IADDR3), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_beq, { 0x4c00 }
  },
/* bltu ${iaddr10},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IADDR10), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_beq_x, { 0xcc000000 }
  },
/* bleu ${iaddr3},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IADDR3), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_beq, { 0x4e00 }
  },
/* bleu ${iaddr10},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IADDR10), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_beq_x, { 0xce000000 }
  },
/* jmp ${dest} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), 0 } },
    & ifmt_jmp, { 0x5000 }
  },
/* jmp ${xdest} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), 0 } },
    & ifmt_jmp_x, { 0xd0000000 }
  },
/* jal ${dest},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC2), 0 } },
    & ifmt_jal, { 0x5200 }
  },
/* jal ${xdest},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC2), 0 } },
    & ifmt_jal_x, { 0xd2000000 }
  },
/* jeq ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_add, { 0x5400 }
  },
/* jeq ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add_x, { 0xd4000000 }
  },
/* jne ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_add, { 0x5600 }
  },
/* jne ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add_x, { 0xd6000000 }
  },
/* jlts ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_add, { 0x5800 }
  },
/* jlts ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add_x, { 0xd8000000 }
  },
/* jles ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_add, { 0x5a00 }
  },
/* jles ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add_x, { 0xda000000 }
  },
/* jltu ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_add, { 0x5c00 }
  },
/* jltu ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add_x, { 0xdc000000 }
  },
/* jleu ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_add, { 0x5e00 }
  },
/* jleu ${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_add_x, { 0xde000000 }
  },
/* rte ${dest} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), 0 } },
    & ifmt_jmp, { 0x6000 }
  },
};

#undef A
#undef OPERAND
#undef MNEM
#undef OP

/* Formats for ALIAS macro-insns.  */

#define F(f) & aap_cgen_ifld_table[AAP_##f]
static const CGEN_IFMT ifmt_ldb_brackets ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldb_zr ATTRIBUTE_UNUSED = {
  16, 16, 0xfe07, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldb_zr_brackets ATTRIBUTE_UNUSED = {
  16, 16, 0xfe07, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldb_post_inc_brackets ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldb_pre_dec_brackets ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldb_x_brackets ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_FILLER_3) }, { F (F_X_OPCODE) }, { F (F_LONG_DST_REG) }, { F (F_LONG_SRC_REG_1) }, { F (F_SIMM10) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldb_post_inc_x_brackets ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_FILLER_3) }, { F (F_X_OPCODE) }, { F (F_LONG_DST_REG) }, { F (F_LONG_SRC_REG_1) }, { F (F_SIMM10) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldb_pre_dec_x_brackets ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_FILLER_3) }, { F (F_X_OPCODE) }, { F (F_LONG_DST_REG) }, { F (F_LONG_SRC_REG_1) }, { F (F_SIMM10) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldw_brackets ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldw_zr ATTRIBUTE_UNUSED = {
  16, 16, 0xfe07, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldw_zr_brackets ATTRIBUTE_UNUSED = {
  16, 16, 0xfe07, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldw_post_inc_brackets ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldw_pre_dec_brackets ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldw_x_brackets ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_FILLER_3) }, { F (F_X_OPCODE) }, { F (F_LONG_DST_REG) }, { F (F_LONG_SRC_REG_1) }, { F (F_SIMM10) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldw_post_inc_x_brackets ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_FILLER_3) }, { F (F_X_OPCODE) }, { F (F_LONG_DST_REG) }, { F (F_LONG_SRC_REG_1) }, { F (F_SIMM10) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldw_pre_dec_x_brackets ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_FILLER_3) }, { F (F_X_OPCODE) }, { F (F_LONG_DST_REG) }, { F (F_LONG_SRC_REG_1) }, { F (F_SIMM10) }, { 0 } }
};

static const CGEN_IFMT ifmt_stb_brackets ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_stb_zr ATTRIBUTE_UNUSED = {
  16, 16, 0xfe07, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_stb_zr_brackets ATTRIBUTE_UNUSED = {
  16, 16, 0xfe07, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_stb_post_inc_brackets ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_stb_pre_dec_brackets ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_stb_x_brackets ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_FILLER_3) }, { F (F_X_OPCODE) }, { F (F_LONG_DST_REG) }, { F (F_LONG_SRC_REG_1) }, { F (F_SIMM10) }, { 0 } }
};

static const CGEN_IFMT ifmt_stb_post_inc_x_brackets ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_FILLER_3) }, { F (F_X_OPCODE) }, { F (F_LONG_DST_REG) }, { F (F_LONG_SRC_REG_1) }, { F (F_SIMM10) }, { 0 } }
};

static const CGEN_IFMT ifmt_stb_pre_dec_x_brackets ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_FILLER_3) }, { F (F_X_OPCODE) }, { F (F_LONG_DST_REG) }, { F (F_LONG_SRC_REG_1) }, { F (F_SIMM10) }, { 0 } }
};

static const CGEN_IFMT ifmt_stw_brackets ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_stw_zr ATTRIBUTE_UNUSED = {
  16, 16, 0xfe07, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_stw_zr_brackets ATTRIBUTE_UNUSED = {
  16, 16, 0xfe07, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_stw_post_inc_brackets ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_stw_pre_dec_brackets ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_stw_x_brackets ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_FILLER_3) }, { F (F_X_OPCODE) }, { F (F_LONG_DST_REG) }, { F (F_LONG_SRC_REG_1) }, { F (F_SIMM10) }, { 0 } }
};

static const CGEN_IFMT ifmt_stw_post_inc_x_brackets ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_FILLER_3) }, { F (F_X_OPCODE) }, { F (F_LONG_DST_REG) }, { F (F_LONG_SRC_REG_1) }, { F (F_SIMM10) }, { 0 } }
};

static const CGEN_IFMT ifmt_stw_pre_dec_x_brackets ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_X_FILLER_3) }, { F (F_X_OPCODE) }, { F (F_LONG_DST_REG) }, { F (F_LONG_SRC_REG_1) }, { F (F_SIMM10) }, { 0 } }
};

static const CGEN_IFMT ifmt_nop_no_param ATTRIBUTE_UNUSED = {
  16, 16, 0xfe3f, { { F (F_LENGTH) }, { F (F_CLASS) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_UINT_5_6) }, { 0 } }
};

#undef F

/* Each non-simple macro entry points to an array of expansion possibilities.  */

#define A(a) (1 << CGEN_INSN_##a)
#define OPERAND(op) AAP_OPERAND_##op
#define MNEM CGEN_SYNTAX_MNEMONIC /* syntax value for mnemonic */
#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))

/* The macro instruction table.  */

static const CGEN_IBASE aap_cgen_macro_insn_table[] =
{
/* ldb ${dest},[${src1},${int3}] */
  {
    -1, "ldb_brackets", "ldb", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb ${dest},(${src1}) */
  {
    -1, "ldb_zr", "ldb", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb ${dest},[${src1}] */
  {
    -1, "ldb_zr_brackets", "ldb", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb ${dest},[${src1}+,${int3}] */
  {
    -1, "ldb_post_inc_brackets", "ldb", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb ${dest},[-${src1},${int3}] */
  {
    -1, "ldb_pre_dec_brackets", "ldb", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb ${xdest},[${xsrc1},${int10}] */
  {
    -1, "ldb_x_brackets", "ldb", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb ${xdest},[${xsrc1}+,${int10}] */
  {
    -1, "ldb_post_inc_x_brackets", "ldb", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb ${xdest},[-${xsrc1},${int10}] */
  {
    -1, "ldb_pre_dec_x_brackets", "ldb", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldw ${dest},[${src1},${int3}] */
  {
    -1, "ldw_brackets", "ldw", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldw ${dest},(${src1}) */
  {
    -1, "ldw_zr", "ldw", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldw ${dest},[${src1}] */
  {
    -1, "ldw_zr_brackets", "ldw", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldw ${dest},[${src1}+,${int3}] */
  {
    -1, "ldw_post_inc_brackets", "ldw", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldw ${dest},[-${src1},${int3}] */
  {
    -1, "ldw_pre_dec_brackets", "ldw", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldw ${xdest},[${xsrc1},${int10}] */
  {
    -1, "ldw_x_brackets", "ldw", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldw ${xdest},[${xsrc1}+,${int10}] */
  {
    -1, "ldw_post_inc_x_brackets", "ldw", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldw ${xdest},[-${xsrc1},${int10}] */
  {
    -1, "ldw_pre_dec_x_brackets", "ldw", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb [${dest},${int3}],${src1} */
  {
    -1, "stb_brackets", "stb", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb (${dest}),${src1} */
  {
    -1, "stb_zr", "stb", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb [${dest}],${src1} */
  {
    -1, "stb_zr_brackets", "stb", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb [${dest}+,${int3}],${src1} */
  {
    -1, "stb_post_inc_brackets", "stb", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb [-${dest},${int3}],${src1} */
  {
    -1, "stb_pre_dec_brackets", "stb", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb [${xdest},${int10}],${xsrc1} */
  {
    -1, "stb_x_brackets", "stb", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb [${xdest}+,${int10}],${xsrc1} */
  {
    -1, "stb_post_inc_x_brackets", "stb", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb [-${xdest},${int10}],${xsrc1} */
  {
    -1, "stb_pre_dec_x_brackets", "stb", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stw [${dest},${int3}],${src1} */
  {
    -1, "stw_brackets", "stw", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stw (${dest}),${src1} */
  {
    -1, "stw_zr", "stw", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stw [${dest}],${src1} */
  {
    -1, "stw_zr_brackets", "stw", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stw [${dest}+,${int3}],${src1} */
  {
    -1, "stw_post_inc_brackets", "stw", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stw [-${dest},${int3}],${src1} */
  {
    -1, "stw_pre_dec_brackets", "stw", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stw [${xdest},${int10}],${xsrc1} */
  {
    -1, "stw_x_brackets", "stw", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stw [${xdest}+,${int10}],${xsrc1} */
  {
    -1, "stw_post_inc_x_brackets", "stw", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stw [-${xdest},${int10}],${xsrc1} */
  {
    -1, "stw_pre_dec_x_brackets", "stw", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* nop */
  {
    -1, "nop_no_param", "nop", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
};

/* The macro instruction opcode table.  */

static const CGEN_OPCODE aap_cgen_macro_insn_opcode_table[] =
{
/* ldb ${dest},[${src1},${int3}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', '[', OP (SRC1), ',', OP (INT3), ']', 0 } },
    & ifmt_ldb_brackets, { 0x2000 }
  },
/* ldb ${dest},(${src1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', '(', OP (SRC1), ')', 0 } },
    & ifmt_ldb_zr, { 0x2000 }
  },
/* ldb ${dest},[${src1}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', '[', OP (SRC1), ']', 0 } },
    & ifmt_ldb_zr_brackets, { 0x2000 }
  },
/* ldb ${dest},[${src1}+,${int3}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', '[', OP (SRC1), '+', ',', OP (INT3), ']', 0 } },
    & ifmt_ldb_post_inc_brackets, { 0x2200 }
  },
/* ldb ${dest},[-${src1},${int3}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', '[', '-', OP (SRC1), ',', OP (INT3), ']', 0 } },
    & ifmt_ldb_pre_dec_brackets, { 0x2400 }
  },
/* ldb ${xdest},[${xsrc1},${int10}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '[', OP (XSRC1), ',', OP (INT10), ']', 0 } },
    & ifmt_ldb_x_brackets, { 0xa0000000 }
  },
/* ldb ${xdest},[${xsrc1}+,${int10}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '[', OP (XSRC1), '+', ',', OP (INT10), ']', 0 } },
    & ifmt_ldb_post_inc_x_brackets, { 0xa2000000 }
  },
/* ldb ${xdest},[-${xsrc1},${int10}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '[', '-', OP (XSRC1), ',', OP (INT10), ']', 0 } },
    & ifmt_ldb_pre_dec_x_brackets, { 0xa4000000 }
  },
/* ldw ${dest},[${src1},${int3}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', '[', OP (SRC1), ',', OP (INT3), ']', 0 } },
    & ifmt_ldw_brackets, { 0x2800 }
  },
/* ldw ${dest},(${src1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', '(', OP (SRC1), ')', 0 } },
    & ifmt_ldw_zr, { 0x2800 }
  },
/* ldw ${dest},[${src1}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', '[', OP (SRC1), ']', 0 } },
    & ifmt_ldw_zr_brackets, { 0x2800 }
  },
/* ldw ${dest},[${src1}+,${int3}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', '[', OP (SRC1), '+', ',', OP (INT3), ']', 0 } },
    & ifmt_ldw_post_inc_brackets, { 0x2a00 }
  },
/* ldw ${dest},[-${src1},${int3}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', '[', '-', OP (SRC1), ',', OP (INT3), ']', 0 } },
    & ifmt_ldw_pre_dec_brackets, { 0x2c00 }
  },
/* ldw ${xdest},[${xsrc1},${int10}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '[', OP (XSRC1), ',', OP (INT10), ']', 0 } },
    & ifmt_ldw_x_brackets, { 0xa8000000 }
  },
/* ldw ${xdest},[${xsrc1}+,${int10}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '[', OP (XSRC1), '+', ',', OP (INT10), ']', 0 } },
    & ifmt_ldw_post_inc_x_brackets, { 0xaa000000 }
  },
/* ldw ${xdest},[-${xsrc1},${int10}] */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (XDEST), ',', '[', '-', OP (XSRC1), ',', OP (INT10), ']', 0 } },
    & ifmt_ldw_pre_dec_x_brackets, { 0xac000000 }
  },
/* stb [${dest},${int3}],${src1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (DEST), ',', OP (INT3), ']', ',', OP (SRC1), 0 } },
    & ifmt_stb_brackets, { 0x3000 }
  },
/* stb (${dest}),${src1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', OP (DEST), ')', ',', OP (SRC1), 0 } },
    & ifmt_stb_zr, { 0x3000 }
  },
/* stb [${dest}],${src1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (DEST), ']', ',', OP (SRC1), 0 } },
    & ifmt_stb_zr_brackets, { 0x3000 }
  },
/* stb [${dest}+,${int3}],${src1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (DEST), '+', ',', OP (INT3), ']', ',', OP (SRC1), 0 } },
    & ifmt_stb_post_inc_brackets, { 0x3200 }
  },
/* stb [-${dest},${int3}],${src1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', '-', OP (DEST), ',', OP (INT3), ']', ',', OP (SRC1), 0 } },
    & ifmt_stb_pre_dec_brackets, { 0x3400 }
  },
/* stb [${xdest},${int10}],${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (XDEST), ',', OP (INT10), ']', ',', OP (XSRC1), 0 } },
    & ifmt_stb_x_brackets, { 0xb0000000 }
  },
/* stb [${xdest}+,${int10}],${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (XDEST), '+', ',', OP (INT10), ']', ',', OP (XSRC1), 0 } },
    & ifmt_stb_post_inc_x_brackets, { 0xb2000000 }
  },
/* stb [-${xdest},${int10}],${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', '-', OP (XDEST), ',', OP (INT10), ']', ',', OP (XSRC1), 0 } },
    & ifmt_stb_pre_dec_x_brackets, { 0xb4000000 }
  },
/* stw [${dest},${int3}],${src1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (DEST), ',', OP (INT3), ']', ',', OP (SRC1), 0 } },
    & ifmt_stw_brackets, { 0x3800 }
  },
/* stw (${dest}),${src1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', OP (DEST), ')', ',', OP (SRC1), 0 } },
    & ifmt_stw_zr, { 0x3800 }
  },
/* stw [${dest}],${src1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (DEST), ']', ',', OP (SRC1), 0 } },
    & ifmt_stw_zr_brackets, { 0x3800 }
  },
/* stw [${dest}+,${int3}],${src1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (DEST), '+', ',', OP (INT3), ']', ',', OP (SRC1), 0 } },
    & ifmt_stw_post_inc_brackets, { 0x3a00 }
  },
/* stw [-${dest},${int3}],${src1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', '-', OP (DEST), ',', OP (INT3), ']', ',', OP (SRC1), 0 } },
    & ifmt_stw_pre_dec_brackets, { 0x3c00 }
  },
/* stw [${xdest},${int10}],${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (XDEST), ',', OP (INT10), ']', ',', OP (XSRC1), 0 } },
    & ifmt_stw_x_brackets, { 0xb8000000 }
  },
/* stw [${xdest}+,${int10}],${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', OP (XDEST), '+', ',', OP (INT10), ']', ',', OP (XSRC1), 0 } },
    & ifmt_stw_post_inc_x_brackets, { 0xba000000 }
  },
/* stw [-${xdest},${int10}],${xsrc1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '[', '-', OP (XDEST), ',', OP (INT10), ']', ',', OP (XSRC1), 0 } },
    & ifmt_stw_pre_dec_x_brackets, { 0xbc000000 }
  },
/* nop */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_nop_no_param, { 0x1 }
  },
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
