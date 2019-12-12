#include "memcpy_64.h"
#define c_get_range(tmp, x, y) merlin_get_range_64(&tmp, y, x)
#define c_set_range(tmp, x, y, val) merlin_set_range_64(&tmp, y, x, val)
#define LARGE_BUS 64
#define MARS_WIDE_BUS_TYPE merlin_uint_64
#include "mars_wide_bus_3d.h"
#undef LARGE_BUS
#undef MARS_WIDE_BUS_TYPE
#undef c_get_range
#undef c_set_range
