#include <locale.h>
#include <stddef.h>

char *strncpy(char *dest, const char *src, size_t n);
size_t strlen(const char *str);

int mbtowc(short *pwc, const char *s, int n) {
    return _current_locale.ctype_cmpt_ptr->decode_mb(pwc, s, n);
}

int __mbtowc_noconv(unsigned short *pwc, const char *str, int n) {
    const unsigned char *s = (const unsigned char *) str;

    if (s == NULL) {
        return 0;
    }

    if (n == 0) {
        return -1;
    }

    if (pwc != NULL) {
        *pwc = (unsigned char) *s;
    }

    if (*s == 0) {
        return 0;
    }

    return 1;
}

int __wctomb_noconv(char *s, unsigned short wchar) {
    if (s == NULL) {
        return 0;
    }
    *s = wchar;
    return 1;
}

size_t mbstowcs(wchar_t *pDest, const char *pSrc, size_t num) {
    int res;
    unsigned char *src;
    int count;
    size_t src_len;

    src_len = strlen(pSrc);

    if (pDest != 0) {
        src = (unsigned char *) pSrc;

        for (count = 0; count < num; count++) {
            if (*src) {
                res = mbtowc(pDest++, src, src_len);

                if (res > 0) {
                    src += res;
                    src_len -= res;
                } else {
                    return -1;
                }
            } else {
                *pDest = 0;
                break;
            }
        }
    } else {
        count = 0;
    }

    return count;
}
