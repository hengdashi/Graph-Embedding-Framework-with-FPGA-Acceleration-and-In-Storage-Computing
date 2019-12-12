# 1 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/__merlinkernel_gcnconv_kernel.cpp"
# 1 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/__merlinkernel_gcnconv_kernel.cpp" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 155 "<built-in>" 3
# 1 "<command line>" 1







# 1 "/opt/Xilinx/Vivado/2019.1.op2552052/common/technology/autopilot/etc/autopilot_ssdm_op.h" 1
# 157 "/opt/Xilinx/Vivado/2019.1.op2552052/common/technology/autopilot/etc/autopilot_ssdm_op.h"
extern "C" {






    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));


    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));




    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));

    void _ssdm_op_Return(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecStable(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecStableContent(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipoDepth(...) __attribute__ ((nothrow));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));

    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));

    void __xilinx_ip_top(...) __attribute__ ((nothrow));


}
# 9 "<command line>" 2
# 1 "<built-in>" 2
# 1 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/__merlinkernel_gcnconv_kernel.cpp" 2



# 1 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/memcpy_512_1d.h" 1


# 1 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/memcpy_512.h" 1


# 1 "/usr/include/assert.h" 1 3 4
# 36 "/usr/include/assert.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 345 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 346 "/usr/include/features.h" 2 3 4
# 375 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 392 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 393 "/usr/include/sys/cdefs.h" 2 3 4
# 376 "/usr/include/features.h" 2 3 4
# 399 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 3 4
# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/gnu/stubs.h" 2 3 4
# 400 "/usr/include/features.h" 2 3 4
# 37 "/usr/include/assert.h" 2 3 4
# 65 "/usr/include/assert.h" 3 4
extern "C" {


extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     throw () __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     throw () __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     throw () __attribute__ ((__noreturn__));


}
# 4 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/memcpy_512.h" 2
# 1 "/opt/Xilinx/Vivado/2019.1.op2552052/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 1 3
# 33 "/opt/Xilinx/Vivado/2019.1.op2552052/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 3
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 22 "/usr/include/bits/wchar.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 23 "/usr/include/bits/wchar.h" 2 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4








typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 34 "/opt/Xilinx/Vivado/2019.1.op2552052/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 2 3
# 5 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/memcpy_512.h" 2
typedef struct merlin_uint_512 {
  unsigned char data[512 / 8];
} merlin_uint_512;
static uint64_t merlin_get_range_512(merlin_uint_512 *tmp, int low, int len) {
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
    ((0) ? static_cast<void> (0) : __assert_fail ("0", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/memcpy_512.h", 43, __PRETTY_FUNCTION__));
  }
  return ret;
}

static void merlin_set_range_512(merlin_uint_512 *tmp, int low, int len,
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
    ((0) ? static_cast<void> (0) : __assert_fail ("0", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/memcpy_512.h", 83, __PRETTY_FUNCTION__));
  }
}
# 4 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/memcpy_512_1d.h" 2




# 1 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h" 1
# 1 "/usr/include/assert.h" 1 3 4
# 65 "/usr/include/assert.h" 3 4
extern "C" {


extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     throw () __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     throw () __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     throw () __attribute__ ((__noreturn__));


}
# 2 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/opt/Xilinx/Vivado/2019.1.op2552052/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 31 "/opt/Xilinx/Vivado/2019.1.op2552052/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;



typedef __typeof__(sizeof(int)) size_t;
# 33 "/usr/include/stdlib.h" 2 3 4

extern "C" {







# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 27 "/usr/include/bits/byteswap.h" 3 4
# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 130 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 131 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 28 "/usr/include/bits/byteswap.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/byteswap.h" 2 3 4






# 1 "/usr/include/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/bits/byteswap.h" 2 3 4
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 97 "/usr/include/stdlib.h" 3 4
typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) throw () ;




extern double atof (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));
# 235 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 236 "/usr/include/stdlib.h" 2 3 4



extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));
# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw () ;


extern long int a64l (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





# 1 "/usr/include/sys/types.h" 1 3 4
# 27 "/usr/include/sys/types.h" 3 4
extern "C" {





typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 59 "/usr/include/time.h" 3 4
typedef __clock_t clock_t;
# 75 "/usr/include/time.h" 3 4
typedef __time_t time_t;
# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;






# 1 "/opt/Xilinx/Vivado/2019.1.op2552052/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 147 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 200 "/usr/include/sys/types.h" 3 4
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 30 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 22 "/usr/include/bits/select.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 23 "/usr/include/bits/select.h" 2 3 4
# 31 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 23 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;






# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 30 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/sys/select.h" 2 3 4








typedef long int __fd_mask;
# 64 "/usr/include/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/sys/select.h" 3 4
extern "C" {
# 106 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/sys/select.h" 3 4
}
# 220 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 29 "/usr/include/sys/sysmacros.h" 3 4
extern "C" {

__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     throw () __attribute__ ((__const__));
# 63 "/usr/include/sys/sysmacros.h" 3 4
}
# 223 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 262 "/usr/include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;






# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 22 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 125 "/usr/include/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 212 "/usr/include/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/sys/types.h" 2 3 4


}
# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) throw ();


extern void srandom (unsigned int __seed) throw ();





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) throw () __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) throw () __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     throw () __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) throw ();

extern void srand (unsigned int __seed) throw ();




extern int rand_r (unsigned int *__seed) throw ();







extern double drand48 (void) throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw () __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) throw ();
extern long int nrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) throw ();
extern long int jrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) throw () __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (1, 2)));
# 465 "/usr/include/stdlib.h" 3 4
extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;
# 479 "/usr/include/stdlib.h" 3 4
extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();




# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/opt/Xilinx/Vivado/2019.1.op2552052/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 492 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     throw () __attribute__ ((__malloc__, __alloc_size__ (2)));




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));




extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));
# 534 "/usr/include/stdlib.h" 3 4
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) throw () __attribute__ ((__noreturn__));





extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));







extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;





extern char *secure_getenv (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;






extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) throw () __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) throw ();
# 605 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1)));
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 629 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 641 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 651 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 673 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 683 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 693 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 705 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 716 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;






extern char *canonicalize_file_name (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) throw () ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);





extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) throw () __attribute__ ((__const__)) ;
extern long int labs (long int __x) throw () __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     throw () __attribute__ ((__const__)) ;
# 807 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (const char *__s, size_t __n) throw () ;


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) throw () ;


extern int wctomb (char *__s, wchar_t __wchar) throw () ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     throw ();
# 884 "/usr/include/stdlib.h" 3 4
extern int rpmatch (const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
# 895 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (const char *__key) throw () __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));



# 1 "/usr/include/bits/stdlib-float.h" 1 3 4
# 952 "/usr/include/stdlib.h" 2 3 4
# 964 "/usr/include/stdlib.h" 3 4
}
# 3 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h" 2
# 13 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h"
static char memcpy_wide_bus_single_read_char_512(merlin_uint_512 *a,
                                                          size_t offset_byte) {
#pragma HLS inline self
 const size_t data_width = sizeof(char);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t start = offset / num_elements;
  char ret = merlin_get_range_512(&a[start], (head_align * data_width), data_width);
  return ret;
}

static void memcpy_wide_bus_single_write_char_512(merlin_uint_512 *c, char c_buf,

                                              size_t offset_byte) {
#pragma HLS inline self
 const size_t data_width = sizeof(char);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t start = offset / num_elements;
  merlin_set_range_512(&c[start], (head_align * data_width), data_width, c_buf);
  return;
}

static short memcpy_wide_bus_single_read_short_512(merlin_uint_512 *a,

                                               size_t offset_byte) {
#pragma HLS inline self
 const size_t data_width = sizeof(short);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t start = offset / num_elements;
  short ret = merlin_get_range_512(&a[start], (head_align * data_width), data_width);
  return ret;
}

static void memcpy_wide_bus_single_write_short_512(merlin_uint_512 *c,

                                              short c_buf, size_t offset_byte) {
#pragma HLS inline self
 const size_t data_width = sizeof(short);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t start = offset / num_elements;
  merlin_set_range_512(&c[start], (head_align * data_width), data_width, c_buf);
  return;
}

static int memcpy_wide_bus_single_read_int_512(merlin_uint_512 *a,
                                                        size_t offset_byte) {
#pragma HLS inline self
 const size_t data_width = sizeof(int);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t start = offset / num_elements;
  int ret = merlin_get_range_512(&a[start], (head_align * data_width), data_width);
  return ret;
}

static void memcpy_wide_bus_single_write_int_512(merlin_uint_512 *c,
                                                          int c_buf,
                                                          size_t offset_byte) {
#pragma HLS inline self
 const size_t data_width = sizeof(int);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t start = offset / num_elements;
  merlin_set_range_512(&c[start], (head_align * data_width), data_width, c_buf);
  return;
}

static long memcpy_wide_bus_single_read_long_512(merlin_uint_512 *a,
                                                          size_t offset_byte) {
#pragma HLS inline self
 const size_t data_width = sizeof(long);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t start = offset / num_elements;
  long ret = merlin_get_range_512(&a[start], (head_align * data_width), data_width);
  return ret;
}

static void memcpy_wide_bus_single_write_long_512(merlin_uint_512 *c, long c_buf,

                                              size_t offset_byte) {
#pragma HLS inline self
 const size_t data_width = sizeof(long);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t start = offset / num_elements;
  merlin_set_range_512(&c[start], (head_align * data_width), data_width, c_buf);
  return;
}

static long long memcpy_wide_bus_single_read_long_long_512(merlin_uint_512 *a,

                                                   size_t offset_byte) {
#pragma HLS inline self
 const size_t data_width = sizeof(long long);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t start = offset / num_elements;
  long long ret = merlin_get_range_512(&a[start], (head_align * data_width), data_width);
  return ret;
}

static void memcpy_wide_bus_single_write_long_long_512(merlin_uint_512 *c,

                                              long long c_buf,
                                              size_t offset_byte) {
#pragma HLS inline self
 const size_t data_width = sizeof(long long);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t start = offset / num_elements;
  merlin_set_range_512(&c[start], (head_align * data_width), data_width, c_buf);
  return;
}

static float memcpy_wide_bus_single_read_float_512(merlin_uint_512 *a,

                                               size_t offset_byte) {
#pragma HLS inline self
 const size_t data_width = sizeof(float);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t start = offset / num_elements;

  int raw_bits = merlin_get_range_512(&a[start], (head_align * data_width), data_width);
  float ret = *(float *)(&raw_bits);
  return ret;
}

static void memcpy_wide_bus_single_write_float_512(merlin_uint_512 *c,

                                              float c_buf, size_t offset_byte) {
#pragma HLS inline self
 const size_t data_width = sizeof(float);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t start = offset / num_elements;
  float buf_tmp = c_buf;
  int raw_bits = *(int *)&buf_tmp;
  merlin_set_range_512(&c[start], (head_align * data_width), data_width, raw_bits);
  return;
}

static double memcpy_wide_bus_single_read_double_512(merlin_uint_512 *a,

                                                size_t offset_byte) {
#pragma HLS inline self
 const size_t data_width = sizeof(double);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t start = offset / num_elements;

  int64_t raw_bits = merlin_get_range_512(&a[start], (head_align * data_width), data_width);
  double ret = *(double *)(&raw_bits);
  return ret;
}

static void memcpy_wide_bus_single_write_double_512(merlin_uint_512 *c,

                                              double c_buf,
                                              size_t offset_byte) {
#pragma HLS inline self
 const size_t data_width = sizeof(double);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t start = offset / num_elements;
  double buf_tmp = c_buf;
  int64_t raw_bits = *(int64_t *)&buf_tmp;
  merlin_set_range_512(&c[start], (head_align * data_width), data_width, raw_bits);
  return;
}

static void memcpy_wide_bus_read_long_512(long *a_buf, merlin_uint_512 *a,

                                       size_t offset_byte, size_t size_byte,
                                       const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(long);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;

  size_t i, j;
  long len = end - start;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  ((len <= const_buf_size / num_elements + 2) ? static_cast<void> (0) : __assert_fail ("len <= const_buf_size / num_elements + 2", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 236, __PRETTY_FUNCTION__));
  ((len >= buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("len >= buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 237, __PRETTY_FUNCTION__));
  if (1 == len) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align || j > tail_align)
        continue;
      a_buf[j - head_align] = merlin_get_range_512(&a[start], (j * data_width), data_width);
    }
    return;
  }

L2:
  for (i = 0; i < len; ++i) {



#pragma HLS pipeline


 if (head_align == 0) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 0] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 1) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 1)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 1] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 2) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 2)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 2] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 3) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 3)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 3] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 4) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 4)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 4] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 5) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 5)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 5] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 6) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 6)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 6] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (data_width == 4 && head_align == 7) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 7)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 7] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (data_width == 4 && head_align == 8) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 8)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 8] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (data_width == 4 && head_align == 9) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 9)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 9] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (data_width == 4 && head_align == 10) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 10)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 10] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (data_width == 4 && head_align == 11) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 11)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 11] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (data_width == 4 && head_align == 12) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 12)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 12] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (data_width == 4 && head_align == 13) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 13)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 13] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (data_width == 4 && head_align == 14) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 14)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 14] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 15)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 15] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }
  }
}

static void memcpy_wide_bus_write_long_512(merlin_uint_512 *c, long *c_buf,

                                       size_t offset_byte, size_t size_byte,
                                       const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(long);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;
  size_t len = end - start;
  size_t i, j;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  size_t align = 0;
  if (len == 1) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      if (j > tail_align)
        continue;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[j - head_align]);
    }
    return;
  }
  if (head_align != 0) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[j - head_align]);
    }
    start++;
    align++;
  }
  if (tail_align != (num_elements - 1))
    align++;
  int burst_len = len - align;
  ((burst_len <= const_buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("burst_len <= const_buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 492, __PRETTY_FUNCTION__));
L3:
  for (i = 0; i < burst_len; ++i) {



#pragma HLS pipeline


 if (head_align == 0) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j - 0]);

      }

    }

    else if (head_align == 1) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 15]);

      }
    }

    else if (head_align == 2) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 14]);

      }
    }

    else if (head_align == 3) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 13]);

      }
    }

    else if (head_align == 4) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 12]);

      }
    }

    else if (head_align == 5) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 11]);

      }
    }

    else if (head_align == 6) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 10]);

      }
    }

    else if (data_width == 4 && head_align == 7) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 9]);

      }
    }

    else if (data_width == 4 && head_align == 8) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 8]);

      }
    }

    else if (data_width == 4 && head_align == 9) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 7]);

      }
    }

    else if (data_width == 4 && head_align == 10) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 6]);

      }
    }

    else if (data_width == 4 && head_align == 11) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 5]);

      }
    }

    else if (data_width == 4 && head_align == 12) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 4]);

      }
    }

    else if (data_width == 4 && head_align == 13) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 3]);

      }
    }

    else if (data_width == 4 && head_align == 14) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 2]);

      }
    }

    else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 1]);

      }
    }
  }
  if (tail_align != num_elements - 1) {
    size_t pos = (len - align) * num_elements;
    pos += (num_elements - head_align) % num_elements;
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j > tail_align)
        continue;
      merlin_set_range_512(&c[end - 1], (j * data_width), data_width, c_buf[pos + j]);
    }
  }
}

