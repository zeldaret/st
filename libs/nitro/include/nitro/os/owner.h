#ifndef _NITRO_OS_OWNER_H
#define _NITRO_OS_OWNER_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/types.h"

typedef struct OSOwnerInfo {
    /* 00 */ u8 unk_00[0x2];
    struct {
        /* 02 */ u8 month;
        /* 03 */ u8 day;
    } birthday;
    /* 04 */ u8 unk_04[0x16];
    /* 1a */ u16 nickNameLength;
    /* 1c */ u8 unk_1c[0x38];
    /* 54 */
} OSOwnerInfo;

void OS_func_0177(OSOwnerInfo *info);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
