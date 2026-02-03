#ifndef _C_CTYPE_H
#define _C_CTYPE_H

#include <locale.h>

#ifdef __cplusplus
extern "C" {
#endif

#define __msl_cmap_size 128

extern const unsigned short __ctype_mapC[__msl_cmap_size];
extern const unsigned char __lower_mapC[__msl_cmap_size];
extern const unsigned char __upper_mapC[__msl_cmap_size];

#define _MSL_CMAP_ACCESS __ctype_mapC
#define _MSL_CLOWER_ACCESS __lower_mapC
#define _MSL_CUPPER_ACCESS __upper_mapC

#define __msl_alpha 0x001
#define __msl_blank 0x002
#define __msl_cntrl 0x004
#define __msl_digit 0x008
#define __msl_graph 0x010
#define __msl_lower 0x020
#define __msl_print 0x040
#define __msl_punct 0x080
#define __msl_space 0x100
#define __msl_upper 0x200
#define __msl_xdigit 0x400

static inline int isalpha(unsigned int c) {
    return ((c < 0) || (c >= __msl_cmap_size)) ? 0 : (int) (_MSL_CMAP_ACCESS[c] & __msl_alpha);
}

static inline int isdigit(unsigned int c) {
    return ((c < 0) || (c >= __msl_cmap_size)) ? 0 : (int) (_MSL_CMAP_ACCESS[c] & __msl_digit);
}

static inline int isspace(unsigned int c) {
    return ((c < 0) || (c >= __msl_cmap_size)) ? 0 : (int) (_MSL_CMAP_ACCESS[c] & __msl_space);
}

static inline int isupper(unsigned int c) {
    return ((c < 0) || (c >= __msl_cmap_size)) ? 0 : (int) (_MSL_CMAP_ACCESS[c] & __msl_upper);
}

static inline int isxdigit(unsigned int c) {
    return ((c < 0) || (c >= __msl_cmap_size)) ? 0 : (int) (_MSL_CMAP_ACCESS[c] & __msl_xdigit);
}

static inline int toupper(unsigned int c) {
    return ((c < 0) || (c >= __msl_cmap_size)) ? c : (int) (_MSL_CUPPER_ACCESS[c]);
}

#ifdef __cplusplus
}
#endif

#endif