static void memcpy_wide_bus_read_long_long_512(long long *a_buf, merlin_uint_512 *a,

                                       size_t offset_byte, size_t size_byte,
                                       const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(long long);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;

  size_t i, j;
  int len = end - start;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  ((len <= const_buf_size / num_elements + 2) ? static_cast<void> (0) : __assert_fail ("len <= const_buf_size / num_elements + 2", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 662, __PRETTY_FUNCTION__));
  ((len >= buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("len >= buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 663, __PRETTY_FUNCTION__));
  if (1 == len) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align || j > tail_align)
        continue;
      a_buf[j - head_align] = merlin_get_range_512(&a[start], (j * data_width), data_width);
    }
    return;
  }

L2:for (i = 0; i < len; ++i) {



#pragma HLS pipeline


 if (head_align == 0) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 0] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 1) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 1)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 1] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 2) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 2)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 2] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 3) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 3)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 3] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 4) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 4)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 4] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 5) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 5)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 5] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 6) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 6)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 6] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 15)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 15] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }
  }
}

static void memcpy_wide_bus_write_long_long_512(merlin_uint_512 *c, long long *c_buf,

                                       size_t offset_byte, size_t size_byte,
                                       const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(long long);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;
  size_t len = end - start;
  size_t i, j;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  size_t align = 0;
  if (len == 1) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      if (j > tail_align)
        continue;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[j - head_align]);
    }
    return;
  }
  if (head_align != 0) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[j - head_align]);
    }
    start++;
    align++;
  }
  if (tail_align != (num_elements - 1))
    align++;
  int burst_len = len - align;
  ((burst_len <= const_buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("burst_len <= const_buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 821, __PRETTY_FUNCTION__));
L3:for (i = 0; i < burst_len; ++i) {



#pragma HLS pipeline


 if (head_align == 0) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j - 0]);

      }

    }

    else if (head_align == 1) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 15]);

      }
    }

    else if (head_align == 2) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 14]);

      }
    }

    else if (head_align == 3) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 13]);

      }
    }

    else if (head_align == 4) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 12]);

      }
    }

    else if (head_align == 5) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 11]);

      }
    }

    else if (head_align == 6) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 10]);

      }
    }

    else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 1]);

      }
    }
  }
  if (tail_align != num_elements - 1) {
    size_t pos = (len - align) * num_elements;
    pos += (num_elements - head_align) % num_elements;
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j > tail_align)
        continue;
      merlin_set_range_512(&c[end - 1], (j * data_width), data_width, c_buf[pos + j]);
    }
  }
}

static void memcpy_wide_bus_read_int_512(int *a_buf, merlin_uint_512 *a,

                                       size_t offset_byte, size_t size_byte,
                                       const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(int);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;

  size_t i, j;
  int len = end - start;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  ((len <= const_buf_size / num_elements + 2) ? static_cast<void> (0) : __assert_fail ("len <= const_buf_size / num_elements + 2", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 926, __PRETTY_FUNCTION__));
  ((len >= buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("len >= buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 927, __PRETTY_FUNCTION__));
  if (1 == len) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align || j > tail_align)
        continue;
      a_buf[j - head_align] = merlin_get_range_512(&a[start], (j * data_width), data_width);
    }
    return;
  }

L2:
  for (i = 0; i < len; ++i) {



#pragma HLS pipeline


 if (head_align == 0) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 0] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 1) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 1)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 1] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 2) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 2)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 2] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 3) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 3)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 3] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 4) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 4)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 4] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 5) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 5)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 5] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 6) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 6)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 6] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 7) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 7)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 7] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 8) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 8)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 8] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 9) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 9)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 9] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 10) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 10)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 10] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 11) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 11)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 11] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 12) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 12)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 12] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 13) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 13)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 13] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 14) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 14)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 14] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 15)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 15] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }
  }
}

static void memcpy_wide_bus_write_int_512(merlin_uint_512 *c, int *c_buf,

                                       size_t offset_byte, size_t size_byte,
                                       const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(int);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;
  size_t len = end - start;
  size_t i, j;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  size_t align = 0;
  if (len == 1) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      if (j > tail_align)
        continue;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[j - head_align]);
    }
    return;
  }
  if (head_align != 0) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[j - head_align]);
    }
    start++;
    align++;
  }
  if (tail_align != (num_elements - 1))
    align++;
  int burst_len = len - align;
  ((burst_len <= const_buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("burst_len <= const_buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 1182, __PRETTY_FUNCTION__));
L3:
  for (i = 0; i < burst_len; ++i) {



#pragma HLS pipeline


 if (head_align == 0) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j - 0]);

      }

    }

    else if (head_align == 1) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 15]);

      }
    }

    else if (head_align == 2) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 14]);

      }
    }

    else if (head_align == 3) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 13]);

      }
    }

    else if (head_align == 4) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 12]);

      }
    }

    else if (head_align == 5) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 11]);

      }
    }

    else if (head_align == 6) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 10]);

      }
    }

    else if (head_align == 7) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 9]);

      }
    }

    else if (head_align == 8) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 8]);

      }
    }

    else if (head_align == 9) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 7]);

      }
    }

    else if (head_align == 10) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 6]);

      }
    }

    else if (head_align == 11) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 5]);

      }
    }

    else if (head_align == 12) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 4]);

      }
    }

    else if (head_align == 13) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 3]);

      }
    }

    else if (head_align == 14) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 2]);

      }
    }

    else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 1]);

      }
    }
  }
  if (tail_align != num_elements - 1) {
    size_t pos = (len - align) * num_elements;
    pos += (num_elements - head_align) % num_elements;
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j > tail_align)
        continue;
      merlin_set_range_512(&c[end - 1], (j * data_width), data_width, c_buf[pos + j]);
    }
  }
}

static void memcpy_wide_bus_read_short_512(short *a_buf, merlin_uint_512 *a,

                                       size_t offset_byte, size_t size_byte,
                                       const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(short);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;

  size_t i, j;
  int len = end - start;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  ((len <= const_buf_size / num_elements + 2) ? static_cast<void> (0) : __assert_fail ("len <= const_buf_size / num_elements + 2", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 1352, __PRETTY_FUNCTION__));
  ((len >= buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("len >= buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 1353, __PRETTY_FUNCTION__));
  if (1 == len) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align || j > tail_align)
        continue;
      a_buf[j - head_align] = merlin_get_range_512(&a[start], (j * data_width), data_width);
    }
    return;
  }

L3:
  for (i = 0; i < len; ++i) {



#pragma HLS pipeline


 if (head_align == 0) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 0] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 1) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 1)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 1] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 2) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 2)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 2] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 3) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 3)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 3] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 4) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 4)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 4] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 5) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 5)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 5] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 6) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 6)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 6] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 7) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 7)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 7] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 8) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 8)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 8] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 9) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 9)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 9] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 10) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 10)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 10] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 11) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 11)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 11] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 12) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 12)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 12] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 13) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 13)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 13] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 14) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 14)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 14] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 15) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 15)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 15] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 16) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 16)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 16] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 17) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 17)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 17] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 18) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 18)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 18] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 19) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 19)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 19] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 20) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 20)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 20] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 21) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 21)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 21] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 22) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 22)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 22] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 23) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 23)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 23] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 24) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 24)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 24] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 25) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 25)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 25] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 26) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 26)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 26] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 27) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 27)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 27] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 28) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 28)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 28] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 29) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 29)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 29] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 30) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 30)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 30] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 31)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 31] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }
  }
}

static void memcpy_wide_bus_write_short_512(merlin_uint_512 *c, short *c_buf,

                                       size_t offset_byte, size_t size_byte,
                                       const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(short);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;
  size_t len = end - start;
  size_t i, j;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  size_t align = 0;
  if (len == 1) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      if (j > tail_align)
        continue;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[j - head_align]);
    }
    return;
  }
  if (head_align != 0) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[j - head_align]);
    }
    start++;
    align++;
  }
  if (tail_align != (num_elements - 1))
    align++;
  int burst_len = len - align;
  ((burst_len <= const_buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("burst_len <= const_buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 1766, __PRETTY_FUNCTION__));
L3:
  for (i = 0; i < burst_len; ++i) {



#pragma HLS pipeline


 if (head_align == 0) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j - 0]);

      }

    } else if (head_align == 1) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 31]);

      }
    }

    else if (head_align == 2) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 30]);

      }
    }

    else if (head_align == 3) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 29]);

      }
    }

    else if (head_align == 4) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 28]);

      }
    }

    else if (head_align == 5) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 27]);

      }
    }

    else if (head_align == 6) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 26]);

      }
    }

    else if (head_align == 7) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 25]);

      }
    }

    else if (head_align == 8) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 24]);

      }
    }

    else if (head_align == 9) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 23]);

      }
    }

    else if (head_align == 10) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 22]);

      }
    }

    else if (head_align == 11) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 21]);

      }
    }

    else if (head_align == 12) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 20]);

      }
    }

    else if (head_align == 13) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 19]);

      }
    }

    else if (head_align == 14) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 18]);

      }
    }

    else if (head_align == 15) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 17]);

      }
    }

    else if (head_align == 16) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 16]);

      }
    }

    else if (head_align == 17) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 15]);

      }
    }

    else if (head_align == 18) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 14]);

      }
    }

    else if (head_align == 19) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 13]);

      }
    }

    else if (head_align == 20) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 12]);

      }
    }

    else if (head_align == 21) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 11]);

      }
    }

    else if (head_align == 22) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 10]);

      }
    }

    else if (head_align == 23) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 9]);

      }
    }

    else if (head_align == 24) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 8]);

      }
    }

    else if (head_align == 25) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 7]);

      }
    }

    else if (head_align == 26) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 6]);

      }
    }

    else if (head_align == 27) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 5]);

      }
    }

    else if (head_align == 28) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 4]);

      }
    }

    else if (head_align == 29) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 3]);

      }
    }

    else if (head_align == 30) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 2]);

      }
    }

    else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 1]);

      }
    }
  }
  if (tail_align != num_elements - 1) {
    size_t pos = (len - align) * num_elements;
    pos += (num_elements - head_align) % num_elements;
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j > tail_align)
        continue;
      merlin_set_range_512(&c[end - 1], (j * data_width), data_width, c_buf[pos + j]);
    }
  }
}

static void memcpy_wide_bus_read_char_512(char *a_buf, merlin_uint_512 *a,

                                       size_t offset_byte, size_t size_byte,
                                       const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(char);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;

  size_t i, j;
  int len = end - start;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  ((len <= const_buf_size / num_elements + 2) ? static_cast<void> (0) : __assert_fail ("len <= const_buf_size / num_elements + 2", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 2062, __PRETTY_FUNCTION__));
  ((len >= buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("len >= buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 2063, __PRETTY_FUNCTION__));
  if (1 == len) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align || j > tail_align)
        continue;
      a_buf[j - head_align] = merlin_get_range_512(&a[start], (j * data_width), data_width);
    }
    return;
  }

L2:
  for (i = 0; i < len; ++i) {



#pragma HLS pipeline


 if (head_align == 0) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 0] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 1) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 1)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 1] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 2) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 2)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 2] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 3) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 3)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 3] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 4) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 4)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 4] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 5) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 5)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 5] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 6) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 6)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 6] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 7) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 7)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 7] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 8) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 8)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 8] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 9) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 9)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 9] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 10) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 10)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 10] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 11) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 11)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 11] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 12) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 12)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 12] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 13) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 13)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 13] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }

    else if (head_align == 14) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 14)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 14] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 15) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 15)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 15] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 16) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 16)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 16] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 17) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 17)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 17] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 18) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 18)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 18] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 19) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 19)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 19] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 20) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 20)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 20] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 21) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 21)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 21] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 22) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 22)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 22] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 23) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 23)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 23] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 24) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 24)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 24] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 25) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 25)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 25] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 26) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 26)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 26] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 27) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 27)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 27] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 28) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 28)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 28] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 29) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 29)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 29] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 30) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 30)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 30] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 31) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 31)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 31] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 32) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 32)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 32] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 33) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 33)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 33] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 34) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 34)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 34] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 35) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 35)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 35] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 36) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 36)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 36] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 37) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 37)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 37] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 38) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 38)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 38] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 39) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 39)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 39] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 40) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 40)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 40] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 41) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 41)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 41] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 42) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 42)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 42] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 43) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 43)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 43] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 44) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 44)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 44] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 45) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 45)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 45] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 46) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 46)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 46] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 47) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 47)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 47] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 48) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 48)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 48] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 49) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 49)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 49] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 50) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 50)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 50] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 51) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 51)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 51] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 52) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 52)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 52] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 53) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 53)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 53] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 54) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 54)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 54] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 55) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 55)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 55] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 56) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 56)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 56] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 57) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 57)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 57] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 58) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 58)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 58] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 59) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 59)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 59] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 60) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 60)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 60] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 61) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 61)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 61] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else if (head_align == 62) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 62)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 62] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    } else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 63)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        a_buf[i * num_elements + j - 63] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }
  }
}

