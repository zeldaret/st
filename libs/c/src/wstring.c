#include <wstring.h>

size_t wcslen(const wchar_t *str) {
    size_t len = -1;

    do {
        len++;
    } while (*str++ != 0);

    return len;
}

wchar_t *wcscpy(wchar_t *dest, const wchar_t *src) {
    const wchar_t *p = src;
    wchar_t *q       = dest;

    while ((*q++ = *p++) != L'\0')
        ;

    return dest;
}

wchar_t *wcsncpy(wchar_t *dest, const wchar_t *src, size_t n) {
    const wchar_t *p = src;
    wchar_t *q       = dest;

    n++;

    while (--n != 0) {
        if ((*q++ = *p++) == 0) {
            while (--n != 0) {
                *q++ = 0;
            }
            break;
        }
    }

    return dest;
}

const wchar_t *wcschr(const wchar_t *str, wchar_t chr) {
    const wchar_t *p = str;
    wchar_t c        = chr;
    wchar_t ch;

    while (ch = *p++) {
        if (ch == c) {
            return ((char *) (p - 1));
        }
    }

    return (c ? 0 : (char *) (p - 1));
}
