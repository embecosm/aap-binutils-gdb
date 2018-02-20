/* Header file for multi-ifields */

#ifndef AAP_MIF_H
#define AAP_MIF_H

/** --------------------------------------------------
--------------------------------------------------- **/
/*****************************************************/
/***                   Unsigned                    ***/
/*****************************************************/
/** --------------------------------------------------
--------------------------------------------------- **/
signed int findLoCl  (signed int value);
signed int findHiCl  (signed int value);
signed int decodeCl  (signed int value, signed int op_hi, signed int op_lo);

signed int findLoR   (signed int value);
signed int findHiR   (signed int value);
signed int decode6R  (signed int value, signed int op_lo, signed int op_hi);

unsigned int findLo  (unsigned int value);
unsigned int findHi  (unsigned int value);
unsigned int decode6 (unsigned int value,
		      unsigned int op_lo, unsigned int op_hi);

signed int findLo9   (signed int value);
signed int findMid9  (signed int value);
signed int findHi9   (signed int value);
signed int decode9   (signed int value, signed int op_lo,
		      signed int op_mid, signed int op_hi);

signed int findLo10  (signed int value);
signed int findMid10 (signed int value);
signed int findHi10  (signed int value);
signed int decode10  (signed int value, signed int op_lo,
		      signed int op_mid, signed int op_hi);

signed int findLo12  (signed int value);
signed int findHi12  (signed int value);
signed int decode12  (signed int value, signed int op_lo, signed int op_hi);

signed int findLo16  (signed int value);
signed int findMid16 (signed int value);
signed int findHi16  (signed int value);
signed int decode16  (signed int value, signed int op_lo,
		      signed int op_mid, signed int op_hi);

/*****************************************************/
/***                  5 bits reg                   ***/
/*****************************************************/
/* For encoding uint */
signed int
findLoCl (signed int value)  //4bit
{
  signed int op_lo;

  if (value > 15) {
	printf("ERROR: invalid value for multi-field!\n");
	return 16;
  }
  else {
    op_lo = value % 16;
  }

  return op_lo;
}
signed int
findHiCl (signed int value)
{
  signed int op_hi, store;
  
  store = (value >> 4);

  op_hi = store;

  return op_hi;
}

/* For decoding uint */
signed int
decodeCl (signed int value, signed int op_hi, signed int op_lo)
{
  value = op_lo;
  value += (32 * op_hi);

  return value;
}

/*****************************************************/
/***                  6 bits reg                   ***/
/*****************************************************/

/* For encoding of multi-ifields */
signed int
findLoR (signed int value)
{
  signed int op_lo;

  if (value > 64) {
	printf("ERROR: invalid value for multi-field!\n");
	return 8;
  }
  op_lo = value % 8;
  
  return op_lo;
}
/* For encoding the high bits */
signed int
findHiR (signed int value)
{
  signed int op_hi;

  op_hi = value / 8;

  return op_hi;
}
/* For decoding 6bit reg */
signed int
decode6R (signed int value, signed int op_lo, signed int op_hi)
{
  value = op_lo;
  value += (8 * op_hi);

  return value;
}

/*****************************************************/
/***                  6 bits uint                  ***/
/*****************************************************/

unsigned int
findLo (unsigned int value)
{
  unsigned int op_lo;

  if (value > 64) {
	printf("ERROR: invalid value for multi-field!\n");
	return 8;
  }
  else if (value == 0) {
	printf("ERROR: invalid value for multi-field!\n");
	return 8;
  }
  
  value--;
  op_lo = value % 8;
  
  return op_lo;
}
unsigned int
findHi (unsigned int value)
{
  unsigned int op_hi;

  value--;
  op_hi = value / 8;

  return op_hi;
}
unsigned int
decode6 (unsigned int value, unsigned int op_lo, unsigned int op_hi)
{
  value = op_lo;
  value += (8 * op_hi);

  return value;
}

/*****************************************************/
/***                    9 bits                     ***/
/*****************************************************/
/* For encoding uint */
signed int
findLo9 (signed int value)
{
  signed int op_lo;
  uint8_t mask = 0x07;

  if (value > (511)) {
	printf("ERROR: invalid value for multi-field!\n");
	return 8;
  }
  op_lo = value & mask;

  return op_lo;
}
signed int
findMid9 (signed int value)
{
  signed int op_mid, store;
  uint8_t mask = 0x07;
  
  store = (value >> 3);

  op_mid = store & mask;

  return op_mid;
}
signed int
findHi9 (signed int value)
{
  signed int op_hi, store;
  
  store = (value >> 6);

  op_hi = store;

  return op_hi;
}

/* For decoding uint */
signed int
decode9 (signed int value, signed int op_lo, signed int op_mid, signed int op_hi)
{
  value = op_lo;
  value += (8 * op_mid);
  value += (64 * op_hi);

  return value;
}

