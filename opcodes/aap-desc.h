/* CPU data header for aap.

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

#ifndef AAP_CPU_H
#define AAP_CPU_H

#define CGEN_ARCH aap

/* Given symbol S, return aap_cgen_<S>.  */
#define CGEN_SYM(s) aap##_cgen_##s


/* Selected cpu families.  */
#define HAVE_CPU_AAPBF
#define HAVE_CPU_AAPBF16

#define CGEN_INSN_LSB0_P 1

/* Minimum size of any insn (in bytes).  */
#define CGEN_MIN_INSN_SIZE 2

/* Maximum size of any insn (in bytes).  */
#define CGEN_MAX_INSN_SIZE 4

#define CGEN_INT_INSN_P 1

/* Maximum number of syntax elements in an instruction.  */
#define CGEN_ACTUAL_MAX_SYNTAX_ELEMENTS 18

/* CGEN_MNEMONIC_OPERANDS is defined if mnemonics have operands.
   e.g. In "b,a foo" the ",a" is an operand.  If mnemonics have operands
   we can't hash on everything up to the space.  */
#define CGEN_MNEMONIC_OPERANDS

/* Maximum number of fields in an instruction.  */
#define CGEN_ACTUAL_MAX_IFMT_OPERANDS 7

/* Enums.  */

/* Enum declaration for .  */
typedef enum gpr_names {
  H_GPR_GPR0, H_GPR_GPR1, H_GPR_GPR2, H_GPR_GPR3
 , H_GPR_GPR4, H_GPR_GPR5, H_GPR_GPR6, H_GPR_GPR7
 , H_GPR_GPR8, H_GPR_GPR9, H_GPR_GPR10, H_GPR_GPR11
 , H_GPR_GPR12, H_GPR_GPR13, H_GPR_GPR14, H_GPR_GPR15
 , H_GPR_GPR16, H_GPR_GPR17, H_GPR_GPR18, H_GPR_GPR19
 , H_GPR_GPR20, H_GPR_GPR21, H_GPR_GPR22, H_GPR_GPR23
 , H_GPR_GPR24, H_GPR_GPR25, H_GPR_GPR26, H_GPR_GPR27
 , H_GPR_GPR28, H_GPR_GPR29, H_GPR_GPR30, H_GPR_GPR31
 , H_GPR_GPR32, H_GPR_GPR33, H_GPR_GPR34, H_GPR_GPR35
 , H_GPR_GPR36, H_GPR_GPR37, H_GPR_GPR38, H_GPR_GPR39
 , H_GPR_GPR40, H_GPR_GPR41, H_GPR_GPR42, H_GPR_GPR43
 , H_GPR_GPR44, H_GPR_GPR45, H_GPR_GPR46, H_GPR_GPR47
 , H_GPR_GPR48, H_GPR_GPR49, H_GPR_GPR50, H_GPR_GPR51
 , H_GPR_GPR52, H_GPR_GPR53, H_GPR_GPR54, H_GPR_GPR55
 , H_GPR_GPR56, H_GPR_GPR57, H_GPR_GPR58, H_GPR_GPR59
 , H_GPR_GPR60, H_GPR_GPR61, H_GPR_GPR62, H_GPR_GPR63
} GPR_NAMES;

/* Enum declaration for .  */
typedef enum cr_names {
  H_CR_SPI = 2, H_CR_SPU = 3, H_CR_BPC = 14, H_CR_EVB = 5
 , H_CR_CR0 = 0, H_CR_CR1 = 1, H_CR_CR2 = 2, H_CR_CR3 = 3
 , H_CR_CR4 = 4, H_CR_CR5 = 5, H_CR_CR6 = 6, H_CR_CR7 = 7
 , H_CR_CR8 = 8, H_CR_CR9 = 9, H_CR_CR10 = 10, H_CR_CR11 = 11
 , H_CR_CR12 = 12, H_CR_CR13 = 13, H_CR_CR14 = 14, H_CR_CR15 = 15
} CR_NAMES;

/* Enum declaration for length.  */
typedef enum length1 {
  LEN1_16, LEN1_32
} LENGTH1;

/* Enum declaration for x_length.  */
typedef enum length2 {
  LEN2_0, LEN2_ERROR
} LENGTH2;

