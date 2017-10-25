/* Collection of junk to be sorted for AAP */

#ifdef AAP_SIM_H
#define AAP_SIM_H

/* Hardware/device support.  */
extern device aap_devices;

/* FIXME: Temporary, until device support ready.  */
struct _device { int foo; };

BI aap_endian (SIM_CPU *);

#endif /* AAP_SIM_H */
