/* Hardware ports with interupts -- see LM32  */

#include "hw-main.h"
#include "sim-main.h"


struct aapcpu
{
  struct hw_event *event;
};

/* input port ID's.  */

enum
{
  INT0_PORT,
  INT1_PORT,
  INT2_PORT,
  INT3_PORT,
  INT4_PORT,
  INT5_PORT,
  INT6_PORT,
  INT7_PORT,
  INT8_PORT,
  INT9_PORT,
  INT10_PORT,
  INT11_PORT,
  INT12_PORT,
  INT13_PORT,
  INT14_PORT,
  INT15_PORT,
  INT16_PORT,
  INT17_PORT,
  INT18_PORT,
  INT19_PORT,
  INT20_PORT,
  INT21_PORT,
  INT22_PORT,
  INT23_PORT,
  INT24_PORT,
  INT25_PORT,
  INT26_PORT,
  INT27_PORT,
  INT28_PORT,
  INT29_PORT,
  INT30_PORT,
  INT31_PORT,
};

static const struct hw_port_descriptor aapcpu_ports[] = {
  /* interrupt inputs.  */
  {"int0", INT0_PORT, 0, input_port,},
  {"int1", INT1_PORT, 0, input_port,},
  {"int2", INT2_PORT, 0, input_port,},
  {"int3", INT3_PORT, 0, input_port,},
  {"int4", INT4_PORT, 0, input_port,},
  {"int5", INT5_PORT, 0, input_port,},
  {"int6", INT6_PORT, 0, input_port,},
  {"int7", INT7_PORT, 0, input_port,},
  {"int8", INT8_PORT, 0, input_port,},
  {"int9", INT9_PORT, 0, input_port,},
  {"int10", INT10_PORT, 0, input_port,},
  {"int11", INT11_PORT, 0, input_port,},
  {"int12", INT12_PORT, 0, input_port,},
  {"int13", INT13_PORT, 0, input_port,},
  {"int14", INT14_PORT, 0, input_port,},
  {"int15", INT15_PORT, 0, input_port,},
  {"int16", INT16_PORT, 0, input_port,},
  {"int17", INT17_PORT, 0, input_port,},
  {"int18", INT18_PORT, 0, input_port,},
  {"int19", INT19_PORT, 0, input_port,},
  {"int20", INT20_PORT, 0, input_port,},
  {"int21", INT21_PORT, 0, input_port,},
  {"int22", INT22_PORT, 0, input_port,},
  {"int23", INT23_PORT, 0, input_port,},
  {"int24", INT24_PORT, 0, input_port,},
  {"int25", INT25_PORT, 0, input_port,},
  {"int26", INT26_PORT, 0, input_port,},
  {"int27", INT27_PORT, 0, input_port,},
  {"int28", INT28_PORT, 0, input_port,},
  {"int29", INT29_PORT, 0, input_port,},
  {"int30", INT30_PORT, 0, input_port,},
  {"int31", INT31_PORT, 0, input_port,},
  {NULL,},
};



/*
 * Finish off the partially created hw device.  Attach our local
 * callbacks.  Wire up our port names etc.  
 */
static hw_port_event_method aapcpu_port_event;


static void
aapcpu_finish (struct hw *me)
{
  struct aapcpu *controller;

  controller = HW_ZALLOC (me, struct aapcpu);
  set_hw_data (me, controller);
  set_hw_ports (me, aapcpu_ports);
  set_hw_port_event (me, aapcpu_port_event);

  /* Initialize the pending interrupt flags.  */
  controller->event = NULL;
}


/* An event arrives on an interrupt port.  */
static unsigned int s_ui_ExtIntrs = 0;


static void
deliver_aapcpu_interrupt (struct hw *me, void *data)
{
  static unsigned int ip, im, im_and_ip_result;
  struct aapcpu *controller = hw_data (me);
  SIM_DESC sd = hw_system (me);
  sim_cpu *cpu = STATE_CPU (sd, 0);	/* NB: fix CPU 0.  */
  address_word cia = CIA_GET (cpu);
  int interrupt = (int) data;


  HW_TRACE ((me, "interrupt-check event"));


  /*
   * Determine if an external interrupt is active 
   * and needs to cause an exception.
   */
  im = aapbf_h_csr_get (cpu, AAP_CSR_IM);
  ip = aapbf_h_csr_get (cpu, AAP_CSR_IP);
  im_and_ip_result = im & ip;


  if ((aapbf_h_csr_get (cpu, AAP_CSR_IE) & 1) && (im_and_ip_result != 0))
    {
      /* Save PC in exception address register.  */
      aapbf_h_gr_set (cpu, 30, aapbf_h_pc_get (cpu));
      /* Restart at interrupt offset in handler exception table.  */
      aapbf_h_pc_set (cpu,
		       aapbf_h_csr_get (cpu,
					 AAP_CSR_EBA) +
		       AAP_EID_INTERRUPT * 32);
      /* Save interrupt enable and then clear.  */
      aapbf_h_csr_set (cpu, AAP_CSR_IE, 0x2);
    }

  /* reschedule soon.  */
  if (controller->event != NULL)
    hw_event_queue_deschedule (me, controller->event);
  controller->event = NULL;


  /* if there are external interrupts, schedule an interrupt-check again.
   * NOTE: THIS MAKES IT VERY INEFFICIENT. INSTEAD, TRIGGER THIS
   * CHECk_EVENT WHEN THE USER ENABLES IE OR USER MODIFIES IM REGISTERS.
   */
  if (s_ui_ExtIntrs != 0)
    controller->event =
      hw_event_queue_schedule (me, 1, deliver_aapcpu_interrupt, data);
}



/* Handle an event on one of the CPU's ports.  */
static void
aapcpu_port_event (struct hw *me,
		    int my_port,
		    struct hw *source, int source_port, int level)
{
  struct aapcpu *controller = hw_data (me);
  SIM_DESC sd = hw_system (me);
  sim_cpu *cpu = STATE_CPU (sd, 0);	/* NB: fix CPU 0.  */
  address_word cia = CIA_GET (cpu);


  HW_TRACE ((me, "interrupt event on port %d, level %d", my_port, level));



  /* 
   * Activate IP if the interrupt's activated; don't do anything if
   * the interrupt's deactivated.
   */
  if (level == 1)
    {
      /*
       * save state of external interrupt.
       */
      s_ui_ExtIntrs |= (1 << my_port);

      /* interrupt-activated so set IP.  */
      aapbf_h_csr_set (cpu, AAP_CSR_IP,
			aapbf_h_csr_get (cpu, AAP_CSR_IP) | (1 << my_port));

      /* 
       * Since interrupt is activated, queue an immediate event
       * to check if this interrupt is serviceable.
       */
      if (controller->event != NULL)
	hw_event_queue_deschedule (me, controller->event);


      /* 
       * Queue an immediate event to check if this interrupt must be serviced;
       * this will happen after the current instruction is complete.
       */
      controller->event = hw_event_queue_schedule (me,
						   0,
						   deliver_aapcpu_interrupt,
						   0);
    }
  else
    {
      /*
       * save state of external interrupt.
       */
      s_ui_ExtIntrs &= ~(1 << my_port);
    }
}


const struct hw_descriptor dv_aapcpu_descriptor[] = {
  {"aapcpu", aapcpu_finish,},
  {NULL},
};