/* Enum declaration for opcodes.  */
typedef enum opcodes1 {
  OP1_NOP = 0, OP1_ADD = 1, OP1_SUB = 2, OP1_AND = 3
 , OP1_OR = 4, OP1_XOR = 5, OP1_ASR = 6, OP1_LSL = 7
 , OP1_LSR = 8, OP1_MOV = 9, OP1_ADDI = 10, OP1_SUBI = 11
 , OP1_ASRI = 12, OP1_LSLI = 13, OP1_LSRI = 14, OP1_MOVI = 15
 , OP1_LDB = 16, OP1_LDW = 20, OP1_LDBPO = 17, OP1_LDWPO = 21
 , OP1_LDBPR = 18, OP1_LDWPR = 22, OP1_SDB = 24, OP1_SDW = 28
 , OP1_SDBPO = 25, OP1_SDWPO = 29, OP1_SDBPR = 26, OP1_SDWPR = 30
 , OP1_BRA = 32, OP1_BAL = 33, OP1_BEQ = 34, OP1_BNE = 35
 , OP1_BLTS = 36, OP1_BLES = 37, OP1_BLTU = 38, OP1_BLEU = 39
 , OP1_JMP = 40, OP1_JAL = 41, OP1_JEQ = 42, OP1_JNE = 43
 , OP1_JLTS = 44, OP1_JLES = 45, OP1_JLTU = 46, OP1_JLEU = 47
} OPCODES1;

/* Enum declaration for opcodes2.  */
typedef enum opcodes2 {
  OP2_NOP = 0, OP2_ADD = 1, OP2_SUB = 2, OP2_AND = 3
 , OP2_OR = 4, OP2_XOR = 5, OP2_ASR = 6, OP2_LSL = 7
 , OP2_LSR = 8, OP2_MOV = 9, OP2_ADDI = 10, OP2_SUBI = 11
 , OP2_ASRI = 12, OP2_LSLI = 13, OP2_LSRI = 14, OP2_MOVI = 15
 , OP2_LDB = 16, OP2_LDW = 20, OP2_LDBPO = 17, OP2_LDWPO = 21
 , OP2_LDBPR = 18, OP2_LDWPR = 22, OP2_SDB = 24, OP2_SDW = 28
 , OP2_SDBPO = 25, OP2_SDWPO = 29, OP2_SDBPR = 26, OP2_SDWPR = 30
 , OP2_BRA = 32, OP2_BAL = 33, OP2_BEQ = 34, OP2_BNE = 35
 , OP2_BLTS = 36, OP2_BLES = 37, OP2_BLTU = 38, OP2_BLEU = 39
 , OP2_JMP = 40, OP2_JAL = 41, OP2_JEQ = 42, OP2_JNE = 43
 , OP2_JLTS = 44, OP2_JLES = 45, OP2_JLTU = 46, OP2_JLEU = 47
 , OP2_RD = 48
} OPCODES2;

/* Enum declaration for xclass.  */
typedef enum xclass {
  CLA_NOP, CLA_ERROR
} XCLASS;

/* Attributes.  */

/* Enum declaration for machine type selection.  */
typedef enum mach_attr {
  MACH_BASE, MACH_AAP16, MACH_AAP32, MACH_MAX
} MACH_ATTR;

/* Enum declaration for instruction set selection.  */
typedef enum isa_attr {
  ISA_AAP, ISA_MAX
} ISA_ATTR;

/* Number of architecture variants.  */
#define MAX_ISAS  1
#define MAX_MACHS ((int) MACH_MAX)

/* Ifield support.  */

/* Ifield attribute indices.  */

/* Enum declaration for cgen_ifld attrs.  */
typedef enum cgen_ifld_attr {
  CGEN_IFLD_VIRTUAL, CGEN_IFLD_PCREL_ADDR, CGEN_IFLD_ABS_ADDR, CGEN_IFLD_RESERVED
 , CGEN_IFLD_SIGN_OPT, CGEN_IFLD_SIGNED, CGEN_IFLD_END_BOOLS, CGEN_IFLD_START_NBOOLS = 31
 , CGEN_IFLD_MACH, CGEN_IFLD_END_NBOOLS
} CGEN_IFLD_ATTR;

/* Number of non-boolean elements in cgen_ifld_attr.  */
#define CGEN_IFLD_NBOOL_ATTRS (CGEN_IFLD_END_NBOOLS - CGEN_IFLD_START_NBOOLS - 1)

/* cgen_ifld attribute accessor macros.  */
#define CGEN_ATTR_CGEN_IFLD_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_IFLD_MACH-CGEN_IFLD_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_IFLD_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_IFLD_PCREL_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_PCREL_ADDR)) != 0)
#define CGEN_ATTR_CGEN_IFLD_ABS_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_ABS_ADDR)) != 0)
#define CGEN_ATTR_CGEN_IFLD_RESERVED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_RESERVED)) != 0)
#define CGEN_ATTR_CGEN_IFLD_SIGN_OPT_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_SIGN_OPT)) != 0)
#define CGEN_ATTR_CGEN_IFLD_SIGNED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_SIGNED)) != 0)

