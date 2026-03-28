#ifndef _C_MATH_H
#define _C_MATH_H

#include <errno.h>
#include <fdlibm.h>

#ifdef __cplusplus
extern "C" {
#endif

#define DONT_INLINE_SQRT

#define M_PI 3.1415926535897932
#define M_SQRT3 1.7320499420166016

extern int __float_nan[];
extern int __float_huge[];
extern int __double_huge[];

#define NAN (*(float *) __float_nan)
#define INFINITY (*(float *) __float_huge)
#define HUGE_VAL (*(double *) __double_huge)

// f64 bit-twiddling macros
#ifdef __BIG_ENDIAN__
    #define __HI(x) (((int *) &x)[0])
    #define __LO(x) (((int *) &x)[1])
#else
    #define __HI(x) (((int *) &x)[1])
    #define __LO(x) (((int *) &x)[0])
#endif

#define FP_NAN 1
#define FP_INFINITE 2
#define FP_ZERO 3
#define FP_NORMAL 4
#define FP_SUBNORMAL 5

int __fpclassifyd(double x);
int __signbitd(double x);
double fabs(double x);
double nan(const char *x);
double sqrt(double __x);

#define fpclassify(x) ((sizeof(x) == sizeof(float)) ? __fpclassifyf((float) (x)) : __fpclassifyd((double) (x)))
#define signbit(x) ((sizeof(x) == sizeof(float)) ? __signbitf((float) (x)) : __signbitd((double) (x)))

#define isnormal(x) (fpclassify(x) == FP_NORMAL)
#define isnan(x) (fpclassify(x) == FP_NAN)
#define isinf(x) (fpclassify(x) == FP_INFINITE)
#define isfinite(x) (fpclassify(x) > FP_INFINITE)

static inline long double fabsl(long double x) {
    return (long double) fabs((double) x);
}

#ifdef __cplusplus
}
#endif

#endif
