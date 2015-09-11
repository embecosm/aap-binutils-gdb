/* AAP ELF support for BFD.
   Copyright 1999, 2000, 2004, 2006 Free Software Foundation, Inc.
   Contributed by Denis Chertykov <denisc@overta.ru>

   This file is part of BFD, the Binary File Descriptor library.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.  */

#ifndef _ELF_AAP_H
#define _ELF_AAP_H

#include "elf/reloc-macros.h"

/* Processor specific flags for the ELF header e_flags field.  */
#define EF_AAP_MACH 0x7F

/* If bit #7 is set, it is assumed that the elf file uses local symbols
   as reference for the relocations so that linker relaxation is possible.  */
#define EF_AAP_LINKRELAX_PREPARED 0x80

/* Relocations.  */
START_RELOC_NUMBERS (elf_aap_reloc_type)
  RELOC_NUMBER (R_AAP_NONE,          0)
  RELOC_NUMBER (R_AAP_8,             1)
  RELOC_NUMBER (R_AAP_16,            2)
  RELOC_NUMBER (R_AAP_32,            3)
  RELOC_NUMBER (R_AAP_64,            4)
  RELOC_NUMBER (R_AAP_BR16,          5)
  RELOC_NUMBER (R_AAP_BR32,          6)
  RELOC_NUMBER (R_AAP_BRCC16,        7)
  RELOC_NUMBER (R_AAP_BRCC32,        8)
  RELOC_NUMBER (R_AAP_BAL16,         9)
  RELOC_NUMBER (R_AAP_BAL32,        10)
  RELOC_NUMBER (R_AAP_ABS6,         11)
  RELOC_NUMBER (R_AAP_ABS9,         12)
  RELOC_NUMBER (R_AAP_ABS10,        13)
  RELOC_NUMBER (R_AAP_ABS12,        14)
  RELOC_NUMBER (R_AAP_ABS16,        15)
  RELOC_NUMBER (R_AAP_SHIFT6,       16)
  RELOC_NUMBER (R_AAP_OFF10,        17)
END_RELOC_NUMBERS (R_AAP_max)

#endif /* _ELF_AAP_H */
