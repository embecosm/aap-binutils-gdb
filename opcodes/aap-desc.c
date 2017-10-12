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
  { "aap", 32, 32, 16, 32 },
  { 0, 0, 0, 0, 0 }
};

/* Machine variants.  */

static const CGEN_MACH aap_cgen_mach_table[] = {
  { "aap", "aap", MACH_AAP, 0 },
  { 0, 0, 0, 0 }
};

static CGEN_KEYWORD_ENTRY aap_cgen_opval_gpr_names_entries[] =
{
  { "gp", 26, {0, {{{0, 0}}}}, 0, 0 },
  { "fp", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "sp", 28, {0, {{{0, 0}}}}, 0, 0 },
  { "ra", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "ea", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "ba", 31, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr0", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr1", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr2", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr3", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr4", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr5", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr6", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr7", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr8", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr9", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr10", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr11", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr12", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr13", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr14", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr15", 15, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr16", 16, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr17", 17, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr18", 18, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr19", 19, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr20", 20, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr21", 21, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr22", 22, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr23", 23, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr24", 24, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr25", 25, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr26", 26, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr27", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr28", 28, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr29", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr30", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr31", 31, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr32", 32, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr33", 33, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr34", 34, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr35", 35, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr36", 36, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr37", 37, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr38", 38, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr39", 39, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr40", 40, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr41", 41, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr42", 42, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr43", 43, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr44", 44, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr45", 45, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr46", 46, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr47", 47, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr48", 48, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr49", 49, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr50", 50, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr51", 51, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr52", 52, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr53", 53, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr54", 54, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr55", 55, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr56", 56, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr57", 57, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr58", 58, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr59", 59, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr60", 60, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr61", 61, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr62", 62, {0, {{{0, 0}}}}, 0, 0 },
  { "gpr63", 63, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD aap_cgen_opval_gpr_names =
{
  & aap_cgen_opval_gpr_names_entries[0],
  70,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY aap_cgen_opval_h_csr_entries[] =
{
  { "IE", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "IM", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "IP", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "ICC", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "DCC", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "CC", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "CFG", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "EBA", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "DC", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "DEBA", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "CFG2", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "JTX", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "JRX", 15, {0, {{{0, 0}}}}, 0, 0 },
  { "BP0", 16, {0, {{{0, 0}}}}, 0, 0 },
  { "BP1", 17, {0, {{{0, 0}}}}, 0, 0 },
  { "BP2", 18, {0, {{{0, 0}}}}, 0, 0 },
  { "BP3", 19, {0, {{{0, 0}}}}, 0, 0 },
  { "WP0", 24, {0, {{{0, 0}}}}, 0, 0 },
  { "WP1", 25, {0, {{{0, 0}}}}, 0, 0 },
  { "WP2", 26, {0, {{{0, 0}}}}, 0, 0 },
  { "WP3", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "PSW", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "TLBVADDR", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "TLBPADDR", 31, {0, {{{0, 0}}}}, 0, 0 },
  { "TLBBADVADDR", 31, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD aap_cgen_opval_h_csr =
{
  & aap_cgen_opval_h_csr_entries[0],
  25,
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
  { "h-gpr", HW_H_GPR, CGEN_ASM_KEYWORD, (PTR) & aap_cgen_opval_gpr_names, { 0|A(CACHE_ADDR), { { { (1<<MACH_BASE), 0 } } } } },
  { "h-csr", HW_H_CSR, CGEN_ASM_KEYWORD, (PTR) & aap_cgen_opval_h_csr, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-cf", HW_H_CF, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
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
  { AAP_F_INT_12_7, "f-int-12-7", 0, 32, 12, 7, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_INT_12_10, "f-int-12-10", 0, 32, 12, 10, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_INT_12_13, "f-int-12-13", 0, 32, 12, 13, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_U16, "f-u16", 0, 32, 15, 16, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_CARRY, "f-carry", 0, 32, 0, 1, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_DST_1_REG, "f-dst+1-reg", 0, 32, 24, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_S_22, "f-s-22", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_S_16, "f-s-16", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_S_10, "f-s-10", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_I_12, "f-i-12", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_I_16, "f-i-16", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_I_6, "f-i-6", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_I_10, "f-i-10", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_I_10I, "f-i-10i", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_D_6, "f-d-6", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_A_6, "f-a-6", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { AAP_F_B_6, "f-b-6", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { 0, 0, 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } }
};

#undef A



/* multi ifield declarations */

const CGEN_MAYBE_MULTI_IFLD AAP_F_S_22_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_S_16_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_S_10_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_I_12_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_I_16_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_I_6_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_I_10_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_I_10I_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_D_6_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_A_6_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD AAP_F_B_6_MULTI_IFIELD [];


/* multi ifield definitions */

const CGEN_MAYBE_MULTI_IFLD AAP_F_S_22_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_24_9] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_12_13] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_S_16_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_24_6] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_12_10] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_S_10_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_24_3] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_12_7] } },
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
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_12_4] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_I_6_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_2_3] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_18_3] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_I_10_MULTI_IFIELD [] =
{
    { 2, { (const PTR) &AAP_F_I_6_MULTI_IFIELD[0] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_12_4] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_I_10I_MULTI_IFIELD [] =
{
    { 2, { (const PTR) &AAP_F_I_6_MULTI_IFIELD[0] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_III1] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_D_6_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_DST_REG] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_X_DST_REG] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_A_6_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_SRC_REG_1] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_X_SRC_REG_1] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD AAP_F_B_6_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_SRC_REG_2] } },
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_X_SRC_REG_2] } },
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
/* carry: carry flag operand */
  { "carry", AAP_OPERAND_CARRY, HW_H_CF, 0, 1,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_CARRY] } }, 
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
/* d6: dest 6bit */
  { "d6", AAP_OPERAND_D6, HW_H_GPR, 8, 6,
    { 2, { (const PTR) &AAP_F_D_6_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* a6: src1 6bit */
  { "a6", AAP_OPERAND_A6, HW_H_GPR, 5, 6,
    { 2, { (const PTR) &AAP_F_A_6_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* b6: src2 6bit */
  { "b6", AAP_OPERAND_B6, HW_H_GPR, 2, 6,
    { 2, { (const PTR) &AAP_F_B_6_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* dest1: dest+1 */
  { "dest1", AAP_OPERAND_DEST1, HW_H_GPR, 24, 6,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_DST_1_REG] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* uint056: uint 5 6 */
  { "uint056", AAP_OPERAND_UINT056, HW_H_UINT, 5, 6,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_5_6] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* uint023: uint 2 3 */
  { "uint023", AAP_OPERAND_UINT023, HW_H_UINT, 2, 3,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_UINT_2_3] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* ulo16: 16 bit unsigned immediate, for #lo() */
  { "ulo16", AAP_OPERAND_ULO16, HW_H_UINT, 15, 16,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_U16] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* i12: uint 12bit */
  { "i12", AAP_OPERAND_I12, HW_H_UINT, 5, 12,
    { 2, { (const PTR) &AAP_F_I_12_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* i16: uint 16bit */
  { "i16", AAP_OPERAND_I16, HW_H_UINT, 5, 16,
    { 2, { (const PTR) &AAP_F_I_16_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* i6: uint 6bit */
  { "i6", AAP_OPERAND_I6, HW_H_UINT, 2, 6,
    { 2, { (const PTR) &AAP_F_I_6_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* i10: uint 10bit */
  { "i10", AAP_OPERAND_I10, HW_H_UINT, 2, 10,
    { 2, { (const PTR) &AAP_F_I_10_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* i10i: uint 10bit with iii1 */
  { "i10i", AAP_OPERAND_I10I, HW_H_UINT, 2, 10,
    { 2, { (const PTR) &AAP_F_I_10I_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* int1210: int 12 10 */
  { "int1210", AAP_OPERAND_INT1210, HW_H_SINT, 12, 10,
    { 0, { (const PTR) &aap_cgen_ifld_table[AAP_F_INT_12_10] } }, 
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
/* s22: s 22 */
  { "s22", AAP_OPERAND_S22, HW_H_SINT, 12, 22,
    { 2, { (const PTR) &AAP_F_S_22_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* s16: s 16 */
  { "s16", AAP_OPERAND_S16, HW_H_SINT, 12, 16,
    { 2, { (const PTR) &AAP_F_S_16_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* s10: s 10 */
  { "s10", AAP_OPERAND_S10, HW_H_SINT, 12, 10,
    { 2, { (const PTR) &AAP_F_S_10_MULTI_IFIELD[0] } }, 
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
/* l.add ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_ADD, "l.add", "l.add", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sub ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_SUB, "l.sub", "l.sub", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.and ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_AND, "l.and", "l.and", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.or ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_OR, "l.or", "l.or", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.xor ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_XOR, "l.xor", "l.xor", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.asr ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_ASR, "l.asr", "l.asr", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.lsl ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_LSL, "l.lsl", "l.lsl", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.lsr ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_LSR, "l.lsr", "l.lsr", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.mov ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_MOV, "l.mov", "l.mov", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jmp ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JMP, "l.jmp", "l.jmp", 16,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jal ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JAL, "l.jal", "l.jal", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jeq ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JEQ, "l.jeq", "l.jeq", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jne ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JNE, "l.jne", "l.jne", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jlts ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JLTS, "l.jlts", "l.jlts", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jles ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JLES, "l.jles", "l.jles", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jltu ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JLTU, "l.jltu", "l.jltu", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jleu ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_JLEU, "l.jleu", "l.jleu", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.rte ${xdest},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_RTE, "l.rte", "l.rte", 16,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.addi ${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_ADDI, "l.addi", "l.addi", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.subi ${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_SUBI, "l.subi", "l.subi", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.asri ${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_ASRI, "l.asri", "l.asri", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.lsli ${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_LSLI, "l.lsli", "l.lsli", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.lsri ${xdest},${xsrc1},${uint023} */
  {
    AAP_INSN_L_LSRI, "l.lsri", "l.lsri", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.beq ${int083},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_BEQ, "l.beq", "l.beq", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bne ${int083},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_BNE, "l.bne", "l.bne", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.blts ${int083},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_BLTS, "l.blts", "l.blts", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bles ${int083},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_BLES, "l.bles", "l.bles", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bltu ${int083},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_BLTU, "l.bltu", "l.bltu", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bleu ${int083},${xsrc1},${xsrc2} */
  {
    AAP_INSN_L_BLEU, "l.bleu", "l.bleu", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldb ${xdest},(${xsrc1},${int023}) */
  {
    AAP_INSN_L_LDB___XDEST_____XSRC1____INT023__, "l.ldb ${xdest},(${xsrc1},${int023})", "l.ldb", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldw ${xdest},(${xsrc1},${int023}) */
  {
    AAP_INSN_L_LDW___XDEST_____XSRC1____INT023__, "l.ldw ${xdest},(${xsrc1},${int023})", "l.ldw", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldb ${xdest},(${xsrc1}+,${int023}) */
  {
    AAP_INSN_L_LDB___XDEST_____XSRC1_____INT023__, "l.ldb ${xdest},(${xsrc1}+,${int023})", "l.ldb", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldw ${xdest},(${xsrc1}+,${int023}) */
  {
    AAP_INSN_L_LDW___XDEST_____XSRC1_____INT023__, "l.ldw ${xdest},(${xsrc1}+,${int023})", "l.ldw", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldb ${xdest},(-${xsrc1},${int023}) */
  {
    AAP_INSN_L_LDB___XDEST______XSRC1____INT023__, "l.ldb ${xdest},(-${xsrc1},${int023})", "l.ldb", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldw ${xdest},(-${xsrc1},${int023}) */
  {
    AAP_INSN_L_LDW___XDEST______XSRC1____INT023__, "l.ldw ${xdest},(-${xsrc1},${int023})", "l.ldw", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdb (${xdest},${int023}),${xsrc1} */
  {
    AAP_INSN_L_SDB____XDEST____INT023_____XSRC1_, "l.sdb (${xdest},${int023}),${xsrc1}", "l.sdb", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdw (${xdest},${int023}),${xsrc1} */
  {
    AAP_INSN_L_SDW____XDEST____INT023_____XSRC1_, "l.sdw (${xdest},${int023}),${xsrc1}", "l.sdw", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdb (${xdest}+,${int023}),${xsrc1} */
  {
    AAP_INSN_L_SDB____XDEST_____INT023_____XSRC1_, "l.sdb (${xdest}+,${int023}),${xsrc1}", "l.sdb", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdw (${xdest}+,${int023}),${xsrc1} */
  {
    AAP_INSN_L_SDW____XDEST_____INT023_____XSRC1_, "l.sdw (${xdest}+,${int023}),${xsrc1}", "l.sdw", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdb (-${xdest},${int023}),${xsrc1} */
  {
    AAP_INSN_L_SDB_____XDEST____INT023_____XSRC1_, "l.sdb (-${xdest},${int023}),${xsrc1}", "l.sdb", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdw (-${xdest},${int023}),${xsrc1} */
  {
    AAP_INSN_L_SDW_____XDEST____INT023_____XSRC1_, "l.sdw (-${xdest},${int023}),${xsrc1}", "l.sdw", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.nop ${xdest},${uint056} */
  {
    AAP_INSN_L_NOP, "l.nop", "l.nop", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.movi ${xdest},${uint056} */
  {
    AAP_INSN_L_MOVI, "l.movi", "l.movi", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bal ${int086},${xsrc2} */
  {
    AAP_INSN_L_BAL, "l.bal", "l.bal", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bra ${int089} */
  {
    AAP_INSN_L_BRA, "l.bra", "l.bra", 16,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.add32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_ADD32, "l.add32", "l.add32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sub32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_SUB32, "l.sub32", "l.sub32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.and32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_AND32, "l.and32", "l.and32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.or32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_OR32, "l.or32", "l.or32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.xor32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_XOR32, "l.xor32", "l.xor32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.asr32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_ASR32, "l.asr32", "l.asr32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.lsl32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_LSL32, "l.lsl32", "l.lsl32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.lsr32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_LSR32, "l.lsr32", "l.lsr32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.mov32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_MOV32, "l.mov32", "l.mov32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.addc32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_ADDC32, "l.addc32", "l.addc32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.subc32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_SUBC32, "l.subc32", "l.subc32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jmp32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_JMP32, "l.jmp32", "l.jmp32", 32,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jal32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_JAL32, "l.jal32", "l.jal32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jeq32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_JEQ32, "l.jeq32", "l.jeq32", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jne32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_JNE32, "l.jne32", "l.jne32", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jlts32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_JLTS32, "l.jlts32", "l.jlts32", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jles32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_JLES32, "l.jles32", "l.jles32", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jltu32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_JLTU32, "l.jltu32", "l.jltu32", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jleu32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_JLEU32, "l.jleu32", "l.jleu32", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jmpl32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_JMPL32, "l.jmpl32", "l.jmpl32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jall32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_JALL32, "l.jall32", "l.jall32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jeql32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_JEQL32, "l.jeql32", "l.jeql32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jnel32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_JNEL32, "l.jnel32", "l.jnel32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jltsl32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_JLTSL32, "l.jltsl32", "l.jltsl32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jlesl32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_JLESL32, "l.jlesl32", "l.jlesl32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jltul32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_JLTUL32, "l.jltul32", "l.jltul32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.jleul32 ${d6},${a6},${b6} */
  {
    AAP_INSN_L_JLEUL32, "l.jleul32", "l.jleul32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.asri32 ${d6},${a6},${i6} */
  {
    AAP_INSN_L_ASRI32, "l.asri32", "l.asri32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.lsli32 ${d6},${a6},${i6} */
  {
    AAP_INSN_L_LSLI32, "l.lsli32", "l.lsli32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.lsri32 ${d6},${a6},${i6} */
  {
    AAP_INSN_L_LSRI32, "l.lsri32", "l.lsri32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.andi32 ${d6},${a6},${i10i} */
  {
    AAP_INSN_L_ANDI32, "l.andi32", "l.andi32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ori32 ${d6},${a6},${i10i} */
  {
    AAP_INSN_L_ORI32, "l.ori32", "l.ori32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.xori32 ${d6},${a6},${i10i} */
  {
    AAP_INSN_L_XORI32, "l.xori32", "l.xori32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.addi32 ${d6},${a6},${i10} */
  {
    AAP_INSN_L_ADDI32, "l.addi32", "l.addi32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.subi32 ${d6},${a6},${i10} */
  {
    AAP_INSN_L_SUBI32, "l.subi32", "l.subi32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.beq32 ${s10},${a6},${b6} */
  {
    AAP_INSN_L_BEQ32, "l.beq32", "l.beq32", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bne32 ${s10},${a6},${b6} */
  {
    AAP_INSN_L_BNE32, "l.bne32", "l.bne32", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.blts32 ${s10},${a6},${b6} */
  {
    AAP_INSN_L_BLTS32, "l.blts32", "l.blts32", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bles32 ${s10},${a6},${b6} */
  {
    AAP_INSN_L_BLES32, "l.bles32", "l.bles32", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bltu32 ${s10},${a6},${b6} */
  {
    AAP_INSN_L_BLTU32, "l.bltu32", "l.bltu32", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bleu32 ${s10},${a6},${b6} */
  {
    AAP_INSN_L_BLEU32, "l.bleu32", "l.bleu32", 32,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldb32 ${d6},(${a6},${i10}) */
  {
    AAP_INSN_L_LDB32___D6_____A6____I10__, "l.ldb32 ${d6},(${a6},${i10})", "l.ldb32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldw32 ${d6},(${a6},${i10}) */
  {
    AAP_INSN_L_LDW32___D6_____A6____I10__, "l.ldw32 ${d6},(${a6},${i10})", "l.ldw32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldb32 ${d6},(${a6}+,${i10}) */
  {
    AAP_INSN_L_LDB32___D6_____A6_____I10__, "l.ldb32 ${d6},(${a6}+,${i10})", "l.ldb32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldw32 ${d6},(${a6}+,${i10}) */
  {
    AAP_INSN_L_LDW32___D6_____A6_____I10__, "l.ldw32 ${d6},(${a6}+,${i10})", "l.ldw32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldb32 ${d6},(-${a6},${i10}) */
  {
    AAP_INSN_L_LDB32___D6______A6____I10__, "l.ldb32 ${d6},(-${a6},${i10})", "l.ldb32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.ldw32 ${d6},(-${a6},${i10}) */
  {
    AAP_INSN_L_LDW32___D6______A6____I10__, "l.ldw32 ${d6},(-${a6},${i10})", "l.ldw32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdb32 (${d6},${i10}),${a6} */
  {
    AAP_INSN_L_SDB32____D6____I10_____A6_, "l.sdb32 (${d6},${i10}),${a6}", "l.sdb32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdw32 (${d6},${i10}),${a6} */
  {
    AAP_INSN_L_SDW32____D6____I10_____A6_, "l.sdw32 (${d6},${i10}),${a6}", "l.sdw32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdb32 (${d6}+,${i10}),${a6} */
  {
    AAP_INSN_L_SDB32____D6_____I10_____A6_, "l.sdb32 (${d6}+,${i10}),${a6}", "l.sdb32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdw32 (${d6}+,${i10}),${a6} */
  {
    AAP_INSN_L_SDW32____D6_____I10_____A6_, "l.sdw32 (${d6}+,${i10}),${a6}", "l.sdw32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdb32 (-${d6},${i10}),${a6} */
  {
    AAP_INSN_L_SDB32_____D6____I10_____A6_, "l.sdb32 (-${d6},${i10}),${a6}", "l.sdb32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.sdw32 (-${d6},${i10}),${a6} */
  {
    AAP_INSN_L_SDW32_____D6____I10_____A6_, "l.sdw32 (-${d6},${i10}),${a6}", "l.sdw32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.nop32 ${d6},${i12} */
  {
    AAP_INSN_L_NOP32, "l.nop32", "l.nop32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.movi32 ${d6},${i16} */
  {
    AAP_INSN_L_MOVI32, "l.movi32", "l.movi32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bal32 ${s16},${b6} */
  {
    AAP_INSN_L_BAL32, "l.bal32", "l.bal32", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* l.bra32 ${s22} */
  {
    AAP_INSN_L_BRA32, "l.bra32", "l.bra32", 32,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } } } }
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

