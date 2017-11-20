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
  { "aap16", MACH_AAP16 },
  { "aap32", MACH_AAP32 },
  { "max", MACH_MAX },
  { 0, 0 }
};

static const CGEN_ATTR_ENTRY ISA_attr[] ATTRIBUTE_UNUSED =
{
  { "aap16", ISA_AAP16 },
  { "aap32", ISA_AAP32 },
  { "max", ISA_MAX },
  { 0, 0 }
};

const CGEN_ATTR_TABLE aap_cgen_ifield_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "ISA", & ISA_attr[0], & ISA_attr[0] },
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
  { "ISA", & ISA_attr[0], & ISA_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "CACHE-ADDR", &bool_attr[0], &bool_attr[0] },
  { "PC", &bool_attr[0], &bool_attr[0] },
  { "PROFILE", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE aap_cgen_operand_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "ISA", & ISA_attr[0], & ISA_attr[0] },
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
  { "ISA", & ISA_attr[0], & ISA_attr[0] },
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
  { "aap16", 32, 32, 16, 16 },
  { "aap32", 32, 32, 32, 32 },
  { 0, 0, 0, 0, 0 }
};

/* Machine variants.  */

static const CGEN_MACH aap_cgen_mach_table[] = {
  { "aap16", "aap16", MACH_AAP16, 32 },
  { "aap32", "aap", MACH_AAP32, 32 },
  { 0, 0, 0, 0 }
};

static CGEN_KEYWORD_ENTRY aap_cgen_opval_gpr_names_entries[] =
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

