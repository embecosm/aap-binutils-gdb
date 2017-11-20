/* CPU family header for aapbf.

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

#ifndef CPU_AAPBF_H
#define CPU_AAPBF_H

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
#define GET_H_CR(a1) CPU (h_cr)[a1]
#define SET_H_CR(a1, x) (CPU (h_cr)[a1] = (x))
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
} AAPBF_CPU_DATA;

/* Cover fns for register access.  */
USI aapbf_h_gpr_get (SIM_CPU *, UINT);
void aapbf_h_gpr_set (SIM_CPU *, UINT, USI);
USI aapbf_h_cr_get (SIM_CPU *, UINT);
void aapbf_h_cr_set (SIM_CPU *, UINT, USI);
BI aapbf_h_cf_get (SIM_CPU *);
void aapbf_h_cf_set (SIM_CPU *, BI);
USI aapbf_h_pc_get (SIM_CPU *);
void aapbf_h_pc_set (SIM_CPU *, USI);

/* These must be hand-written.  */
extern CPUREG_FETCH_FN aapbf_fetch_register;
extern CPUREG_STORE_FN aapbf_store_register;

typedef struct {
  int empty;
} MODEL_AAP32_DATA;

/* Instruction argument buffer.  */

union sem_fields {
  struct { /* no operands */
    int empty;
  } sfmt_empty;
  struct { /*  */
    SI f_s_22;
  } sfmt_bra;
  struct { /*  */
    USI* i_d6;
    SI f_d_6;
    SI f_i_16;
  } sfmt_movi;
  struct { /*  */
    USI* i_d6;
    SI f_d_6;
    SI f_i_12;
  } sfmt_nop;
  struct { /*  */
    USI* i_d6;
    USI* i_dest1;
    SI f_d_6;
    UINT f_dst_1_reg;
  } sfmt_jmpl;
  struct { /*  */
    USI* i_a6;
    USI* i_d6;
    SI f_a_6;
    SI f_d_6;
    SI f_i_10;
  } sfmt_addi;
  struct { /*  */
    USI* i_a6;
    USI* i_d6;
    SI f_a_6;
    SI f_d_6;
    UINT f_carry;
    USI f_i_6;
  } sfmt_asri;
  struct { /*  */
    USI* i_a6;
    USI* i_b6;
    USI* i_d6;
    SI f_a_6;
    SI f_b_6;
    SI f_d_6;
    UINT f_carry;
  } sfmt_asr;
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

#define EXTRACT_IFMT_ADD_VARS \
  UINT f_x_length; \
  UINT f_x_opcode; \
  UINT f_length; \
  UINT f_opcode; \
  UINT f_dst_hi; \
  UINT f_dst_lo; \
  SI f_d_6; \
  UINT f_src_1_hi; \
  UINT f_src_1_lo; \
  SI f_a_6; \
  UINT f_src_2_hi; \
  UINT f_src_2_lo; \
  SI f_b_6; \
  unsigned int length;
#define EXTRACT_IFMT_ADD_CODE \
  length = 4; \
  f_x_length = EXTRACT_LSB0_UINT (insn, 32, 31, 1); \
  f_x_opcode = EXTRACT_LSB0_UINT (insn, 32, 30, 6); \
  f_length = EXTRACT_LSB0_UINT (insn, 32, 15, 1); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 14, 6); \
  f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3); \
  f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3); \
  f_d_6 = ((((f_dst_hi) << (3))) | (f_dst_lo));\
  f_d_6 =   f_d_6 = decode6 (f_d_6, f_dst_lo, f_dst_hi);\
;\
  f_src_1_hi = EXTRACT_LSB0_UINT (insn, 32, 21, 3); \
  f_src_1_lo = EXTRACT_LSB0_UINT (insn, 32, 5, 3); \
  f_a_6 = ((HI) (UINT) (((((f_src_1_hi) << (3))) | (f_src_1_lo))));\
  f_a_6 =   f_a_6 = decode6 (f_a_6, f_src_1_lo, f_src_1_hi);\
