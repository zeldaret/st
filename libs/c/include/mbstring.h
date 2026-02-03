#ifndef _C_MBSTRING_H
#define _C_MBSTRING_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

int mbtowc(wchar_t *pwc, const char *s, int n);
int __mbtowc_noconv(wchar_t *pwc, const char *str, int n);
int __wctomb_noconv(char *s, wchar_t wchar);
size_t mbstowcs(wchar_t *pDest, const char *pSrc, size_t num);

#ifdef __cplusplus
}
#endif

#endif