static void memcpy_wide_bus_write_char_512(merlin_uint_512 *c, char *c_buf,

                                       size_t offset_byte, size_t size_byte,
                                       const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(char);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;
  size_t len = end - start;
  size_t i, j;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  size_t align = 0;
  if (len == 1) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      if (j > tail_align)
        continue;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[j - head_align]);
    }
    return;
  }
  if (head_align != 0) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[j - head_align]);
    }
    start++;
    align++;
  }
  if (tail_align != (num_elements - 1))
    align++;
  int burst_len = len - align;
  ((burst_len <= const_buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("burst_len <= const_buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 2796, __PRETTY_FUNCTION__));
L3:
  for (i = 0; i < burst_len; ++i) {



#pragma HLS pipeline


 if (head_align == 0) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j - 0]);

      }

    } else if (head_align == 1) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 63]);

      }
    }

    else if (head_align == 2) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 62]);

      }
    }

    else if (head_align == 3) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 61]);

      }
    }

    else if (head_align == 4) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 60]);

      }
    }

    else if (head_align == 5) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 59]);

      }
    }

    else if (head_align == 6) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 58]);

      }
    }

    else if (head_align == 7) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 57]);

      }
    }

    else if (head_align == 8) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 56]);

      }
    }

    else if (head_align == 9) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 55]);

      }
    }

    else if (head_align == 10) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 54]);

      }
    }

    else if (head_align == 11) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 53]);

      }
    }

    else if (head_align == 12) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 52]);

      }
    }

    else if (head_align == 13) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 51]);

      }
    }

    else if (head_align == 14) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 50]);

      }
    }

    else if (head_align == 15) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 49]);

      }
    }

    else if (head_align == 16) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 48]);

      }
    }

    else if (head_align == 17) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 47]);

      }
    }

    else if (head_align == 18) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 46]);

      }
    }

    else if (head_align == 19) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 45]);

      }
    }

    else if (head_align == 20) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 44]);

      }
    }

    else if (head_align == 21) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 43]);

      }
    }

    else if (head_align == 22) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 42]);

      }
    }

    else if (head_align == 23) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 41]);

      }
    }

    else if (head_align == 24) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 40]);

      }
    }

    else if (head_align == 25) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 39]);

      }
    }

    else if (head_align == 26) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 38]);

      }
    }

    else if (head_align == 27) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 37]);

      }
    }

    else if (head_align == 28) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 36]);

      }
    }

    else if (head_align == 29) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 35]);

      }
    }

    else if (head_align == 30) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 34]);

      }
    }

    else if (head_align == 31) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 33]);

      }
    }

    else if (head_align == 32) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 32]);

      }
    }

    else if (head_align == 33) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 31]);

      }
    }

    else if (head_align == 34) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 30]);

      }
    }

    else if (head_align == 35) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 29]);

      }
    }

    else if (head_align == 36) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 28]);

      }
    }

    else if (head_align == 37) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 27]);

      }
    }

    else if (head_align == 38) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 26]);

      }
    }

    else if (head_align == 39) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 25]);

      }
    }

    else if (head_align == 40) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 24]);

      }
    }

    else if (head_align == 41) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 23]);

      }
    }

    else if (head_align == 42) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 22]);

      }
    }

    else if (head_align == 43) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 21]);

      }
    }

    else if (head_align == 44) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 20]);

      }
    }

    else if (head_align == 45) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 19]);

      }
    }

    else if (head_align == 46) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 18]);

      }
    }

    else if (head_align == 47) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 17]);

      }
    }

    else if (head_align == 48) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 16]);

      }
    }

    else if (head_align == 49) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 15]);

      }
    }

    else if (head_align == 50) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 14]);

      }
    }

    else if (head_align == 51) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 13]);

      }
    }

    else if (head_align == 52) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 12]);

      }
    }

    else if (head_align == 53) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 11]);

      }
    }

    else if (head_align == 54) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 10]);

      }
    }

    else if (head_align == 55) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 9]);

      }
    }

    else if (head_align == 56) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 8]);

      }
    }

    else if (head_align == 57) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 7]);

      }
    }

    else if (head_align == 58) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 6]);

      }
    }

    else if (head_align == 59) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 5]);

      }
    }

    else if (head_align == 60) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 4]);

      }
    }

    else if (head_align == 61) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 3]);

      }
    }

    else if (head_align == 62) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 2]);

      }
    }

    else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[i * num_elements + j + 1]);

      }
    }
  }
  if (tail_align != num_elements - 1) {
    size_t pos = (len - align) * num_elements;
    pos += (num_elements - head_align) % num_elements;
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j > tail_align)
        continue;
      merlin_set_range_512(&c[end - 1], (j * data_width), data_width, c_buf[pos + j]);
    }
  }
}

static void memcpy_wide_bus_read_float_512(float *a_buf, merlin_uint_512 *a,

                                       size_t offset_byte, size_t size_byte,
                                       const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(float);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;

  size_t i, j;
  int len = end - start;
  if (head_align == 0) {
    len = (buf_size + num_elements - 1) / num_elements;
  }
  ((len <= const_buf_size / num_elements + 2) ? static_cast<void> (0) : __assert_fail ("len <= const_buf_size / num_elements + 2", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 3349, __PRETTY_FUNCTION__));
  ((len >= buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("len >= buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 3350, __PRETTY_FUNCTION__));
  if (1 == len) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align || j > tail_align)
        continue;
      int raw_bits = merlin_get_range_512(&a[start], (j * data_width), data_width);
      a_buf[j - head_align] = *(float *)(&raw_bits);
    }
    return;
  }

L2:
  for (i = 0; i < len; ++i) {



#pragma HLS pipeline


 if (head_align == 0) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == end - start - 1 && j > tail_align)
          continue;
        int raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 0] = *(float *)(&raw_bits);
      }
    }

    else if (head_align == 1) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 1)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 1] = *(float *)(&raw_bits);
      }
    }

    else if (head_align == 2) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 2)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 2] = *(float *)(&raw_bits);
      }
    }

    else if (head_align == 3) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 3)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 3] = *(float *)(&raw_bits);
      }
    }

    else if (head_align == 4) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 4)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 4] = *(float *)(&raw_bits);
      }
    }

    else if (head_align == 5) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 5)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 5] = *(float *)(&raw_bits);
      }
    }

    else if (head_align == 6) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 6)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 6] = *(float *)(&raw_bits);
      }
    }

    else if (head_align == 7) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 7)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 7] = *(float *)(&raw_bits);
      }
    }

    else if (head_align == 8) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 8)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 8] = *(float *)(&raw_bits);
      }
    }

    else if (head_align == 9) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 9)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 9] = *(float *)(&raw_bits);
      }
    }

    else if (head_align == 10) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 10)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 10] = *(float *)(&raw_bits);
      }
    }

    else if (head_align == 11) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 11)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 11] = *(float *)(&raw_bits);
      }
    }

    else if (head_align == 12) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 12)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 12] = *(float *)(&raw_bits);
      }
    }

    else if (head_align == 13) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 13)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 13] = *(float *)(&raw_bits);
      }
    }

    else if (head_align == 14) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 14)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 14] = *(float *)(&raw_bits);
      }
    }

    else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 15)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 15] = *(float *)(&raw_bits);
      }
    }
  }
}

static void memcpy_wide_bus_write_float_512(merlin_uint_512 *c, float *c_buf,

                                       size_t offset_byte, size_t size_byte,
                                       const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(float);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;
  size_t len = end - start;
  size_t i, j;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  if (len == 1) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      if (j > tail_align)
        continue;
      float buf_tmp = c_buf[j - head_align];
      int raw_bits = *(int *)&buf_tmp;
      merlin_set_range_512(&c[start], (j * data_width), data_width, raw_bits);
    }
    return;
  }
  unsigned align = 0;
  if (head_align != 0) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      float buf_tmp = c_buf[j - head_align];
      int raw_bits = *(int *)&buf_tmp;
      merlin_set_range_512(&c[start], (j * data_width), data_width, raw_bits);
    }
    start++;
    align++;
  }
  if (tail_align != (num_elements - 1))
    align++;
  int burst_len = len - align;
  ((burst_len <= const_buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("burst_len <= const_buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 3610, __PRETTY_FUNCTION__));
L3:
  for (i = 0; i < burst_len; ++i) {



#pragma HLS pipeline


 if (head_align == 0) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 float buf_tmp = c_buf[i * num_elements + j - 0];
        int raw_bits = *(int *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }

    }

    else if (head_align == 1) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 float buf_tmp = c_buf[i * num_elements + j + 15];
        int raw_bits = *(int *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else if (head_align == 2) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 float buf_tmp = c_buf[i * num_elements + j + 14];
        int raw_bits = *(int *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else if (head_align == 3) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 float buf_tmp = c_buf[i * num_elements + j + 13];
        int raw_bits = *(int *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else if (head_align == 4) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 float buf_tmp = c_buf[i * num_elements + j + 12];
        int raw_bits = *(int *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else if (head_align == 5) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 float buf_tmp = c_buf[i * num_elements + j + 11];
        int raw_bits = *(int *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else if (head_align == 6) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 float buf_tmp = c_buf[i * num_elements + j + 10];
        int raw_bits = *(int *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else if (head_align == 7) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 float buf_tmp = c_buf[i * num_elements + j + 9];
        int raw_bits = *(int *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else if (head_align == 8) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 float buf_tmp = c_buf[i * num_elements + j + 8];
        int raw_bits = *(int *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else if (head_align == 9) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 float buf_tmp = c_buf[i * num_elements + j + 7];
        int raw_bits = *(int *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else if (head_align == 10) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 float buf_tmp = c_buf[i * num_elements + j + 6];
        int raw_bits = *(int *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else if (head_align == 11) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 float buf_tmp = c_buf[i * num_elements + j + 5];
        int raw_bits = *(int *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else if (head_align == 12) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 float buf_tmp = c_buf[i * num_elements + j + 4];
        int raw_bits = *(int *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else if (head_align == 13) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 float buf_tmp = c_buf[i * num_elements + j + 3];
        int raw_bits = *(int *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else if (head_align == 14) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 float buf_tmp = c_buf[i * num_elements + j + 2];
        int raw_bits = *(int *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 float buf_tmp = c_buf[i * num_elements + j + 1];
        int raw_bits = *(int *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }
  }
  if (tail_align != num_elements - 1) {
    size_t pos = (len - align) * num_elements;
    pos += (num_elements - head_align) % num_elements;
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j > tail_align)
        continue;
      float buf_tmp = c_buf[pos + j];
      int raw_bits = *(int *)&buf_tmp;
      merlin_set_range_512(&c[end - 1], (j * data_width), data_width, raw_bits);
    }
  }
}

static void memcpy_wide_bus_read_double_512(double *a_buf, merlin_uint_512 *a,

                                       size_t offset_byte, size_t size_byte,
                                       const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(double);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;

  size_t i, j;
  int len = end - start;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  ((len <= const_buf_size / num_elements + 2) ? static_cast<void> (0) : __assert_fail ("len <= const_buf_size / num_elements + 2", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 3798, __PRETTY_FUNCTION__));
  ((len >= buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("len >= buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 3799, __PRETTY_FUNCTION__));
  if (1 == len) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align || j > tail_align)
        continue;
      int64_t raw_bits = merlin_get_range_512(&a[start], (j * data_width), data_width);
      a_buf[j - head_align] = *(double *)(&raw_bits);
    }
    return;
  }

L2:
  for (i = 0; i < len; ++i) {



#pragma HLS pipeline


 if (head_align == 0) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == end - start - 1 && j > tail_align)
          continue;
        int64_t raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 0] = *(double *)(&raw_bits);
      }
    }

    else if (head_align == 1) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 1)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int64_t raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 1] = *(double *)(&raw_bits);
      }
    }

    else if (head_align == 2) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 2)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int64_t raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 2] = *(double *)(&raw_bits);
      }
    }

    else if (head_align == 3) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 3)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int64_t raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 3] = *(double *)(&raw_bits);
      }
    }

    else if (head_align == 4) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 4)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int64_t raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 4] = *(double *)(&raw_bits);
      }
    }

    else if (head_align == 5) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 5)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int64_t raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 5] = *(double *)(&raw_bits);
      }
    }

    else if (head_align == 6) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 6)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int64_t raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 6] = *(double *)(&raw_bits);
      }
    }

    else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < 7)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int64_t raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[i * num_elements + j - 7] = *(double *)(&raw_bits);
      }
    }
  }
}

static void memcpy_wide_bus_write_double_512(merlin_uint_512 *c, double *c_buf,

                                       size_t offset_byte, size_t size_byte,
                                       const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(double);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;
  size_t len = end - start;
  size_t i, j;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  if (len == 1) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      if (j > tail_align)
        continue;
      double buf_tmp = c_buf[j - head_align];
      int64_t raw_bits = *(int64_t *)&buf_tmp;
      merlin_set_range_512(&c[start], (j * data_width), data_width, raw_bits);
    }
    return;
  }
  size_t align = 0;
  if (head_align != 0) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      double buf_tmp = c_buf[j - head_align];
      int64_t raw_bits = *(int64_t *)&buf_tmp;
      merlin_set_range_512(&c[start], (j * data_width), data_width, raw_bits);
    }
    start++;
    align++;
  }
  if (tail_align != (num_elements - 1))
    align++;
  int burst_len = len - align;
  ((burst_len <= const_buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("burst_len <= const_buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus.h", 3963, __PRETTY_FUNCTION__));
L3:
  for (i = 0; i < burst_len; ++i) {



#pragma HLS pipeline


 if (head_align == 0) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 double buf_tmp = c_buf[i * num_elements + j - 0];
        int64_t raw_bits = *(int64_t *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }

    }

    else if (head_align == 1) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 double buf_tmp = c_buf[i * num_elements + j + 7];
        int64_t raw_bits = *(int64_t *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else if (head_align == 2) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 double buf_tmp = c_buf[i * num_elements + j + 6];
        int64_t raw_bits = *(int64_t *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else if (head_align == 3) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 double buf_tmp = c_buf[i * num_elements + j + 5];
        int64_t raw_bits = *(int64_t *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else if (head_align == 4) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 double buf_tmp = c_buf[i * num_elements + j + 4];
        int64_t raw_bits = *(int64_t *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else if (head_align == 5) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 double buf_tmp = c_buf[i * num_elements + j + 3];
        int64_t raw_bits = *(int64_t *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else if (head_align == 6) {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 double buf_tmp = c_buf[i * num_elements + j + 2];
        int64_t raw_bits = *(int64_t *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }

    else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 double buf_tmp = c_buf[i * num_elements + j + 1];
        int64_t raw_bits = *(int64_t *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }
  }
  if (tail_align != num_elements - 1) {
    size_t pos = (len - align) * num_elements;
    pos += (num_elements - head_align) % num_elements;
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j > tail_align)
        continue;
      double buf_tmp = c_buf[pos + j];
      int64_t raw_bits = *(int64_t *)&buf_tmp;
      merlin_set_range_512(&c[end - 1], (j * data_width), data_width, raw_bits);
    }
  }
}
# 9 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/memcpy_512_1d.h" 2
# 5 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/__merlinkernel_gcnconv_kernel.cpp" 2

# 1 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/memcpy_512_2d.h" 1





# 1 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h" 1
# 1 "/usr/include/assert.h" 1 3 4
# 65 "/usr/include/assert.h" 3 4
extern "C" {


extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     throw () __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     throw () __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     throw () __attribute__ ((__noreturn__));


}
# 2 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h" 2
# 19 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h"
static void memcpy_wide_bus_read_char_2d_16_512(
    char a_buf[][16], size_t index2_offset, size_t index1_offset,
    merlin_uint_512 *a, size_t offset_byte, size_t size_byte,
    const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(char);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;

  size_t i, j;
  size_t index2 = index2_offset, index1 = index1_offset;
  int aligned = 0;
  if ((16 % num_elements) == 0 && (index1_offset % num_elements) == 0) {
    aligned = 1;
    index1 = index1_offset / num_elements;
  } else if (((num_elements % 16) == 0) &&
             ((index2_offset * 16) % num_elements) == 0 && !index1_offset) {
    aligned = -1;
    index2 = index2_offset * 16 / num_elements;
  }
  const size_t bound = 16 / num_elements;
  const size_t bound0 = num_elements / 16;
  const size_t index_offset = index2_offset * 16 + index1_offset;
  int len = end - start;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  ((len <= const_buf_size / num_elements + 2) ? static_cast<void> (0) : __assert_fail ("len <= const_buf_size / num_elements + 2", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 52, __PRETTY_FUNCTION__));
  ((len >= buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("len >= buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 53, __PRETTY_FUNCTION__));
  if (1 == len) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align || j > tail_align)
        continue;
      size_t buf_index = j - head_align + index_offset;
      a_buf[buf_index / 16][buf_index % 16] =
          merlin_get_range_512(&a[start], (j * data_width), data_width);
    }
    return;
  }

L2:
  for (i = 0; i < len; ++i) {



#pragma HLS pipeline


 if (head_align == 0 && aligned) {
      if (aligned == 1) {
        for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == end - start - 1 && j > tail_align)
            continue;
          a_buf[index2][index1 * num_elements + j] =
              merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        }
        if (index1 == bound - 1) { index1 = 0; ++index2; } else index1++;
      } else if (aligned == -1) {
        int j0, j1;
        for (j0 = 0; j0 < bound0; ++j0) {
          for (j1 = 0; j1 < 16; ++j1) {
            j = j0 * 16 + j1;
            if (i == end - start - 1 && j > tail_align)
              continue;
            a_buf[index2 * bound0 + j0][j1] =
                merlin_get_range_512(&a[i + start], (j * data_width), data_width);
          }
        }
        index2++;
      }
    } else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < head_align)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        size_t buf_index = (i * num_elements + j - head_align) + index_offset;
        a_buf[buf_index / 16][buf_index % 16] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }
  }
}

