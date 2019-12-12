#ifndef __MERLING_MEMCPY_64_INTERFACE_H_
#define __MERLING_MEMCPY_64_INTERFACE_H_
#include <assert.h>
#include <stdint.h>
typedef struct merlin_uint_64 {
  unsigned char data[64 / 8];
} merlin_uint_64;
static uint64_t merlin_get_range_64(merlin_uint_64 *tmp, int low, int len) {
#pragma HLS INLINE SELF
  uint64_t ret = 0;
  int i;
  int start = low;
  switch (len) {
  case 1:
    for (i = 0; i >= 0; --i) {
#pragma HLS unroll
      ret <<= 8;
      ret |= tmp->data[i + start];
    }
    break;
  case 2:
    for (i = 1; i >= 0; --i) {
#pragma HLS unroll
      ret <<= 8;
      ret |= tmp->data[i + start];
    }
    break;
  case 4:
    for (i = 3; i >= 0; --i) {
#pragma HLS unroll
      ret <<= 8;
      ret |= tmp->data[i + start];
    }
    break;
  case 8:
    for (i = 7; i >= 0; --i) {
#pragma HLS unroll
      ret <<= 8;
      ret |= tmp->data[i + start];
    }
    break;
  default:
    assert(0);
  }
  return ret;
}

static void merlin_set_range_64(merlin_uint_64 *tmp, int low, int len,
                                uint64_t val) {
#pragma HLS INLINE SELF
  int i;
  int start = low;
  switch (len) {
  case 1:
    for (i = 0; i < 1; ++i) {
#pragma HLS unroll
      tmp->data[start + i] = val & 0xff;
      val >>= 8;
    }
    break;
  case 2:
    for (i = 0; i < 2; ++i) {
#pragma HLS unroll
      tmp->data[start + i] = val & 0xff;
      val >>= 8;
    }
    break;
  case 4:
    for (i = 0; i < 4; ++i) {
#pragma HLS unroll
      tmp->data[start + i] = val & 0xff;
      val >>= 8;
    }
    break;
  case 8:
    for (i = 0; i < 8; ++i) {
#pragma HLS unroll
      tmp->data[start + i] = val & 0xff;
      val >>= 8;
    }
    break;
  default:
    assert(0);
  }
}
#endif