/*****************************************************/
/***                    10 bits                    ***/
/*****************************************************/
/* For encoding uint */
signed int
findLo10 (signed int value)
{
  signed int op_lo;

  if (value > (1024)) {
	printf("ERROR: invalid value for multi-field!\n");
	return 8;
  }
  else {
    op_lo = value % 8;
  }

  return op_lo;
}
signed int
findMid10 (signed int value)
{
  signed int op_mid, store;
  uint8_t mask = 0x07;
  
  store = (value >> 3);

  op_mid = store & mask;

  return op_mid;
}
signed int
findHi10 (signed int value)
{
  signed int op_hi, store;
  uint8_t mask = 0x0f;
  
  store = (value >> 6);

  op_hi = store & mask;

  return op_hi;
}

/* For decoding uint */
signed int
decode10 (signed int value, signed int op_lo, signed int op_hi, signed int op_mid)
{
  value = op_lo;
  value += (8 * op_mid);
  value += (64 * op_hi);

  return value;
}

/*****************************************************/
/***                    12 bits                    ***/
/*****************************************************/
/* For encoding a 12bit uint */
signed int
findLo12 (signed int value)
{
  signed int op_lo;
  uint8_t mask = 0x3f;

  if (value > (4095)) {
	printf("ERROR: invalid value for multi-field!\n");
	return 128;
  }
  
  op_lo = value & mask;
  printf("lo: %d\n",op_lo);
  return op_lo;
}
signed int
findHi12 (signed int value)
{
  signed int op_hi, store;
  uint8_t mask = 0x3f;
  
  if (value > (4095)) {
	printf("ERROR: invalid value for multi-field!\n");
	return 128;
  }
  
  store = (value >> 6);

  op_hi = store & mask;
  printf("hi: %d\n",op_hi);

  return op_hi;
}
/* For decoding 12bit int or uint */
signed int
decode12 (signed int value, signed int op_hi, signed int op_lo)
{
  value = op_lo;
  value += (64 * op_hi);

  return value;
}

/*****************************************************/
/***                    16 bits                    ***/
/*****************************************************/

/* For encoding a 16bit uint */
signed int
findLo16 (signed int value)  //6 bits
{
  signed int op_lo;
  uint8_t mask = 0x3f;

  if (value > (65536)) {
	printf("ERROR: invalid value for multi-field!\n");
	return 64;
  }
  
  op_lo = value & mask;

  return op_lo;
}
signed int
findHi16 (signed int value)  //6 bits
{
  signed int op_hi, store;
  uint8_t mask = 0x3f;

  store = (value >> 6);

  op_hi = store & mask;

  return op_hi;
}
signed int
findMid16 (signed int value)   //4 bits
{
  signed int op_mid, store;
  uint8_t mask = 0x0f;
  
  store = (value >> 12);

  op_mid = store & mask;

  return op_mid;
}
/* For decoding 16bit int or uint */
signed int
decode16 (signed int value, signed int op_mid, signed int op_hi, signed int op_lo)
{
  value = op_lo;
  value += (64 * op_mid);
  value += (4096 * op_hi);

  return value;
}

/** --------------------------------------------------
--------------------------------------------------- **/
/*****************************************************/
/***                    Signed                     ***/
/*****************************************************/
/** --------------------------------------------------
--------------------------------------------------- **/
signed int findLoS7   (signed int value);
signed int findHiS7   (signed int value);
signed int decodeS7   (signed int value, signed int op_lo, signed int op_hi);

signed int findLoS10  (signed int value);
signed int findMidS10 (signed int value);
signed int findHiS10  (signed int value);
signed int decodeS10  (signed int value, signed int op_lo,
		       signed int op_mid, signed int op_hi);

signed int findLoS16  (signed int value);
signed int findMidS16 (signed int value);
signed int findHiS16  (signed int value);
signed int decodeS16  (signed int value, signed int op_lo,
		       signed int op_mid, signed int op_hi);

signed int findLoS22  (signed int value);
signed int findMidS22 (signed int value);
signed int findHiS22  (signed int value);
signed int decodeS22  (signed int value, signed int op_lo,
		       signed int op_mid, signed int op_hi);

/*****************************************************/
/***                  7 bits int                   ***/
/*****************************************************/
/* For encoding */
signed int
findLoS7 (signed int value)  //4bit
{
  signed int op_lo;
  uint8_t mask = 0x0f;

  if (value > (64)) {
    printf("ERROR: invalid value for multi-field!\n");
    return 16;
  }
  else if (value < -64) {
    printf("ERROR: invalid value for multi-field!\n");
    return 16;
  }
  else if (value >= 0){
    op_lo = value & mask;
    if (op_lo > 7) {
      op_lo -= 16;
    }
  }
  else {  //neg
    op_lo = 0;
  }
  
  return op_lo;
}
signed int
findHiS7 (signed int value)
{
  signed int op_hi, store;
  
  store = (value >> 4);

  op_hi = store;

  return op_hi;
}
/* For decoding a 7bit int */
signed int
decodeS7 (signed int value, signed int op_lo, signed int op_hi)
{
  if (op_lo < 0) {
    op_lo += 18;
  }
  value = op_lo;
  value += (16 * op_hi);

  return value;
}