;\
  f_src_2_hi = EXTRACT_LSB0_UINT (insn, 32, 18, 3); \
  f_src_2_lo = EXTRACT_LSB0_UINT (insn, 32, 2, 3); \
  f_b_6 = ((HI) (UINT) (((((f_src_2_hi) << (3))) | (f_src_2_lo))));\
  f_b_6 =   f_b_6 = decode6 (f_b_6, f_src_2_lo, f_src_2_hi);\
;\

#define EXTRACT_IFMT_ASRI_VARS \
  UINT f_x_length; \
  UINT f_x_opcode; \
  UINT f_length; \
  UINT f_opcode; \
  UINT f_dst_hi; \
  UINT f_dst_lo; \
  SI f_d_6; \
  UINT f_src_1_hi; \
  UINT f_src_1_lo; \
  SI f_a_6; \
  UINT f_uint_18_3_hi; \
  UINT f_uint_2_3_lo; \
  USI f_i_6; \
  unsigned int length;
#define EXTRACT_IFMT_ASRI_CODE \
  length = 4; \
  f_x_length = EXTRACT_LSB0_UINT (insn, 32, 31, 1); \
  f_x_opcode = EXTRACT_LSB0_UINT (insn, 32, 30, 6); \
  f_length = EXTRACT_LSB0_UINT (insn, 32, 15, 1); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 14, 6); \
  f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3); \
  f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3); \
  f_d_6 = ((((f_dst_hi) << (3))) | (f_dst_lo));\
  f_d_6 =   f_d_6 = decode6 (f_d_6, f_dst_lo, f_dst_hi);\
;\
  f_src_1_hi = EXTRACT_LSB0_UINT (insn, 32, 21, 3); \
  f_src_1_lo = EXTRACT_LSB0_UINT (insn, 32, 5, 3); \
  f_a_6 = ((HI) (UINT) (((((f_src_1_hi) << (3))) | (f_src_1_lo))));\
  f_a_6 =   f_a_6 = decode6 (f_a_6, f_src_1_lo, f_src_1_hi);\
;\
  f_uint_18_3_hi = EXTRACT_LSB0_UINT (insn, 32, 18, 3); \
  f_uint_2_3_lo = EXTRACT_LSB0_UINT (insn, 32, 2, 3); \
  f_i_6 = ((HI) (UINT) (((((f_uint_18_3_hi) << (3))) | (f_uint_2_3_lo))));\
  f_i_6 =   f_i_6 = decode6 (f_i_6, f_uint_2_3_lo, f_uint_18_3_hi);\
;\

#define EXTRACT_IFMT_ANDI_VARS \
  UINT f_x_length; \
  UINT f_x_class; \
  UINT f_class_1; \
  UINT f_length; \
  UINT f_opcode; \
  UINT f_dst_hi; \
  UINT f_dst_lo; \
  SI f_d_6; \
  UINT f_src_1_hi; \
  UINT f_src_1_lo; \
  SI f_a_6; \
  USI f_i_6; \
  UINT f_uint_28_3; \
  SI f_i_9; \
  unsigned int length;
#define EXTRACT_IFMT_ANDI_CODE \
  length = 4; \
  f_x_length = EXTRACT_LSB0_UINT (insn, 32, 31, 1); \
  f_x_class = EXTRACT_LSB0_UINT (insn, 32, 30, 2); \
  f_class_1 = EXTRACT_LSB0_UINT (insn, 32, 25, 1); \
  f_length = EXTRACT_LSB0_UINT (insn, 32, 15, 1); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 14, 6); \
  f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3); \
  f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3); \
  f_d_6 = ((((f_dst_hi) << (3))) | (f_dst_lo));\
  f_d_6 =   f_d_6 = decode6 (f_d_6, f_dst_lo, f_dst_hi);\
