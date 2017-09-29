/* CPU data for aap.

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
  { "aap", 32, 32, 32, 32 },
  { 0, 0, 0, 0, 0 }
};

/* Machine variants.  */

static const CGEN_MACH aap_cgen_mach_table[] = {
  { "aap", "aap", MACH_AAP, 0 },
  { 0, 0, 0, 0 }
};

static CGEN_KEYWORD_ENTRY aap_cgen_opval_h_gpr_entries[] =
{
  { "$r0", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "$r1", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "$r2", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "$r3", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "$r4", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "$r5", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "$r6", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "$r7", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "$r8", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "$r9", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "$r10", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "$r11", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "$r12", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "$r13", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "$r14", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "$r15", 15, {0, {{{0, 0}}}}, 0, 0 },
  { "$r16", 16, {0, {{{0, 0}}}}, 0, 0 },
  { "$r17", 17, {0, {{{0, 0}}}}, 0, 0 },
  { "$r18", 18, {0, {{{0, 0}}}}, 0, 0 },
  { "$r19", 19, {0, {{{0, 0}}}}, 0, 0 },
  { "$r20", 20, {0, {{{0, 0}}}}, 0, 0 },
  { "$r21", 21, {0, {{{0, 0}}}}, 0, 0 },
  { "$r22", 22, {0, {{{0, 0}}}}, 0, 0 },
  { "$r23", 23, {0, {{{0, 0}}}}, 0, 0 },
  { "$r24", 24, {0, {{{0, 0}}}}, 0, 0 },
  { "$r25", 25, {0, {{{0, 0}}}}, 0, 0 },
  { "$r26", 26, {0, {{{0, 0}}}}, 0, 0 },
  { "$r27", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "$r28", 28, {0, {{{0, 0}}}}, 0, 0 },
  { "$r29", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "$r30", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "$r31", 31, {0, {{{0, 0}}}}, 0, 0 },
  { "$r32", 32, {0, {{{0, 0}}}}, 0, 0 },
  { "$r33", 33, {0, {{{0, 0}}}}, 0, 0 },
  { "$r34", 34, {0, {{{0, 0}}}}, 0, 0 },
  { "$r35", 35, {0, {{{0, 0}}}}, 0, 0 },
  { "$r36", 36, {0, {{{0, 0}}}}, 0, 0 },
  { "$r37", 37, {0, {{{0, 0}}}}, 0, 0 },
  { "$r38", 38, {0, {{{0, 0}}}}, 0, 0 },
  { "$r39", 39, {0, {{{0, 0}}}}, 0, 0 },
  { "$r40", 40, {0, {{{0, 0}}}}, 0, 0 },
  { "$r41", 41, {0, {{{0, 0}}}}, 0, 0 },
  { "$r42", 42, {0, {{{0, 0}}}}, 0, 0 },
  { "$r43", 43, {0, {{{0, 0}}}}, 0, 0 },
  { "$r44", 44, {0, {{{0, 0}}}}, 0, 0 },
  { "$r45", 45, {0, {{{0, 0}}}}, 0, 0 },
  { "$r46", 46, {0, {{{0, 0}}}}, 0, 0 },
  { "$r47", 47, {0, {{{0, 0}}}}, 0, 0 },
  { "$r48", 48, {0, {{{0, 0}}}}, 0, 0 },
  { "$r49", 49, {0, {{{0, 0}}}}, 0, 0 },
  { "$r50", 50, {0, {{{0, 0}}}}, 0, 0 },
  { "$r51", 51, {0, {{{0, 0}}}}, 0, 0 },
  { "$r52", 52, {0, {{{0, 0}}}}, 0, 0 },
  { "$r53", 53, {0, {{{0, 0}}}}, 0, 0 },
  { "$r54", 54, {0, {{{0, 0}}}}, 0, 0 },
  { "$r55", 55, {0, {{{0, 0}}}}, 0, 0 },
  { "$r56", 56, {0, {{{0, 0}}}}, 0, 0 },
  { "$r57", 57, {0, {{{0, 0}}}}, 0, 0 },
  { "$r58", 58, {0, {{{0, 0}}}}, 0, 0 },
  { "$r59", 59, {0, {{{0, 0}}}}, 0, 0 },
  { "$r60", 60, {0, {{{0, 0}}}}, 0, 0 },
  { "$r61", 61, {0, {{{0, 0}}}}, 0, 0 },
  { "$r62", 62, {0, {{{0, 0}}}}, 0, 0 },
  { "$r63", 63, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD aap_cgen_opval_h_gpr =
{
  & aap_cgen_opval_h_gpr_entries[0],
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
  { "h-gpr", HW_H_GPR, CGEN_ASM_KEYWORD, (PTR) & aap_cgen_opval_h_gpr, { 0|A(CACHE_ADDR), { { { (1<<MACH_BASE), 0 } } } } },
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
  { AAP_F_LENGTH, "f-length", 0, 32, 31, 1, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_X_LENGTH, "f-x-length", 0, 32, 15, 1, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_X_CLASS, "f-x-class", 0, 32, 14, 2, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_OPCODE, "f-opcode", 0, 32, 30, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_X_OPCODE, "f-x-opcode", 0, 32, 14, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_DST_REG, "f-dst-reg", 0, 32, 24, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_X_DST_REG, "f-x-dst-reg", 0, 32, 8, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_SRC_REG_1, "f-src-reg-1", 0, 32, 21, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_X_SRC_REG_1, "f-x-src-reg-1", 0, 32, 5, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_SRC_REG_2, "f-src-reg-2", 0, 32, 18, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_X_SRC_REG_2, "f-x-src-reg-2", 0, 32, 2, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_BLANK, "f-blank", 0, 32, 14, 15, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_UINT_18_3, "f-uint-18-3", 0, 32, 18, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_UINT_21_6, "f-uint-21-6", 0, 32, 21, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_UINT_12_4, "f-uint-12-4", 0, 32, 12, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_UINT_III1, "f-uint-iii1", 0, 32, 12, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_UINT_2_3, "f-uint-2-3", 0, 32, 2, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_UINT_5_6, "f-uint-5-6", 0, 32, 5, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_INT_18_3, "f-int-18-3", 0, 32, 18, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_INT_24_9, "f-int-24-9", 0, 32, 24, 9, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_INT_24_6, "f-int-24-6", 0, 32, 24, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_INT_24_3, "f-int-24-3", 0, 32, 24, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_INT_12_4, "f-int-12-4", 0, 32, 12, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_INT_2_3, "f-int-2-3", 0, 32, 2, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_INT_8_3, "f-int-8-3", 0, 32, 8, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_INT_8_6, "f-int-8-6", 0, 32, 8, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_INT_8_9, "f-int-8-9", 0, 32, 8, 9, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { 0, 0, 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } }
};

#undef A



/* multi ifield declarations */



/* multi ifield definitions */


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
  { "dest", AAP_OPERAND_DEST, HW_H_GPR, 24, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_DST_REG] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* src1: src1 */
  { "src1", AAP_OPERAND_SRC1, HW_H_GPR, 21, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_SRC_REG_1] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* src2: src2 */
  { "src2", AAP_OPERAND_SRC2, HW_H_GPR, 18, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_SRC_REG_2] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* xdest: xdest */
  { "xdest", AAP_OPERAND_XDEST, HW_H_GPR, 8, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_X_DST_REG] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* xsrc1: xsrc1 */
  { "xsrc1", AAP_OPERAND_XSRC1, HW_H_GPR, 5, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_X_SRC_REG_1] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* xsrc2: xsrc2 */
  { "xsrc2", AAP_OPERAND_XSRC2, HW_H_GPR, 2, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_X_SRC_REG_2] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* uint216: uint 21 6 */
  { "uint216", AAP_OPERAND_UINT216, HW_H_UINT, 21, 6,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_21_6] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* uint183: uint 18 3 */
  { "uint183", AAP_OPERAND_UINT183, HW_H_UINT, 18, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_18_3] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* uint124: uint 12 4 */
  { "uint124", AAP_OPERAND_UINT124, HW_H_UINT, 12, 4,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_12_4] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* uint056: uint 5 6 */
  { "uint056", AAP_OPERAND_UINT056, HW_H_UINT, 5, 6,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_5_6] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* uint023: uint 2 3 */
  { "uint023", AAP_OPERAND_UINT023, HW_H_UINT, 2, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_2_3] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* uintiii1: uint iii1 */
  { "uintiii1", AAP_OPERAND_UINTIII1, HW_H_UINT, 12, 4,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_III1] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* int243: sint 24 3 */
  { "int243", AAP_OPERAND_INT243, HW_H_SINT, 24, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_24_3] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* int246: int 24 6 */
  { "int246", AAP_OPERAND_INT246, HW_H_SINT, 24, 6,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_24_6] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* int249: int 24 9 */
  { "int249", AAP_OPERAND_INT249, HW_H_SINT, 24, 9,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_24_9] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* int183: int 18 3 */
  { "int183", AAP_OPERAND_INT183, HW_H_SINT, 18, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_18_3] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* int124: int 12 4 */
  { "int124", AAP_OPERAND_INT124, HW_H_SINT, 12, 4,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_12_4] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* int083: int 8 3 */
  { "int083", AAP_OPERAND_INT083, HW_H_SINT, 8, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_8_3] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* int086: int 8 6 */
  { "int086", AAP_OPERAND_INT086, HW_H_SINT, 8, 6,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_8_6] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* int089: int 8 9 */
  { "int089", AAP_OPERAND_INT089, HW_H_SINT, 8, 9,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_8_9] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* int023: int 2 3 */
  { "int023", AAP_OPERAND_INT023, HW_H_SINT, 2, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_2_3] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
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
/* l.add ${dest},${src1},${src2} */
  {
    AAP_INSN_L_ADD, "l.add", "l.add", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sub ${dest},${src1},${src2} */
  {
    AAP_INSN_L_SUB, "l.sub", "l.sub", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.and ${dest},${src1},${src2} */
  {
    AAP_INSN_L_AND, "l.and", "l.and", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.or ${dest},${src1},${src2} */
  {
    AAP_INSN_L_OR, "l.or", "l.or", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.xor ${dest},${src1},${src2} */
  {
    AAP_INSN_L_XOR, "l.xor", "l.xor", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.asr ${dest},${src1},${src2} */
  {
    AAP_INSN_L_ASR, "l.asr", "l.asr", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.lsl ${dest},${src1},${src2} */
  {
    AAP_INSN_L_LSL, "l.lsl", "l.lsl", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.lsr ${dest},${src1},${src2} */
  {
    AAP_INSN_L_LSR, "l.lsr", "l.lsr", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.mov ${dest},${src1},${src2} */
  {
    AAP_INSN_L_MOV, "l.mov", "l.mov", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jmp ${dest},${src1},${src2} */
  {
    AAP_INSN_L_JMP, "l.jmp", "l.jmp", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jal ${dest},${src1},${src2} */
  {
    AAP_INSN_L_JAL, "l.jal", "l.jal", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jeq ${dest},${src1},${src2} */
  {
    AAP_INSN_L_JEQ, "l.jeq", "l.jeq", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jne ${dest},${src1},${src2} */
  {
    AAP_INSN_L_JNE, "l.jne", "l.jne", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jlts ${dest},${src1},${src2} */
  {
    AAP_INSN_L_JLTS, "l.jlts", "l.jlts", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jles ${dest},${src1},${src2} */
  {
    AAP_INSN_L_JLES, "l.jles", "l.jles", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jltu ${dest},${src1},${src2} */
  {
    AAP_INSN_L_JLTU, "l.jltu", "l.jltu", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jleu ${dest},${src1},${src2} */
  {
    AAP_INSN_L_JLEU, "l.jleu", "l.jleu", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.rd ${dest},${src1},${src2} */
  {
    AAP_INSN_L_RD, "l.rd", "l.rd", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.addi ${dest},${src1},${uint183} */
  {
    AAP_INSN_L_ADDI, "l.addi", "l.addi", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.subi ${dest},${src1},${uint183} */
  {
    AAP_INSN_L_SUBI, "l.subi", "l.subi", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.asri ${dest},${src1},${uint183} */
  {
    AAP_INSN_L_ASRI, "l.asri", "l.asri", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.lsli ${dest},${src1},${uint183} */
  {
    AAP_INSN_L_LSLI, "l.lsli", "l.lsli", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.lsri ${dest},${src1},${uint183} */
  {
    AAP_INSN_L_LSRI, "l.lsri", "l.lsri", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.beq ${int243},${src1},${src2} */
  {
    AAP_INSN_L_BEQ, "l.beq", "l.beq", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bne ${int243},${src1},${src2} */
  {
    AAP_INSN_L_BNE, "l.bne", "l.bne", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.blts ${int243},${src1},${src2} */
  {
    AAP_INSN_L_BLTS, "l.blts", "l.blts", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bles ${int243},${src1},${src2} */
  {
    AAP_INSN_L_BLES, "l.bles", "l.bles", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bltu ${int243},${src1},${src2} */
  {
    AAP_INSN_L_BLTU, "l.bltu", "l.bltu", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bleu ${int243},${src1},${src2} */
  {
    AAP_INSN_L_BLEU, "l.bleu", "l.bleu", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldb ${dest},${src1},${int183} */
  {
    AAP_INSN_L_LDB, "l.ldb", "l.ldb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldw ${dest},${src1},${int183} */
  {
    AAP_INSN_L_LDW, "l.ldw", "l.ldw", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldbpo ${dest},${src1},${int183} */
  {
    AAP_INSN_L_LDBPO, "l.ldbpo", "l.ldbpo", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldwpo ${dest},${src1},${int183} */
  {
    AAP_INSN_L_LDWPO, "l.ldwpo", "l.ldwpo", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldbpr ${dest},${src1},${int183} */
  {
    AAP_INSN_L_LDBPR, "l.ldbpr", "l.ldbpr", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldwpr ${dest},${src1},${int183} */
  {
    AAP_INSN_L_LDWPR, "l.ldwpr", "l.ldwpr", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdb ${dest},${src1},${int183} */
  {
    AAP_INSN_L_SDB, "l.sdb", "l.sdb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdw ${dest},${src1},${int183} */
  {
    AAP_INSN_L_SDW, "l.sdw", "l.sdw", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdbpo ${dest},${src1},${int183} */
  {
    AAP_INSN_L_SDBPO, "l.sdbpo", "l.sdbpo", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdwpo ${dest},${src1},${int183} */
  {
    AAP_INSN_L_SDWPO, "l.sdwpo", "l.sdwpo", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdbpr ${dest},${src1},${int183} */
  {
    AAP_INSN_L_SDBPR, "l.sdbpr", "l.sdbpr", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdwpr ${dest},${src1},${int183} */
  {
    AAP_INSN_L_SDWPR, "l.sdwpr", "l.sdwpr", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.nop ${dest},${uint216} */
  {
    AAP_INSN_L_NOP, "l.nop", "l.nop", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.movi ${dest},${uint216} */
  {
    AAP_INSN_L_MOVI, "l.movi", "l.movi", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bal ${int246},${src2} */
  {
    AAP_INSN_L_BAL, "l.bal", "l.bal", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bra ${int249} */
  {
    AAP_INSN_L_BRA, "l.bra", "l.bra", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.add32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_ADD32, "l.add32", "l.add32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sub32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_SUB32, "l.sub32", "l.sub32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.and32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_AND32, "l.and32", "l.and32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.or32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_OR32, "l.or32", "l.or32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.xor32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_XOR32, "l.xor32", "l.xor32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.asr32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_ASR32, "l.asr32", "l.asr32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.lsl32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_LSL32, "l.lsl32", "l.lsl32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.lsr32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_LSR32, "l.lsr32", "l.lsr32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.mov32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_MOV32, "l.mov32", "l.mov32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.addc32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_ADDC32, "l.addc32", "l.addc32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.subc32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_SUBC32, "l.subc32", "l.subc32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jmp32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JMP32, "l.jmp32", "l.jmp32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jal32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JAL32, "l.jal32", "l.jal32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jeq32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JEQ32, "l.jeq32", "l.jeq32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jne32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JNE32, "l.jne32", "l.jne32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jlts32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JLTS32, "l.jlts32", "l.jlts32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jles32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JLES32, "l.jles32", "l.jles32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jltu32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JLTU32, "l.jltu32", "l.jltu32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jleu32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JLEU32, "l.jleu32", "l.jleu32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jmpl32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JMPL32, "l.jmpl32", "l.jmpl32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jall32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JALL32, "l.jall32", "l.jall32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jeql32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JEQL32, "l.jeql32", "l.jeql32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jnel32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JNEL32, "l.jnel32", "l.jnel32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jltsl32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JLTSL32, "l.jltsl32", "l.jltsl32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jlesl32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JLESL32, "l.jlesl32", "l.jlesl32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jltul32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JLTUL32, "l.jltul32", "l.jltul32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jleul32 ${dest},${src1},${src2},${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JLEUL32, "l.jleul32", "l.jleul32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.asri32 ${dest},${src1},${uint183},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_ASRI32, "l.asri32", "l.asri32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.lsli32 ${dest},${src1},${uint183},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_LSLI32, "l.lsli32", "l.lsli32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.lsri32 ${dest},${src1},${uint183},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_LSRI32, "l.lsri32", "l.lsri32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.andi32 ${dest},${src1},${uint183},${uintiii1},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_ANDI32, "l.andi32", "l.andi32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ori32 ${dest},${src1},${uint183},${uintiii1},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_ORI32, "l.ori32", "l.ori32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.xori32 ${dest},${src1},${uint183},${uintiii1},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_XORI32, "l.xori32", "l.xori32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.addi32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_ADDI32, "l.addi32", "l.addi32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.subi32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_SUBI32, "l.subi32", "l.subi32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.beq32 ${int243},${src1},${src2},${int124},${int083},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_BEQ32, "l.beq32", "l.beq32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bne32 ${int243},${src1},${src2},${int124},${int083},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_BNE32, "l.bne32", "l.bne32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.blts32 ${int243},${src1},${src2},${int124},${int083},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_BLTS32, "l.blts32", "l.blts32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bles32 ${int243},${src1},${src2},${int124},${int083},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_BLES32, "l.bles32", "l.bles32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bltu32 ${int243},${src1},${src2},${int124},${int083},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_BLTU32, "l.bltu32", "l.bltu32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bleu32 ${int243},${src1},${src2},${int124},${int083},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_BLEU32, "l.bleu32", "l.bleu32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldb32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_LDB32, "l.ldb32", "l.ldb32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldw32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_LDW32, "l.ldw32", "l.ldw32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldbpo32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_LDBPO32, "l.ldbpo32", "l.ldbpo32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldwpo32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_LDWPO32, "l.ldwpo32", "l.ldwpo32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldbpr32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_LDBPR32, "l.ldbpr32", "l.ldbpr32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldwpr32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_LDWPR32, "l.ldwpr32", "l.ldwpr32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdb32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_SDB32, "l.sdb32", "l.sdb32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdw32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_SDW32, "l.sdw32", "l.sdw32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdbpo32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_SDBPO32, "l.sdbpo32", "l.sdbpo32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdwpo32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_SDWPO32, "l.sdwpo32", "l.sdwpo32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdbpr32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_SDBPR32, "l.sdbpr32", "l.sdbpr32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdwpr32 ${dest},${src1},${uint183},${uint124},${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_SDWPR32, "l.sdwpr32", "l.sdwpr32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.nop32 ${dest},${uint216},${xdest},${uint056} */
  {
    AAP_INSN_L_NOP32, "l.nop32", "l.nop32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.movi32 ${dest},${uint216},${uint124},${xdest},${uint056} */
  {
    AAP_INSN_L_MOVI32, "l.movi32", "l.movi32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bal32 ${int246},${src2},${int124},${int086},${xsrc2} */
  {
    AAP_INSN_L_BAL32, "l.bal32", "l.bal32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bra32 ${int249},${int124},${int089} */
  {
    AAP_INSN_L_BRA32, "l.bra32", "l.bra32", 32,
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

