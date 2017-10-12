/* Simulator header for frv.

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

#ifndef FRV_ARCH_H
#define FRV_ARCH_H

#define TARGET_BIG_ENDIAN 1

#define WI  SI
#define UWI USI
#define AI  USI

#define IAI USI

/* Enum declaration for model types.  */
typedef enum model_type {
  MODEL_FRV, MODEL_FR550, MODEL_FR500, MODEL_TOMCAT
 , MODEL_FR400, MODEL_FR450, MODEL_SIMPLE, MODEL_MAX
} MODEL_TYPE;

#define MAX_MODELS ((int) MODEL_MAX)

/* Enum declaration for unit types.  */
typedef enum unit_type {
  UNIT_NONE, UNIT_FRV_U_EXEC, UNIT_FR550_U_MEDIA_4_QUAD, UNIT_FR550_U_MEDIA_4_ADD_SUB_DUAL
 , UNIT_FR550_U_MEDIA_4_ADD_SUB, UNIT_FR550_U_MEDIA_4_ACC_DUAL, UNIT_FR550_U_MEDIA_4_ACC, UNIT_FR550_U_MEDIA_4
 , UNIT_FR550_U_MEDIA_SET, UNIT_FR550_U_MEDIA_3_MCLRACC, UNIT_FR550_U_MEDIA_3_WTACC, UNIT_FR550_U_MEDIA_3_ACC_DUAL
 , UNIT_FR550_U_MEDIA_3_ACC, UNIT_FR550_U_MEDIA_3_DUAL, UNIT_FR550_U_MEDIA_DUAL_EXPAND, UNIT_FR550_U_MEDIA_QUAD
 , UNIT_FR550_U_MEDIA, UNIT_FR550_U_FLOAT_CONVERT, UNIT_FR550_U_COMMIT, UNIT_FR550_U_DCUL
 , UNIT_FR550_U_ICUL, UNIT_FR550_U_DCPL, UNIT_FR550_U_ICPL, UNIT_FR550_U_DCF
 , UNIT_FR550_U_DCI, UNIT_FR550_U_ICI, UNIT_FR550_U_CLRFR, UNIT_FR550_U_CLRGR
 , UNIT_FR550_U_FR2FR, UNIT_FR550_U_SWAP, UNIT_FR550_U_FR_STORE, UNIT_FR550_U_FR_LOAD
 , UNIT_FR550_U_GR_STORE, UNIT_FR550_U_GR_LOAD, UNIT_FR550_U_SET_HILO, UNIT_FR550_U_GR2SPR
 , UNIT_FR550_U_SPR2GR, UNIT_FR550_U_GR2FR, UNIT_FR550_U_FR2GR, UNIT_FR550_U_FLOAT_DUAL_COMPARE
 , UNIT_FR550_U_FLOAT_COMPARE, UNIT_FR550_U_FLOAT_SQRT, UNIT_FR550_U_FLOAT_DIV, UNIT_FR550_U_FLOAT_DUAL_ARITH
 , UNIT_FR550_U_FLOAT_ARITH, UNIT_FR550_U_CHECK, UNIT_FR550_U_TRAP, UNIT_FR550_U_BRANCH
 , UNIT_FR550_U_IDIV, UNIT_FR550_U_IMUL, UNIT_FR550_U_INTEGER, UNIT_FR550_U_EXEC
 , UNIT_FR500_U_COMMIT, UNIT_FR500_U_DCUL, UNIT_FR500_U_ICUL, UNIT_FR500_U_DCPL
 , UNIT_FR500_U_ICPL, UNIT_FR500_U_DCF, UNIT_FR500_U_DCI, UNIT_FR500_U_ICI
 , UNIT_FR500_U_MEMBAR, UNIT_FR500_U_BARRIER, UNIT_FR500_U_MEDIA_DUAL_BTOHE, UNIT_FR500_U_MEDIA_DUAL_HTOB
 , UNIT_FR500_U_MEDIA_DUAL_BTOH, UNIT_FR500_U_MEDIA_DUAL_UNPACK, UNIT_FR500_U_MEDIA_DUAL_EXPAND, UNIT_FR500_U_MEDIA_QUAD_COMPLEX
 , UNIT_FR500_U_MEDIA_QUAD_MUL, UNIT_FR500_U_MEDIA_DUAL_MUL, UNIT_FR500_U_MEDIA_QUAD_ARITH, UNIT_FR500_U_MEDIA
 , UNIT_FR500_U_FLOAT_DUAL_CONVERT, UNIT_FR500_U_FLOAT_CONVERT, UNIT_FR500_U_FLOAT_DUAL_COMPARE, UNIT_FR500_U_FLOAT_COMPARE
 , UNIT_FR500_U_FLOAT_DUAL_SQRT, UNIT_FR500_U_FLOAT_SQRT, UNIT_FR500_U_FLOAT_DIV, UNIT_FR500_U_FLOAT_DUAL_ARITH
 , UNIT_FR500_U_FLOAT_ARITH, UNIT_FR500_U_GR2SPR, UNIT_FR500_U_GR2FR, UNIT_FR500_U_SPR2GR
 , UNIT_FR500_U_FR2GR, UNIT_FR500_U_FR2FR, UNIT_FR500_U_SWAP, UNIT_FR500_U_FR_R_STORE
 , UNIT_FR500_U_FR_STORE, UNIT_FR500_U_FR_LOAD, UNIT_FR500_U_GR_R_STORE, UNIT_FR500_U_GR_STORE
 , UNIT_FR500_U_GR_LOAD, UNIT_FR500_U_SET_HILO, UNIT_FR500_U_CLRFR, UNIT_FR500_U_CLRGR
 , UNIT_FR500_U_CHECK, UNIT_FR500_U_TRAP, UNIT_FR500_U_BRANCH, UNIT_FR500_U_IDIV
 , UNIT_FR500_U_IMUL, UNIT_FR500_U_INTEGER, UNIT_FR500_U_EXEC, UNIT_TOMCAT_U_EXEC
 , UNIT_FR400_U_DCUL, UNIT_FR400_U_ICUL, UNIT_FR400_U_DCPL, UNIT_FR400_U_ICPL
 , UNIT_FR400_U_DCF, UNIT_FR400_U_DCI, UNIT_FR400_U_ICI, UNIT_FR400_U_MEMBAR
 , UNIT_FR400_U_BARRIER, UNIT_FR400_U_MEDIA_DUAL_HTOB, UNIT_FR400_U_MEDIA_DUAL_EXPAND, UNIT_FR400_U_MEDIA_7
 , UNIT_FR400_U_MEDIA_6, UNIT_FR400_U_MEDIA_4_ACC_DUAL, UNIT_FR400_U_MEDIA_4_ACCG, UNIT_FR400_U_MEDIA_4
 , UNIT_FR400_U_MEDIA_3_QUAD, UNIT_FR400_U_MEDIA_3_DUAL, UNIT_FR400_U_MEDIA_3, UNIT_FR400_U_MEDIA_2_ADD_SUB_DUAL
 , UNIT_FR400_U_MEDIA_2_ADD_SUB, UNIT_FR400_U_MEDIA_2_ACC_DUAL, UNIT_FR400_U_MEDIA_2_ACC, UNIT_FR400_U_MEDIA_2_QUAD
 , UNIT_FR400_U_MEDIA_2, UNIT_FR400_U_MEDIA_HILO, UNIT_FR400_U_MEDIA_1_QUAD, UNIT_FR400_U_MEDIA_1
 , UNIT_FR400_U_GR2SPR, UNIT_FR400_U_GR2FR, UNIT_FR400_U_SPR2GR, UNIT_FR400_U_FR2GR
 , UNIT_FR400_U_SWAP, UNIT_FR400_U_FR_STORE, UNIT_FR400_U_FR_LOAD, UNIT_FR400_U_GR_STORE
 , UNIT_FR400_U_GR_LOAD, UNIT_FR400_U_SET_HILO, UNIT_FR400_U_CHECK, UNIT_FR400_U_TRAP
 , UNIT_FR400_U_BRANCH, UNIT_FR400_U_IDIV, UNIT_FR400_U_IMUL, UNIT_FR400_U_INTEGER
 , UNIT_FR400_U_EXEC, UNIT_FR450_U_DCUL, UNIT_FR450_U_ICUL, UNIT_FR450_U_DCPL
 , UNIT_FR450_U_ICPL, UNIT_FR450_U_DCF, UNIT_FR450_U_DCI, UNIT_FR450_U_ICI
 , UNIT_FR450_U_MEMBAR, UNIT_FR450_U_BARRIER, UNIT_FR450_U_MEDIA_DUAL_HTOB, UNIT_FR450_U_MEDIA_DUAL_EXPAND
 , UNIT_FR450_U_MEDIA_7, UNIT_FR450_U_MEDIA_6, UNIT_FR450_U_MEDIA_4_MCLRACCA, UNIT_FR450_U_MEDIA_4_ACC_DUAL
 , UNIT_FR450_U_MEDIA_4_ACCG, UNIT_FR450_U_MEDIA_4, UNIT_FR450_U_MEDIA_3_QUAD, UNIT_FR450_U_MEDIA_3_DUAL
 , UNIT_FR450_U_MEDIA_3, UNIT_FR450_U_MEDIA_2_ADD_SUB_DUAL, UNIT_FR450_U_MEDIA_2_ADD_SUB, UNIT_FR450_U_MEDIA_2_ACC_DUAL
 , UNIT_FR450_U_MEDIA_2_ACC, UNIT_FR450_U_MEDIA_2_QUAD, UNIT_FR450_U_MEDIA_2, UNIT_FR450_U_MEDIA_HILO
 , UNIT_FR450_U_MEDIA_1_QUAD, UNIT_FR450_U_MEDIA_1, UNIT_FR450_U_GR2SPR, UNIT_FR450_U_GR2FR
 , UNIT_FR450_U_SPR2GR, UNIT_FR450_U_FR2GR, UNIT_FR450_U_SWAP, UNIT_FR450_U_FR_STORE
 , UNIT_FR450_U_FR_LOAD, UNIT_FR450_U_GR_STORE, UNIT_FR450_U_GR_LOAD, UNIT_FR450_U_SET_HILO
 , UNIT_FR450_U_CHECK, UNIT_FR450_U_TRAP, UNIT_FR450_U_BRANCH, UNIT_FR450_U_IDIV
 , UNIT_FR450_U_IMUL, UNIT_FR450_U_INTEGER, UNIT_FR450_U_EXEC, UNIT_SIMPLE_U_EXEC
 , UNIT_MAX
} UNIT_TYPE;

#define MAX_UNITS (1)

#endif /* FRV_ARCH_H */