;\
  f_src_1_hi = EXTRACT_LSB0_UINT (insn, 32, 21, 3); \
  f_src_1_lo = EXTRACT_LSB0_UINT (insn, 32, 5, 3); \
  f_a_6 = ((HI) (UINT) (((((f_src_1_hi) << (3))) | (f_src_1_lo))));\
  f_a_6 =   f_a_6 = decode6 (f_a_6, f_src_1_lo, f_src_1_hi);\
;\
  f_i_6 = ((HI) (UINT) (((((f_uint_18_3_hi) << (3))) | (f_uint_2_3_lo))));\
  f_i_6 =   f_i_6 = decode6 (f_i_6, f_uint_2_3_lo, f_uint_18_3_hi);\
;\
  f_uint_28_3 = EXTRACT_LSB0_UINT (insn, 32, 28, 3); \
  f_i_9 = ((HI) (UINT) (((((f_uint_28_3) << (3))) | (f_i_6))));\
  f_i_9 =   f_i_9 = decode9 (f_i_9, f_uint_2_3_lo, f_uint_18_3_hi, f_uint_28_3);\
;\

#define EXTRACT_IFMT_ADDI_VARS \
  UINT f_x_length; \
  UINT f_x_class; \
  UINT f_length; \
  UINT f_opcode; \
  UINT f_dst_hi; \
  UINT f_dst_lo; \
  SI f_d_6; \
  UINT f_src_1_hi; \
  UINT f_src_1_lo; \
  SI f_a_6; \
  USI f_i_6; \
  UINT f_uint_28_4; \
  SI f_i_10; \
  unsigned int length;
#define EXTRACT_IFMT_ADDI_CODE \
  length = 4; \
  f_x_length = EXTRACT_LSB0_UINT (insn, 32, 31, 1); \
  f_x_class = EXTRACT_LSB0_UINT (insn, 32, 30, 2); \
  f_length = EXTRACT_LSB0_UINT (insn, 32, 15, 1); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 14, 6); \
  f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3); \
  f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3); \
  f_d_6 = ((((f_dst_hi) << (3))) | (f_dst_lo));\
  f_d_6 =   f_d_6 = decode6 (f_d_6, f_dst_lo, f_dst_hi);\
;\
  f_src_1_hi = EXTRACT_LSB0_UINT (insn, 32, 21, 3); \
  f_src_1_lo = EXTRACT_LSB0_UINT (insn, 32, 5, 3); \
  f_a_6 = ((HI) (UINT) (((((f_src_1_hi) << (3))) | (f_src_1_lo))));\
  f_a_6 =   f_a_6 = decode6 (f_a_6, f_src_1_lo, f_src_1_hi);\
;\
  f_i_6 = ((HI) (UINT) (((((f_uint_18_3_hi) << (3))) | (f_uint_2_3_lo))));\
  f_i_6 =   f_i_6 = decode6 (f_i_6, f_uint_2_3_lo, f_uint_18_3_hi);\
;\
  f_uint_28_4 = EXTRACT_LSB0_UINT (insn, 32, 28, 4); \
  f_i_10 = ((HI) (UINT) (((((f_uint_28_4) << (4))) | (f_i_6))));\
  f_i_10 =   f_i_10 = decode10 (f_i_10, f_uint_2_3_lo, f_uint_28_4, f_uint_18_3_hi);\
;\

#define EXTRACT_IFMT_BEQ_VARS \
  UINT f_x_length; \
  UINT f_x_class; \
  UINT f_length; \
  UINT f_opcode; \
  INT f_int_24_3; \
  SI f_s_7; \
  SI f_s_10_fin; \
  UINT f_src_1_hi; \
  UINT f_src_1_lo; \
  SI f_a_6; \
  UINT f_src_2_hi; \
  UINT f_src_2_lo; \
  SI f_b_6; \
  unsigned int length;
