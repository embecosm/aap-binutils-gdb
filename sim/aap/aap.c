/* RISC-V simulator support code.
   Contributed by Edward Jones  <ed.jones@embecosm.com>

   Copyright (C) 2009-2018 Free Software Foundation, Inc.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#define WANT_CPU aapbf
#define WANT_CPU_AAPBF

#include "sim-main.h"
#include "cgen-mem.h"
#include "gdb/sim-aap.h"

/* The contents of BUF are in target byte order.  */

int
aapbf_fetch_register (SIM_CPU * current_cpu, int rn, unsigned char *buf,
                          int len)
{
  if (SIM_AAP_GPR0_REGNUM <= rn && rn <= SIM_AAP_GPR63_REGNUM)
    {
      int gprn = rn - SIM_AAP_GPR0_REGNUM;
      SETTDI (buf, GET_H_GPR (gprn));
    }
  else if (rn == SIM_AAP_PC_REGNUM)
    {
      SETTUDI (buf, GET_H_PC ());
    }
  else
    {
      SETTUDI (buf, 0xabad1deaabad1dea);
      return 0;
    }
  return len;
}

/* The contents of BUF are in target byte order.  */

int
aapbf_store_register (SIM_CPU * current_cpu, int rn, unsigned char *buf,
                          int len)
{
  if (SIM_AAP_GPR0_REGNUM <= rn && rn <= SIM_AAP_GPR63_REGNUM)
    {
      int gprn = rn - SIM_AAP_GPR0_REGNUM;
      SET_H_GPR (gprn, GETTDI (buf));
    }
  else if (rn == SIM_AAP_PC_REGNUM)
    {
      SET_H_PC (GETTUDI (buf));
    }
  else
    {
      return 0;
    }
  return len;
}

DI
aapbf_h_gpr_get_handler (SIM_CPU * current_cpu, UINT gpr)
{
  return CPU (h_gpr[gpr]);
}

void
aapbf_h_gpr_set_handler (SIM_CPU * current_cpu, UINT gpr, DI newval)
{
  if (gpr == 0)
    return; /* x0 is the 'zero' registers. Stores have no effect.  */
  CPU (h_gpr[gpr]) = newval;
}

/*UDI
aapbf_h_csr_get_handler (SIM_CPU * current_cpu, UINT csr)
{
  return CPU (h_csr[csr]);
}

void
aapbf_h_csr_set_handler (SIM_CPU * current_cpu, UINT csr, UDI newval)
{
  CPU (h_csr[csr]) = newval;
  }*/

int
aapbf_model_aap_u_exec (SIM_CPU *cpu, const IDESC *idesc,
                              int unit_num, int referenced)
{
  return 1;
}