static void memcpy_wide_bus_write_char_2d_16_512(
    merlin_uint_512 *c, char c_buf[][16], size_t index2_offset,
    size_t index1_offset, size_t offset_byte, size_t size_byte,
    const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(char);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;
  size_t len = end - start;
  size_t index_offset = index2_offset * 16 + index1_offset;
  size_t i, j;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  size_t align = 0;
  if (len == 1) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      if (j > tail_align)
        continue;
      size_t buf_index = j - head_align + index_offset;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[buf_index / 16][buf_index % 16]);

    }
    return;
  }
  if (head_align != 0) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      size_t buf_index = j - head_align + index_offset;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[buf_index / 16][buf_index % 16]);

    }
    start++;
    align++;
  }
  if (tail_align != (num_elements - 1))
    align++;
  size_t index2 = index2_offset, index1 = index1_offset;
  int aligned = 0;
  if ((16 % num_elements) == 0 && (index1_offset % num_elements) == 0) {
    aligned = 1;
    index1 = index1_offset / num_elements;
  } else if ((num_elements % 16) == 0 &&
             ((index2_offset * 16) % num_elements) == 0 && !index1_offset) {
    aligned = -1;
    index2 = index2_offset * 16 / num_elements;
  }
  const size_t bound = 16 / num_elements;
  const size_t bound0 = num_elements / 16;
  int burst_len = len - align;
  ((burst_len <= const_buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("burst_len <= const_buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 173, __PRETTY_FUNCTION__));
L3:
  for (i = 0; i < burst_len; ++i) {



#pragma HLS pipeline


 if (head_align == 0 && aligned) {
      if (aligned == 1) {
        for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 int val = c_buf[index2][index1 * num_elements + j];
          merlin_set_range_512(&c[i + start], (j * data_width), data_width, val);
        }
        if (index1 == bound - 1) { index1 = 0; ++index2; } else index1++;
      } else if (aligned == -1) {
        int j0, j1;
        for (j0 = 0; j0 < bound0; ++j0) {
          for (j1 = 0; j1 < 16; ++j1) {
            j = j0 * 16 + j1;
            int val = c_buf[index2 * bound0 + j0][j1];
            merlin_set_range_512(&c[i + start], (j * data_width), data_width, val);
          }
        }
        index2++;
      }
    } else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 size_t buf_index =
            (i * num_elements + j + num_elements - head_align) + index_offset;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[buf_index / 16][index_offset % 16]);

      }
    }
  }
  if (tail_align != num_elements - 1) {
    size_t pos = (len - align) * num_elements;
    pos += (num_elements - head_align) % num_elements + index_offset;
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j > tail_align)
        continue;
      merlin_set_range_512(&c[end - 1], (j * data_width), data_width, c_buf[(pos + j) / 16][(pos + j) % 16]);

    }
  }
}

static void memcpy_wide_bus_read_short_2d_16_512(
    short a_buf[][16], size_t index2_offset, size_t index1_offset,
    merlin_uint_512 *a, size_t offset_byte, size_t size_byte,
    const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(short);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;

  size_t i, j;
  size_t index2 = index2_offset, index1 = index1_offset;
  int aligned = 0;
  if ((16 % num_elements) == 0 && (index1_offset % num_elements) == 0) {
    aligned = 1;
    index1 = index1_offset / num_elements;
  } else if (((num_elements % 16) == 0) &&
             ((index2_offset * 16) % num_elements) == 0 && !index1_offset) {
    aligned = -1;
    index2 = index2_offset * 16 / num_elements;
  }
  const size_t bound = 16 / num_elements;
  const size_t bound0 = num_elements / 16;
  const size_t index_offset = index2_offset * 16 + index1_offset;
  int len = end - start;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  ((len <= const_buf_size / num_elements + 2) ? static_cast<void> (0) : __assert_fail ("len <= const_buf_size / num_elements + 2", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 257, __PRETTY_FUNCTION__));
  ((len >= buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("len >= buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 258, __PRETTY_FUNCTION__));
  if (1 == len) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align || j > tail_align)
        continue;
      size_t buf_index = j - head_align + index_offset;
      a_buf[buf_index / 16][buf_index % 16] =
          merlin_get_range_512(&a[start], (j * data_width), data_width);
    }
    return;
  }

L2:
  for (i = 0; i < len; ++i) {



#pragma HLS pipeline


 if (head_align == 0 && aligned) {
      if (aligned == 1) {
        for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == end - start - 1 && j > tail_align)
            continue;
          a_buf[index2][index1 * num_elements + j] =
              merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        }
        if (index1 == bound - 1) { index1 = 0; ++index2; } else index1++;
      } else if (aligned == -1) {
        int j0, j1;
        for (j0 = 0; j0 < bound0; ++j0) {
          for (j1 = 0; j1 < 16; ++j1) {
            j = j0 * 16 + j1;
            if (i == end - start - 1 && j > tail_align)
              continue;
            a_buf[index2 * bound0 + j0][j1] =
                merlin_get_range_512(&a[i + start], (j * data_width), data_width);
          }
        }
        index2++;
      }
    } else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < head_align)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        size_t buf_index = (i * num_elements + j - head_align) + index_offset;
        a_buf[buf_index / 16][buf_index % 16] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }
  }
}

static void memcpy_wide_bus_write_short_2d_16_512(
    merlin_uint_512 *c, short c_buf[][16], size_t index2_offset,
    size_t index1_offset, size_t offset_byte, size_t size_byte,
    const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(short);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;
  size_t len = end - start;
  size_t index_offset = index2_offset * 16 + index1_offset;
  size_t i, j;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  size_t align = 0;
  if (len == 1) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      if (j > tail_align)
        continue;
      size_t buf_index = j - head_align + index_offset;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[buf_index / 16][buf_index % 16]);

    }
    return;
  }
  if (head_align != 0) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      size_t buf_index = j - head_align + index_offset;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[buf_index / 16][buf_index % 16]);

    }
    start++;
    align++;
  }
  if (tail_align != (num_elements - 1))
    align++;
  size_t index2 = index2_offset, index1 = index1_offset;
  int aligned = 0;
  if ((16 % num_elements) == 0 && (index1_offset % num_elements) == 0) {
    aligned = 1;
    index1 = index1_offset / num_elements;
  } else if ((num_elements % 16) == 0 &&
             ((index2_offset * 16) % num_elements) == 0 && !index1_offset) {
    aligned = -1;
    index2 = index2_offset * 16 / num_elements;
  }
  const size_t bound = 16 / num_elements;
  const size_t bound0 = num_elements / 16;
  int burst_len = len - align;
  ((burst_len <= const_buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("burst_len <= const_buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 378, __PRETTY_FUNCTION__));
L3:
  for (i = 0; i < burst_len; ++i) {



#pragma HLS pipeline


 if (head_align == 0 && aligned) {
      if (aligned == 1) {
        for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 int val = c_buf[index2][index1 * num_elements + j];
          merlin_set_range_512(&c[i + start], (j * data_width), data_width, val);
        }
        if (index1 == bound - 1) { index1 = 0; ++index2; } else index1++;
      } else if (aligned == -1) {
        int j0, j1;
        for (j0 = 0; j0 < bound0; ++j0) {
          for (j1 = 0; j1 < 16; ++j1) {
            j = j0 * 16 + j1;
            int val = c_buf[index2 * bound0 + j0][j1];
            merlin_set_range_512(&c[i + start], (j * data_width), data_width, val);
          }
        }
        index2++;
      }
    } else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 size_t buf_index =
            (i * num_elements + j + num_elements - head_align) + index_offset;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[buf_index / 16][index_offset % 16]);

      }
    }
  }
  if (tail_align != num_elements - 1) {
    size_t pos = (len - align) * num_elements;
    pos += (num_elements - head_align) % num_elements + index_offset;
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j > tail_align)
        continue;
      merlin_set_range_512(&c[end - 1], (j * data_width), data_width, c_buf[(pos + j) / 16][(pos + j) % 16]);

    }
  }
}

static void memcpy_wide_bus_read_long_2d_16_512(
    long a_buf[][16], size_t index2_offset, size_t index1_offset,
    merlin_uint_512 *a,

    size_t offset_byte, size_t size_byte, const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(long);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;

  size_t i, j;
  size_t index2 = index2_offset, index1 = index1_offset;
  int aligned = 0;
  if ((16 % num_elements) == 0 && (index1_offset % num_elements) == 0) {
    aligned = 1;
    index1 = index1_offset / num_elements;
  } else if ((num_elements % 16) == 0 &&
             (index2_offset * 16 % num_elements) == 0 && !index1_offset) {
    aligned = -1;
    index2 = index2_offset * 16 / num_elements;
  }
  const size_t bound = 16 / num_elements;
  const size_t bound0 = num_elements / 16;
  const size_t index_offset = index2_offset * 16 + index1_offset;
  int len = end - start;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  ((len <= const_buf_size / num_elements + 2) ? static_cast<void> (0) : __assert_fail ("len <= const_buf_size / num_elements + 2", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 463, __PRETTY_FUNCTION__));
  ((len >= buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("len >= buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 464, __PRETTY_FUNCTION__));
  if (1 == len) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align || j > tail_align)
        continue;
      size_t buf_index = j - head_align + index_offset;
      a_buf[buf_index / 16][buf_index % 16] =
          merlin_get_range_512(&a[start], (j * data_width), data_width);
    }
    return;
  }

L2:
  for (i = 0; i < len; ++i) {



#pragma HLS pipeline


 if (head_align == 0 && aligned) {
      if (aligned == 1) {
        for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == end - start - 1 && j > tail_align)
            continue;
          a_buf[index2][index1 * num_elements + j] =
              merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        }
        if (index1 == bound - 1) { index1 = 0; ++index2; } else index1++;
      } else if (aligned == -1) {
        int j0, j1;
        for (j0 = 0; j0 < bound0; ++j0) {
          for (j1 = 0; j1 < 16; ++j1) {
            j = j0 * 16 + j1;
            if (i == end - start - 1 && j > tail_align)
              continue;
            a_buf[index2 * bound0 + j0][j1] =
                merlin_get_range_512(&a[i + start], (j * data_width), data_width);
          }
        }
        index2++;
      }

    } else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < head_align)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        size_t buf_index = (i * num_elements + j - head_align) + index_offset;
        a_buf[buf_index / 16][buf_index % 16] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }
  }
}

static void memcpy_wide_bus_write_long_2d_16_512(
    merlin_uint_512 *c, long c_buf[][16], size_t index2_offset,
    size_t index1_offset, size_t offset_byte, size_t size_byte,
    const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(long);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;
  size_t len = end - start;
  size_t i, j;
  size_t index_offset = index2_offset * 16 + index1_offset;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  size_t align = 0;
  if (len == 1) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      if (j > tail_align)
        continue;
      size_t buf_index = (j - head_align) + index_offset;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[buf_index / 16][buf_index % 16]);

    }
    return;
  }
  if (head_align != 0) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      size_t buf_index = (j - head_align) + index_offset;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[buf_index / 16][buf_index % 16]);

    }
    start++;
    align++;
  }
  if (tail_align != (num_elements - 1))
    align++;
  size_t index2 = index2_offset, index1 = index1_offset;
  int aligned = 0;
  if ((16 % num_elements) == 0 && (index1_offset % num_elements) == 0) {
    aligned = 1;
    index1 = index1_offset / num_elements;
  } else if (((num_elements % 16) == 0) &&
             ((index2_offset * 16) % num_elements) == 0 && !index1_offset) {
    aligned = -1;
    index2 = index2_offset * 16 / num_elements;
  }
  const size_t bound = 16 / num_elements;
  const size_t bound0 = num_elements / 16;
  int burst_len = len - align;
  ((burst_len <= const_buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("burst_len <= const_buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 585, __PRETTY_FUNCTION__));
L3:
  for (i = 0; i < burst_len; ++i) {



#pragma HLS pipeline


 if (head_align == 0 && aligned) {
      if (aligned == 1) {
        for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 long val = c_buf[index2][index1 * num_elements + j];
          merlin_set_range_512(&c[i + start], (j * data_width), data_width, val);
        }
        if (index1 == bound - 1) { index1 = 0; ++index2; } else index1++;
      } else if (aligned == -1) {
        int j0, j1;
        for (j0 = 0; j0 < bound0; ++j0) {
          for (j1 = 0; j1 < 16; ++j1) {
            j = j0 * 16 + j1;
            long val = c_buf[index2 * bound0 + j0][j1];
            merlin_set_range_512(&c[i + start], (j * data_width), data_width, val);
          }
        }
        index2++;
      }
    } else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 size_t buf_index =
            (i * num_elements + j + num_elements - head_align) + index_offset;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[buf_index / 16][buf_index % 16]);

      }
    }
  }
  if (tail_align != num_elements - 1) {
    size_t pos = (len - align) * num_elements + index_offset;
    pos += (num_elements - head_align) % num_elements;
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j > tail_align)
        continue;
      merlin_set_range_512(&c[end - 1], (j * data_width), data_width, c_buf[(pos + j) / 16][(pos + j) % 16]);

    }
  }
}

