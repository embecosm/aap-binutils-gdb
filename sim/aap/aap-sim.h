/* CSRs and exception IDs -- see LM32  */

#ifndef AAP_SIM_H
#define AAP_SIM_H

#include "gdb/sim-aap.h"

/* CSRs.  */
#define AAP_CSR_IE             0
#define AAP_CSR_IM             1
#define AAP_CSR_IP             2
#define AAP_CSR_ICC            3
#define AAP_CSR_DCC            4
#define AAP_CSR_CC             5
#define AAP_CSR_CFG            6
#define AAP_CSR_EBA            7
#define AAP_CSR_DC             8
#define AAP_CSR_DEBA           9
#define AAP_CSR_JTX            0xe
#define AAP_CSR_JRX            0xf
#define AAP_CSR_BP0            0x10
#define AAP_CSR_BP1            0x11
#define AAP_CSR_BP2            0x12
#define AAP_CSR_BP3            0x13
#define AAP_CSR_WP0            0x18
#define AAP_CSR_WP1            0x19
#define AAP_CSR_WP2            0x1a
#define AAP_CSR_WP3            0x1b

/* Exception IDs.  */
#define AAP_EID_RESET                  0
#define AAP_EID_BREAKPOINT             1
#define AAP_EID_INSTRUCTION_BUS_ERROR  2
#define AAP_EID_WATCHPOINT             3
#define AAP_EID_DATA_BUS_ERROR         4
#define AAP_EID_DIVIDE_BY_ZERO         5
#define AAP_EID_INTERRUPT              6
#define AAP_EID_SYSTEM_CALL            7

#endif /* AAP_SIM_H */
