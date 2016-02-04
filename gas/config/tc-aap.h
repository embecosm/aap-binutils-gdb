/* tc-aap.c -- Assemble code for AP

   Copyright (C) 2016 Free Software Foundation, Inc.
   Copyright (C) 2016 Embecosm Limited <www.embecosm.com>

   This file is part of GAS, the GNU Assembler.

   GAS is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GAS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GAS; see the file COPYING.  If not, write to
   the Free Software Foundation, 51 Franklin Street - Fifth Floor,
   Boston, MA 02110-1301, USA.  */

#define TC_AAP

#define TARGET_ARCH		bfd_arch_aap
#define TARGET_FORMAT		"elf32-aap"

#define WORKING_DOT_WORD

extern void aap_apply_fix (struct fix *, valueT *, segT);
#define md_apply_fix aap_apply_fix

extern void aap_assemble (char *);
#define md_assemble aap_assemble

extern char *aap_atof (int, char *, int *);
#define md_atof aap_atof

extern void aap_begin (void);
#define md_begin aap_begin

extern void aap_convert_frag (bfd *, segT, fragS *);
#define md_convert_frag aap_convert_frag

extern int aap_estimate_size_before_relax (fragS *, segT);
#define md_estimate_size_before_relax aap_estimate_size_before_relax

extern void aap_number_to_chars (char *, valueT, int);
#define md_number_to_chars aap_number_to_chars

extern void aap_operand (expressionS *);
#define md_operand aap_operand

extern int aap_parse_option (int, char *);
#define md_parse_option aap_parse_option

extern void aap_show_usage (FILE *);
#define md_show_usage aap_show_usage

extern valueT aap_section_align (segT, valueT);
#define md_section_align aap_section_align

extern symbolS *aap_undefined_symbol (char *);
#define md_undefined_symbol aap_undefined_symbol

extern long aap_pcrel_from_section (struct fix *, segT);
#define MD_PCREL_FROM_SECTION(F,S) aap_pcrel_from_section(F,S)

