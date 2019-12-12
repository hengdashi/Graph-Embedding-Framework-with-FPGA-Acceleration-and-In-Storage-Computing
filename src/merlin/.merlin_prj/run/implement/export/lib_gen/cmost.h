

// This file is located in "mars-gen/drivers/cmost_headers/cmost.h"

#ifndef _CMOST_H_INCLUDED_
#define _CMOST_H_INCLUDED_

//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <math.h>

//#include "cmost_test_common.h"
//#include "cl_platform.h"
#include <stddef.h>
// typedef __SIZE_TYPE__ size_t;
// typedef unsigned long long size_t;


#include "cmost_access.h"
#include "__merlin_opencl_if.h"
#include "__merlin_opencl_kernel_buffer.h"

#define CMOST_CC
#define CMOSTCC
#define _MARS_COMPILER_FLOW_
#define __kernel

#define FPGA_DDR_USER_BASE (0xc0000000)

#ifdef __cplusplus
#define _Bool bool
extern "C" {
#endif
int cmost_malloc(void **a, size_t size);
int cmost_malloc_1d(void **a, const char *filename, int unit_size, size_t d0);
int cmost_malloc_2d(void ***a, const char *filename, int unit_size, size_t d0,
                    size_t d1);
int cmost_malloc_3d(void ****a, const char *filename, int unit_size, size_t d0,
                    size_t d1, size_t d2);
int altera_malloc(void **a, const char *filename, int unit_size, size_t d0);

int cmost_free_1d(void *a);
int cmost_free_2d(void **a);
int cmost_free_3d(void ***a);

int cmost_dump_1d(void *a, const char *filename);
int cmost_dump_2d(void **a, const char *filename);
int cmost_dump_3d(void ***a, const char *filename);
void cmost_break_point();

void cmost_write_file(void *buffer, const char *file_name, size_t size);
void cmost_load_file(void *buffer, const char *file_name, size_t size);

void cmost_start_timer(int i);
void cmost_read_timer_new(int i, float *sec); // return the time in seconds

int cmost_free(void *a);
int cmost_dump(void *a, const char *filename);

void cmost_break_point();

void cmost_start_timer(int i);
void cmost_read_timer_new(int i, float *sec); // return the time in seconds

void __merlin_access_range(
#ifdef __cplusplus
    ...
#endif
);
#ifdef __cplusplus
}
#endif
#endif //_CMOST_H_INCLUDED_
