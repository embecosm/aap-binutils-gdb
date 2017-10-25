/* CPU family header for aapbf16.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright 1996-2010 Free Software Foundation, Inc.

This file is part of the GNU simulators.

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

#ifndef CPU_AAPBF16_H
#define CPU_AAPBF16_H

/* Maximum number of instructions that are fetched at a time.
   This is for LIW type instructions sets (e.g. m32r).  */
#define MAX_LIW_INSNS 1

/* Maximum number of instructions that can be executed in parallel.  */
#define MAX_PARALLEL_INSNS 1

/* The size of an "int" needed to hold an instruction word.
   This is usually 32 bits, but some architectures needs 64 bits.  */
typedef CGEN_INSN_INT CGEN_INSN_WORD;

#include "cgen-engine.h"

/* CPU state information.  */
typedef struct {
  /* Hardware elements.  */
  struct {
  /* General Purpose Registers */
  USI h_gpr[64];
#define GET_H_GPR(a1) CPU (h_gpr)[a1]
#define SET_H_GPR(a1, x) (CPU (h_gpr)[a1] = (x))
  /* control registers */
  USI h_cr[16];
#define GET_H_CR(index) aapbf16_h_cr_get_handler (current_cpu, index)
#define SET_H_CR(index, x) \
do { \
aapbf16_h_cr_set_handler (current_cpu, (index), (x));\
;} while (0)
  /* carry flag */
  BI h_cf;
#define GET_H_CF() CPU (h_cf)
#define SET_H_CF(x) (CPU (h_cf) = (x))
  /* program couner */
  USI h_pc;
#define GET_H_PC() CPU (h_pc)
#define SET_H_PC(x) (CPU (h_pc) = (x))
  } hardware;
#define CPU_CGEN_HW(cpu) (& (cpu)->cpu_data.hardware)
} AAPBF16_CPU_DATA;

/* Cover fns for register access.  */
USI aapbf16_h_gpr_get (SIM_CPU *, UINT);
void aapbf16_h_gpr_set (SIM_CPU *, UINT, USI);
USI aapbf16_h_cr_get (SIM_CPU *, UINT);
void aapbf16_h_cr_set (SIM_CPU *, UINT, USI);
BI aapbf16_h_cf_get (SIM_CPU *);
void aapbf16_h_cf_set (SIM_CPU *, BI);
USI aapbf16_h_pc_get (SIM_CPU *);
void aapbf16_h_pc_set (SIM_CPU *, USI);

/* These must be hand-written.  */
extern CPUREG_FETCH_FN aapbf16_fetch_register;
extern CPUREG_STORE_FN aapbf16_store_register;

typedef struct {
  int empty;
} MODEL_AAP16_DATA;

/* Instruction argument buffer.  */

union sem_fields {
  struct { /* no operands */
    int empty;
  } sfmt_empty;
  struct { /*  */
    INT f_int_8_9;
  } sfmt_l_bra;
  struct { /*  */
    USI* i_xdest;
    UINT f_uint_5_6;
    UINT f_x_dst_reg;
  } sfmt_l_movi;
  struct { /*  */
    USI* i_d6;
    INT f_int_2_3;
    UINT f_d_6;
  } sfmt_l_sdb_____xdest____int023_____xsrc1_;
  struct { /*  */
    USI* i_xdest;
    USI* i_xsrc1;
    INT f_int_2_3;
    UINT f_x_dst_reg;
    UINT f_x_src_reg_1;
  } sfmt_l_ldb___xdest_____xsrc1____int023__;
  struct { /*  */
    USI* i_xsrc1;
    USI* i_xsrc2;
    INT f_int_8_3;
    UINT f_x_src_reg_1;
    UINT f_x_src_reg_2;
  } sfmt_l_beq;
  struct { /*  */
    USI* i_xdest;
    USI* i_xsrc1;
    UINT f_carry;
    UINT f_uint_2_3;
    UINT f_x_dst_reg;
    UINT f_x_src_reg_1;
  } sfmt_l_asri;
  struct { /*  */
    USI* i_xdest;
    USI* i_xsrc1;
    USI* i_xsrc2;
    UINT f_carry;
    UINT f_x_dst_reg;
    UINT f_x_src_reg_1;
    UINT f_x_src_reg_2;
  } sfmt_l_asr;
#if WITH_SCACHE_PBB
  /* Writeback handler.  */
  struct {
    /* Pointer to argbuf entry for insn whose results need writing back.  */
    const struct argbuf *abuf;
  } write;
  /* x-before handler */
  struct {
    /*const SCACHE *insns[MAX_PARALLEL_INSNS];*/
    int first_p;
  } before;
  /* x-after handler */
  struct {
    int empty;
  } after;
  /* This entry is used to terminate each pbb.  */
  struct {
    /* Number of insns in pbb.  */
    int insn_count;
    /* Next pbb to execute.  */
    SCACHE *next;
    SCACHE *branch_target;
  } chain;
#endif
};

/* The ARGBUF struct.  */
struct argbuf {
  /* These are the baseclass definitions.  */
  IADDR addr;
  const IDESC *idesc;
  char trace_p;
  char profile_p;
  /* ??? Temporary hack for skip insns.  */
  char skip_count;
  char unused;
  /* cpu specific data follows */
  union sem semantic;
  int written;
  union sem_fields fields;
};

/* A cached insn.

   ??? SCACHE used to contain more than just argbuf.  We could delete the
   type entirely and always just use ARGBUF, but for future concerns and as
   a level of abstraction it is left in.  */

struct scache {
  struct argbuf argbuf;
};

