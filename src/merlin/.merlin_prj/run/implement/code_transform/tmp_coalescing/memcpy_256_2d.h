#include "memcpy_256.h"
#define c_get_range(tmp, x, y) merlin_get_range_256(&tmp, y, x)
#define c_set_range(tmp, x, y, val) merlin_set_range_256(&tmp, y, x, val)
#define LARGE_BUS 256
#define MARS_WIDE_BUS_TYPE merlin_uint_256
#include "mars_wide_bus_2d.h"
#undef LARGE_BUS
#undef MARS_WIDE_BUS_TYPE
#undef c_get_range
#undef c_set_range
