/* Misc. support for CPU family aapbf.

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
#include "cgen-ops.h"

/* Get the value of h-gpr.  */

DI
aapbf_h_gpr_get (SIM_CPU *current_cpu, UINT regno)
{
  return GET_H_GPR (regno);
}

/* Set a value for h-gpr.  */

void
aapbf_h_gpr_set (SIM_CPU *current_cpu, UINT regno, DI newval)
{
  SET_H_GPR (regno, newval);
}

/* Get the value of h-cf.  */

BI
aapbf_h_cf_get (SIM_CPU *current_cpu)
{
  return CPU (h_cf);
}

/* Set a value for h-cf.  */

void
aapbf_h_cf_set (SIM_CPU *current_cpu, BI newval)
{
  CPU (h_cf) = newval;
}

/* Get the value of h-pc.  */

USI
aapbf_h_pc_get (SIM_CPU *current_cpu)
{
  return GET_H_PC ();
}

/* Set a value for h-pc.  */

void
aapbf_h_pc_set (SIM_CPU *current_cpu, USI newval)
{
  SET_H_PC (newval);
}

/* Record trace results for INSN.  */

void
aapbf_record_trace_results (SIM_CPU *current_cpu, CGEN_INSN *insn,
			    int *indices, TRACE_RECORD *tr)
{
}