/* Enum declaration for aap ifield types.  */
typedef enum ifield_type {
  AAP_F_NIL, AAP_F_ANYOF, AAP_F_LENGTH, AAP_F_X_LENGTH
 , AAP_F_X_CLASS, AAP_F_OPCODE, AAP_F_X_OPCODE, AAP_F_DST_REG
 , AAP_F_X_DST_REG, AAP_F_SRC_REG_1, AAP_F_X_SRC_REG_1, AAP_F_SRC_REG_2
 , AAP_F_X_SRC_REG_2, AAP_F_UINT_18_3, AAP_F_UINT_21_6, AAP_F_UINT_12_4
 , AAP_F_UINT_III1, AAP_F_UINT_2_3, AAP_F_UINT_5_6, AAP_F_INT_18_3
 , AAP_F_INT_24_9, AAP_F_INT_24_6, AAP_F_INT_24_3, AAP_F_INT_12_4
 , AAP_F_INT_2_3, AAP_F_INT_8_3, AAP_F_INT_8_6, AAP_F_INT_8_9
 , AAP_F_INT_12_7, AAP_F_INT_12_10, AAP_F_INT_12_13, AAP_F_U16
 , AAP_F_CARRY, AAP_F_DST_1_REG, AAP_F_S_22, AAP_F_S_16
 , AAP_F_S_10, AAP_F_I_12, AAP_F_I_16, AAP_F_I_6
 , AAP_F_I_10, AAP_F_I_10I, AAP_F_D_6, AAP_F_A_6
 , AAP_F_B_6, AAP_F_MAX
} IFIELD_TYPE;

#define MAX_IFLD ((int) AAP_F_MAX)

/* Hardware attribute indices.  */

/* Enum declaration for cgen_hw attrs.  */
typedef enum cgen_hw_attr {
  CGEN_HW_VIRTUAL, CGEN_HW_CACHE_ADDR, CGEN_HW_PC, CGEN_HW_PROFILE
 , CGEN_HW_END_BOOLS, CGEN_HW_START_NBOOLS = 31, CGEN_HW_MACH, CGEN_HW_END_NBOOLS
} CGEN_HW_ATTR;

/* Number of non-boolean elements in cgen_hw_attr.  */
#define CGEN_HW_NBOOL_ATTRS (CGEN_HW_END_NBOOLS - CGEN_HW_START_NBOOLS - 1)

/* cgen_hw attribute accessor macros.  */
#define CGEN_ATTR_CGEN_HW_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_HW_MACH-CGEN_HW_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_HW_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_HW_CACHE_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_CACHE_ADDR)) != 0)
#define CGEN_ATTR_CGEN_HW_PC_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_PC)) != 0)
#define CGEN_ATTR_CGEN_HW_PROFILE_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_PROFILE)) != 0)

/* Enum declaration for aap hardware types.  */
typedef enum cgen_hw_type {
  HW_H_MEMORY, HW_H_SINT, HW_H_UINT, HW_H_ADDR
 , HW_H_IADDR, HW_H_GPR, HW_H_CR, HW_H_CF
 , HW_H_PC, HW_MAX
} CGEN_HW_TYPE;

#define MAX_HW ((int) HW_MAX)

/* Operand attribute indices.  */

/* Enum declaration for cgen_operand attrs.  */
typedef enum cgen_operand_attr {
  CGEN_OPERAND_VIRTUAL, CGEN_OPERAND_PCREL_ADDR, CGEN_OPERAND_ABS_ADDR, CGEN_OPERAND_SIGN_OPT
 , CGEN_OPERAND_SIGNED, CGEN_OPERAND_NEGATIVE, CGEN_OPERAND_RELAX, CGEN_OPERAND_SEM_ONLY
 , CGEN_OPERAND_END_BOOLS, CGEN_OPERAND_START_NBOOLS = 31, CGEN_OPERAND_MACH, CGEN_OPERAND_END_NBOOLS
} CGEN_OPERAND_ATTR;

/* Number of non-boolean elements in cgen_operand_attr.  */
#define CGEN_OPERAND_NBOOL_ATTRS (CGEN_OPERAND_END_NBOOLS - CGEN_OPERAND_START_NBOOLS - 1)

