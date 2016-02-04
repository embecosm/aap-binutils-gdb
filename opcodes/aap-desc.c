/* CPU data for aap.

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

#include "sysdep.h"
#include <stdio.h>
#include <stdarg.h>
#include "ansidecl.h"
#include "bfd.h"
#include "symcat.h"
#include "aap-desc.h"
#include "aap-opc.h"
#include "opintl.h"
#include "libiberty.h"
#include "xregex.h"

/* Attributes.  */

static const CGEN_ATTR_ENTRY bool_attr[] =
{
  { "#f", 0 },
  { "#t", 1 },
  { 0, 0 }
};

static const CGEN_ATTR_ENTRY MACH_attr[] ATTRIBUTE_UNUSED =
{
  { "base", MACH_BASE },
  { "aap", MACH_AAP },
  { "max", MACH_MAX },
  { 0, 0 }
};

static const CGEN_ATTR_ENTRY ISA_attr[] ATTRIBUTE_UNUSED =
{
  { "aap", ISA_AAP },
  { "max", ISA_MAX },
  { 0, 0 }
};

const CGEN_ATTR_TABLE aap_cgen_ifield_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "PCREL-ADDR", &bool_attr[0], &bool_attr[0] },
  { "ABS-ADDR", &bool_attr[0], &bool_attr[0] },
  { "RESERVED", &bool_attr[0], &bool_attr[0] },
  { "SIGN-OPT", &bool_attr[0], &bool_attr[0] },
  { "SIGNED", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE aap_cgen_hardware_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "CACHE-ADDR", &bool_attr[0], &bool_attr[0] },
  { "PC", &bool_attr[0], &bool_attr[0] },
  { "PROFILE", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE aap_cgen_operand_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "PCREL-ADDR", &bool_attr[0], &bool_attr[0] },
  { "ABS-ADDR", &bool_attr[0], &bool_attr[0] },
  { "SIGN-OPT", &bool_attr[0], &bool_attr[0] },
  { "SIGNED", &bool_attr[0], &bool_attr[0] },
  { "NEGATIVE", &bool_attr[0], &bool_attr[0] },
  { "RELAX", &bool_attr[0], &bool_attr[0] },
  { "SEM-ONLY", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE aap_cgen_insn_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "ALIAS", &bool_attr[0], &bool_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "UNCOND-CTI", &bool_attr[0], &bool_attr[0] },
  { "COND-CTI", &bool_attr[0], &bool_attr[0] },
  { "SKIP-CTI", &bool_attr[0], &bool_attr[0] },
  { "DELAY-SLOT", &bool_attr[0], &bool_attr[0] },
  { "RELAXABLE", &bool_attr[0], &bool_attr[0] },
  { "RELAXED", &bool_attr[0], &bool_attr[0] },
  { "NO-DIS", &bool_attr[0], &bool_attr[0] },
  { "PBB", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

/* Instruction set variants.  */

static const CGEN_ISA aap_cgen_isa_table[] = {
  { "aap", 16, 16, 16, 32 },
  { 0, 0, 0, 0, 0 }
};

/* Machine variants.  */

static const CGEN_MACH aap_cgen_mach_table[] = {
  { "aap", "aap", MACH_AAP, 16 },
  { 0, 0, 0, 0 }
};

static CGEN_KEYWORD_ENTRY aap_cgen_opval_gr_names_entries[] =
{
  { "r0", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "r1", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "r2", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "r3", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "r4", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "r5", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "r6", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "r7", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "r8", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "r9", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "r10", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "r11", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "r12", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "r13", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "r14", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "r15", 15, {0, {{{0, 0}}}}, 0, 0 },
  { "r16", 16, {0, {{{0, 0}}}}, 0, 0 },
  { "r17", 17, {0, {{{0, 0}}}}, 0, 0 },
  { "r18", 18, {0, {{{0, 0}}}}, 0, 0 },
  { "r19", 19, {0, {{{0, 0}}}}, 0, 0 },
  { "r20", 20, {0, {{{0, 0}}}}, 0, 0 },
  { "r21", 21, {0, {{{0, 0}}}}, 0, 0 },
  { "r22", 22, {0, {{{0, 0}}}}, 0, 0 },
  { "r23", 23, {0, {{{0, 0}}}}, 0, 0 },
  { "r24", 24, {0, {{{0, 0}}}}, 0, 0 },
  { "r25", 25, {0, {{{0, 0}}}}, 0, 0 },
  { "r26", 26, {0, {{{0, 0}}}}, 0, 0 },
  { "r27", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "r28", 28, {0, {{{0, 0}}}}, 0, 0 },
  { "r29", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "r30", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "r31", 31, {0, {{{0, 0}}}}, 0, 0 },
  { "r32", 32, {0, {{{0, 0}}}}, 0, 0 },
  { "r33", 33, {0, {{{0, 0}}}}, 0, 0 },
  { "r34", 34, {0, {{{0, 0}}}}, 0, 0 },
  { "r35", 35, {0, {{{0, 0}}}}, 0, 0 },
  { "r36", 36, {0, {{{0, 0}}}}, 0, 0 },
  { "r37", 37, {0, {{{0, 0}}}}, 0, 0 },
  { "r38", 38, {0, {{{0, 0}}}}, 0, 0 },
  { "r39", 39, {0, {{{0, 0}}}}, 0, 0 },
  { "r40", 40, {0, {{{0, 0}}}}, 0, 0 },
  { "r41", 41, {0, {{{0, 0}}}}, 0, 0 },
  { "r42", 42, {0, {{{0, 0}}}}, 0, 0 },
  { "r43", 43, {0, {{{0, 0}}}}, 0, 0 },
  { "r44", 44, {0, {{{0, 0}}}}, 0, 0 },
  { "r45", 45, {0, {{{0, 0}}}}, 0, 0 },
  { "r46", 46, {0, {{{0, 0}}}}, 0, 0 },
  { "r47", 47, {0, {{{0, 0}}}}, 0, 0 },
  { "r48", 48, {0, {{{0, 0}}}}, 0, 0 },
  { "r49", 49, {0, {{{0, 0}}}}, 0, 0 },
  { "r50", 50, {0, {{{0, 0}}}}, 0, 0 },
  { "r51", 51, {0, {{{0, 0}}}}, 0, 0 },
  { "r52", 52, {0, {{{0, 0}}}}, 0, 0 },
  { "r53", 53, {0, {{{0, 0}}}}, 0, 0 },
  { "r54", 54, {0, {{{0, 0}}}}, 0, 0 },
  { "r55", 55, {0, {{{0, 0}}}}, 0, 0 },
  { "r56", 56, {0, {{{0, 0}}}}, 0, 0 },
  { "r57", 57, {0, {{{0, 0}}}}, 0, 0 },
  { "r58", 58, {0, {{{0, 0}}}}, 0, 0 },
  { "r59", 59, {0, {{{0, 0}}}}, 0, 0 },
  { "r60", 60, {0, {{{0, 0}}}}, 0, 0 },
  { "r61", 61, {0, {{{0, 0}}}}, 0, 0 },
  { "r62", 62, {0, {{{0, 0}}}}, 0, 0 },
  { "r63", 63, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD aap_cgen_opval_gr_names =
{
  & aap_cgen_opval_gr_names_entries[0],
  64,
  0, 0, 0, 0, ""
};


/* The hardware table.  */

#define A(a) (1 << CGEN_HW_##a)

const CGEN_HW_ENTRY aap_cgen_hw_table[] =
{
  { "h-memory", HW_H_MEMORY, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-sint", HW_H_SINT, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-uint", HW_H_UINT, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-addr", HW_H_ADDR, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-iaddr", HW_H_IADDR, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-gpr", HW_H_GPR, CGEN_ASM_KEYWORD, (PTR) & aap_cgen_opval_gr_names, { 0|A(CACHE_ADDR), { { { (1<<MACH_BASE), 0 } } } } },
  { "h-pc", HW_H_PC, CGEN_ASM_NONE, 0, { 0|A(PROFILE)|A(PC), { { { (1<<MACH_BASE), 0 } } } } },
  { 0, 0, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } }
};

#undef A


/* The instruction field table.  */

#define A(a) (1 << CGEN_IFLD_##a)

const CGEN_IFLD aap_cgen_ifld_table[] =
{
  { AAP_F_NIL, "f-nil", 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_ANYOF, "f-anyof", 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_LENGTH, "f-length", 0, 16, 15, 1, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_CLASS, "f-class", 0, 16, 14, 2, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_OPCODE, "f-opcode", 0, 16, 12, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_DST_REG, "f-dst-reg", 0, 16, 8, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_SRC_REG_1, "f-src-reg-1", 0, 16, 5, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_SRC_REG_2, "f-src-reg-2", 0, 16, 2, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_X_DST_REG, "f-x-dst-reg", 16, 16, 8, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_X_SRC_REG_1, "f-x-src-reg-1", 16, 16, 5, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_X_SRC_REG_2, "f-x-src-reg-2", 16, 16, 2, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_X_FILLER_7, "f-x-filler-7", 16, 16, 15, 7, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_X_FILLER_3, "f-x-filler-3", 16, 16, 15, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_UINT_5_6, "f-uint-5-6", 0, 16, 5, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_UINT_2_3, "f-uint-2-3", 0, 16, 2, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_INT_5_6, "f-int-5-6", 0, 16, 5, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_INT_2_3, "f-int-2-3", 0, 16, 2, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_SIMM9, "f-simm9", 0, 16, 8, 9, { 0|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_SIMM6, "f-simm6", 0, 16, 8, 6, { 0|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_SIMM3, "f-simm3", 0, 16, 8, 3, { 0|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_LONG_DST_REG, "f-long-dst-reg", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_LONG_SRC_REG_1, "f-long-src-reg-1", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_LONG_SRC_REG_2, "f-long-src-reg-2", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_APB_1, "f-apb-1", 0, 16, 8, 9, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_APB_2, "f-apb-2", 16, 16, 12, 13, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_SIMM22, "f-simm22", 0, 0, 0, 0,{ 0|A(PCREL_ADDR)|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { 0, 0, 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } }
};

#undef A



/* multi ifield declarations */

const CGEN_MAYBE_MULTI_IFLD AAP_F_LONG_DST_REG_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_LONG_SRC_REG_1_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_LONG_SRC_REG_2_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_SIMM22_MULTI_IFIELD [];


/* multi ifield definitions */

const CGEN_MAYBE_MULTI_IFLD AAP_F_LONG_DST_REG_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_DST_REG] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_X_DST_REG] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_LONG_SRC_REG_1_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_SRC_REG_1] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_X_SRC_REG_1] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_LONG_SRC_REG_2_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_SRC_REG_2] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_X_SRC_REG_2] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_SIMM22_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_APB_1] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_APB_2] } },
    { 0, { (const PTR) 0 } }
};

