/* AAP device support */

#include "sim-main.h"

#ifdef HAVE_DV_SOCKSER
#include "dv-sockser.h"
#endif

#include "hw-device.h"

/* Cache Control Register */
#define MCCR_ADDR 0xffffffff
#define MCCR_CP 0x80

/* Placeholder definition.  */
struct _device { char dummy; } aap_devices;

int
device_io_read_buffer (device *me, void *source, int space,
		       address_word addr, unsigned nr_bytes,
		       SIM_DESC sd, SIM_CPU *cpu, sim_cia cia)
{
  if (STATE_ENVIRONMENT (sd) != OPERATING_ENVIRONMENT)
    return nr_bytes;

  return nr_bytes;
}

int
device_io_write_buffer (device *me, const void *source, int space,
			address_word addr, unsigned nr_bytes,
                        SIM_DESC sd, SIM_CPU *cpu, sim_cia cia)
{

#if WITH_SCACHE
  if (addr == MCCR_ADDR)
    {
      if ((*(const char *) source & MCCR_CP) != 0)
	scache_flush (sd);
      return nr_bytes;
    }
#endif

  if (STATE_ENVIRONMENT (sd) != OPERATING_ENVIRONMENT)
    return nr_bytes;

  return nr_bytes;
}

void
device_error (device *me ATTRIBUTE_UNUSED,
		const char *message ATTRIBUTE_UNUSED, ...)
{
  abort ();
}