/*****************************************************/
/***                    10 bits                    ***/
/*****************************************************/

/* For encoding int */
signed int
findLoS10 (signed int value)
{
  signed int op_lo;
  uint8_t mask = 0x07;

  if (value > (511)) {
	printf("ERROR: invalid value for multi-field!\n");
	return 8;
  }
  else if (value < (-512)) {
	printf("ERROR: invalid value for multi-field!\n");
	return 8;
  }
  
  op_lo = mask & value;
  if (op_lo > 3)
    {
      op_lo -= 8;
    }


  return op_lo;
}
signed int
findMidS10 (signed int value)
{
  signed int op_mid, store;
  uint8_t mask = 0x07;
  
  store = (value >> 3);

  op_mid = mask & store;
  if (op_mid > 3) {
    op_mid -= 8;
  }

  return op_mid;
}
signed int
findHiS10 (signed int value)
{
  signed int op_hi, store;
  
  store = (value >> 6);
  
  op_hi = store;

  return op_hi;
}
/* For decoding 10bit int */
signed int
decodeS10 (signed int value, signed int op_lo, signed int op_mid, signed int op_hi)
{
  if (op_lo < 0)
    {
      op_lo += 8;
    }
  value = op_lo;
  if (op_mid < 0)
    {
      op_mid += 8;
    }
  value += (8 * op_mid);
  value += (64 * op_hi);

  return value;
}

/*****************************************************/
/***                    16 bits                    ***/
/*****************************************************/

/* For encoding int */
signed int
findLoS16 (signed int value)  //6bits
{
  signed int op_lo;
  uint8_t mask = 0x3f;

  if (value > (262141)) {
	printf("ERROR: invalid value for multi-field!\n");
	return 64;
  }
  else if (value < (-262144)) {
	printf("ERROR: invalid value for multi-field!\n");
	return 64;
  }
  
  op_lo = mask & value;
  if (op_lo > 31)
    {
      op_lo -= 64;
    }

  return op_lo;
}
signed int
findMidS16 (signed int value)  //6bits
{
  signed int op_mid, store;
  uint8_t mask = 0x3f;
  
  store = (value >> 6);

  op_mid = mask & store;
  if (op_mid > 31) {
    op_mid -= 64;
  }

  return op_mid;
}
signed int
findHiS16 (signed int value)
{
  signed int op_hi, store;
  
  store = (value >> 12);
  
  op_hi = store;

  return op_hi;
}
/* For decoding 10bit int */
signed int
decodeS16 (signed int value, signed int op_lo, signed int op_mid, signed int op_hi)
{
  if (op_lo < 0)
    {
      op_lo += 64;
    }
  value = op_lo;
  if (op_mid < 0)
    {
      op_mid += 64;
    }
  value += (64 * op_mid);
  value += (4096 * op_hi);

  return value;
}

/*****************************************************/
/***                    22 bits                    ***/
/*****************************************************/

/* For encoding int */
signed int
findLoS22 (signed int value)  //9bits
{
  signed int op_lo;
  uint8_t mask = 0x3ff;

  if (value > (2097152)) {
	printf("ERROR: invalid value for multi-field!\n");
	return 512;
  }
  else if (value < (-2097151)) {
	printf("ERROR: invalid value for multi-field!\n");
	return 512;
  }
  
  op_lo = mask & value;
  if (op_lo > 255)
    {
      op_lo -= 512;
    }

  return op_lo;
}
signed int
findMidS22 (signed int value)  //9bits
{
  signed int op_mid, store;
  uint8_t mask = 0x3ff;
  
  store = (value >> 9);

  op_mid = mask & store;
  if (op_mid > 255) {
    op_mid -= 512;
  }
  
  return op_mid;
}
signed int
findHiS22 (signed int value)
{
  signed int op_hi, store;
  
  store = (value >> 18);
  
  op_hi = store;

  return op_hi;
}
/* For decoding 22bit int */
signed int
decodeS22 (signed int value, signed int op_lo, signed int op_mid, signed int op_hi)
{
  if (op_lo < 0)
    {
      op_lo += 512;
    }
  value = op_lo;
  if (op_mid < 0)
    {
      op_mid += 512;
    }
  value += (512 * op_mid);
  value += (262144 * op_hi);

  return value;
}

#endif /* AAP_MIF_H */

//#include "../cpu/aap_ifield.h"
