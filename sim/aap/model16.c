/* Simulator model support for aapbf16.

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

#define WANT_CPU aapbf16
#define WANT_CPU_AAPBF16

#include "sim-main.h"

/* The profiling data is recorded here, but is accessed via the profiling
   mechanism.  After all, this is information for profiling.  */

#if WITH_PROFILE_MODEL_P

/* Model handlers for each insn.  */

static int
model_aap16_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_asr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_lsl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_lsr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_mov (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_jmp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_movi.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_jeq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_jne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_jlts (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_jles (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_jltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_jleu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_rte (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_movi.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asri.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_subi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asri.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_asri (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asri.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_lsli (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_lsri (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_beq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_bne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_blts (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_bles (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_bltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_bleu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_ldb___xdest_____xsrc1____int023__ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_ldw___xdest_____xsrc1____int023__ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_ldb___xdest_____xsrc1_____int023__ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_ldw___xdest_____xsrc1_____int023__ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_ldb___xdest______xsrc1____int023__ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_ldw___xdest______xsrc1____int023__ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_stb____xdest____int023_____xsrc1_ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_stw____xdest____int023_____xsrc1_ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_stb____xdest_____int023_____xsrc1_ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_stw____xdest_____int023_____xsrc1_ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_ldb___xdest_____xsrc1____int023__.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_stb_____xdest____int023_____xsrc1_ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_stb_____xdest____int023_____xsrc1_.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_stw_____xdest____int023_____xsrc1_ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_stb_____xdest____int023_____xsrc1_.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_nop (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_movi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_movi.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_bal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_aap16_bra (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_bra.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += aapbf16_model_aap16_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

/* We assume UNIT_NONE == 0 because the tables don't always terminate
   entries with it.  */

/* Model timing data for `aap16'.  */

static const INSN_TIMING aap16_timing[] = {
  { AAPBF16_INSN_X_INVALID, 0, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_X_AFTER, 0, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_X_BEFORE, 0, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_X_CHAIN, 0, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_X_BEGIN, 0, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_ADD, model_aap16_add, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_SUB, model_aap16_sub, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_AND, model_aap16_and, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_OR, model_aap16_or, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_XOR, model_aap16_xor, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_ASR, model_aap16_asr, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_LSL, model_aap16_lsl, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_LSR, model_aap16_lsr, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_MOV, model_aap16_mov, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_JMP, model_aap16_jmp, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_JAL, model_aap16_jal, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_JEQ, model_aap16_jeq, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_JNE, model_aap16_jne, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_JLTS, model_aap16_jlts, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_JLES, model_aap16_jles, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_JLTU, model_aap16_jltu, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_JLEU, model_aap16_jleu, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_RTE, model_aap16_rte, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_ADDI, model_aap16_addi, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_SUBI, model_aap16_subi, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_ASRI, model_aap16_asri, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_LSLI, model_aap16_lsli, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_LSRI, model_aap16_lsri, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_BEQ, model_aap16_beq, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_BNE, model_aap16_bne, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_BLTS, model_aap16_blts, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_BLES, model_aap16_bles, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_BLTU, model_aap16_bltu, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_BLEU, model_aap16_bleu, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_LDB___XDEST_____XSRC1____INT023__, model_aap16_ldb___xdest_____xsrc1____int023__, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_LDW___XDEST_____XSRC1____INT023__, model_aap16_ldw___xdest_____xsrc1____int023__, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_LDB___XDEST_____XSRC1_____INT023__, model_aap16_ldb___xdest_____xsrc1_____int023__, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_LDW___XDEST_____XSRC1_____INT023__, model_aap16_ldw___xdest_____xsrc1_____int023__, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_LDB___XDEST______XSRC1____INT023__, model_aap16_ldb___xdest______xsrc1____int023__, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_LDW___XDEST______XSRC1____INT023__, model_aap16_ldw___xdest______xsrc1____int023__, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_STB____XDEST____INT023_____XSRC1_, model_aap16_stb____xdest____int023_____xsrc1_, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_STW____XDEST____INT023_____XSRC1_, model_aap16_stw____xdest____int023_____xsrc1_, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_STB____XDEST_____INT023_____XSRC1_, model_aap16_stb____xdest_____int023_____xsrc1_, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_STW____XDEST_____INT023_____XSRC1_, model_aap16_stw____xdest_____int023_____xsrc1_, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_STB_____XDEST____INT023_____XSRC1_, model_aap16_stb_____xdest____int023_____xsrc1_, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_STW_____XDEST____INT023_____XSRC1_, model_aap16_stw_____xdest____int023_____xsrc1_, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_NOP, model_aap16_nop, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_MOVI, model_aap16_movi, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_BAL, model_aap16_bal, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
  { AAPBF16_INSN_BRA, model_aap16_bra, { { (int) UNIT_AAP16_U_EXEC, 1, 1 } } },
};

#endif /* WITH_PROFILE_MODEL_P */

static void
aap16_model_init (SIM_CPU *cpu)
{
  CPU_MODEL_DATA (cpu) = (void *) zalloc (sizeof (MODEL_AAP16_DATA));
}

#if WITH_PROFILE_MODEL_P
#define TIMING_DATA(td) td
#else
#define TIMING_DATA(td) 0
#endif

static const MODEL aap16_models[] =
{
  { "aap16", & aap16_mach, MODEL_AAP16, TIMING_DATA (& aap16_timing[0]), aap16_model_init },
  { 0 }
};

/* The properties of this cpu's implementation.  */

static const MACH_IMP_PROPERTIES aapbf16_imp_properties =
{
  sizeof (SIM_CPU),
#if WITH_SCACHE
  sizeof (SCACHE)
#else
  0
#endif
};


static void
aapbf16_prepare_run (SIM_CPU *cpu)
{
  if (CPU_IDESC (cpu) == NULL)
    aapbf16_init_idesc_table (cpu);
}

static const CGEN_INSN *
aapbf16_get_idata (SIM_CPU *cpu, int inum)
{
  return CPU_IDESC (cpu) [inum].idata;
}

static void
aap16_init_cpu (SIM_CPU *cpu)
{
  CPU_REG_FETCH (cpu) = aapbf16_fetch_register;
  CPU_REG_STORE (cpu) = aapbf16_store_register;
  CPU_PC_FETCH (cpu) = aapbf16_h_pc_get;
  CPU_PC_STORE (cpu) = aapbf16_h_pc_set;
  CPU_GET_IDATA (cpu) = aapbf16_get_idata;
  CPU_MAX_INSNS (cpu) = AAPBF16_INSN__MAX;
  CPU_INSN_NAME (cpu) = cgen_insn_name;
  CPU_FULL_ENGINE_FN (cpu) = aapbf16_engine_run_full;
#if WITH_FAST
  CPU_FAST_ENGINE_FN (cpu) = aapbf16_engine_run_fast;
#else
  CPU_FAST_ENGINE_FN (cpu) = aapbf16_engine_run_full;
#endif
}

const MACH aap16_mach =
{
  "aap16", "aap16", MACH_AAP16,
  32, 32, & aap16_models[0], & aapbf16_imp_properties,
  aap16_init_cpu,
  aapbf16_prepare_run
};

