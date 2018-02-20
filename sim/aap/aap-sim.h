/* collection of junk waiting time to sort out
   Copyright (C) 2000-2017 Free Software Foundation, Inc.

This file is part of the GNU Simulators.

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

#ifndef AAP_SIM_H
#define AAP_SIM_H

/* Custom hardware handlers */
DI   aapbf_h_gpr_get_handler (SIM_CPU * current_cpu, UINT gpr);
void aapbf_h_gpr_set_handler (SIM_CPU * current_cpu, UINT gpr, DI newval);
//UDI  aapbf_h_csr_get_handler (SIM_CPU * current_cpu, UINT csr);
//void aapbf_h_csr_set_handler (SIM_CPU * current_cpu, UINT csr, UDI newval);

#endif /* AAP_SIM_H */
