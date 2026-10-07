#ifndef _NITRO_STD_H
#define _NITRO_STD_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/types.h"

s32 STD_CompareNString(const char *src, const char *dst, s32 size);
s32 STD_CompareString(const char *src, const char *dst);
char *STD_CopyString(char *dst, const char *src);
s32 STD_CopyLString(char *dst, const char *src, s32 size);
const char *STD_SearchString(const char *src, const char *dst);
s32 STD_GetStringLength(const char *arg0);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