static void memcpy_wide_bus_read_int_2d_16_512(
    int a_buf[][16], size_t index2_offset, size_t index1_offset,
    merlin_uint_512 *a,

    size_t offset_byte, size_t size_byte, const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(int);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;

  size_t i, j;
  size_t index2 = index2_offset, index1 = index1_offset;
  int aligned = 0;
  if ((16 % num_elements) == 0 && (index1_offset % num_elements) == 0) {
    aligned = 1;
    index1 = index1_offset / num_elements;
  } else if ((num_elements % 16) == 0 &&
             (index2_offset * 16 % num_elements) == 0 && !index1_offset) {
    aligned = -1;
    index2 = index2_offset * 16 / num_elements;
  }
  const size_t bound = 16 / num_elements;
  const size_t bound0 = num_elements / 16;
  const size_t index_offset = index2_offset * 16 + index1_offset;
  int len = end - start;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  ((len <= const_buf_size / num_elements + 2) ? static_cast<void> (0) : __assert_fail ("len <= const_buf_size / num_elements + 2", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 670, __PRETTY_FUNCTION__));
  ((len >= buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("len >= buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 671, __PRETTY_FUNCTION__));
  if (1 == len) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align || j > tail_align)
        continue;
      size_t buf_index = j - head_align + index_offset;
      a_buf[buf_index / 16][buf_index % 16] =
          merlin_get_range_512(&a[start], (j * data_width), data_width);
    }
    return;
  }

L2:
  for (i = 0; i < len; ++i) {



#pragma HLS pipeline


 if (head_align == 0 && aligned) {
      if (aligned == 1) {
        for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == end - start - 1 && j > tail_align)
            continue;
          a_buf[index2][index1 * num_elements + j] =
              merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        }
        if (index1 == bound - 1) { index1 = 0; ++index2; } else index1++;
      } else if (aligned == -1) {
        int j0, j1;
        for (j0 = 0; j0 < bound0; ++j0) {
          for (j1 = 0; j1 < 16; ++j1) {
            j = j0 * 16 + j1;
            if (i == end - start - 1 && j > tail_align)
              continue;
            a_buf[index2 * bound0 + j0][j1] =
                merlin_get_range_512(&a[i + start], (j * data_width), data_width);
          }
        }
        index2++;
      }

    } else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < head_align)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        size_t buf_index = (i * num_elements + j - head_align) + index_offset;
        a_buf[buf_index / 16][buf_index % 16] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }
  }
}

static void memcpy_wide_bus_write_long_long_2d_16_512(
    merlin_uint_512 *c, long long c_buf[][16], size_t index2_offset,
    size_t index1_offset, size_t offset_byte, size_t size_byte,
    const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(long long);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;
  size_t len = end - start;
  size_t i, j;
  size_t index_offset = index2_offset * 16 + index1_offset;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  size_t align = 0;
  if (len == 1) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      if (j > tail_align)
        continue;
      size_t buf_index = (j - head_align) + index_offset;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[buf_index / 16][buf_index % 16]);

    }
    return;
  }
  if (head_align != 0) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      size_t buf_index = (j - head_align) + index_offset;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[buf_index / 16][buf_index % 16]);

    }
    start++;
    align++;
  }
  if (tail_align != (num_elements - 1))
    align++;
  size_t index2 = index2_offset, index1 = index1_offset;
  int aligned = 0;
  if ((16 % num_elements) == 0 && (index1_offset % num_elements) == 0) {
    aligned = 1;
    index1 = index1_offset / num_elements;
  } else if (((num_elements % 16) == 0) &&
             ((index2_offset * 16) % num_elements) == 0 && !index1_offset) {
    aligned = -1;
    index2 = index2_offset * 16 / num_elements;
  }
  const size_t bound = 16 / num_elements;
  const size_t bound0 = num_elements / 16;
  int burst_len = len - align;
  ((burst_len <= const_buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("burst_len <= const_buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 792, __PRETTY_FUNCTION__));
  L3: for (i = 0; i < burst_len; ++i) {



#pragma HLS pipeline


 if (head_align == 0 && aligned) {
      if (aligned == 1) {
        for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 long long val = c_buf[index2][index1 * num_elements + j];
          merlin_set_range_512(&c[i + start], (j * data_width), data_width, val);
        }
        if (index1 == bound - 1) { index1 = 0; ++index2; } else index1++;
      } else if (aligned == -1) {
        int j0, j1;
        for (j0 = 0; j0 < bound0; ++j0) {
          for (j1 = 0; j1 < 16; ++j1) {
            j = j0 * 16 + j1;
            long long val = c_buf[index2 * bound0 + j0][j1];
            merlin_set_range_512(&c[i + start], (j * data_width), data_width, val);
          }
        }
        index2++;
      }
    } else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 size_t buf_index =
            (i * num_elements + j + num_elements - head_align) + index_offset;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[buf_index / 16][buf_index % 16]);

      }
    }
  }
  if (tail_align != num_elements - 1) {
    size_t pos = (len - align) * num_elements + index_offset;
    pos += (num_elements - head_align) % num_elements;
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j > tail_align)
        continue;
      merlin_set_range_512(&c[end - 1], (j * data_width), data_width, c_buf[(pos + j) / 16][(pos + j) % 16]);

    }
  }
}

static void memcpy_wide_bus_read_long_long_2d_16_512(
    long long a_buf[][16], size_t index2_offset, size_t index1_offset,
    merlin_uint_512 *a,

    size_t offset_byte, size_t size_byte, const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(long long);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;

  size_t i, j;
  size_t index2 = index2_offset, index1 = index1_offset;
  int aligned = 0;
  if ((16 % num_elements) == 0 && (index1_offset % num_elements) == 0) {
    aligned = 1;
    index1 = index1_offset / num_elements;
  } else if ((num_elements % 16) == 0 &&
             (index2_offset * 16 % num_elements) == 0 && !index1_offset) {
    aligned = -1;
    index2 = index2_offset * 16 / num_elements;
  }
  const size_t bound = 16 / num_elements;
  const size_t bound0 = num_elements / 16;
  const size_t index_offset = index2_offset * 16 + index1_offset;
  int len = end - start;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  ((len <= const_buf_size / num_elements + 2) ? static_cast<void> (0) : __assert_fail ("len <= const_buf_size / num_elements + 2", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 876, __PRETTY_FUNCTION__));
  ((len >= buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("len >= buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 877, __PRETTY_FUNCTION__));
  if (1 == len) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align || j > tail_align)
        continue;
      size_t buf_index = j - head_align + index_offset;
      a_buf[buf_index / 16][buf_index % 16] =
          merlin_get_range_512(&a[start], (j * data_width), data_width);
    }
    return;
  }

  L2:for (i = 0; i < len; ++i) {



#pragma HLS pipeline


 if (head_align == 0 && aligned) {
      if (aligned == 1) {
        for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == end - start - 1 && j > tail_align)
            continue;
          a_buf[index2][index1 * num_elements + j] =
              merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        }
        if (index1 == bound - 1) { index1 = 0; ++index2; } else index1++;
      } else if (aligned == -1) {
        int j0, j1;
        for (j0 = 0; j0 < bound0; ++j0) {
          for (j1 = 0; j1 < 16; ++j1) {
            j = j0 * 16 + j1;
            if (i == end - start - 1 && j > tail_align)
              continue;
            a_buf[index2 * bound0 + j0][j1] =
                merlin_get_range_512(&a[i + start], (j * data_width), data_width);
          }
        }
        index2++;
      }

    } else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < head_align)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        size_t buf_index = (i * num_elements + j - head_align) + index_offset;
        a_buf[buf_index / 16][buf_index % 16] =
            merlin_get_range_512(&a[i + start], (j * data_width), data_width);
      }
    }
  }
}

static void memcpy_wide_bus_write_int_2d_16_512(
    merlin_uint_512 *c, int c_buf[][16], size_t index2_offset,
    size_t index1_offset, size_t offset_byte, size_t size_byte,
    const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(int);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;
  size_t len = end - start;
  size_t i, j;
  size_t index_offset = index2_offset * 16 + index1_offset;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  size_t align = 0;
  if (len == 1) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      if (j > tail_align)
        continue;
      size_t buf_index = (j - head_align) + index_offset;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[buf_index / 16][buf_index % 16]);

    }
    return;
  }
  if (head_align != 0) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      size_t buf_index = (j - head_align) + index_offset;
      merlin_set_range_512(&c[start], (j * data_width), data_width, c_buf[buf_index / 16][buf_index % 16]);

    }
    start++;
    align++;
  }
  if (tail_align != (num_elements - 1))
    align++;
  size_t index2 = index2_offset, index1 = index1_offset;
  int aligned = 0;
  if ((16 % num_elements) == 0 && (index1_offset % num_elements) == 0) {
    aligned = 1;
    index1 = index1_offset / num_elements;
  } else if (((num_elements % 16) == 0) &&
             ((index2_offset * 16) % num_elements) == 0 && !index1_offset) {
    aligned = -1;
    index2 = index2_offset * 16 / num_elements;
  }
  const size_t bound = 16 / num_elements;
  const size_t bound0 = num_elements / 16;
  int burst_len = len - align;
  ((burst_len <= const_buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("burst_len <= const_buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 997, __PRETTY_FUNCTION__));
L3:
  for (i = 0; i < burst_len; ++i) {



#pragma HLS pipeline


 if (head_align == 0 && aligned) {
      if (aligned == 1) {
        for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 int val = c_buf[index2][index1 * num_elements + j];
          merlin_set_range_512(&c[i + start], (j * data_width), data_width, val);
        }
        if (index1 == bound - 1) { index1 = 0; ++index2; } else index1++;
      } else if (aligned == -1) {
        int j0, j1;
        for (j0 = 0; j0 < bound0; ++j0) {
          for (j1 = 0; j1 < 16; ++j1) {
            j = j0 * 16 + j1;
            int val = c_buf[index2 * bound0 + j0][j1];
            merlin_set_range_512(&c[i + start], (j * data_width), data_width, val);
          }
        }
        index2++;
      }
    } else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 size_t buf_index =
            (i * num_elements + j + num_elements - head_align) + index_offset;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, c_buf[buf_index / 16][buf_index % 16]);

      }
    }
  }
  if (tail_align != num_elements - 1) {
    size_t pos = (len - align) * num_elements + index_offset;
    pos += (num_elements - head_align) % num_elements;
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j > tail_align)
        continue;
      merlin_set_range_512(&c[end - 1], (j * data_width), data_width, c_buf[(pos + j) / 16][(pos + j) % 16]);

    }
  }
}

static void memcpy_wide_bus_read_float_2d_16_512(
    float a_buf[][16], size_t index2_offset, size_t index1_offset,
    merlin_uint_512 *a, size_t offset_byte, size_t size_byte,
    const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(float);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;

  size_t i, j;
  size_t index2 = index2_offset, index1 = index1_offset;
  const size_t index_offset = 16 * index2_offset + index1_offset;
  const size_t bound = 16 / num_elements;
  const size_t bound0 = num_elements / 16;
  int aligned = 0;
  if ((16 % num_elements) == 0 && (index1_offset % num_elements) == 0) {
    aligned = 1;
    index1 = index1_offset / num_elements;
  } else if (((num_elements % 16) == 0) &&
             ((index2_offset * 16) % num_elements) == 0 && !index1_offset) {
    aligned = -1;
    index2 = index2_offset * 16 / num_elements;
  }
  int len = end - start;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;

  ((len <= const_buf_size / num_elements + 2) ? static_cast<void> (0) : __assert_fail ("len <= const_buf_size / num_elements + 2", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 1082, __PRETTY_FUNCTION__));
  ((len >= buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("len >= buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 1083, __PRETTY_FUNCTION__));
  if (1 == len) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align || j > tail_align)
        continue;
      size_t buf_index = j - head_align + index_offset;
      int raw_bits = merlin_get_range_512(&a[start], (j * data_width), data_width);
      a_buf[buf_index / 16][buf_index % 16] = *(float *)(&raw_bits);
    }
    return;
  }

L2:
  for (i = 0; i < len; ++i) {



#pragma HLS pipeline


 if (head_align == 0 && aligned) {
      if (aligned == 1) {
        for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == end - start - 1 && j > tail_align)
            continue;
          int raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
          a_buf[index2][index1 * num_elements + j] = *(float *)(&raw_bits);
        }
        if (index1 == bound - 1) { index1 = 0; ++index2; } else index1++;
      } else if (aligned == -1) {
        int j0, j1;
        for (j0 = 0; j0 < bound0; ++j0) {
          for (j1 = 0; j1 < 16; ++j1) {
            j = j0 * 16 + j1;
            if (i == end - start - 1 && j > tail_align)
              continue;
            int raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
            a_buf[index2 * bound0 + j0][j1] = *(float *)(&raw_bits);
          }
        }
        index2++;
      }
    } else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < head_align)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        int raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        size_t buf_index = (i * num_elements + j - head_align) + index_offset;
        a_buf[buf_index / 16][buf_index % 16] = *(float *)(&raw_bits);
      }
    }
  }
}

