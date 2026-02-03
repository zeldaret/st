#ifndef _C_WSTRING_H
#define _C_WSTRING_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

size_t wcslen(const wchar_t *str);
wchar_t *wcscpy(wchar_t *dest, const wchar_t *src);
wchar_t *wcsncpy(wchar_t *dest, const wchar_t *src, size_t n);
const wchar_t *wcschr(const wchar_t *str, wchar_t chr);

#ifdef __cplusplus
}
#endif

#endif
