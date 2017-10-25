/* Main header for AAP */

#ifndef SIM_MAIN_H
#define SIM_MAIN_H

#define USING_SIM_BASE_H

struct _sim_cpu; /* FIXME: should be in sim-basics.h */
typedef struct _sim_cpu SIM_CPU;

/* sim-basics.h includes config.h but cgen-types.h must be included before
   sim-basics.h and cgen-types.h needs config.h.  */
#include "config.h"

#include "symcat.h"
#include "sim-basics.h"
#include "cgen-types.h"
#include "aap-desc.h"
#include "aap-opc.h"
#include "arch.h"

/* These must be defined before sim-base.h.  */
typedef UDI sim_cia;

#define CIA_GET(cpu)     CPU_PC_GET (cpu)
#define CIA_SET(cpu,val) CPU_PC_SET (cpu,val)

#include "sim-base.h"
#include "cgen-sim.h"
#include "aap-sim.h"
#include "opcode/cgen.h"

/* The _sim_cpu struct.  */

struct _sim_cpu {
  /* sim/common cpu base.  */
  sim_cpu_base base;

  /* Static parts of cgen.  */
  CGEN_CPU cgen_cpu;

  /* CPU specific parts go here.
     Note that in files that don't need to access these pieces WANT_CPU_FOO
     won't be defined and thus these parts won't appear.  It is a source of 
     bugs though.  */
#if defined (WANT_CPU_AAPBF)
  AAPBF_CPU_DATA cpu_data;
#endif
#if defined (WANT_CPU_AAPBF16)
  AAPBF16_CPU_DATA cpu_data;
#endif
};

/* The sim_state struct.  */

struct sim_state {
  sim_cpu *cpu;
#define STATE_CPU(sd, n) (/*&*/ (sd)->cpu)

  CGEN_STATE cgen_state;

  sim_state_base base;
};

/* Misc.  */

/* Catch address exceptions.  */
extern SIM_CORE_SIGNAL_FN aap_core_signal;
#define SIM_CORE_SIGNAL(SD,CPU,CIA,MAP,NR_BYTES,ADDR,TRANSFER,ERROR) \
aap_core_signal ((SD), (CPU), (CIA), (MAP), (NR_BYTES), (ADDR), \
		  (TRANSFER), (ERROR))

/* Default memory size.  */
#define AAP_DEFAULT_MEM_SIZE 0x800000 /* 8M */

#endif /* SIM_MAIN_H */