static void memcpy_wide_bus_write_float_2d_16_512(
    merlin_uint_512 *c, float c_buf[][16], size_t index2_offset,
    size_t index1_offset, size_t offset_byte, size_t size_byte,
    const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(float);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;
  size_t len = end - start;
  const size_t index_offset = index2_offset * 16 + index1_offset;
  size_t i, j;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  if (len == 1) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      if (j > tail_align)
        continue;
      size_t buf_index = (j - head_align) + index_offset;
      float buf_tmp = c_buf[buf_index / 16][buf_index % 16];
      int raw_bits = *(int *)&buf_tmp;
      merlin_set_range_512(&c[start], (j * data_width), data_width, raw_bits);
    }
    return;
  }
  unsigned align = 0;
  if (head_align != 0) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      size_t buf_index = (j - head_align) + index_offset;
      float buf_tmp = c_buf[buf_index / 16][buf_index % 16];
      int raw_bits = *(int *)&buf_tmp;
      merlin_set_range_512(&c[start], (j * data_width), data_width, raw_bits);
    }
    start++;
    align++;
  }
  if (tail_align != (num_elements - 1))
    align++;
  size_t index2 = index2_offset, index1 = index1_offset;
  int aligned = 0;
  if ((16 % num_elements) == 0 && (index1_offset % num_elements) == 0) {
    aligned = 1;
    index1 = index1_offset / num_elements;
  } else if (((num_elements % 16) == 0) &&
             ((index2_offset * 16) % num_elements) == 0 && !index1_offset) {
    aligned = -1;
    index2 = index2_offset * 16 / num_elements;
  }
  const size_t bound = 16 / num_elements;
  const size_t bound0 = num_elements / 16;
  int burst_len = len - align;
  ((burst_len <= const_buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("burst_len <= const_buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 1205, __PRETTY_FUNCTION__));
L3:
  for (i = 0; i < burst_len; ++i) {



#pragma HLS pipeline


 if (head_align == 0 && aligned) {
      if (aligned == 1) {
        for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 float buf_tmp = c_buf[index2][index1 * num_elements + j];
          int raw_bits = *(int *)&buf_tmp;
          merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
        }
        if (index1 == bound - 1) { index1 = 0; ++index2; } else index1++;
      } else if (aligned == -1) {
        int j0, j1;
        for (j0 = 0; j0 < bound0; ++j0) {
          for (j1 = 0; j1 < 16; ++j1) {
            j = j0 * 16 + j1;
            float buf_tmp = c_buf[index2 * bound0 + j0][j1];
            int raw_bits = *(int *)&buf_tmp;
            merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
          }
        }
        index2++;
      }
    } else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 size_t index =
            i * num_elements + j + num_elements - head_align + index_offset;
        float buf_tmp = c_buf[index / 16][index % 16];
        int raw_bits = *(int *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }
  }
  if (tail_align != num_elements - 1) {
    size_t pos = (len - align) * num_elements + index_offset;
    pos += (num_elements - head_align) % num_elements;
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j > tail_align)
        continue;
      float buf_tmp = c_buf[(pos + j) / 16][(pos + j) % 16];
      int raw_bits = *(int *)&buf_tmp;
      merlin_set_range_512(&c[end - 1], (j * data_width), data_width, raw_bits);
    }
  }
}

static void memcpy_wide_bus_read_double_2d_16_512(
    double a_buf[][16], size_t index2_offset, size_t index1_offset,
    merlin_uint_512 *a, size_t offset_byte, size_t size_byte,
    const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(double);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;

  size_t i, j;
  size_t index2 = index2_offset, index1 = index1_offset;
  int aligned = 0;
  if ((16 % num_elements) == 0 && (index1_offset % num_elements) == 0) {
    aligned = 1;
    index1 = index1_offset / num_elements;
  } else if (((num_elements % 16) == 0) &&
             ((index2_offset * 16) % num_elements) == 0 && !index1_offset) {
    aligned = -1;
    index2 = index2_offset * 16 / num_elements;
  }
  const size_t bound = 16 / num_elements;
  const size_t bound0 = num_elements / 16;
  const size_t index_offset = 16 * index2_offset + index1_offset;

  int len = end - start;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  ((len <= const_buf_size / num_elements + 2) ? static_cast<void> (0) : __assert_fail ("len <= const_buf_size / num_elements + 2", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 1294, __PRETTY_FUNCTION__));
  ((len >= buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("len >= buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 1295, __PRETTY_FUNCTION__));
  if (1 == len) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align || j > tail_align)
        continue;
      int64_t raw_bits = merlin_get_range_512(&a[start], (j * data_width), data_width);
      size_t buf_index = (j - head_align) + index_offset;
      a_buf[buf_index / 16][buf_index % 16] = *(double *)(&raw_bits);
    }
    return;
  }
L2:
  for (i = 0; i < len; ++i) {



#pragma HLS pipeline


 if (head_align == 0 && aligned) {
      if (aligned == 1) {
        for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == end - start - 1 && j > tail_align)
            continue;
          int64_t raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
          a_buf[index2][index1 * num_elements + j] = *(double *)(&raw_bits);
        }
        if (index1 == bound - 1) { index1 = 0; ++index2; } else index1++;
      } else if (aligned == -1) {
        int j0, j1;
        for (j0 = 0; j0 < bound0; ++j0) {
          for (j1 = 0; j1 < 16; ++j1) {
            j = j0 * 16 + j1;
            if (i == end - start - 1 && j > tail_align)
              continue;
            int64_t raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
            a_buf[index2 * bound0 + j0][j1] = *(double *)(&raw_bits);
          }
        }
        index2++;
      }
    } else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (i == 0 && j < head_align)
          continue;
        if (i == end - start - 1 && j > tail_align)
          continue;
        size_t index = i * num_elements + j - head_align + index_offset;
        int64_t raw_bits = merlin_get_range_512(&a[i + start], (j * data_width), data_width);
        a_buf[index / 16][index % 16] = *(double *)(&raw_bits);
      }
    }
  }
}

static void memcpy_wide_bus_write_double_2d_16_512(
    merlin_uint_512 *c, double c_buf[][16], size_t index2_offset,
    size_t index1_offset, size_t offset_byte, size_t size_byte,
    const size_t const_buf_size) {
#pragma HLS inline self
 const size_t data_width = sizeof(double);
  const size_t bus_width = 512 / 8;
  const size_t num_elements = bus_width / data_width;
  size_t buf_size = size_byte / data_width;
  size_t offset = offset_byte / data_width;
  size_t head_align = offset & (num_elements - 1);
  size_t new_offset = offset + buf_size;
  size_t tail_align = (new_offset - 1) & (num_elements - 1);
  size_t start = offset / num_elements;
  size_t end = (offset + buf_size + num_elements - 1) / num_elements;
  size_t len = end - start;
  size_t index_offset = index2_offset * 16 + index1_offset;
  size_t i, j;
  if (head_align == 0)
    len = (buf_size + num_elements - 1) / num_elements;
  if (len == 1) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      if (j > tail_align)
        continue;
      size_t buf_index = (j - head_align) + index_offset;
      double buf_tmp = c_buf[buf_index / 16][buf_index % 16];
      int64_t raw_bits = *(int64_t *)&buf_tmp;
      merlin_set_range_512(&c[start], (j * data_width), data_width, raw_bits);
    }
    return;
  }
  size_t align = 0;
  if (head_align != 0) {
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j < head_align)
        continue;
      size_t buf_index = (j - head_align) + index_offset;
      double buf_tmp = c_buf[buf_index / 16][buf_index % 16];
      int64_t raw_bits = *(int64_t *)&buf_tmp;
      merlin_set_range_512(&c[start], (j * data_width), data_width, raw_bits);
    }
    start++;
    align++;
  }
  if (tail_align != (num_elements - 1))
    align++;
  size_t index2 = index2_offset, index1 = index1_offset;
  const size_t alignment =
      (16 % num_elements) == 0 && (index1_offset % num_elements) == 0;
  int aligned = 0;
  if ((16 % num_elements) == 0 && (index1_offset % num_elements) == 0) {
    aligned = 1;
    index1 = index1_offset / num_elements;
  } else if (((num_elements % 16) == 0) &&
             ((index2_offset * 16) % num_elements) == 0 && !index1_offset) {
    aligned = -1;
    index2 = index2_offset * 16 / num_elements;
  }
  const size_t bound = 16 / num_elements;
  const size_t bound0 = num_elements / 16;
  int burst_len = len - align;
  ((burst_len <= const_buf_size / num_elements) ? static_cast<void> (0) : __assert_fail ("burst_len <= const_buf_size / num_elements", "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/mars_wide_bus_2d.h", 1418, __PRETTY_FUNCTION__));
L3:
  for (i = 0; i < burst_len; ++i) {



#pragma HLS pipeline


 if (head_align == 0 && aligned) {
      if (aligned == 1) {
        for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 double buf_tmp = c_buf[index2][index1 * num_elements + j];
          int64_t raw_bits = *(int64_t *)&buf_tmp;
          merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
        }
        if (index1 == bound - 1) { index1 = 0; ++index2; } else index1++;
      } else if (aligned == -1) {
        int j0, j1;
        for (j0 = 0; j0 < bound0; ++j0) {
          for (j1 = 0; j1 < 16; ++j1) {
            j = j0 * 16 + j1;
            double buf_tmp = c_buf[index2 * bound0 + j0][j1];
            int64_t raw_bits = *(int64_t *)&buf_tmp;
            merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
          }
        }
        index2++;
      }

    } else {
      for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 size_t index =
            i * num_elements + j + num_elements - head_align + index_offset;
        double buf_tmp = c_buf[index / 16][index % 16];
        int64_t raw_bits = *(int64_t *)&buf_tmp;
        merlin_set_range_512(&c[i + start], (j * data_width), data_width, raw_bits);
      }
    }
  }
  if (tail_align != num_elements - 1) {
    size_t pos = (len - align) * num_elements + index_offset;
    pos += (num_elements - head_align) % num_elements;
    for (j = 0; j < num_elements; ++j) {
#pragma HLS unroll
 if (j > tail_align)
        continue;
      double buf_tmp = c_buf[(pos + j) / 16][(pos + j) % 16];
      int64_t raw_bits = *(int64_t *)&buf_tmp;
      merlin_set_range_512(&c[end - 1], (j * data_width), data_width, raw_bits);
    }
  }
}
# 7 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/memcpy_512_2d.h" 2
# 7 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/__merlinkernel_gcnconv_kernel.cpp" 2

# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4
extern "C" {





# 1 "/opt/Xilinx/Vivado/2019.1.op2552052/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 42 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 92 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 106 "/usr/include/string.h" 3 4
extern void *rawmemchr (const void *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 117 "/usr/include/string.h" 3 4
extern void *memrchr (const void *__s, int __c, size_t __n)
      throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));
# 162 "/usr/include/string.h" 3 4
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 232 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 259 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 273 "/usr/include/string.h" 3 4
extern char *strchrnul (const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern size_t strcspn (const char *__s, const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 311 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 338 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));
# 369 "/usr/include/string.h" 3 4
extern char *strcasestr (const char *__haystack, const char *__needle)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) throw ();
# 434 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) ;





extern char *strerror_l (int __errnum, __locale_t __l) throw ();





extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 485 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 513 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) throw () __attribute__ ((__const__));




extern int ffsl (long int __l) throw () __attribute__ ((__const__));

__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));




extern int strcasecmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (const char *__s1, const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));
# 602 "/usr/include/string.h" 3 4
extern char *basename (const char *__filename) throw () __attribute__ ((__nonnull__ (1)));
# 642 "/usr/include/string.h" 3 4
}
# 9 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/__merlinkernel_gcnconv_kernel.cpp" 2

# 1 "/usr/include/math.h" 1 3 4
# 29 "/usr/include/math.h" 3 4
extern "C" {




# 1 "/usr/include/bits/huge_val.h" 1 3 4
# 34 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/bits/huge_valf.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/bits/huge_vall.h" 1 3 4
# 37 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/inf.h" 1 3 4
# 40 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/nan.h" 1 3 4
# 43 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/bits/mathdef.h" 1 3 4
# 28 "/usr/include/bits/mathdef.h" 3 4
typedef float float_t;
typedef double double_t;
# 47 "/usr/include/math.h" 2 3 4
# 70 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 54 "/usr/include/bits/mathcalls.h" 3 4
extern double acos (double __x) throw (); extern double __acos (double __x) throw ();

extern double asin (double __x) throw (); extern double __asin (double __x) throw ();

extern double atan (double __x) throw (); extern double __atan (double __x) throw ();

extern double atan2 (double __y, double __x) throw (); extern double __atan2 (double __y, double __x) throw ();


extern double cos (double __x) throw (); extern double __cos (double __x) throw ();

extern double sin (double __x) throw (); extern double __sin (double __x) throw ();

extern double tan (double __x) throw (); extern double __tan (double __x) throw ();




extern double cosh (double __x) throw (); extern double __cosh (double __x) throw ();

extern double sinh (double __x) throw (); extern double __sinh (double __x) throw ();

extern double tanh (double __x) throw (); extern double __tanh (double __x) throw ();




extern void sincos (double __x, double *__sinx, double *__cosx) throw (); extern void __sincos (double __x, double *__sinx, double *__cosx) throw ();






extern double acosh (double __x) throw (); extern double __acosh (double __x) throw ();

extern double asinh (double __x) throw (); extern double __asinh (double __x) throw ();

extern double atanh (double __x) throw (); extern double __atanh (double __x) throw ();







extern double exp (double __x) throw (); extern double __exp (double __x) throw ();


extern double frexp (double __x, int *__exponent) throw (); extern double __frexp (double __x, int *__exponent) throw ();


extern double ldexp (double __x, int __exponent) throw (); extern double __ldexp (double __x, int __exponent) throw ();


extern double log (double __x) throw (); extern double __log (double __x) throw ();


extern double log10 (double __x) throw (); extern double __log10 (double __x) throw ();


extern double modf (double __x, double *__iptr) throw (); extern double __modf (double __x, double *__iptr) throw ()
     __attribute__ ((__nonnull__ (2)));




extern double exp10 (double __x) throw (); extern double __exp10 (double __x) throw ();

extern double pow10 (double __x) throw (); extern double __pow10 (double __x) throw ();





extern double expm1 (double __x) throw (); extern double __expm1 (double __x) throw ();


extern double log1p (double __x) throw (); extern double __log1p (double __x) throw ();


extern double logb (double __x) throw (); extern double __logb (double __x) throw ();






extern double exp2 (double __x) throw (); extern double __exp2 (double __x) throw ();


extern double log2 (double __x) throw (); extern double __log2 (double __x) throw ();
# 154 "/usr/include/bits/mathcalls.h" 3 4
extern double pow (double __x, double __y) throw (); extern double __pow (double __x, double __y) throw ();


extern double sqrt (double __x) throw (); extern double __sqrt (double __x) throw ();





extern double hypot (double __x, double __y) throw (); extern double __hypot (double __x, double __y) throw ();






extern double cbrt (double __x) throw (); extern double __cbrt (double __x) throw ();
# 179 "/usr/include/bits/mathcalls.h" 3 4
extern double ceil (double __x) throw () __attribute__ ((__const__)); extern double __ceil (double __x) throw () __attribute__ ((__const__));


extern double fabs (double __x) throw () __attribute__ ((__const__)); extern double __fabs (double __x) throw () __attribute__ ((__const__));


extern double floor (double __x) throw () __attribute__ ((__const__)); extern double __floor (double __x) throw () __attribute__ ((__const__));


extern double fmod (double __x, double __y) throw (); extern double __fmod (double __x, double __y) throw ();




extern int __isinf (double __value) throw () __attribute__ ((__const__));


extern int __finite (double __value) throw () __attribute__ ((__const__));





extern int isinf (double __value) throw () __attribute__ ((__const__));


extern int finite (double __value) throw () __attribute__ ((__const__));


extern double drem (double __x, double __y) throw (); extern double __drem (double __x, double __y) throw ();



extern double significand (double __x) throw (); extern double __significand (double __x) throw ();





extern double copysign (double __x, double __y) throw () __attribute__ ((__const__)); extern double __copysign (double __x, double __y) throw () __attribute__ ((__const__));






extern double nan (const char *__tagb) throw () __attribute__ ((__const__)); extern double __nan (const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnan (double __value) throw () __attribute__ ((__const__));



extern int isnan (double __value) throw () __attribute__ ((__const__));


extern double j0 (double) throw (); extern double __j0 (double) throw ();
extern double j1 (double) throw (); extern double __j1 (double) throw ();
extern double jn (int, double) throw (); extern double __jn (int, double) throw ();
extern double y0 (double) throw (); extern double __y0 (double) throw ();
extern double y1 (double) throw (); extern double __y1 (double) throw ();
extern double yn (int, double) throw (); extern double __yn (int, double) throw ();






extern double erf (double) throw (); extern double __erf (double) throw ();
extern double erfc (double) throw (); extern double __erfc (double) throw ();
extern double lgamma (double) throw (); extern double __lgamma (double) throw ();






extern double tgamma (double) throw (); extern double __tgamma (double) throw ();





extern double gamma (double) throw (); extern double __gamma (double) throw ();






extern double lgamma_r (double, int *__signgamp) throw (); extern double __lgamma_r (double, int *__signgamp) throw ();







extern double rint (double __x) throw (); extern double __rint (double __x) throw ();


extern double nextafter (double __x, double __y) throw () __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) throw () __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) throw () __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) throw () __attribute__ ((__const__));