#define EXTRACT_IFMT_BEQ_CODE \
  length = 4; \
  f_x_length = EXTRACT_LSB0_UINT (insn, 32, 31, 1); \
  f_x_class = EXTRACT_LSB0_UINT (insn, 32, 30, 2); \
  f_length = EXTRACT_LSB0_UINT (insn, 32, 15, 1); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 14, 6); \
  f_int_24_3 = EXTRACT_LSB0_SINT (insn, 32, 24, 3); \
  f_s_7 = ((HI) (INT) (((((f_int_28_4_lo) << (3))) | (f_int_8_3))));\
  f_s_7 =   f_s_7 = decodeS7 (f_s_7, f_int_28_4_lo, f_int_8_3);\
;\
  f_s_10_fin = ((HI) (INT) (((((f_int_24_3) << (7))) | (f_s_7))));\
  f_s_10_fin =   f_s_10_fin = decodeS10 (f_s_10_fin, f_int_8_3, f_int_24_3, f_int_28_4_lo);\
;\
  f_src_1_hi = EXTRACT_LSB0_UINT (insn, 32, 21, 3); \
  f_src_1_lo = EXTRACT_LSB0_UINT (insn, 32, 5, 3); \
  f_a_6 = ((HI) (UINT) (((((f_src_1_hi) << (3))) | (f_src_1_lo))));\
  f_a_6 =   f_a_6 = decode6 (f_a_6, f_src_1_lo, f_src_1_hi);\
;\
  f_src_2_hi = EXTRACT_LSB0_UINT (insn, 32, 18, 3); \
  f_src_2_lo = EXTRACT_LSB0_UINT (insn, 32, 2, 3); \
  f_b_6 = ((HI) (UINT) (((((f_src_2_hi) << (3))) | (f_src_2_lo))));\
  f_b_6 =   f_b_6 = decode6 (f_b_6, f_src_2_lo, f_src_2_hi);\
;\

#define EXTRACT_IFMT_NOP_VARS \
  UINT f_x_length; \
  UINT f_x_opcode; \
  UINT f_length; \
  UINT f_opcode; \
  UINT f_dst_hi; \
  UINT f_dst_lo; \
  SI f_d_6; \
  UINT f_uint_5_6; \
  UINT f_uint_21_6; \
  SI f_i_12; \
  unsigned int length;
#define EXTRACT_IFMT_NOP_CODE \
  length = 4; \
  f_x_length = EXTRACT_LSB0_UINT (insn, 32, 31, 1); \
  f_x_opcode = EXTRACT_LSB0_UINT (insn, 32, 30, 6); \
  f_length = EXTRACT_LSB0_UINT (insn, 32, 15, 1); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 14, 6); \
  f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3); \
  f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3); \
  f_d_6 = ((((f_dst_hi) << (3))) | (f_dst_lo));\
  f_d_6 =   f_d_6 = decode6 (f_d_6, f_dst_lo, f_dst_hi);\
;\
  f_uint_5_6 = EXTRACT_LSB0_UINT (insn, 32, 5, 6); \
  f_uint_21_6 = EXTRACT_LSB0_UINT (insn, 32, 21, 6); \
  f_i_12 = ((HI) (UINT) (((((f_uint_21_6) << (6))) | (f_uint_5_6))));\
  f_i_12 =   f_i_12 = decode12 (f_i_12, f_uint_21_6, f_uint_5_6);\
;\

#define EXTRACT_IFMT_MOVI_VARS \
  UINT f_x_length; \
  UINT f_x_class; \
  UINT f_length; \
  UINT f_opcode; \
  UINT f_dst_hi; \
  UINT f_dst_lo; \
  SI f_d_6; \
  SI f_i_12; \
  UINT f_uint_28_4; \
  SI f_i_16; \
  unsigned int length;
#define EXTRACT_IFMT_MOVI_CODE \
  length = 4; \
  f_x_length = EXTRACT_LSB0_UINT (insn, 32, 31, 1); \
  f_x_class = EXTRACT_LSB0_UINT (insn, 32, 30, 2); \
  f_length = EXTRACT_LSB0_UINT (insn, 32, 15, 1); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 14, 6); \
  f_dst_hi = EXTRACT_LSB0_UINT (insn, 32, 24, 3); \
  f_dst_lo = EXTRACT_LSB0_UINT (insn, 32, 8, 3); \
  f_d_6 = ((((f_dst_hi) << (3))) | (f_dst_lo));\
  f_d_6 =   f_d_6 = decode6 (f_d_6, f_dst_lo, f_dst_hi);\
