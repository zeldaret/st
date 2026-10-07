#ifndef _NITRO_OS_ALARM_H
#define _NITRO_OS_ALARM_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/types.h"

typedef struct OSAlarm {
    /* 00 */ u32 unk_00;
    /* 04 */ u32 unk_04;
    /* 08 */ u32 unk_08;
    /* 0c */ u32 unk_0c;
    /* 10 */ u32 unk_10;
    /* 14 */ void *unk_14;
    /* 18 */ void *unk_18;
    /* 1c */ u32 unk_1c;
    /* 20 */ u32 unk_20;
    /* 24 */ u32 unk_24;
    /* 28 */ u32 unk_28;
    /* 2c */
} OSAlarm;

#ifdef __cplusplus
} // extern "C"
#endif

#endif