extern double remainder (double __x, double __y) throw (); extern double __remainder (double __x, double __y) throw ();



extern double scalbn (double __x, int __n) throw (); extern double __scalbn (double __x, int __n) throw ();



extern int ilogb (double __x) throw (); extern int __ilogb (double __x) throw ();




extern double scalbln (double __x, long int __n) throw (); extern double __scalbln (double __x, long int __n) throw ();



extern double nearbyint (double __x) throw (); extern double __nearbyint (double __x) throw ();



extern double round (double __x) throw () __attribute__ ((__const__)); extern double __round (double __x) throw () __attribute__ ((__const__));



extern double trunc (double __x) throw () __attribute__ ((__const__)); extern double __trunc (double __x) throw () __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) throw (); extern double __remquo (double __x, double __y, int *__quo) throw ();






extern long int lrint (double __x) throw (); extern long int __lrint (double __x) throw ();
extern long long int llrint (double __x) throw (); extern long long int __llrint (double __x) throw ();



extern long int lround (double __x) throw (); extern long int __lround (double __x) throw ();
extern long long int llround (double __x) throw (); extern long long int __llround (double __x) throw ();



extern double fdim (double __x, double __y) throw (); extern double __fdim (double __x, double __y) throw ();


extern double fmax (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmax (double __x, double __y) throw () __attribute__ ((__const__));


extern double fmin (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmin (double __x, double __y) throw () __attribute__ ((__const__));



extern int __fpclassify (double __value) throw ()
     __attribute__ ((__const__));


extern int __signbit (double __value) throw ()
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) throw (); extern double __fma (double __x, double __y, double __z) throw ();
# 364 "/usr/include/bits/mathcalls.h" 3 4
extern double scalb (double __x, double __n) throw (); extern double __scalb (double __x, double __n) throw ();
# 71 "/usr/include/math.h" 2 3 4
# 89 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 54 "/usr/include/bits/mathcalls.h" 3 4
extern float acosf (float __x) throw (); extern float __acosf (float __x) throw ();

extern float asinf (float __x) throw (); extern float __asinf (float __x) throw ();

extern float atanf (float __x) throw (); extern float __atanf (float __x) throw ();

extern float atan2f (float __y, float __x) throw (); extern float __atan2f (float __y, float __x) throw ();


extern float cosf (float __x) throw (); extern float __cosf (float __x) throw ();

extern float sinf (float __x) throw (); extern float __sinf (float __x) throw ();

extern float tanf (float __x) throw (); extern float __tanf (float __x) throw ();




extern float coshf (float __x) throw (); extern float __coshf (float __x) throw ();

extern float sinhf (float __x) throw (); extern float __sinhf (float __x) throw ();

extern float tanhf (float __x) throw (); extern float __tanhf (float __x) throw ();




extern void sincosf (float __x, float *__sinx, float *__cosx) throw (); extern void __sincosf (float __x, float *__sinx, float *__cosx) throw ();






extern float acoshf (float __x) throw (); extern float __acoshf (float __x) throw ();

extern float asinhf (float __x) throw (); extern float __asinhf (float __x) throw ();

extern float atanhf (float __x) throw (); extern float __atanhf (float __x) throw ();







extern float expf (float __x) throw (); extern float __expf (float __x) throw ();


extern float frexpf (float __x, int *__exponent) throw (); extern float __frexpf (float __x, int *__exponent) throw ();


extern float ldexpf (float __x, int __exponent) throw (); extern float __ldexpf (float __x, int __exponent) throw ();


extern float logf (float __x) throw (); extern float __logf (float __x) throw ();


extern float log10f (float __x) throw (); extern float __log10f (float __x) throw ();


extern float modff (float __x, float *__iptr) throw (); extern float __modff (float __x, float *__iptr) throw ()
     __attribute__ ((__nonnull__ (2)));




extern float exp10f (float __x) throw (); extern float __exp10f (float __x) throw ();

extern float pow10f (float __x) throw (); extern float __pow10f (float __x) throw ();





extern float expm1f (float __x) throw (); extern float __expm1f (float __x) throw ();


extern float log1pf (float __x) throw (); extern float __log1pf (float __x) throw ();


extern float logbf (float __x) throw (); extern float __logbf (float __x) throw ();






extern float exp2f (float __x) throw (); extern float __exp2f (float __x) throw ();


extern float log2f (float __x) throw (); extern float __log2f (float __x) throw ();
# 154 "/usr/include/bits/mathcalls.h" 3 4
extern float powf (float __x, float __y) throw (); extern float __powf (float __x, float __y) throw ();


extern float sqrtf (float __x) throw (); extern float __sqrtf (float __x) throw ();





extern float hypotf (float __x, float __y) throw (); extern float __hypotf (float __x, float __y) throw ();






extern float cbrtf (float __x) throw (); extern float __cbrtf (float __x) throw ();
# 179 "/usr/include/bits/mathcalls.h" 3 4
extern float ceilf (float __x) throw () __attribute__ ((__const__)); extern float __ceilf (float __x) throw () __attribute__ ((__const__));


extern float fabsf (float __x) throw () __attribute__ ((__const__)); extern float __fabsf (float __x) throw () __attribute__ ((__const__));


extern float floorf (float __x) throw () __attribute__ ((__const__)); extern float __floorf (float __x) throw () __attribute__ ((__const__));


extern float fmodf (float __x, float __y) throw (); extern float __fmodf (float __x, float __y) throw ();




extern int __isinff (float __value) throw () __attribute__ ((__const__));


extern int __finitef (float __value) throw () __attribute__ ((__const__));





extern int isinff (float __value) throw () __attribute__ ((__const__));


extern int finitef (float __value) throw () __attribute__ ((__const__));


extern float dremf (float __x, float __y) throw (); extern float __dremf (float __x, float __y) throw ();



extern float significandf (float __x) throw (); extern float __significandf (float __x) throw ();





extern float copysignf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) throw () __attribute__ ((__const__));






extern float nanf (const char *__tagb) throw () __attribute__ ((__const__)); extern float __nanf (const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnanf (float __value) throw () __attribute__ ((__const__));



extern int isnanf (float __value) throw () __attribute__ ((__const__));


extern float j0f (float) throw (); extern float __j0f (float) throw ();
extern float j1f (float) throw (); extern float __j1f (float) throw ();
extern float jnf (int, float) throw (); extern float __jnf (int, float) throw ();
extern float y0f (float) throw (); extern float __y0f (float) throw ();
extern float y1f (float) throw (); extern float __y1f (float) throw ();
extern float ynf (int, float) throw (); extern float __ynf (int, float) throw ();






extern float erff (float) throw (); extern float __erff (float) throw ();
extern float erfcf (float) throw (); extern float __erfcf (float) throw ();
extern float lgammaf (float) throw (); extern float __lgammaf (float) throw ();






extern float tgammaf (float) throw (); extern float __tgammaf (float) throw ();





extern float gammaf (float) throw (); extern float __gammaf (float) throw ();






extern float lgammaf_r (float, int *__signgamp) throw (); extern float __lgammaf_r (float, int *__signgamp) throw ();







extern float rintf (float __x) throw (); extern float __rintf (float __x) throw ();


extern float nextafterf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) throw () __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__));



extern float remainderf (float __x, float __y) throw (); extern float __remainderf (float __x, float __y) throw ();



extern float scalbnf (float __x, int __n) throw (); extern float __scalbnf (float __x, int __n) throw ();



extern int ilogbf (float __x) throw (); extern int __ilogbf (float __x) throw ();




extern float scalblnf (float __x, long int __n) throw (); extern float __scalblnf (float __x, long int __n) throw ();



extern float nearbyintf (float __x) throw (); extern float __nearbyintf (float __x) throw ();



extern float roundf (float __x) throw () __attribute__ ((__const__)); extern float __roundf (float __x) throw () __attribute__ ((__const__));



extern float truncf (float __x) throw () __attribute__ ((__const__)); extern float __truncf (float __x) throw () __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) throw (); extern float __remquof (float __x, float __y, int *__quo) throw ();






extern long int lrintf (float __x) throw (); extern long int __lrintf (float __x) throw ();
extern long long int llrintf (float __x) throw (); extern long long int __llrintf (float __x) throw ();



extern long int lroundf (float __x) throw (); extern long int __lroundf (float __x) throw ();
extern long long int llroundf (float __x) throw (); extern long long int __llroundf (float __x) throw ();



extern float fdimf (float __x, float __y) throw (); extern float __fdimf (float __x, float __y) throw ();


extern float fmaxf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) throw () __attribute__ ((__const__));


extern float fminf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fminf (float __x, float __y) throw () __attribute__ ((__const__));



extern int __fpclassifyf (float __value) throw ()
     __attribute__ ((__const__));


extern int __signbitf (float __value) throw ()
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) throw (); extern float __fmaf (float __x, float __y, float __z) throw ();
# 364 "/usr/include/bits/mathcalls.h" 3 4
extern float scalbf (float __x, float __n) throw (); extern float __scalbf (float __x, float __n) throw ();
# 90 "/usr/include/math.h" 2 3 4
# 133 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 54 "/usr/include/bits/mathcalls.h" 3 4
extern long double acosl (long double __x) throw (); extern long double __acosl (long double __x) throw ();

extern long double asinl (long double __x) throw (); extern long double __asinl (long double __x) throw ();

extern long double atanl (long double __x) throw (); extern long double __atanl (long double __x) throw ();

extern long double atan2l (long double __y, long double __x) throw (); extern long double __atan2l (long double __y, long double __x) throw ();


extern long double cosl (long double __x) throw (); extern long double __cosl (long double __x) throw ();

extern long double sinl (long double __x) throw (); extern long double __sinl (long double __x) throw ();

extern long double tanl (long double __x) throw (); extern long double __tanl (long double __x) throw ();




extern long double coshl (long double __x) throw (); extern long double __coshl (long double __x) throw ();

extern long double sinhl (long double __x) throw (); extern long double __sinhl (long double __x) throw ();

extern long double tanhl (long double __x) throw (); extern long double __tanhl (long double __x) throw ();




extern void sincosl (long double __x, long double *__sinx, long double *__cosx) throw (); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) throw ();






extern long double acoshl (long double __x) throw (); extern long double __acoshl (long double __x) throw ();

extern long double asinhl (long double __x) throw (); extern long double __asinhl (long double __x) throw ();

extern long double atanhl (long double __x) throw (); extern long double __atanhl (long double __x) throw ();







extern long double expl (long double __x) throw (); extern long double __expl (long double __x) throw ();


extern long double frexpl (long double __x, int *__exponent) throw (); extern long double __frexpl (long double __x, int *__exponent) throw ();


extern long double ldexpl (long double __x, int __exponent) throw (); extern long double __ldexpl (long double __x, int __exponent) throw ();


extern long double logl (long double __x) throw (); extern long double __logl (long double __x) throw ();


extern long double log10l (long double __x) throw (); extern long double __log10l (long double __x) throw ();


extern long double modfl (long double __x, long double *__iptr) throw (); extern long double __modfl (long double __x, long double *__iptr) throw ()
     __attribute__ ((__nonnull__ (2)));




extern long double exp10l (long double __x) throw (); extern long double __exp10l (long double __x) throw ();

extern long double pow10l (long double __x) throw (); extern long double __pow10l (long double __x) throw ();





extern long double expm1l (long double __x) throw (); extern long double __expm1l (long double __x) throw ();


extern long double log1pl (long double __x) throw (); extern long double __log1pl (long double __x) throw ();


extern long double logbl (long double __x) throw (); extern long double __logbl (long double __x) throw ();






extern long double exp2l (long double __x) throw (); extern long double __exp2l (long double __x) throw ();


extern long double log2l (long double __x) throw (); extern long double __log2l (long double __x) throw ();
# 154 "/usr/include/bits/mathcalls.h" 3 4
extern long double powl (long double __x, long double __y) throw (); extern long double __powl (long double __x, long double __y) throw ();