;\
  f_i_12 = ((HI) (UINT) (((((f_uint_21_6) << (6))) | (f_uint_5_6))));\
  f_i_12 =   f_i_12 = decode12 (f_i_12, f_uint_21_6, f_uint_5_6);\
;\
  f_uint_28_4 = EXTRACT_LSB0_UINT (insn, 32, 28, 4); \
  f_i_16 = ((HI) (UINT) (((((f_uint_28_4) << (4))) | (f_i_12))));\
  f_i_16 =   f_i_16 = decode16 (f_i_16, f_uint_21_6, f_uint_28_4, f_uint_5_6);\
;\

#define EXTRACT_IFMT_BAL_VARS \
  UINT f_x_length; \
  UINT f_x_class; \
  UINT f_length; \
  UINT f_opcode; \
  INT f_int_24_6; \
  INT f_s_10; \
  SI f_s_16; \
  UINT f_src_2_hi; \
  UINT f_src_2_lo; \
  SI f_b_6; \
  unsigned int length;
#define EXTRACT_IFMT_BAL_CODE \
  length = 4; \
  f_x_length = EXTRACT_LSB0_UINT (insn, 32, 31, 1); \
  f_x_class = EXTRACT_LSB0_UINT (insn, 32, 30, 2); \
  f_length = EXTRACT_LSB0_UINT (insn, 32, 15, 1); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 14, 6); \
  f_int_24_6 = EXTRACT_LSB0_SINT (insn, 32, 24, 6); \
  f_s_10 = ((HI) (INT) (((((f_int_28_4_lo) << (6))) | (f_int_8_6))));\
  f_s_16 = ((HI) (INT) (((((f_int_24_6) << (10))) | (f_s_10))));\
  f_s_16 =   f_s_16 = decodeS16 (f_s_16, f_int_8_6, f_int_24_6, f_int_28_4_lo);\
;\
  f_src_2_hi = EXTRACT_LSB0_UINT (insn, 32, 18, 3); \
  f_src_2_lo = EXTRACT_LSB0_UINT (insn, 32, 2, 3); \
  f_b_6 = ((HI) (UINT) (((((f_src_2_hi) << (3))) | (f_src_2_lo))));\
  f_b_6 =   f_b_6 = decode6 (f_b_6, f_src_2_lo, f_src_2_hi);\
;\

#define EXTRACT_IFMT_BRA_VARS \
  UINT f_x_length; \
  UINT f_x_class; \
  UINT f_length; \
  UINT f_opcode; \
  INT f_int_24_9; \
  INT f_s_13; \
  SI f_s_22; \
  unsigned int length;
#define EXTRACT_IFMT_BRA_CODE \
  length = 4; \
  f_x_length = EXTRACT_LSB0_UINT (insn, 32, 31, 1); \
  f_x_class = EXTRACT_LSB0_UINT (insn, 32, 30, 2); \
  f_length = EXTRACT_LSB0_UINT (insn, 32, 15, 1); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 14, 6); \
  f_int_24_9 = EXTRACT_LSB0_SINT (insn, 32, 24, 9); \
  f_s_13 = ((HI) (INT) (((((f_int_28_4_lo) << (9))) | (f_int_8_9))));\
  f_s_22 = ((HI) (INT) (((((f_int_24_9) << (13))) | (f_s_13))));\
  f_s_22 =   f_s_22 = decodeS22 (f_s_22, f_int_8_9, f_int_24_9, f_int_28_4_lo);\
;\

/* Collection of various things for the trace handler to use.  */

typedef struct trace_record {
  IADDR pc;
  /* FIXME:wip */
} TRACE_RECORD;

#endif /* CPU_AAPBF_H */
