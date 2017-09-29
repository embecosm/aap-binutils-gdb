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

static const CGEN_IFMT ifmt_l_add ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00ffff, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_SRC_REG_2) }, { F (F_X_LENGTH) }, { F (F_BLANK) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_addi ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00ffff, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_UINT_18_3) }, { F (F_X_LENGTH) }, { F (F_BLANK) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_beq ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00ffff, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_INT_24_3) }, { F (F_SRC_REG_1) }, { F (F_SRC_REG_2) }, { F (F_X_LENGTH) }, { F (F_BLANK) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_ldb ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00ffff, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_18_3) }, { F (F_X_LENGTH) }, { F (F_BLANK) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_nop ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00ffff, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_UINT_21_6) }, { F (F_X_LENGTH) }, { F (F_BLANK) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_bal ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00ffff, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_INT_24_6) }, { F (F_SRC_REG_2) }, { F (F_X_LENGTH) }, { F (F_BLANK) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_bra ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00ffff, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_INT_24_9) }, { F (F_X_LENGTH) }, { F (F_BLANK) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_add32 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00fe00, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_SRC_REG_2) }, { F (F_X_LENGTH) }, { F (F_X_OPCODE) }, { F (F_X_DST_REG) }, { F (F_X_SRC_REG_1) }, { F (F_X_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_asri32 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00fe00, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_UINT_18_3) }, { F (F_X_LENGTH) }, { F (F_X_OPCODE) }, { F (F_X_DST_REG) }, { F (F_X_SRC_REG_1) }, { F (F_UINT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_andi32 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_UINT_18_3) }, { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_UINT_III1) }, { F (F_X_DST_REG) }, { F (F_X_SRC_REG_1) }, { F (F_UINT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_addi32 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_UINT_18_3) }, { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_UINT_12_4) }, { F (F_X_DST_REG) }, { F (F_X_SRC_REG_1) }, { F (F_UINT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_beq32 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_INT_24_3) }, { F (F_SRC_REG_1) }, { F (F_SRC_REG_2) }, { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_INT_12_4) }, { F (F_INT_8_3) }, { F (F_X_SRC_REG_1) }, { F (F_X_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_ldb32 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_SRC_REG_1) }, { F (F_INT_18_3) }, { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_INT_12_4) }, { F (F_X_DST_REG) }, { F (F_X_SRC_REG_1) }, { F (F_INT_2_3) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_nop32 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00fe00, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_UINT_21_6) }, { F (F_X_LENGTH) }, { F (F_X_OPCODE) }, { F (F_X_DST_REG) }, { F (F_UINT_5_6) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_movi32 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_DST_REG) }, { F (F_UINT_21_6) }, { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_UINT_12_4) }, { F (F_X_DST_REG) }, { F (F_UINT_5_6) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_bal32 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_INT_24_6) }, { F (F_SRC_REG_2) }, { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_INT_12_4) }, { F (F_INT_8_6) }, { F (F_X_SRC_REG_2) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_bra32 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00e000, { { F (F_LENGTH) }, { F (F_OPCODE) }, { F (F_INT_24_9) }, { F (F_X_LENGTH) }, { F (F_X_CLASS) }, { F (F_INT_12_4) }, { F (F_INT_8_9) }, { 0 } }
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
/* l.add ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_add, { 0x2000000 }
  },
/* l.sub ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_add, { 0x4000000 }
  },
/* l.and ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_add, { 0x6000000 }
  },
/* l.or ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_add, { 0x8000000 }
  },
/* l.xor ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_add, { 0xa000000 }
  },
/* l.asr ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_add, { 0xc000000 }
  },
/* l.lsl ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_add, { 0xe000000 }
  },
/* l.lsr ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_add, { 0x10000000 }
  },
/* l.mov ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_add, { 0x12000000 }
  },
/* l.jmp ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_add, { 0x50000000 }
  },
/* l.jal ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_add, { 0x52000000 }
  },
/* l.jeq ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_add, { 0x54000000 }
  },
/* l.jne ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_add, { 0x56000000 }
  },
/* l.jlts ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_add, { 0x58000000 }
  },
/* l.jles ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_add, { 0x5a000000 }
  },
/* l.jltu ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_add, { 0x5c000000 }
  },
/* l.jleu ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_add, { 0x5e000000 }
  },
/* l.rd ${dest},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_add, { 0x60000000 }
  },
/* l.addi ${dest},${src1},${uint183} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), 0 } },
    & ifmt_l_addi, { 0x14000000 }
  },
/* l.subi ${dest},${src1},${uint183} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), 0 } },
    & ifmt_l_addi, { 0x16000000 }
  },
/* l.asri ${dest},${src1},${uint183} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), 0 } },
    & ifmt_l_addi, { 0x18000000 }
  },
/* l.lsli ${dest},${src1},${uint183} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), 0 } },
    & ifmt_l_addi, { 0x1a000000 }
  },
/* l.lsri ${dest},${src1},${uint183} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), 0 } },
    & ifmt_l_addi, { 0x1c000000 }
  },
/* l.beq ${int243},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT243), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_beq, { 0x44000000 }
  },
/* l.bne ${int243},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT243), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_beq, { 0x46000000 }
  },
/* l.blts ${int243},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT243), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_beq, { 0x48000000 }
  },
/* l.bles ${int243},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT243), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_beq, { 0x4a000000 }
  },
/* l.bltu ${int243},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT243), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_beq, { 0x4c000000 }
  },
/* l.bleu ${int243},${src1},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT243), ',', OP (SRC1), ',', OP (SRC2), 0 } },
    & ifmt_l_beq, { 0x4e000000 }
  },
/* l.ldb ${dest},${src1},${int183} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (INT183), 0 } },
    & ifmt_l_ldb, { 0x20000000 }
  },
/* l.ldw ${dest},${src1},${int183} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (INT183), 0 } },
    & ifmt_l_ldb, { 0x28000000 }
  },
/* l.ldbpo ${dest},${src1},${int183} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (INT183), 0 } },
    & ifmt_l_ldb, { 0x22000000 }
  },
/* l.ldwpo ${dest},${src1},${int183} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (INT183), 0 } },
    & ifmt_l_ldb, { 0x2a000000 }
  },
/* l.ldbpr ${dest},${src1},${int183} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (INT183), 0 } },
    & ifmt_l_ldb, { 0x24000000 }
  },
/* l.ldwpr ${dest},${src1},${int183} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (INT183), 0 } },
    & ifmt_l_ldb, { 0x2c000000 }
  },
/* l.sdb ${dest},${src1},${int183} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (INT183), 0 } },
    & ifmt_l_ldb, { 0x30000000 }
  },
/* l.sdw ${dest},${src1},${int183} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (INT183), 0 } },
    & ifmt_l_ldb, { 0x38000000 }
  },
/* l.sdbpo ${dest},${src1},${int183} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (INT183), 0 } },
    & ifmt_l_ldb, { 0x32000000 }
  },
/* l.sdwpo ${dest},${src1},${int183} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (INT183), 0 } },
    & ifmt_l_ldb, { 0x3a000000 }
  },
/* l.sdbpr ${dest},${src1},${int183} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (INT183), 0 } },
    & ifmt_l_ldb, { 0x34000000 }
  },
/* l.sdwpr ${dest},${src1},${int183} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (INT183), 0 } },
    & ifmt_l_ldb, { 0x3c000000 }
  },
/* l.nop ${dest},${uint216} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (UINT216), 0 } },
    & ifmt_l_nop, { 0x0 }
  },
/* l.movi ${dest},${uint216} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (UINT216), 0 } },
    & ifmt_l_nop, { 0x1e000000 }
  },
/* l.bal ${int246},${src2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT246), ',', OP (SRC2), 0 } },
    & ifmt_l_bal, { 0x42000000 }
  },
/* l.bra ${int249} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT249), 0 } },
    & ifmt_l_bra, { 0x40000000 }
  },
/* l.add32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0x82000000 }
  },
/* l.sub32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0x84000000 }
  },
/* l.and32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0x86000000 }
  },
/* l.or32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0x88000000 }
  },
/* l.xor32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0x8a000000 }
  },
/* l.asr32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0x8c000000 }
  },
/* l.lsl32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0x8e000000 }
  },
/* l.lsr32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0x90000000 }
  },
/* l.mov32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0x92000000 }
  },
/* l.addc32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0x82000200 }
  },
/* l.subc32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0x84000200 }
  },
/* l.jmp32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0xd0000000 }
  },
/* l.jal32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0xd2000000 }
  },
/* l.jeq32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0xd4000000 }
  },
/* l.jne32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0xd6000000 }
  },
/* l.jlts32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0xd8000000 }
  },
/* l.jles32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0xda000000 }
  },
/* l.jltu32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0xdc000000 }
  },
/* l.jleu32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0xde000000 }
  },
/* l.jmpl32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0xd0000200 }
  },
/* l.jall32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0xd2000200 }
  },
/* l.jeql32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0xd4000200 }
  },
/* l.jnel32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0xd6000200 }
  },
/* l.jltsl32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0xd8000200 }
  },
/* l.jlesl32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0xda000200 }
  },
/* l.jltul32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0xdc000200 }
  },
/* l.jleul32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (SRC2), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_add32, { 0xde000200 }
  },
/* l.asri32 ${dest},${src1},${uint183},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_asri32, { 0x98000000 }
  },
/* l.lsli32 ${dest},${src1},${uint183},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_asri32, { 0x9a000000 }
  },
/* l.lsri32 ${dest},${src1},${uint183},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_asri32, { 0x9c000000 }
  },
/* l.andi32 ${dest},${src1},${uint183},${uintiii1},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (UINTIII1), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_andi32, { 0x86000000 }
  },
/* l.ori32 ${dest},${src1},${uint183},${uintiii1},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (UINTIII1), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_andi32, { 0x88000000 }
  },
/* l.xori32 ${dest},${src1},${uint183},${uintiii1},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (UINTIII1), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_andi32, { 0x8a000000 }
  },
/* l.addi32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (UINT124), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_addi32, { 0x94000000 }
  },
/* l.subi32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (UINT124), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_addi32, { 0x96000000 }
  },
/* l.beq32 ${int243},${src1},${src2},${int124},${int083},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT243), ',', OP (SRC1), ',', OP (SRC2), ',', OP (INT124), ',', OP (INT083), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_beq32, { 0xc4000000 }
  },
/* l.bne32 ${int243},${src1},${src2},${int124},${int083},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT243), ',', OP (SRC1), ',', OP (SRC2), ',', OP (INT124), ',', OP (INT083), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_beq32, { 0xc6000000 }
  },
/* l.blts32 ${int243},${src1},${src2},${int124},${int083},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT243), ',', OP (SRC1), ',', OP (SRC2), ',', OP (INT124), ',', OP (INT083), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_beq32, { 0xc8000000 }
  },
/* l.bles32 ${int243},${src1},${src2},${int124},${int083},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT243), ',', OP (SRC1), ',', OP (SRC2), ',', OP (INT124), ',', OP (INT083), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_beq32, { 0xca000000 }
  },
/* l.bltu32 ${int243},${src1},${src2},${int124},${int083},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT243), ',', OP (SRC1), ',', OP (SRC2), ',', OP (INT124), ',', OP (INT083), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_beq32, { 0xcc000000 }
  },
/* l.bleu32 ${int243},${src1},${src2},${int124},${int083},${xsrc1},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT243), ',', OP (SRC1), ',', OP (SRC2), ',', OP (INT124), ',', OP (INT083), ',', OP (XSRC1), ',', OP (XSRC2), 0 } },
    & ifmt_l_beq32, { 0xce000000 }
  },
/* l.ldb32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (UINT124), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_ldb32, { 0xa0000000 }
  },
/* l.ldw32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (UINT124), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_ldb32, { 0xa8000000 }
  },
/* l.ldbpo32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (UINT124), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_ldb32, { 0xa2000000 }
  },
/* l.ldwpo32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (UINT124), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_ldb32, { 0xaa000000 }
  },
/* l.ldbpr32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (UINT124), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_ldb32, { 0xa4000000 }
  },
/* l.ldwpr32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (UINT124), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_ldb32, { 0xac000000 }
  },
/* l.sdb32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (UINT124), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_ldb32, { 0xb0000000 }
  },
/* l.sdw32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (UINT124), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_ldb32, { 0xb8000000 }
  },
/* l.sdbpo32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (UINT124), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_ldb32, { 0xb2000000 }
  },
/* l.sdwpo32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (UINT124), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_ldb32, { 0xba000000 }
  },
/* l.sdbpr32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (UINT124), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_ldb32, { 0xb4000000 }
  },
/* l.sdwpr32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (SRC1), ',', OP (UINT183), ',', OP (UINT124), ',', OP (XDEST), ',', OP (XSRC1), ',', OP (UINT023), 0 } },
    & ifmt_l_ldb32, { 0xbc000000 }
  },
/* l.nop32 ${dest},${uint216},${xdest},${uint056} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (UINT216), ',', OP (XDEST), ',', OP (UINT056), 0 } },
    & ifmt_l_nop32, { 0x80000000 }
  },
/* l.movi32 ${dest},${uint216},${uint124},${xdest},${uint056} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DEST), ',', OP (UINT216), ',', OP (UINT124), ',', OP (XDEST), ',', OP (UINT056), 0 } },
    & ifmt_l_movi32, { 0x9e000000 }
  },
/* l.bal32 ${int246},${src2},${int124},${int086},${xsrc2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT246), ',', OP (SRC2), ',', OP (INT124), ',', OP (INT086), ',', OP (XSRC2), 0 } },
    & ifmt_l_bal32, { 0xc2000000 }
  },
/* l.bra32 ${int249},${int124},${int089} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (INT249), ',', OP (INT124), ',', OP (INT089), 0 } },
    & ifmt_l_bra32, { 0xc0000000 }
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