extern long double sqrtl (long double __x) throw (); extern long double __sqrtl (long double __x) throw ();





extern long double hypotl (long double __x, long double __y) throw (); extern long double __hypotl (long double __x, long double __y) throw ();






extern long double cbrtl (long double __x) throw (); extern long double __cbrtl (long double __x) throw ();
# 179 "/usr/include/bits/mathcalls.h" 3 4
extern long double ceill (long double __x) throw () __attribute__ ((__const__)); extern long double __ceill (long double __x) throw () __attribute__ ((__const__));


extern long double fabsl (long double __x) throw () __attribute__ ((__const__)); extern long double __fabsl (long double __x) throw () __attribute__ ((__const__));


extern long double floorl (long double __x) throw () __attribute__ ((__const__)); extern long double __floorl (long double __x) throw () __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) throw (); extern long double __fmodl (long double __x, long double __y) throw ();




extern int __isinfl (long double __value) throw () __attribute__ ((__const__));


extern int __finitel (long double __value) throw () __attribute__ ((__const__));





extern int isinfl (long double __value) throw () __attribute__ ((__const__));


extern int finitel (long double __value) throw () __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) throw (); extern long double __dreml (long double __x, long double __y) throw ();



extern long double significandl (long double __x) throw (); extern long double __significandl (long double __x) throw ();





extern long double copysignl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) throw () __attribute__ ((__const__));






extern long double nanl (const char *__tagb) throw () __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnanl (long double __value) throw () __attribute__ ((__const__));



extern int isnanl (long double __value) throw () __attribute__ ((__const__));


extern long double j0l (long double) throw (); extern long double __j0l (long double) throw ();
extern long double j1l (long double) throw (); extern long double __j1l (long double) throw ();
extern long double jnl (int, long double) throw (); extern long double __jnl (int, long double) throw ();
extern long double y0l (long double) throw (); extern long double __y0l (long double) throw ();
extern long double y1l (long double) throw (); extern long double __y1l (long double) throw ();
extern long double ynl (int, long double) throw (); extern long double __ynl (int, long double) throw ();






extern long double erfl (long double) throw (); extern long double __erfl (long double) throw ();
extern long double erfcl (long double) throw (); extern long double __erfcl (long double) throw ();
extern long double lgammal (long double) throw (); extern long double __lgammal (long double) throw ();






extern long double tgammal (long double) throw (); extern long double __tgammal (long double) throw ();





extern long double gammal (long double) throw (); extern long double __gammal (long double) throw ();






extern long double lgammal_r (long double, int *__signgamp) throw (); extern long double __lgammal_r (long double, int *__signgamp) throw ();







extern long double rintl (long double __x) throw (); extern long double __rintl (long double __x) throw ();


extern long double nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) throw (); extern long double __remainderl (long double __x, long double __y) throw ();



extern long double scalbnl (long double __x, int __n) throw (); extern long double __scalbnl (long double __x, int __n) throw ();



extern int ilogbl (long double __x) throw (); extern int __ilogbl (long double __x) throw ();




extern long double scalblnl (long double __x, long int __n) throw (); extern long double __scalblnl (long double __x, long int __n) throw ();



extern long double nearbyintl (long double __x) throw (); extern long double __nearbyintl (long double __x) throw ();



extern long double roundl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundl (long double __x) throw () __attribute__ ((__const__));



extern long double truncl (long double __x) throw () __attribute__ ((__const__)); extern long double __truncl (long double __x) throw () __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) throw (); extern long double __remquol (long double __x, long double __y, int *__quo) throw ();






extern long int lrintl (long double __x) throw (); extern long int __lrintl (long double __x) throw ();
extern long long int llrintl (long double __x) throw (); extern long long int __llrintl (long double __x) throw ();



extern long int lroundl (long double __x) throw (); extern long int __lroundl (long double __x) throw ();
extern long long int llroundl (long double __x) throw (); extern long long int __llroundl (long double __x) throw ();



extern long double fdiml (long double __x, long double __y) throw (); extern long double __fdiml (long double __x, long double __y) throw ();


extern long double fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) throw () __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) throw ()
     __attribute__ ((__const__));


extern int __signbitl (long double __value) throw ()
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) throw (); extern long double __fmal (long double __x, long double __y, long double __z) throw ();
# 364 "/usr/include/bits/mathcalls.h" 3 4
extern long double scalbl (long double __x, long double __n) throw (); extern long double __scalbl (long double __x, long double __n) throw ();
# 134 "/usr/include/math.h" 2 3 4
# 149 "/usr/include/math.h" 3 4
extern int signgam;
# 190 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 288 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 311 "/usr/include/math.h" 3 4
struct __exception



  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };


extern int matherr (struct __exception *__exc) throw ();
# 475 "/usr/include/math.h" 3 4
}
# 11 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/__merlinkernel_gcnconv_kernel.cpp" 2
# 1 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/merlin_type_define.h" 1
# 12 "/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/__merlinkernel_gcnconv_kernel.cpp" 2







static int gcnconv_kernel_dummy_pos;

static void merlin_memcpy_0(int dst[2][108365],int dst_idx_0,int dst_idx_1,int src[216730],int src_idx_0,unsigned int len,unsigned int max_len)
{_ssdm_SpecArrayDimSize(dst, 2);_ssdm_SpecArrayDimSize(src, 216730);

#pragma HLS inline off

#pragma HLS function_instantiate variable=&dst_idx_0,&dst_idx_1,&src_idx_0
 unsigned long i;
  unsigned long total_offset1 = (0 * 2 + dst_idx_0) * 108365 + dst_idx_1;
  unsigned long total_offset2 = 0 * 216730 + src_idx_0;
  merlinL0:
  for (i = 0; i < len / 4; ++i) {

#pragma HLS PIPELINE II=1

#pragma HLS LOOP_TRIPCOUNT max=128082
 dst[(total_offset1 + i) / 108365][(total_offset1 + i) % 108365] = src[total_offset2 + i];
  }
}

static void merlin_memcpy_1(int dst[216730],int dst_idx_0,int src[2][108365],int src_idx_0,int src_idx_1,unsigned int len,unsigned int max_len)
{_ssdm_SpecArrayDimSize(dst, 216730);_ssdm_SpecArrayDimSize(src, 2);

#pragma HLS inline off

#pragma HLS function_instantiate variable=&dst_idx_0,&src_idx_0,&src_idx_1
 unsigned long i;
  unsigned long total_offset1 = 0 * 216730 + dst_idx_0;
  unsigned long total_offset2 = (0 * 2 + src_idx_0) * 108365 + src_idx_1;
  merlinL1:
  for (i = 0; i < len / 4; ++i) {

#pragma HLS PIPELINE II=1

#pragma HLS LOOP_TRIPCOUNT max=128082
 dst[total_offset1 + i] = src[(total_offset2 + i) / 108365][(total_offset2 + i) % 108365];
  }
}

static void merlin_memcpy_2(int dst[108365],int dst_idx_0,int src[216730],int src_idx_0,unsigned int len,unsigned int max_len)
{_ssdm_SpecArrayDimSize(dst, 108365);_ssdm_SpecArrayDimSize(src, 216730);

#pragma HLS inline off

#pragma HLS function_instantiate variable=&dst_idx_0,&src_idx_0
 unsigned long i;
  unsigned long total_offset1 = 0 * 108365 + dst_idx_0;
  unsigned long total_offset2 = 0 * 216730 + src_idx_0;
  merlinL2:
  for (i = 0; i < len / 4; ++i) {

#pragma HLS PIPELINE II=1

#pragma HLS LOOP_TRIPCOUNT max=108365
 dst[total_offset1 + i] = src[total_offset2 + i];
  }
}

static void merlin_memcpy_3(int dst[216730],int dst_idx_0,int src[216730],int src_idx_0,unsigned int len,unsigned int max_len)
{_ssdm_SpecArrayDimSize(dst, 216730);_ssdm_SpecArrayDimSize(src, 216730);

#pragma HLS inline off

#pragma HLS function_instantiate variable=&dst_idx_0,&src_idx_0
 unsigned long i;
  unsigned long total_offset1 = 0 * 216730 + dst_idx_0;
  unsigned long total_offset2 = 0 * 216730 + src_idx_0;
  merlinL3:
  for (i = 0; i < len / 4; ++i) {

#pragma HLS PIPELINE II=1

#pragma HLS LOOP_TRIPCOUNT max=216730
 dst[total_offset1 + i] = src[total_offset2 + i];
  }
}

static void merlin_memcpy_4(int dst[216730],int dst_idx_0,int src[216730],int src_idx_0,unsigned int len,unsigned int max_len)
{_ssdm_SpecArrayDimSize(dst, 216730);_ssdm_SpecArrayDimSize(src, 216730);

#pragma HLS inline off

#pragma HLS function_instantiate variable=&dst_idx_0,&src_idx_0
 unsigned long i;
  unsigned long total_offset1 = 0 * 216730 + dst_idx_0;
  unsigned long total_offset2 = 0 * 216730 + src_idx_0;
  merlinL4:
  for (i = 0; i < len / 4; ++i) {

#pragma HLS PIPELINE II=1

#pragma HLS LOOP_TRIPCOUNT max=216730
 dst[total_offset1 + i] = src[total_offset2 + i];
  }
}
extern "C" {

         void gcnconv_kernel(merlin_uint_512 *x,merlin_uint_512 *weight,int edge_index[2 * (88648 + 19717)],merlin_uint_512 *result)
{_ssdm_SpecArrayDimSize(edge_index, 216730);

#pragma HLS INTERFACE m_axi port=&edge_index offset=slave depth=216730

#pragma HLS INTERFACE m_axi port=&result offset=slave depth=19717

#pragma HLS INTERFACE m_axi port=&weight offset=slave depth=500

#pragma HLS INTERFACE m_axi port=&x offset=slave depth=616157

#pragma HLS INTERFACE s_axilite port=&edge_index bundle=control

#pragma HLS INTERFACE s_axilite port=&result bundle=control

#pragma HLS INTERFACE s_axilite port=&weight bundle=control

#pragma HLS INTERFACE s_axilite port=&x bundle=control

#pragma HLS INTERFACE s_axilite port=return bundle=control

#pragma HLS DATA_PACK VARIABLE=&result

#pragma HLS DATA_PACK VARIABLE=&weight

#pragma HLS DATA_PACK VARIABLE=&x
 float weight_buf_0[500][16];

#pragma HLS array_partition variable=&weight_buf_0 cyclic factor=8 dim=2
 int edge_index_buf_3[216730];
  int edge_index_buf_2[2][108365];
  int edge_index_buf_1[216730];
  int edge_index_buf_0[108365];

#pragma ACCEL interface variable=result max_depth=315472 depth=315472

#pragma ACCEL interface variable=edge_index max_depth=216730 depth=216730

#pragma ACCEL interface variable=weight max_depth=8000 depth=8000

#pragma ACCEL interface variable=x max_depth=9858500 depth=9858500
 float edge_weight[88648 + 19717];
  float x_mul[19717][16];

#pragma HLS array_partition variable=&x_mul complete dim=2
 float deg[19717];
  float deg_inv_sqrt[19717];
  float norm[88648 + 19717];

  memcpy_wide_bus_read_float_2d_16_512(weight_buf_0,0,0,(merlin_uint_512 *)weight,(0 * 4),sizeof(float ) * ((unsigned long )8000),8000L);

  matrixumului0:
  for (int i = 0; i < 19717; ++i) {
    float x_buf_0[500];


#pragma HLS array_partition variable=&x_buf_0 cyclic factor=8 dim=1
 memcpy_wide_bus_read_float_512(&x_buf_0[0],(merlin_uint_512 *)x,(i * 500 * 4),sizeof(float ) * ((unsigned long )500),500L);


    matrixumuluj0:
    for (int j = 0; j < 16; ++j) {
      float mul = (float )0;

      matrixumuluk0:
      for (int k = 0; k < 500; ++k)

{

#pragma HLS pipeline
 mul += x_buf_0[k] * weight_buf_0[k][j];
      }
      x_mul[i][j] = mul;
    }
  }
  merlin_memcpy_0(edge_index_buf_2,0,0,edge_index,88648,sizeof(int ) * ((unsigned long )128082),512328UL);

  assignuindexui0:
  for (int i = 0; i < 19717; ++i)

{

#pragma HLS pipeline

 assignuindexuj0:
    for (int j = 0; j < 2; ++j)

{

#pragma HLS unroll
 edge_index_buf_2[j][i] = i;
    }
  }
  merlin_memcpy_1(edge_index,88648,edge_index_buf_2,0,0,sizeof(int ) * ((unsigned long )128082),512328UL);

  assignuweight0:
  for (int i = 0; i < 88648 + 19717; ++i)

{

#pragma HLS pipeline
 edge_weight[i] = ((float )1);
  }
  merlin_memcpy_2(edge_index_buf_0,0,edge_index,0,sizeof(int ) * ((unsigned long )108365),433460UL);

  incudegree0:
  for (int i = 0; i < 88648 + 19717; ++i)

{

#pragma HLS pipeline
 deg[edge_index_buf_0[i]] += edge_weight[i];
  }

  invert:
  for (int i = 0; i < 19717; ++i)

{

#pragma HLS pipeline
 deg_inv_sqrt[i] = ((float )1) / sqrtf(deg[i]);
  }
  merlin_memcpy_3(edge_index_buf_1,0,edge_index,0,sizeof(int ) * ((unsigned long )216730L),866920UL);

  assignunorm0:
  for (int i = 0; i < 88648 + 19717; ++i)

{

#pragma HLS pipeline
 norm[i] = deg_inv_sqrt[edge_index_buf_1[i]] * edge_weight[i] * deg_inv_sqrt[edge_index_buf_1[108365 + i]];
  }
  merlin_memcpy_4(edge_index_buf_3,0,edge_index,0,sizeof(int ) * ((unsigned long )216730L),866920UL);

  calcuresultui0:
  for (int i = 0; i < 88648 + 19717; ++i)

{

#pragma HLS pipeline

 calcuresultuj0:
    for (int j = 0; j < 16; ++j)

{

#pragma HLS unroll
 float tmp_0;
      tmp_0 = memcpy_wide_bus_single_read_float_512((merlin_uint_512 *)result,((edge_index_buf_3[108365 + i] * 16 + j) * 4));
      tmp_0 += norm[i] * x_mul[edge_index_buf_3[i]][j];
      memcpy_wide_bus_single_write_float_512((merlin_uint_512 *)result,tmp_0,(4 * (edge_index_buf_3[108365 + i] * 16 + j)));
    }
  }
}
}