/* The operand table.  */

#define A(a) (1 << CGEN_OPERAND_##a)
#define OPERAND(op) AAP_OPERAND_##op

const CGEN_OPERAND aap_cgen_operand_table[] =
{
/* pc: program counter */
  { "pc", AAP_OPERAND_PC, HW_H_PC, 0, 0,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_NIL] } }, 
    { 0|A(SEM_ONLY), { { { (1<<MACH_BASE), 0 } } } }  },
/* dest: dest */
  { "dest", AAP_OPERAND_DEST, HW_H_GPR, 8, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_DST_REG] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* src1: src1 */
  { "src1", AAP_OPERAND_SRC1, HW_H_GPR, 5, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_SRC_REG_1] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* src2: src2 */
  { "src2", AAP_OPERAND_SRC2, HW_H_GPR, 2, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_SRC_REG_2] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* uint3: uint3 */
  { "uint3", AAP_OPERAND_UINT3, HW_H_UINT, 2, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_2_3] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* uint6: uint6 */
  { "uint6", AAP_OPERAND_UINT6, HW_H_UINT, 5, 6,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_5_6] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* int3: int3 */
  { "int3", AAP_OPERAND_INT3, HW_H_SINT, 2, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_2_3] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* iaddr22: iaddr22 */
  { "iaddr22", AAP_OPERAND_IADDR22, HW_H_IADDR, 8, 22,
    { 2, { (const PTR) &AAP_F_SIMM22_MULTI_IFIELD[0] } }, 
    { 0|A(PCREL_ADDR)|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* iaddr9: iaddr9 */
  { "iaddr9", AAP_OPERAND_IADDR9, HW_H_IADDR, 8, 9,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_SIMM9] } }, 
    { 0|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } } } }  },
