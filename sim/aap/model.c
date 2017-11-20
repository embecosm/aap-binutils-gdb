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
model_aap32_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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
model_aap32_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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
model_aap32_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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
model_aap32_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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
model_aap32_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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
model_aap32_asr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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
model_aap32_lsl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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
model_aap32_lsr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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
model_aap32_mov (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
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
model_aap32_addc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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
model_aap32_subc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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
model_aap32_jmp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_movi.f
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
model_aap32_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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
model_aap32_jeq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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
model_aap32_jne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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
model_aap32_jlts (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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
model_aap32_jles (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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
model_aap32_jltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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
model_aap32_jleu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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
model_aap32_jmpl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
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
model_aap32_jall (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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
model_aap32_jeql (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
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
model_aap32_jnel (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
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
model_aap32_jltsl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
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
model_aap32_jlesl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
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
model_aap32_jltul (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
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
model_aap32_jleul (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jmpl.f
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
model_aap32_asri (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asri.f
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
model_aap32_lsli (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asri.f
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
model_aap32_lsri (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asri.f
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
model_aap32_andi (SIM_CPU *current_cpu, void *sem_arg)
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
model_aap32_ori (SIM_CPU *current_cpu, void *sem_arg)
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
model_aap32_xori (SIM_CPU *current_cpu, void *sem_arg)
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
model_aap32_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
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
model_aap32_subi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
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
model_aap32_beq (SIM_CPU *current_cpu, void *sem_arg)
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
model_aap32_bne (SIM_CPU *current_cpu, void *sem_arg)
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
model_aap32_blts (SIM_CPU *current_cpu, void *sem_arg)
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
model_aap32_bles (SIM_CPU *current_cpu, void *sem_arg)
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
model_aap32_bltu (SIM_CPU *current_cpu, void *sem_arg)
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
model_aap32_bleu (SIM_CPU *current_cpu, void *sem_arg)
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
model_aap32_ldb___d6_____a6____i10__ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
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
model_aap32_ldw___d6_____a6____i10__ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
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
model_aap32_ldb___d6_____a6_____i10__ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
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
model_aap32_ldw___d6_____a6_____i10__ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
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
model_aap32_ldb___d6______a6____i10__ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
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
model_aap32_ldw___d6______a6____i10__ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
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
model_aap32_stb____d6____i10_____a6_ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
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
model_aap32_stw____d6____i10_____a6_ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
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
model_aap32_stb____d6_____i10_____a6_ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
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
model_aap32_stw____d6_____i10_____a6_ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
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
model_aap32_stb_____d6____i10_____a6_ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
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
model_aap32_stw_____d6____i10_____a6_ (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_addi.f
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
model_aap32_nop (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_nop.f
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
model_aap32_movi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_movi.f
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
model_aap32_bal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_asr.f
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
model_aap32_bra (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_bra.f
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
  { AAPBF_AAP_INSN_X_INVALID, 0, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_X_AFTER, 0, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_X_BEFORE, 0, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_X_CHAIN, 0, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_X_BEGIN, 0, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_ADD, model_aap32_add, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_SUB, model_aap32_sub, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_AND, model_aap32_and, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_OR, model_aap32_or, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_XOR, model_aap32_xor, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_ASR, model_aap32_asr, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_LSL, model_aap32_lsl, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_LSR, model_aap32_lsr, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_MOV, model_aap32_mov, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_ADDC, model_aap32_addc, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_SUBC, model_aap32_subc, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_JMP, model_aap32_jmp, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_JAL, model_aap32_jal, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_JEQ, model_aap32_jeq, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_JNE, model_aap32_jne, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_JLTS, model_aap32_jlts, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_JLES, model_aap32_jles, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_JLTU, model_aap32_jltu, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_JLEU, model_aap32_jleu, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_JMPL, model_aap32_jmpl, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_JALL, model_aap32_jall, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_JEQL, model_aap32_jeql, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_JNEL, model_aap32_jnel, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_JLTSL, model_aap32_jltsl, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_JLESL, model_aap32_jlesl, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_JLTUL, model_aap32_jltul, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_JLEUL, model_aap32_jleul, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_ASRI, model_aap32_asri, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_LSLI, model_aap32_lsli, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_LSRI, model_aap32_lsri, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_ANDI, model_aap32_andi, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_ORI, model_aap32_ori, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_XORI, model_aap32_xori, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_ADDI, model_aap32_addi, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_SUBI, model_aap32_subi, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_BEQ, model_aap32_beq, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_BNE, model_aap32_bne, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_BLTS, model_aap32_blts, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_BLES, model_aap32_bles, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_BLTU, model_aap32_bltu, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_BLEU, model_aap32_bleu, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_LDB___D6_____A6____I10__, model_aap32_ldb___d6_____a6____i10__, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_LDW___D6_____A6____I10__, model_aap32_ldw___d6_____a6____i10__, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_LDB___D6_____A6_____I10__, model_aap32_ldb___d6_____a6_____i10__, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_LDW___D6_____A6_____I10__, model_aap32_ldw___d6_____a6_____i10__, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_LDB___D6______A6____I10__, model_aap32_ldb___d6______a6____i10__, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_LDW___D6______A6____I10__, model_aap32_ldw___d6______a6____i10__, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_STB____D6____I10_____A6_, model_aap32_stb____d6____i10_____a6_, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_STW____D6____I10_____A6_, model_aap32_stw____d6____i10_____a6_, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_STB____D6_____I10_____A6_, model_aap32_stb____d6_____i10_____a6_, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_STW____D6_____I10_____A6_, model_aap32_stw____d6_____i10_____a6_, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_STB_____D6____I10_____A6_, model_aap32_stb_____d6____i10_____a6_, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_STW_____D6____I10_____A6_, model_aap32_stw_____d6____i10_____a6_, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_NOP, model_aap32_nop, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_MOVI, model_aap32_movi, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_BAL, model_aap32_bal, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
  { AAPBF_AAP_INSN_BRA, model_aap32_bra, { { (int) UNIT_AAP32_U_EXEC, 1, 1 } } },
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
    aapbf_aap_init_idesc_table (cpu);
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
  CPU_MAX_INSNS (cpu) = AAPBF_AAP_INSN__MAX;
  CPU_INSN_NAME (cpu) = cgen_insn_name;
  CPU_FULL_ENGINE_FN (cpu) = aapbf_aap_engine_run_full;
#if WITH_FAST
  CPU_FAST_ENGINE_FN (cpu) = aapbf_aap_engine_run_fast;
#else
  CPU_FAST_ENGINE_FN (cpu) = aapbf_aap_engine_run_full;
#endif
}

const MACH aap32_mach =
{
  "aap32", "aap", MACH_AAP32,
  32, 32, & aap32_models[0], & aapbf_imp_properties,
  aap32_init_cpu,
  aapbf_prepare_run
};