CGEN_KEYWORD aap_cgen_opval_gpr_names =
{
  & aap_cgen_opval_gpr_names_entries[0],
  64,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY aap_cgen_opval_cr_names_entries[] =
{
  { "cr0", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "cr1", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "cr2", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "cr3", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "cr4", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "cr5", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "cr6", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "cr7", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "cr8", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "cr9", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "cr10", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "cr11", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "cr12", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "cr13", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "cr14", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "cr15", 15, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD aap_cgen_opval_cr_names =
{
  & aap_cgen_opval_cr_names_entries[0],
  16,
  0, 0, 0, 0, ""
};


/* The hardware table.  */

#define A(a) (1 << CGEN_HW_##a)

const CGEN_HW_ENTRY aap_cgen_hw_table[] =
{
  { "h-memory", HW_H_MEMORY, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } } },
  { "h-sint", HW_H_SINT, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } } },
  { "h-uint", HW_H_UINT, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } } },
  { "h-addr", HW_H_ADDR, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } } },
  { "h-iaddr", HW_H_IADDR, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } } },
  { "h-gpr", HW_H_GPR, CGEN_ASM_KEYWORD, (PTR) & aap_cgen_opval_gpr_names, { 0|A(CACHE_ADDR), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } } },
  { "h-cr", HW_H_CR, CGEN_ASM_KEYWORD, (PTR) & aap_cgen_opval_cr_names, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
  { "h-cf", HW_H_CF, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
  { "h-pc", HW_H_PC, CGEN_ASM_NONE, 0, { 0|A(PROFILE)|A(PC), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
  { 0, 0, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } }
};

#undef A


/* The instruction field table.  */

#define A(a) (1 << CGEN_IFLD_##a)

const CGEN_IFLD aap_cgen_ifld_table[] =
{
  { AAP_F_NIL, "f-nil", 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_ANYOF, "f-anyof", 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_LENGTH, "f-length", 0, 32, 15, 1, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_X_LENGTH, "f-x-length", 0, 32, 31, 1, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_X_CLASS, "f-x-class", 0, 32, 30, 2, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_OPCODE, "f-opcode", 0, 32, 14, 6, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_X_OPCODE, "f-x-opcode", 0, 32, 30, 6, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_CLASS_1, "f-class-1", 0, 32, 25, 1, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_DST_HI, "f-dst-hi", 0, 32, 24, 3, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_DST_LO, "f-dst-lo", 0, 32, 8, 3, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_X_DST_REG, "f-x-dst-reg", 0, 32, 8, 3, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_SRC_1_HI, "f-src-1-hi", 0, 32, 21, 3, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_SRC_1_LO, "f-src-1-lo", 0, 32, 5, 3, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_X_SRC_REG_1, "f-x-src-reg-1", 0, 32, 5, 3, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_SRC_2_HI, "f-src-2-hi", 0, 32, 18, 3, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_SRC_2_LO, "f-src-2-lo", 0, 32, 2, 3, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_X_SRC_REG_2, "f-x-src-reg-2", 0, 32, 2, 3, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_UINT_18_3_HI, "f-uint-18-3-hi", 0, 32, 18, 3, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }  },
  { AAP_F_UINT_21_6, "f-uint-21-6", 0, 32, 21, 6, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }  },
  { AAP_F_UINT_28_4, "f-uint-28-4", 0, 32, 28, 4, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }  },
  { AAP_F_UINT_28_3, "f-uint-28-3", 0, 32, 28, 3, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }  },
  { AAP_F_UINT_2_3, "f-uint-2-3", 0, 32, 2, 3, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_UINT_2_3_LO, "f-uint-2-3-lo", 0, 32, 2, 3, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }  },
  { AAP_F_UINT_5_6, "f-uint-5-6", 0, 32, 5, 6, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_INT_18_3, "f-int-18-3", 0, 32, 18, 3, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }  },
  { AAP_F_INT_24_9, "f-int-24-9", 0, 32, 24, 9, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }  },
  { AAP_F_INT_24_6, "f-int-24-6", 0, 32, 24, 6, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }  },
  { AAP_F_INT_24_3, "f-int-24-3", 0, 32, 24, 3, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }  },
  { AAP_F_INT_28_4_LO, "f-int-28-4-lo", 0, 32, 28, 4, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }  },
  { AAP_F_INT_2_3, "f-int-2-3", 0, 32, 2, 3, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_INT_8_3, "f-int-8-3", 0, 32, 8, 3, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_INT_8_6, "f-int-8-6", 0, 32, 8, 6, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_INT_8_9, "f-int-8-9", 0, 32, 8, 9, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_INT_12_7, "f-int-12-7", 0, 32, 12, 7, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }  },
  { AAP_F_INT_12_10, "f-int-12-10", 0, 32, 12, 10, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }  },
  { AAP_F_INT_12_13, "f-int-12-13", 0, 32, 12, 13, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }  },
  { AAP_F_U16, "f-u16", 0, 32, 15, 16, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_CARRY, "f-carry", 0, 32, 0, 1, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { AAP_F_DST_1_REG, "f-dst+1-reg", 0, 32, 24, 6, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { AAP_F_S_13, "f-s-13", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { AAP_F_S_10, "f-s-10", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { AAP_F_S_7, "f-s-7", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { AAP_F_S_22, "f-s-22", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { AAP_F_S_16, "f-s-16", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { AAP_F_S_10_FIN, "f-s-10-fin", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { AAP_F_I_12, "f-i-12", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { AAP_F_I_16, "f-i-16", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { AAP_F_I_6, "f-i-6", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { AAP_F_I_9, "f-i-9", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { AAP_F_I_10, "f-i-10", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { AAP_F_D_6, "f-d-6", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { AAP_F_A_6, "f-a-6", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { AAP_F_B_6, "f-b-6", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { 0, 0, 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } }
};

#undef A



/* multi ifield declarations */

const CGEN_MAYBE_MULTI_IFLD AAP_F_S_13_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_S_10_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_S_7_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_S_22_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_S_16_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_S_10_FIN_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_I_12_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_I_16_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_I_6_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_I_9_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_I_10_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_D_6_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_A_6_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_B_6_MULTI_IFIELD [];


/* multi ifield definitions */

const CGEN_MAYBE_MULTI_IFLD AAP_F_S_13_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_28_4_LO] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_8_9] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_S_10_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_28_4_LO] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_8_6] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_S_7_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_28_4_LO] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_8_3] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_S_22_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_24_9] } },
    { 2, { (const PTR) &AAP_F_S_13_MULTI_IFIELD[0] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_S_16_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_24_6] } },
    { 2, { (const PTR) &AAP_F_S_10_MULTI_IFIELD[0] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_S_10_FIN_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_24_3] } },
    { 2, { (const PTR) &AAP_F_S_7_MULTI_IFIELD[0] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_I_12_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_5_6] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_21_6] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_I_16_MULTI_IFIELD [] =
{
    { 2, { (const PTR) &AAP_F_I_12_MULTI_IFIELD[0] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_28_4] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_I_6_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_18_3_HI] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_2_3_LO] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_I_9_MULTI_IFIELD [] =
{
    { 2, { (const PTR) &AAP_F_I_6_MULTI_IFIELD[0] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_28_3] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_I_10_MULTI_IFIELD [] =
{
    { 2, { (const PTR) &AAP_F_I_6_MULTI_IFIELD[0] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_28_4] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_D_6_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_DST_HI] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_DST_LO] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_A_6_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_SRC_1_HI] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_SRC_1_LO] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_B_6_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_SRC_2_HI] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_SRC_2_LO] } },
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
    { 0|A(SEM_ONLY), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* i12: 12bit uint */
  { "i12", AAP_OPERAND_I12, HW_H_UINT, 5, 12,
    { 2, { (const PTR) &AAP_F_I_12_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* i6: 6bit uint */
  { "i6", AAP_OPERAND_I6, HW_H_UINT, 2, 6,
    { 2, { (const PTR) &AAP_F_I_6_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* i9: 9bit uint */
  { "i9", AAP_OPERAND_I9, HW_H_UINT, 2, 9,
    { 2, { (const PTR) &AAP_F_I_9_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* i10: 10bit uint */
  { "i10", AAP_OPERAND_I10, HW_H_UINT, 2, 10,
    { 2, { (const PTR) &AAP_F_I_10_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* d6: 6bit dest */
  { "d6", AAP_OPERAND_D6, HW_H_GPR, 8, 6,
    { 2, { (const PTR) &AAP_F_D_6_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* a6: 6bit source1 */
  { "a6", AAP_OPERAND_A6, HW_H_GPR, 5, 6,
    { 2, { (const PTR) &AAP_F_A_6_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* b6: 6bit source2 */
  { "b6", AAP_OPERAND_B6, HW_H_GPR, 2, 6,
    { 2, { (const PTR) &AAP_F_B_6_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* carry: carry flag operand */
  { "carry", AAP_OPERAND_CARRY, HW_H_CF, 0, 1,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_CARRY] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* xdest: xdest */
  { "xdest", AAP_OPERAND_XDEST, HW_H_GPR, 8, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_X_DST_REG] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* xsrc1: xsrc1 */
  { "xsrc1", AAP_OPERAND_XSRC1, HW_H_GPR, 5, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_X_SRC_REG_1] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* xsrc2: xsrc2 */
  { "xsrc2", AAP_OPERAND_XSRC2, HW_H_GPR, 2, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_X_SRC_REG_2] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* dest1: dest+1 */
  { "dest1", AAP_OPERAND_DEST1, HW_H_GPR, 24, 6,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_DST_1_REG] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* uint056: uint 5 6 */
  { "uint056", AAP_OPERAND_UINT056, HW_H_UINT, 5, 6,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_5_6] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* i16: uint 16bit */
  { "i16", AAP_OPERAND_I16, HW_H_UINT, 5, 16,
    { 2, { (const PTR) &AAP_F_I_16_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* uint023: uint 2 3 */
  { "uint023", AAP_OPERAND_UINT023, HW_H_UINT, 2, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_2_3] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* int1210: int 12 10 */
  { "int1210", AAP_OPERAND_INT1210, HW_H_SINT, 8, 10,
    { 2, { (const PTR) &AAP_F_S_10_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
/* int083: int 8 3 */
  { "int083", AAP_OPERAND_INT083, HW_H_SINT, 8, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_8_3] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* int086: int 8 6 */
  { "int086", AAP_OPERAND_INT086, HW_H_SINT, 8, 6,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_8_6] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* int089: int 8 9 */
  { "int089", AAP_OPERAND_INT089, HW_H_SINT, 8, 9,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_8_9] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* int023: int 2 3 */
  { "int023", AAP_OPERAND_INT023, HW_H_SINT, 2, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_2_3] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* s22: s 22 */
  { "s22", AAP_OPERAND_S22, HW_H_SINT, 8, 22,
    { 2, { (const PTR) &AAP_F_S_22_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* s16: s 16 */
  { "s16", AAP_OPERAND_S16, HW_H_SINT, 8, 16,
    { 2, { (const PTR) &AAP_F_S_16_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* s10: s 10 */
  { "s10", AAP_OPERAND_S10, HW_H_SINT, 8, 10,
    { 2, { (const PTR) &AAP_F_S_10_FIN_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* sentinel */
  { 0, 0, 0, 0, 0,
    { 0, { (const PTR) 0 } },
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } }
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
  { 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
/* add ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_ADD16, "add", "add", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* sub ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_SUB16, "sub", "sub", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* and ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_AND16, "and", "and", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* or ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_OR16, "or", "or", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* xor ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_XOR16, "xor", "xor", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* asr ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_ASR16, "asr", "asr", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* lsl ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_LSL16, "lsl", "lsl", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* lsr ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_LSR16, "lsr", "lsr", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* mov ${xdest},${xsrc1} */
  {
    AAP_INSN_MOV16, "mov", "mov", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* jmp ${xdest} */
  {
    AAP_INSN_JMP16, "jmp", "jmp", 16,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* jal ${xdest},${xsrc2} */
  {
    AAP_INSN_JAL16, "jal", "jal", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* jeq ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_JEQ16, "jeq", "jeq", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* jne ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_JNE16, "jne", "jne", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* jlts ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_JLTS16, "jlts", "jlts", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* jles ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_JLES16, "jles", "jles", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* jltu ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_JLTU16, "jltu", "jltu", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* jleu ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_JLEU16, "jleu", "jleu", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* rte ${xdest} */
  {
    AAP_INSN_RTE16, "rte", "rte", 16,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* addi ${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_ADDI16, "addi", "addi", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* subi ${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_SUBI16, "subi", "subi", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* asri ${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_ASRI16, "asri", "asri", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* lsli ${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_LSLI16, "lsli", "lsli", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* lsri ${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_LSRI16, "lsri", "lsri", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* beq ${int083},${xsrc1},${xsrc2} */
  {
    AAP_INSN_BEQ16, "beq", "beq", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* bne ${int083},${xsrc1},${xsrc2} */
  {
    AAP_INSN_BNE16, "bne", "bne", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* blts ${int083},${xsrc1},${xsrc2} */
  {
    AAP_INSN_BLTS16, "blts", "blts", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* bles ${int083},${xsrc1},${xsrc2} */
  {
    AAP_INSN_BLES16, "bles", "bles", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* bltu ${int083},${xsrc1},${xsrc2} */
  {
    AAP_INSN_BLTU16, "bltu", "bltu", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* bleu ${int083},${xsrc1},${xsrc2} */
  {
    AAP_INSN_BLEU16, "bleu", "bleu", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* ldb ${xdest},[${xsrc1},${int023}] */
  {
    AAP_INSN_LDB___XDEST_____XSRC1____INT023__16, "ldb ${xdest},[${xsrc1},${int023}]", "ldb", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* ldw ${xdest},[${xsrc1},${int023}] */
  {
    AAP_INSN_LDW___XDEST_____XSRC1____INT023__16, "ldw ${xdest},[${xsrc1},${int023}]", "ldw", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* ldb ${xdest},[${xsrc1}+,${int023}] */
  {
    AAP_INSN_LDB___XDEST_____XSRC1_____INT023__16, "ldb ${xdest},[${xsrc1}+,${int023}]", "ldb", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* ldw ${xdest},[${xsrc1}+,${int023}] */
  {
    AAP_INSN_LDW___XDEST_____XSRC1_____INT023__16, "ldw ${xdest},[${xsrc1}+,${int023}]", "ldw", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* ldb ${xdest},[-${xsrc1},${int023}] */
  {
    AAP_INSN_LDB___XDEST______XSRC1____INT023__16, "ldb ${xdest},[-${xsrc1},${int023}]", "ldb", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* ldw ${xdest},[-${xsrc1},${int023}] */
  {
    AAP_INSN_LDW___XDEST______XSRC1____INT023__16, "ldw ${xdest},[-${xsrc1},${int023}]", "ldw", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* stb [${xdest},${int023}],${xsrc1} */
  {
    AAP_INSN_STB____XDEST____INT023_____XSRC1_16, "stb [${xdest},${int023}],${xsrc1}", "stb", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* stw [${xdest},${int023}],${xsrc1} */
  {
    AAP_INSN_STW____XDEST____INT023_____XSRC1_16, "stw [${xdest},${int023}],${xsrc1}", "stw", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* stb [${xdest}+,${int023}],${xsrc1} */
  {
    AAP_INSN_STB____XDEST_____INT023_____XSRC1_16, "stb [${xdest}+,${int023}],${xsrc1}", "stb", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* stw [${xdest}+,${int023}],${xsrc1} */
  {
    AAP_INSN_STW____XDEST_____INT023_____XSRC1_16, "stw [${xdest}+,${int023}],${xsrc1}", "stw", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* stb [-${xdest},${int023}],${xsrc1} */
  {
    AAP_INSN_STB_____XDEST____INT023_____XSRC1_16, "stb [-${xdest},${int023}],${xsrc1}", "stb", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* stw [-${xdest},${int023}],${xsrc1} */
  {
    AAP_INSN_STW_____XDEST____INT023_____XSRC1_16, "stw [-${xdest},${int023}],${xsrc1}", "stw", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* nop ${xdest},${uint056} */
  {
    AAP_INSN_NOP16, "nop", "nop", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* movi ${xdest},${uint056} */
  {
    AAP_INSN_MOVI16, "movi", "movi", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* bal ${int086},${xsrc2} */
  {
    AAP_INSN_BAL16, "bal", "bal", 16,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* bra ${int089} */
  {
    AAP_INSN_BRA16, "bra", "bra", 16,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }
  },
/* add ${d6},${a6},${b6} */
  {
    AAP_INSN_ADD, "add", "add", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* sub ${d6},${a6},${b6} */
  {
    AAP_INSN_SUB, "sub", "sub", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* and ${d6},${a6},${b6} */
  {
    AAP_INSN_AND, "and", "and", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* or ${d6},${a6},${b6} */
  {
    AAP_INSN_OR, "or", "or", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* xor ${d6},${a6},${b6} */
  {
    AAP_INSN_XOR, "xor", "xor", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* asr ${d6},${a6},${b6} */
  {
    AAP_INSN_ASR, "asr", "asr", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* lsl ${d6},${a6},${b6} */
  {
    AAP_INSN_LSL, "lsl", "lsl", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* lsr ${d6},${a6},${b6} */
  {
    AAP_INSN_LSR, "lsr", "lsr", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* mov ${d6},${a6} */
  {
    AAP_INSN_MOV, "mov", "mov", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* addc ${d6},${a6},${b6} */
  {
    AAP_INSN_ADDC, "addc", "addc", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* subc ${d6},${a6},${b6} */
  {
    AAP_INSN_SUBC, "subc", "subc", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* jmp ${d6} */
  {
    AAP_INSN_JMP, "jmp", "jmp", 32,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* jal ${d6},${b6} */
  {
    AAP_INSN_JAL, "jal", "jal", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* jeq ${d6},${a6},${b6} */
  {
    AAP_INSN_JEQ, "jeq", "jeq", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* jne ${d6},${a6},${b6} */
  {
    AAP_INSN_JNE, "jne", "jne", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* jlts ${d6},${a6},${b6} */
  {
    AAP_INSN_JLTS, "jlts", "jlts", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* jles ${d6},${a6},${b6} */
  {
    AAP_INSN_JLES, "jles", "jles", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* jltu ${d6},${a6},${b6} */
  {
    AAP_INSN_JLTU, "jltu", "jltu", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* jleu ${d6},${a6},${b6} */
  {
    AAP_INSN_JLEU, "jleu", "jleu", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* jmpl ${d6} */
  {
    AAP_INSN_JMPL, "jmpl", "jmpl", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* jall ${d6},${b6} */
  {
    AAP_INSN_JALL, "jall", "jall", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* jeql ${d6},${a6},${b6} */
  {
    AAP_INSN_JEQL, "jeql", "jeql", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* jnel ${d6},${a6},${b6} */
  {
    AAP_INSN_JNEL, "jnel", "jnel", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* jltsl ${d6},${a6},${b6} */
  {
    AAP_INSN_JLTSL, "jltsl", "jltsl", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* jlesl ${d6},${a6},${b6} */
  {
    AAP_INSN_JLESL, "jlesl", "jlesl", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* jltul ${d6},${a6},${b6} */
  {
    AAP_INSN_JLTUL, "jltul", "jltul", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* jleul ${d6},${a6},${b6} */
  {
    AAP_INSN_JLEUL, "jleul", "jleul", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* asri ${d6},${a6},${i6} */
  {
    AAP_INSN_ASRI, "asri", "asri", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* lsli ${d6},${a6},${i6} */
  {
    AAP_INSN_LSLI, "lsli", "lsli", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* lsri ${d6},${a6},${i6} */
  {
    AAP_INSN_LSRI, "lsri", "lsri", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* andi ${d6},${a6},${i9} */
  {
    AAP_INSN_ANDI, "andi", "andi", 32,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* ori ${d6},${a6},${i9} */
  {
    AAP_INSN_ORI, "ori", "ori", 32,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* xori ${d6},${a6},${i9} */
  {
    AAP_INSN_XORI, "xori", "xori", 32,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* addi ${d6},${a6},${i10} */
  {
    AAP_INSN_ADDI, "addi", "addi", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* subi ${d6},${a6},${i10} */
  {
    AAP_INSN_SUBI, "subi", "subi", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* beq ${s10},${a6},${b6} */
  {
    AAP_INSN_BEQ, "beq", "beq", 32,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* bne ${s10},${a6},${b6} */
  {
    AAP_INSN_BNE, "bne", "bne", 32,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* blts ${s10},${a6},${b6} */
  {
    AAP_INSN_BLTS, "blts", "blts", 32,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* bles ${s10},${a6},${b6} */
  {
    AAP_INSN_BLES, "bles", "bles", 32,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* bltu ${s10},${a6},${b6} */
  {
    AAP_INSN_BLTU, "bltu", "bltu", 32,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* bleu ${s10},${a6},${b6} */
  {
    AAP_INSN_BLEU, "bleu", "bleu", 32,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* ldb ${d6},[${a6},${i10}] */
  {
    AAP_INSN_LDB___D6_____A6____I10__, "ldb ${d6},[${a6},${i10}]", "ldb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* ldw ${d6},[${a6},${i10}] */
  {
    AAP_INSN_LDW___D6_____A6____I10__, "ldw ${d6},[${a6},${i10}]", "ldw", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* ldb ${d6},[${a6}+,${i10}] */
  {
    AAP_INSN_LDB___D6_____A6_____I10__, "ldb ${d6},[${a6}+,${i10}]", "ldb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* ldw ${d6},[${a6}+,${i10}] */
  {
    AAP_INSN_LDW___D6_____A6_____I10__, "ldw ${d6},[${a6}+,${i10}]", "ldw", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* ldb ${d6},[-${a6},${i10}] */
  {
    AAP_INSN_LDB___D6______A6____I10__, "ldb ${d6},[-${a6},${i10}]", "ldb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* ldw ${d6},[-${a6},${i10}] */
  {
    AAP_INSN_LDW___D6______A6____I10__, "ldw ${d6},[-${a6},${i10}]", "ldw", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* stb [${d6},${i10}],${a6} */
  {
    AAP_INSN_STB____D6____I10_____A6_, "stb [${d6},${i10}],${a6}", "stb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* stw [${d6},${i10}],${a6} */
  {
    AAP_INSN_STW____D6____I10_____A6_, "stw [${d6},${i10}],${a6}", "stw", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* stb [${d6}+,${i10}],${a6} */
  {
    AAP_INSN_STB____D6_____I10_____A6_, "stb [${d6}+,${i10}],${a6}", "stb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* stw [${d6}+,${i10}],${a6} */
  {
    AAP_INSN_STW____D6_____I10_____A6_, "stw [${d6}+,${i10}],${a6}", "stw", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* stb [-${d6},${i10}],${a6} */
  {
    AAP_INSN_STB_____D6____I10_____A6_, "stb [-${d6},${i10}],${a6}", "stb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* stw [-${d6},${i10}],${a6} */
  {
    AAP_INSN_STW_____D6____I10_____A6_, "stw [-${d6},${i10}],${a6}", "stw", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* nop ${d6},${i12} */
  {
    AAP_INSN_NOP, "nop", "nop", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* movi ${d6},${i16} */
  {
    AAP_INSN_MOVI, "movi", "movi", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* bal ${s16},${b6} */
  {
    AAP_INSN_BAL, "bal", "bal", 32,
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
  },
/* bra ${s22} */
  {
    AAP_INSN_BRA, "bra", "bra", 32,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x40" } } } }
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