/* iaddr6: iaddr6 */
  { "iaddr6", AAP_OPERAND_IADDR6, HW_H_IADDR, 8, 6,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_SIMM6] } }, 
    { 0|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } } } }  },
/* iaddr3: iaddr3 */
  { "iaddr3", AAP_OPERAND_IADDR3, HW_H_IADDR, 8, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_SIMM3] } }, 
    { 0|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } } } }  },
/* xdest: xdest */
  { "xdest", AAP_OPERAND_XDEST, HW_H_GPR, 8, 6,
    { 2, { (const PTR) &AAP_F_LONG_DST_REG_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* xsrc1: xsrc1 */
  { "xsrc1", AAP_OPERAND_XSRC1, HW_H_GPR, 5, 6,
    { 2, { (const PTR) &AAP_F_LONG_SRC_REG_1_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* xsrc2: xsrc2 */
  { "xsrc2", AAP_OPERAND_XSRC2, HW_H_GPR, 2, 6,
    { 2, { (const PTR) &AAP_F_LONG_SRC_REG_2_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* sentinel */
  { 0, 0, 0, 0, 0,
    { 0, { (const PTR) 0 } },
    { 0, { { { (1<<MACH_BASE), 0 } } } } }
};

#undef A


/* The instruction table.  */

#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))
#define A(a) (1 << CGEN_INSN_##a)

static const CGEN_IBASE aap_cgen_insn_table[MAX_INSNS] =
{
  /* Special null first entry.
     A `num' value of zero is thus invalid.
     Also, the special `invalid' insn resides here.  */
  { 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
/* nop ${dest},#${uint6} */
  {
    AAP_INSN_NOP, "nop", "nop", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add ${dest},${src1},${src2} */
  {
    AAP_INSN_ADD, "add", "add", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub ${dest},${src1},${src2} */
  {
    AAP_INSN_SUB, "sub", "sub", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* and ${dest},${src1},${src2} */
  {
    AAP_INSN_AND, "and", "and", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* or ${dest},${src1},${src2} */
  {
    AAP_INSN_OR, "or", "or", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* xor ${dest},${src1},${src2} */
  {
    AAP_INSN_XOR, "xor", "xor", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* asr ${dest},${src1},${src2} */
  {
    AAP_INSN_ASR, "asr", "asr", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* lsl ${dest},${src1},${src2} */
  {
    AAP_INSN_LSL, "lsl", "lsl", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* lsr ${dest},${src1},${src2} */
  {
    AAP_INSN_LSR, "lsr", "lsr", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mov ${dest},${src1} */
  {
    AAP_INSN_MOV, "mov", "mov", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* addi ${dest},${src1},#${uint3} */
  {
    AAP_INSN_ADDI, "addi", "addi", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* subi ${dest},${src1},#${uint3} */
  {
    AAP_INSN_SUBI, "subi", "subi", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* asri ${dest},${src1},#${uint3} */
  {
    AAP_INSN_ASRI, "asri", "asri", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* lsli ${dest},${src1},#${uint3} */
  {
    AAP_INSN_LSLI, "lsli", "lsli", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* lsri ${dest},${src1},#${uint3} */
  {
    AAP_INSN_LSRI, "lsri", "lsri", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* movi ${dest},#${uint6} */
  {
    AAP_INSN_MOVI, "movi", "movi", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb ${dest},(${src1}+,${int3}) */
  {
    AAP_INSN_LDB_POST_INC, "ldb_post_inc", "ldb", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldw ${dest},(${src1}+,${int3}) */
  {
    AAP_INSN_LDW_POST_INC, "ldw_post_inc", "ldw", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb (${dest}+,${int3}),${src1} */
  {
    AAP_INSN_STB_POST_INC, "stb_post_inc", "stb", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stw (${dest}+,${int3}),${src1} */
  {
    AAP_INSN_STW_POST_INC, "stw_post_inc", "stw", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bal ${iaddr6},${src2} */
  {
    AAP_INSN_BAL, "bal", "bal", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* beq ${iaddr3},${src1},${src2} */
  {
    AAP_INSN_BEQ, "beq", "beq", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bne ${iaddr3},${src1},${src2} */
  {
    AAP_INSN_BNE, "bne", "bne", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* blts ${iaddr3},${src1},${src2} */
  {
    AAP_INSN_BLTS, "blts", "blts", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bgts ${iaddr3},${src1},${src2} */
  {
    AAP_INSN_BGTS, "bgts", "bgts", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bltu ${iaddr3},${src1},${src2} */
  {
    AAP_INSN_BLTU, "bltu", "bltu", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bgtu ${iaddr3},${src1},${src2} */
  {
    AAP_INSN_BGTU, "bgtu", "bgtu", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* jmp ${dest} */
  {
    AAP_INSN_JMP, "jmp", "jmp", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* jal ${dest},${src2} */
  {
    AAP_INSN_JAL, "jal", "jal", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* jeq ${dest},${src1},${src2} */
  {
    AAP_INSN_JEQ, "jeq", "jeq", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* jne ${dest},${src1},${src2} */
  {
    AAP_INSN_JNE, "jne", "jne", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* jlts ${dest},${src1},${src2} */
  {
    AAP_INSN_JLTS, "jlts", "jlts", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* jgts ${dest},${src1},${src2} */
  {
    AAP_INSN_JGTS, "jgts", "jgts", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* jltu ${dest},${src1},${src2} */
  {
    AAP_INSN_JLTU, "jltu", "jltu", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* jgtu ${dest},${src1},${src2} */
  {
    AAP_INSN_JGTU, "jgtu", "jgtu", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* rte ${dest} */
  {
    AAP_INSN_RTE, "rte", "rte", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_ADD_X, "add_x", "add", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_SUB_X, "sub_x", "sub", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* and ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_AND_X, "and_x", "and", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* or ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_OR_X, "or_x", "or", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* xor ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_XOR_X, "xor_x", "xor", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* asr ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_ASR_X, "asr_x", "asr", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* lsl ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_LSL_X, "lsl_x", "lsl", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* lsr ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_LSR_X, "lsr_x", "lsr", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mov ${xdest},${xsrc1} */
  {
    AAP_INSN_MOV_X, "mov_x", "mov", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bra ${iaddr22} */
  {
    AAP_INSN_BRA_X, "bra_x", "bra", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
};

#undef OP
#undef A

/* Initialize anything needed to be done once, before any cpu_open call.  */

static void
init_tables (void)
{
}

static const CGEN_MACH * lookup_mach_via_bfd_name (const CGEN_MACH *, const char *);
static void build_hw_table      (CGEN_CPU_TABLE *);
static void build_ifield_table  (CGEN_CPU_TABLE *);
static void build_operand_table (CGEN_CPU_TABLE *);
static void build_insn_table    (CGEN_CPU_TABLE *);
static void aap_cgen_rebuild_tables (CGEN_CPU_TABLE *);

/* Subroutine of aap_cgen_cpu_open to look up a mach via its bfd name.  */

static const CGEN_MACH *
lookup_mach_via_bfd_name (const CGEN_MACH *table, const char *name)
{
  while (table->name)
    {
      if (strcmp (name, table->bfd_name) == 0)
	return table;
      ++table;
    }
  abort ();
}

/* Subroutine of aap_cgen_cpu_open to build the hardware table.  */

static void
build_hw_table (CGEN_CPU_TABLE *cd)
{
  int i;
  int machs = cd->machs;
  const CGEN_HW_ENTRY *init = & aap_cgen_hw_table[0];
  /* MAX_HW is only an upper bound on the number of selected entries.
     However each entry is indexed by it's enum so there can be holes in
     the table.  */
  const CGEN_HW_ENTRY **selected =
    (const CGEN_HW_ENTRY **) xmalloc (MAX_HW * sizeof (CGEN_HW_ENTRY *));

  cd->hw_table.init_entries = init;
  cd->hw_table.entry_size = sizeof (CGEN_HW_ENTRY);
  memset (selected, 0, MAX_HW * sizeof (CGEN_HW_ENTRY *));
  /* ??? For now we just use machs to determine which ones we want.  */
  for (i = 0; init[i].name != NULL; ++i)
    if (CGEN_HW_ATTR_VALUE (&init[i], CGEN_HW_MACH)
	& machs)
      selected[init[i].type] = &init[i];
  cd->hw_table.entries = selected;
  cd->hw_table.num_entries = MAX_HW;
}

/* Subroutine of aap_cgen_cpu_open to build the hardware table.  */

static void
build_ifield_table (CGEN_CPU_TABLE *cd)
{
  cd->ifld_table = & aap_cgen_ifld_table[0];
}

/* Subroutine of aap_cgen_cpu_open to build the hardware table.  */

static void
build_operand_table (CGEN_CPU_TABLE *cd)
{
  int i;
  int machs = cd->machs;
  const CGEN_OPERAND *init = & aap_cgen_operand_table[0];
  /* MAX_OPERANDS is only an upper bound on the number of selected entries.
     However each entry is indexed by it's enum so there can be holes in
     the table.  */
  const CGEN_OPERAND **selected = xmalloc (MAX_OPERANDS * sizeof (* selected));

  cd->operand_table.init_entries = init;
  cd->operand_table.entry_size = sizeof (CGEN_OPERAND);
  memset (selected, 0, MAX_OPERANDS * sizeof (CGEN_OPERAND *));
  /* ??? For now we just use mach to determine which ones we want.  */
  for (i = 0; init[i].name != NULL; ++i)
    if (CGEN_OPERAND_ATTR_VALUE (&init[i], CGEN_OPERAND_MACH)
	& machs)
      selected[init[i].type] = &init[i];
  cd->operand_table.entries = selected;
  cd->operand_table.num_entries = MAX_OPERANDS;
}

/* Subroutine of aap_cgen_cpu_open to build the hardware table.
   ??? This could leave out insns not supported by the specified mach/isa,
   but that would cause errors like "foo only supported by bar" to become
   "unknown insn", so for now we include all insns and require the app to
   do the checking later.
   ??? On the other hand, parsing of such insns may require their hardware or
   operand elements to be in the table [which they mightn't be].  */

static void
build_insn_table (CGEN_CPU_TABLE *cd)
{
  int i;
  const CGEN_IBASE *ib = & aap_cgen_insn_table[0];
  CGEN_INSN *insns = xmalloc (MAX_INSNS * sizeof (CGEN_INSN));

  memset (insns, 0, MAX_INSNS * sizeof (CGEN_INSN));
  for (i = 0; i < MAX_INSNS; ++i)
    insns[i].base = &ib[i];
  cd->insn_table.init_entries = insns;
  cd->insn_table.entry_size = sizeof (CGEN_IBASE);
  cd->insn_table.num_init_entries = MAX_INSNS;
}

/* Subroutine of aap_cgen_cpu_open to rebuild the tables.  */

static void
aap_cgen_rebuild_tables (CGEN_CPU_TABLE *cd)
{
  int i;
  CGEN_BITSET *isas = cd->isas;
  unsigned int machs = cd->machs;

  cd->int_insn_p = CGEN_INT_INSN_P;

  /* Data derived from the isa spec.  */
#define UNSET (CGEN_SIZE_UNKNOWN + 1)
  cd->default_insn_bitsize = UNSET;
  cd->base_insn_bitsize = UNSET;
  cd->min_insn_bitsize = 65535; /* Some ridiculously big number.  */
  cd->max_insn_bitsize = 0;
  for (i = 0; i < MAX_ISAS; ++i)
    if (cgen_bitset_contains (isas, i))
      {
	const CGEN_ISA *isa = & aap_cgen_isa_table[i];

	/* Default insn sizes of all selected isas must be
	   equal or we set the result to 0, meaning "unknown".  */
	if (cd->default_insn_bitsize == UNSET)
	  cd->default_insn_bitsize = isa->default_insn_bitsize;
	else if (isa->default_insn_bitsize == cd->default_insn_bitsize)
	  ; /* This is ok.  */
	else
	  cd->default_insn_bitsize = CGEN_SIZE_UNKNOWN;

	/* Base insn sizes of all selected isas must be equal
	   or we set the result to 0, meaning "unknown".  */
	if (cd->base_insn_bitsize == UNSET)
	  cd->base_insn_bitsize = isa->base_insn_bitsize;
	else if (isa->base_insn_bitsize == cd->base_insn_bitsize)
	  ; /* This is ok.  */
	else
	  cd->base_insn_bitsize = CGEN_SIZE_UNKNOWN;

	/* Set min,max insn sizes.  */
	if (isa->min_insn_bitsize < cd->min_insn_bitsize)
	  cd->min_insn_bitsize = isa->min_insn_bitsize;
	if (isa->max_insn_bitsize > cd->max_insn_bitsize)
	  cd->max_insn_bitsize = isa->max_insn_bitsize;
      }

  /* Data derived from the mach spec.  */
  for (i = 0; i < MAX_MACHS; ++i)
    if (((1 << i) & machs) != 0)
      {
	const CGEN_MACH *mach = & aap_cgen_mach_table[i];

	if (mach->insn_chunk_bitsize != 0)
	{
	  if (cd->insn_chunk_bitsize != 0 && cd->insn_chunk_bitsize != mach->insn_chunk_bitsize)
	    {
	      fprintf (stderr, "aap_cgen_rebuild_tables: conflicting insn-chunk-bitsize values: `%d' vs. `%d'\n",
		       cd->insn_chunk_bitsize, mach->insn_chunk_bitsize);
	      abort ();
	    }

 	  cd->insn_chunk_bitsize = mach->insn_chunk_bitsize;
	}
      }

  /* Determine which hw elements are used by MACH.  */
  build_hw_table (cd);

  /* Build the ifield table.  */
  build_ifield_table (cd);

  /* Determine which operands are used by MACH/ISA.  */
  build_operand_table (cd);

  /* Build the instruction table.  */
  build_insn_table (cd);
}

/* Initialize a cpu table and return a descriptor.
   It's much like opening a file, and must be the first function called.
   The arguments are a set of (type/value) pairs, terminated with
   CGEN_CPU_OPEN_END.

   Currently supported values:
   CGEN_CPU_OPEN_ISAS:    bitmap of values in enum isa_attr
   CGEN_CPU_OPEN_MACHS:   bitmap of values in enum mach_attr
   CGEN_CPU_OPEN_BFDMACH: specify 1 mach using bfd name
   CGEN_CPU_OPEN_ENDIAN:  specify endian choice
   CGEN_CPU_OPEN_END:     terminates arguments

   ??? Simultaneous multiple isas might not make sense, but it's not (yet)
   precluded.  */

CGEN_CPU_DESC
aap_cgen_cpu_open (enum cgen_cpu_open_arg arg_type, ...)
{
  CGEN_CPU_TABLE *cd = (CGEN_CPU_TABLE *) xmalloc (sizeof (CGEN_CPU_TABLE));
  static int init_p;
  CGEN_BITSET *isas = 0;  /* 0 = "unspecified" */
  unsigned int machs = 0; /* 0 = "unspecified" */
  enum cgen_endian endian = CGEN_ENDIAN_UNKNOWN;
  va_list ap;

  if (! init_p)
    {
      init_tables ();
      init_p = 1;
    }

  memset (cd, 0, sizeof (*cd));

  va_start (ap, arg_type);
  while (arg_type != CGEN_CPU_OPEN_END)
    {
      switch (arg_type)
	{
	case CGEN_CPU_OPEN_ISAS :
	  isas = va_arg (ap, CGEN_BITSET *);
	  break;
	case CGEN_CPU_OPEN_MACHS :
	  machs = va_arg (ap, unsigned int);
	  break;
	case CGEN_CPU_OPEN_BFDMACH :
	  {
	    const char *name = va_arg (ap, const char *);
	    const CGEN_MACH *mach =
	      lookup_mach_via_bfd_name (aap_cgen_mach_table, name);

	    machs |= 1 << mach->num;
	    break;
	  }
	case CGEN_CPU_OPEN_ENDIAN :
	  endian = va_arg (ap, enum cgen_endian);
	  break;
	default :
	  fprintf (stderr, "aap_cgen_cpu_open: unsupported argument `%d'\n",
		   arg_type);
	  abort (); /* ??? return NULL? */
	}
      arg_type = va_arg (ap, enum cgen_cpu_open_arg);
    }
  va_end (ap);

  /* Mach unspecified means "all".  */
  if (machs == 0)
    machs = (1 << MAX_MACHS) - 1;
  /* Base mach is always selected.  */
  machs |= 1;
  if (endian == CGEN_ENDIAN_UNKNOWN)
    {
      /* ??? If target has only one, could have a default.  */
      fprintf (stderr, "aap_cgen_cpu_open: no endianness specified\n");
      abort ();
    }

  cd->isas = cgen_bitset_copy (isas);
  cd->machs = machs;
  cd->endian = endian;
  /* FIXME: for the sparc case we can determine insn-endianness statically.
     The worry here is where both data and insn endian can be independently
     chosen, in which case this function will need another argument.
     Actually, will want to allow for more arguments in the future anyway.  */
  cd->insn_endian = endian;

  /* Table (re)builder.  */
  cd->rebuild_tables = aap_cgen_rebuild_tables;
  aap_cgen_rebuild_tables (cd);

  /* Default to not allowing signed overflow.  */
  cd->signed_overflow_ok_p = 0;
  
  return (CGEN_CPU_DESC) cd;
}

/* Cover fn to aap_cgen_cpu_open to handle the simple case of 1 isa, 1 mach.
   MACH_NAME is the bfd name of the mach.  */

CGEN_CPU_DESC
aap_cgen_cpu_open_1 (const char *mach_name, enum cgen_endian endian)
{
  return aap_cgen_cpu_open (CGEN_CPU_OPEN_BFDMACH, mach_name,
			       CGEN_CPU_OPEN_ENDIAN, endian,
			       CGEN_CPU_OPEN_END);
}

/* Close a cpu table.
   ??? This can live in a machine independent file, but there's currently
   no place to put this file (there's no libcgen).  libopcodes is the wrong
   place as some simulator ports use this but they don't use libopcodes.  */

void
aap_cgen_cpu_close (CGEN_CPU_DESC cd)
{
  unsigned int i;
  const CGEN_INSN *insns;

  if (cd->macro_insn_table.init_entries)
    {
      insns = cd->macro_insn_table.init_entries;
      for (i = 0; i < cd->macro_insn_table.num_init_entries; ++i, ++insns)
	if (CGEN_INSN_RX ((insns)))
	  regfree (CGEN_INSN_RX (insns));
    }

  if (cd->insn_table.init_entries)
    {
      insns = cd->insn_table.init_entries;
      for (i = 0; i < cd->insn_table.num_init_entries; ++i, ++insns)
	if (CGEN_INSN_RX (insns))
	  regfree (CGEN_INSN_RX (insns));
    }  

  if (cd->macro_insn_table.init_entries)
    free ((CGEN_INSN *) cd->macro_insn_table.init_entries);

  if (cd->insn_table.init_entries)
    free ((CGEN_INSN *) cd->insn_table.init_entries);

  if (cd->hw_table.entries)
    free ((CGEN_HW_ENTRY *) cd->hw_table.entries);

  if (cd->operand_table.entries)
    free ((CGEN_HW_ENTRY *) cd->operand_table.entries);

  free (cd);
}

