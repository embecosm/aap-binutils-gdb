/* Simulator model support for aapbf.

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

#define WANT_CPU aapbf
#define WANT_CPU_AAPBF

#include "sim-main.h"

/* The profiling data is recorded here, but is accessed via the profiling
   mechanism.  After all, this is information for profiling.  */

#if WITH_PROFILE_MODEL_P

/* Model handlers for each insn.  */

static int
model_aap32_add32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_sub32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_and32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_or32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_xor32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_asr32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_lsl32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_lsr32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_mov32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_addc32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_subc32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_jmp32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_movi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_jal32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_jeq32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_jne32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_jlts32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_jles32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_jltu32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_jleu32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_jmpl32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_jall32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_jeql32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_jnel32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_jltsl32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_jlesl32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_jltul32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_jleul32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_asri32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asri32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_lsli32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asri32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_lsri32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asri32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_andi32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_andi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_ori32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_andi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_xori32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_andi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_addi32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_subi32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_beq32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_bne32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_blts32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_bles32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_bltu32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_bleu32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_ldb32___d6_____a6____i10__ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_ldw32___d6_____a6____i10__ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_ldb32___d6_____a6_____i10__ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_ldw32___d6_____a6_____i10__ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_ldb32___d6______a6____i10__ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_ldw32___d6______a6____i10__ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_stb32____d6____i10_____a6_ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_stw32____d6____i10_____a6_ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_stb32____d6_____i10_____a6_ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_stw32____d6_____i10_____a6_ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_stb32_____d6____i10_____a6_ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_stw32_____d6____i10_____a6_ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_nop32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_movi32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_movi32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_bal32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap32_bra32 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_bra32.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf_model_aap32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

/* We assume UNIT_NONE == 0 because the tables don't always terminate
   entries with it.  */

/* Model timing data for `aap32'.  */

static const INSN_TIMING aap32_timing[] = {
  { AAPBF_INSN_X_INVALID, 0, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_X_AFTER, 0, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_X_BEFORE, 0, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_X_CHAIN, 0, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_X_BEGIN, 0, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_ADD32, model_aap32_add32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_SUB32, model_aap32_sub32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_AND32, model_aap32_and32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_OR32, model_aap32_or32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_XOR32, model_aap32_xor32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_ASR32, model_aap32_asr32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_LSL32, model_aap32_lsl32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_LSR32, model_aap32_lsr32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_MOV32, model_aap32_mov32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_ADDC32, model_aap32_addc32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_SUBC32, model_aap32_subc32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_JMP32, model_aap32_jmp32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_JAL32, model_aap32_jal32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_JEQ32, model_aap32_jeq32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_JNE32, model_aap32_jne32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_JLTS32, model_aap32_jlts32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_JLES32, model_aap32_jles32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_JLTU32, model_aap32_jltu32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_JLEU32, model_aap32_jleu32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_JMPL32, model_aap32_jmpl32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_JALL32, model_aap32_jall32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_JEQL32, model_aap32_jeql32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_JNEL32, model_aap32_jnel32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_JLTSL32, model_aap32_jltsl32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_JLESL32, model_aap32_jlesl32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_JLTUL32, model_aap32_jltul32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_JLEUL32, model_aap32_jleul32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_ASRI32, model_aap32_asri32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_LSLI32, model_aap32_lsli32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_LSRI32, model_aap32_lsri32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_ANDI32, model_aap32_andi32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_ORI32, model_aap32_ori32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_XORI32, model_aap32_xori32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_ADDI32, model_aap32_addi32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_SUBI32, model_aap32_subi32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_BEQ32, model_aap32_beq32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_BNE32, model_aap32_bne32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_BLTS32, model_aap32_blts32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_BLES32, model_aap32_bles32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_BLTU32, model_aap32_bltu32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_BLEU32, model_aap32_bleu32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_LDB32___D6_____A6____I10__, model_aap32_ldb32___d6_____a6____i10__, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_LDW32___D6_____A6____I10__, model_aap32_ldw32___d6_____a6____i10__, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_LDB32___D6_____A6_____I10__, model_aap32_ldb32___d6_____a6_____i10__, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_LDW32___D6_____A6_____I10__, model_aap32_ldw32___d6_____a6_____i10__, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_LDB32___D6______A6____I10__, model_aap32_ldb32___d6______a6____i10__, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_LDW32___D6______A6____I10__, model_aap32_ldw32___d6______a6____i10__, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_STB32____D6____I10_____A6_, model_aap32_stb32____d6____i10_____a6_, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_STW32____D6____I10_____A6_, model_aap32_stw32____d6____i10_____a6_, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_STB32____D6_____I10_____A6_, model_aap32_stb32____d6_____i10_____a6_, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_STW32____D6_____I10_____A6_, model_aap32_stw32____d6_____i10_____a6_, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_STB32_____D6____I10_____A6_, model_aap32_stb32_____d6____i10_____a6_, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_STW32_____D6____I10_____A6_, model_aap32_stw32_____d6____i10_____a6_, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_NOP32, model_aap32_nop32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_MOVI32, model_aap32_movi32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_BAL32, model_aap32_bal32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_INSN_BRA32, model_aap32_bra32, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
};

#endif /* WITH_PROFILE_MODEL_P */

static void
aap32_model_init (SIM_CPU *cpu)
{
  CPU_MODEL_DATA (cpu) = (void *) zalloc (sizeof (MODEL_AAP32_DATA));
}

#if WITH_PROFILE_MODEL_P
#define TIMING_DATA(td) td
#else
#define TIMING_DATA(td) 0
#endif

static const MODEL aap32_models[] =
{
  { "aap32", & aap32_mach, MODEL_AAP32, TIMING_DATA (& aap32_timing[0]), aap32_model_init },
  { 0 }
};

/* The properties of this cpu's implementation.  */

static const MACH_IMP_PROPERTIES aapbf_imp_properties =
{
  sizeof (SIM_CPU),
#if WITH_SCACHE
  sizeof (SCACHE)
#else
  0
#endif
};


static void
aapbf_prepare_run (SIM_CPU *cpu)
{
  if (CPU_IDESC (cpu) == NULL)
    aapbf_init_idesc_table (cpu);
}

static const CGEN_INSN *
aapbf_get_idata (SIM_CPU *cpu, int inum)
{
  return CPU_IDESC (cpu) [inum].idata;
}

static void
aap32_init_cpu (SIM_CPU *cpu)
{
  CPU_REG_FETCH (cpu) = aapbf_fetch_register;
  CPU_REG_STORE (cpu) = aapbf_store_register;
  CPU_PC_FETCH (cpu) = aapbf_h_pc_get;
  CPU_PC_STORE (cpu) = aapbf_h_pc_set;
  CPU_GET_IDATA (cpu) = aapbf_get_idata;
  CPU_MAX_INSNS (cpu) = AAPBF_INSN__MAX;
  CPU_INSN_NAME (cpu) = cgen_insn_name;
  CPU_FULL_ENGINE_FN (cpu) = aapbf_engine_run_full;
#if WITH_FAST
  CPU_FAST_ENGINE_FN (cpu) = aapbf_engine_run_fast;
#else
  CPU_FAST_ENGINE_FN (cpu) = aapbf_engine_run_full;
#endif
}

const MACH aap32_mach =
{
  "aap32", "aap32", MACH_AAP32,
  32, 32, & aap32_models[0], & aapbf_imp_properties,
  aap32_init_cpu,
  aapbf_prepare_run
};