/* cgen_operand attribute accessor macros.  */
#define CGEN_ATTR_CGEN_OPERAND_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_OPERAND_MACH-CGEN_OPERAND_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_OPERAND_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_PCREL_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_PCREL_ADDR)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_ABS_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_ABS_ADDR)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SIGN_OPT_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SIGN_OPT)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SIGNED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SIGNED)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_NEGATIVE_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_NEGATIVE)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_RELAX_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_RELAX)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SEM_ONLY_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SEM_ONLY)) != 0)

/* Enum declaration for aap operand types.  */
typedef enum cgen_operand_type {
  AAP_OPERAND_PC, AAP_OPERAND_CARRY, AAP_OPERAND_XDEST, AAP_OPERAND_XSRC1
 , AAP_OPERAND_XSRC2, AAP_OPERAND_D6, AAP_OPERAND_A6, AAP_OPERAND_B6
 , AAP_OPERAND_DEST1, AAP_OPERAND_UINT056, AAP_OPERAND_UINT023, AAP_OPERAND_ULO16
 , AAP_OPERAND_I12, AAP_OPERAND_I16, AAP_OPERAND_I6, AAP_OPERAND_I10
 , AAP_OPERAND_I10I, AAP_OPERAND_INT1210, AAP_OPERAND_INT083, AAP_OPERAND_INT086
 , AAP_OPERAND_INT089, AAP_OPERAND_INT023, AAP_OPERAND_S22, AAP_OPERAND_S16
 , AAP_OPERAND_S10, AAP_OPERAND_MAX
} CGEN_OPERAND_TYPE;

/* Number of operands types.  */
#define MAX_OPERANDS 25

/* Maximum number of operands referenced by any insn.  */
#define MAX_OPERAND_INSTANCES 8

/* Insn attribute indices.  */

/* Enum declaration for cgen_insn attrs.  */
typedef enum cgen_insn_attr {
  CGEN_INSN_ALIAS, CGEN_INSN_VIRTUAL, CGEN_INSN_UNCOND_CTI, CGEN_INSN_COND_CTI
 , CGEN_INSN_SKIP_CTI, CGEN_INSN_DELAY_SLOT, CGEN_INSN_RELAXABLE, CGEN_INSN_RELAXED
 , CGEN_INSN_NO_DIS, CGEN_INSN_PBB, CGEN_INSN_END_BOOLS, CGEN_INSN_START_NBOOLS = 31
 , CGEN_INSN_MACH, CGEN_INSN_END_NBOOLS
} CGEN_INSN_ATTR;

/* Number of non-boolean elements in cgen_insn_attr.  */
#define CGEN_INSN_NBOOL_ATTRS (CGEN_INSN_END_NBOOLS - CGEN_INSN_START_NBOOLS - 1)

/* cgen_insn attribute accessor macros.  */
#define CGEN_ATTR_CGEN_INSN_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_INSN_MACH-CGEN_INSN_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_INSN_ALIAS_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_ALIAS)) != 0)
#define CGEN_ATTR_CGEN_INSN_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_INSN_UNCOND_CTI_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_UNCOND_CTI)) != 0)
#define CGEN_ATTR_CGEN_INSN_COND_CTI_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_COND_CTI)) != 0)
#define CGEN_ATTR_CGEN_INSN_SKIP_CTI_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_SKIP_CTI)) != 0)
#define CGEN_ATTR_CGEN_INSN_DELAY_SLOT_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_DELAY_SLOT)) != 0)
#define CGEN_ATTR_CGEN_INSN_RELAXABLE_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_RELAXABLE)) != 0)
#define CGEN_ATTR_CGEN_INSN_RELAXED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_RELAXED)) != 0)
#define CGEN_ATTR_CGEN_INSN_NO_DIS_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_NO_DIS)) != 0)
#define CGEN_ATTR_CGEN_INSN_PBB_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_PBB)) != 0)

/* cgen.h uses things we just defined.  */
#include "opcode/cgen.h"

extern const struct cgen_ifld aap_cgen_ifld_table[];

/* Attributes.  */
extern const CGEN_ATTR_TABLE aap_cgen_hardware_attr_table[];
extern const CGEN_ATTR_TABLE aap_cgen_ifield_attr_table[];
extern const CGEN_ATTR_TABLE aap_cgen_operand_attr_table[];
extern const CGEN_ATTR_TABLE aap_cgen_insn_attr_table[];

/* Hardware decls.  */

extern CGEN_KEYWORD aap_cgen_opval_gpr_names;
extern CGEN_KEYWORD aap_cgen_opval_cr_names;

extern const CGEN_HW_ENTRY aap_cgen_hw_table[];



#endif /* AAP_CPU_H */
