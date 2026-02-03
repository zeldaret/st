#ifndef _C_SCANF_H
#define _C_SCANF_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdarg.h>

int vsscanf(const char *, const char *, va_list);
int sscanf(const char *, const char *, ...);

#ifdef __cplusplus
}
#endif

#endif