/* Macros to simplify extraction, reading and semantic code.
   These define and assign the local vars that contain the insn's fields.  */

#define EXTRACT_IFMT_EMPTY_VARS \
  unsigned int length;
#define EXTRACT_IFMT_EMPTY_CODE \
  length = 0; \

#define EXTRACT_IFMT_L_ADD_VARS \
  UINT f_x_length; \
  UINT f_x_opcode; \
  UINT f_x_dst_reg; \
  UINT f_x_src_reg_1; \
  UINT f_x_src_reg_2; \
  unsigned int length;
#define EXTRACT_IFMT_L_ADD_CODE \
  length = 2; \
  f_x_length = EXTRACT_LSB0_UINT (insn, 16, 15, 1); \
  f_x_opcode = EXTRACT_LSB0_UINT (insn, 16, 14, 6); \
  f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 16, 8, 3); \
  f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 16, 5, 3); \
  f_x_src_reg_2 = EXTRACT_LSB0_UINT (insn, 16, 2, 3); \

#define EXTRACT_IFMT_L_ADDI_VARS \
  UINT f_x_length; \
  UINT f_x_opcode; \
  UINT f_x_dst_reg; \
  UINT f_x_src_reg_1; \
  UINT f_uint_2_3; \
  unsigned int length;
#define EXTRACT_IFMT_L_ADDI_CODE \
  length = 2; \
  f_x_length = EXTRACT_LSB0_UINT (insn, 16, 15, 1); \
  f_x_opcode = EXTRACT_LSB0_UINT (insn, 16, 14, 6); \
  f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 16, 8, 3); \
  f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 16, 5, 3); \
  f_uint_2_3 = EXTRACT_LSB0_UINT (insn, 16, 2, 3); \

#define EXTRACT_IFMT_L_BEQ_VARS \
  UINT f_x_length; \
  UINT f_x_opcode; \
  INT f_int_8_3; \
  UINT f_x_src_reg_1; \
  UINT f_x_src_reg_2; \
  unsigned int length;
#define EXTRACT_IFMT_L_BEQ_CODE \
  length = 2; \
  f_x_length = EXTRACT_LSB0_UINT (insn, 16, 15, 1); \
  f_x_opcode = EXTRACT_LSB0_UINT (insn, 16, 14, 6); \
  f_int_8_3 = EXTRACT_LSB0_SINT (insn, 16, 8, 3); \
  f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 16, 5, 3); \
  f_x_src_reg_2 = EXTRACT_LSB0_UINT (insn, 16, 2, 3); \

#define EXTRACT_IFMT_L_LDB___XDEST_____XSRC1____INT023___VARS \
  UINT f_x_length; \
  UINT f_x_opcode; \
  UINT f_x_dst_reg; \
  UINT f_x_src_reg_1; \
  INT f_int_2_3; \
  unsigned int length;
#define EXTRACT_IFMT_L_LDB___XDEST_____XSRC1____INT023___CODE \
  length = 2; \
  f_x_length = EXTRACT_LSB0_UINT (insn, 16, 15, 1); \
  f_x_opcode = EXTRACT_LSB0_UINT (insn, 16, 14, 6); \
  f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 16, 8, 3); \
  f_x_src_reg_1 = EXTRACT_LSB0_UINT (insn, 16, 5, 3); \
  f_int_2_3 = EXTRACT_LSB0_SINT (insn, 16, 2, 3); \

#define EXTRACT_IFMT_L_NOP_VARS \
  UINT f_x_length; \
  UINT f_x_opcode; \
  UINT f_x_dst_reg; \
  UINT f_uint_5_6; \
  unsigned int length;
#define EXTRACT_IFMT_L_NOP_CODE \
  length = 2; \
  f_x_length = EXTRACT_LSB0_UINT (insn, 16, 15, 1); \
  f_x_opcode = EXTRACT_LSB0_UINT (insn, 16, 14, 6); \
  f_x_dst_reg = EXTRACT_LSB0_UINT (insn, 16, 8, 3); \
  f_uint_5_6 = EXTRACT_LSB0_UINT (insn, 16, 5, 6); \

#define EXTRACT_IFMT_L_BAL_VARS \
  UINT f_x_length; \
  UINT f_x_opcode; \
  INT f_int_8_6; \
  UINT f_x_src_reg_2; \
  unsigned int length;
#define EXTRACT_IFMT_L_BAL_CODE \
  length = 2; \
  f_x_length = EXTRACT_LSB0_UINT (insn, 16, 15, 1); \
  f_x_opcode = EXTRACT_LSB0_UINT (insn, 16, 14, 6); \
  f_int_8_6 = EXTRACT_LSB0_SINT (insn, 16, 8, 6); \
  f_x_src_reg_2 = EXTRACT_LSB0_UINT (insn, 16, 2, 3); \

#define EXTRACT_IFMT_L_BRA_VARS \
  UINT f_x_length; \
  UINT f_x_opcode; \
  INT f_int_8_9; \
  unsigned int length;
#define EXTRACT_IFMT_L_BRA_CODE \
  length = 2; \
  f_x_length = EXTRACT_LSB0_UINT (insn, 16, 15, 1); \
  f_x_opcode = EXTRACT_LSB0_UINT (insn, 16, 14, 6); \
  f_int_8_9 = EXTRACT_LSB0_SINT (insn, 16, 8, 9); \

/* Collection of various things for the trace handler to use.  */

typedef struct trace_record {
  IADDR pc;
  /* FIXME:wip */
} TRACE_RECORD;

#endif /* CPU_AAPBF16_H */
