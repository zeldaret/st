#ifndef _C_MEM_H
#define _C_MEM_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

void *memcpy(void *dst, const void *src, int n);
void *memmove(void *dst, const void *src, size_t len);
void *memset(void *dest, int val, int n);
void *memchr(const void *src, int val, int n);
int memcmp(const void *src1, const void *src2, int n);

#ifdef __cplusplus
}
#endif

#endif
