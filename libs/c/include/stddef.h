#ifndef _C_STDDEF_H
#define _C_STDDEF_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef NULL
    #define NULL 0
#endif

#ifndef nullptr
    #define nullptr 0
#endif

#define offsetof(ST, M) ((size_t) &(((ST *) 0)->M))

typedef signed long intptr_t;
typedef unsigned long uintptr_t;
typedef intptr_t ptrdiff_t;

typedef unsigned int size_t;

#ifndef __cplusplus
typedef int bool;
typedef unsigned short wchar_t;
    #define true 1
    #define false 0
#endif

#ifdef __cplusplus
}
#endif

#endif
