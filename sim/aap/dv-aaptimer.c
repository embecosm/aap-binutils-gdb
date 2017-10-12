/* timer -- see LM32 */

#include "sim-main.h"
#include "hw-main.h"
#include "sim-assert.h"

struct aaptimer
{
  unsigned base;		/* Base address of this timer.  */
  unsigned limit;		/* Limit address of this timer.  */
  unsigned int status;
  unsigned int control;
  unsigned int period;
  unsigned int snapshot;
  struct hw_event *event;
};

/* Timer registers.  */
#define AAP_TIMER_STATUS       0x0
#define AAP_TIMER_CONTROL      0x4
#define AAP_TIMER_PERIOD       0x8
#define AAP_TIMER_SNAPSHOT     0xc

/* Timer ports.  */

enum
{
  INT_PORT
};

static const struct hw_port_descriptor aaptimer_ports[] = {
  {"int", INT_PORT, 0, output_port},
  {}
};

static void
do_timer_event (struct hw *me, void *data)
{
  struct aaptimer *timer = hw_data (me);

  /* Is timer started? */
  if (timer->control & 0x4)
    {
      if (timer->snapshot)
	{
	  /* Decrement timer.  */
	  timer->snapshot--;
	}
      else if (timer->control & 1)
	{
	  /* Restart timer.  */
	  timer->snapshot = timer->period;
	}
    }
  /* Generate interrupt when timer is at 0, and interrupt enable is 1.  */
  if ((timer->snapshot == 0) && (timer->control & 1))
    {
      /* Generate interrupt.  */
      hw_port_event (me, INT_PORT, 1);
    }
  /* If timer is started, schedule another event to decrement the timer again.  */
  if (timer->control & 4)
    hw_event_queue_schedule (me, 1, do_timer_event, 0);
}

static unsigned
aaptimer_io_write_buffer (struct hw *me,
			   const void *source,
			   int space, unsigned_word base, unsigned nr_bytes)
{
  struct aaptimer *timers = hw_data (me);
  int timer_reg;
  const unsigned char *source_bytes = source;
  int value = 0;

  HW_TRACE ((me, "write to 0x%08lx length %d with 0x%x", (long) base,
	     (int) nr_bytes, value));

  if (nr_bytes == 4)
    value = (source_bytes[0] << 24)
      | (source_bytes[1] << 16) | (source_bytes[2] << 8) | (source_bytes[3]);
  else
    hw_abort (me, "write with invalid number of bytes: %d", nr_bytes);

  timer_reg = base - timers->base;

  switch (timer_reg)
    {
    case AAP_TIMER_STATUS:
      timers->status = value;
      break;
    case AAP_TIMER_CONTROL:
      timers->control = value;
      if (timers->control & 0x4)
	{
	  /* Timer is started.  */
	  hw_event_queue_schedule (me, 1, do_timer_event, 0);
	}
      break;
    case AAP_TIMER_PERIOD:
      timers->period = value;
      break;
    default:
      hw_abort (me, "invalid register address: 0x%x.", timer_reg);
    }

  return nr_bytes;
}

static unsigned
aaptimer_io_read_buffer (struct hw *me,
			  void *dest,
			  int space, unsigned_word base, unsigned nr_bytes)
{
  struct aaptimer *timers = hw_data (me);
  int timer_reg;
  int value;
  unsigned char *dest_bytes = dest;

  HW_TRACE ((me, "read 0x%08lx length %d", (long) base, (int) nr_bytes));

  timer_reg = base - timers->base;

  switch (timer_reg)
    {
    case AAP_TIMER_STATUS:
      value = timers->status;
      break;
    case AAP_TIMER_CONTROL:
      value = timers->control;
      break;
    case AAP_TIMER_PERIOD:
      value = timers->period;
      break;
    case AAP_TIMER_SNAPSHOT:
      value = timers->snapshot;
      break;
    default:
      hw_abort (me, "invalid register address: 0x%x.", timer_reg);
    }

  if (nr_bytes == 4)
    {
      dest_bytes[0] = value >> 24;
      dest_bytes[1] = value >> 16;
      dest_bytes[2] = value >> 8;
      dest_bytes[3] = value;
    }
  else
    hw_abort (me, "read of unsupported number of bytes: %d", nr_bytes);

  return nr_bytes;
}

static void
attach_aaptimer_regs (struct hw *me, struct aaptimer *timers)
{
  unsigned_word attach_address;
  int attach_space;
  unsigned attach_size;
  reg_property_spec reg;

  if (hw_find_property (me, "reg") == NULL)
    hw_abort (me, "Missing \"reg\" property");
  if (!hw_find_reg_array_property (me, "reg", 0, &reg))
    hw_abort (me, "\"reg\" property must contain three addr/size entries");
  hw_unit_address_to_attach_address (hw_parent (me),
				     &reg.address,
				     &attach_space, &attach_address, me);
  timers->base = attach_address;
  hw_unit_size_to_attach_size (hw_parent (me), &reg.size, &attach_size, me);
  timers->limit = attach_address + (attach_size - 1);
  hw_attach_address (hw_parent (me),
		     0, attach_space, attach_address, attach_size, me);
}

static void
aaptimer_finish (struct hw *me)
{
  struct aaptimer *timers;
  int i;

  timers = HW_ZALLOC (me, struct aaptimer);
  set_hw_data (me, timers);
  set_hw_io_read_buffer (me, aaptimer_io_read_buffer);
  set_hw_io_write_buffer (me, aaptimer_io_write_buffer);
  set_hw_ports (me, aaptimer_ports);

  /* Attach ourself to our parent bus.  */
  attach_aaptimer_regs (me, timers);

  /* Initialize the timers.  */
  timers->status = 0;
  timers->control = 0;
  timers->period = 0;
  timers->snapshot = 0;
}

const struct hw_descriptor dv_aaptimer_descriptor[] = {
  {"aaptimer", aaptimer_finish,},
  {NULL},
};
