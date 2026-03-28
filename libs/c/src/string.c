#include <stddef.h>
#include <string.h>

#define K1 0x80808080
#define K2 0xFEFEFEFF

size_t strlen(const char *str) {
    int length       = -1;
    unsigned char *p = (unsigned char *) str;

    do {
        length++;
    } while (*p++);

    return length;
}

char *strcpy(char *dest, const char *src) {
    register unsigned char *destb, *fromb;
    register unsigned int w, t, align;
    register unsigned int k1, k2;

    fromb = (unsigned char *) src;
    destb = (unsigned char *) dest;

    if ((align = ((unsigned int) fromb & 3)) != ((unsigned int) destb & 3)) {
        goto bytecopy;
    }

    if (align != 0) {
        if ((*destb = *fromb) == 0) {
            return dest;
        }

        for (align = 3 - align; align != 0; align--) {
            if ((*++destb = *++fromb) == 0) {
                return dest;
            }
        }
        ++destb;
        ++fromb;
    }

    k1 = K1;
    k2 = K2;

    w = *((int *) fromb);
    t = w + k2;
    t &= ~w;
    t &= k1;

    if (t != 0) {
        goto bytecopy;
    }

    --((int *) (destb));

    do {
        *(++((int *) destb)) = w;
        w                    = *(++((int *) fromb));
        t                    = w + k2;
        t &= ~w;
        t &= k1;
        if (t != 0) {
            goto adjust;
        }
    } while (true);

adjust:
    ++((int *) destb);
bytecopy:
    if ((*destb = *fromb) == 0) {
        return dest;
    }

    do {
        if ((*++destb = *++fromb) == 0) {
            return dest;
        }
    } while (true);

    return dest;
}

char *strncpy(char *dest, const char *src, size_t n) {
    const unsigned char *p = (const unsigned char *) src;
    unsigned char *q       = (unsigned char *) dest;

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

int strcmp(char *str1, char *str2) {
    register unsigned char *left  = (unsigned char *) str1;
    register unsigned char *right = (unsigned char *) str2;
    unsigned int k1, k2, align, l1, r1, x;

    l1 = *left;
    r1 = *right;
    if (l1 - r1) {
        return (l1 - r1);
    }

    if ((align = ((unsigned int) left & 3)) != ((unsigned int) right & 3)) {
        goto bytecopy;
    }
    if (align) {
        if (l1 == 0) {
            return (0);
        }
        for (align = 3 - align; align; align--) {
            l1 = *(++left);
            r1 = *(++right);
            if (l1 - r1) {
                return (l1 - r1);
            }
            if (l1 == 0) {
                return (0);
            }
        }
        left++;
        right++;
    }

    k1 = K1;
    k2 = K2;

    l1 = *(unsigned int *) left;
    r1 = *(unsigned int *) right;
    x  = l1 + k2;
    x &= ~l1;
    if (x & k1) {
        goto adjust;
    }
    while (l1 == r1) {
        l1 = *(++((unsigned int *) (left)));
        r1 = *(++((unsigned int *) (right)));
        x  = l1 + k2;
        if (x & k1) {
            goto adjust;
        }
    }

    --left;
    --right;
    goto bytecopy;

adjust:
    l1 = *left;
    r1 = *right;
    if (l1 - r1) {
        return (l1 - r1);
    }
bytecopy:
    if (l1 == 0) {
        return 0;
    }

    do {
        l1 = *(++left);
        r1 = *(++right);
        if (l1 - r1) {
            return (l1 - r1);
        }
        if (l1 == 0) {
            return 0;
        }
    } while (true);
}

int strncmp(char *str1, char *str2, size_t n) {
    const unsigned char *p1 = (unsigned char *) str1;
    const unsigned char *p2 = (unsigned char *) str2;
    unsigned int c1, c2;

    n++;

    while (--n) {
        if ((c1 = *p1++) != (c2 = *p2++)) {
            return (c1 - c2);
        } else if (!c1) {
            break;
        }
    }

    return 0;
}
