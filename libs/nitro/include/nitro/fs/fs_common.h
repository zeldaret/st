#ifndef _NITRO_FS_COMMON_H
#define _NITRO_FS_COMMON_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/types.h"

#define FS_MAX_PATH 260

#define FS_RESULT_SUCCESS ((FSResult) 0x0)
#define FS_RESULT_FAILURE ((FSResult) 0x1)
#define FS_RESULT_0x3 ((FSResult) 0x3)
#define FS_RESULT_0x5 ((FSResult) 0x5)
#define FS_RESULT_INVALID_COMMAND ((FSResult) 0x4)
#define FS_RESULT_INVALID_PARAM ((FSResult) 0x6)
#define FS_RESULT_0x8 ((FSResult) 0x8)
#define FS_RESULT_0xB ((FSResult) 0xb)
#define FS_RESULT_AWAIT_ASYNC ((FSResult) 0x100)
#define FS_RESULT_0x101 ((FSResult) 0x101)
#define FS_RESULT_0x102 ((FSResult) 0x102)

typedef s32 FSResult;
typedef u32 FSFileProc;

typedef struct FS_UnkStruct13 {
    /* 000 */ u8 unk_00[4];
    /* 004 */ PAD(0x04, 0x10);
    /* 010 */ u32 unk_10;
    /* 014 */ char unk_14[FS_MAX_PATH];
    /* 118 */ u32 unk_118;
    /* 11c */ u32 unk_11c;
    /* 120 */ PAD(0x120, 0x138);
    /* 138 */ u32 unk_138;
    /* 13c */ u32 unk_13c;
    /* 140 */ u32 unk_140;
    /* 144 */ u32 unk_144;
    /* 148 */ u32 unk_148;
    /* 14c */ u32 unk_14c;
    /* 150 */ PAD(0x150, 0x168);
    /* 168 */ u32 unk_168;
    /* 16c */ u32 unk_16c;
    /* 170 */
} FS_UnkStruct13;

typedef struct FS_UnkStruct15 {
    /* 00 */ u32 unk_00;
    /* 04 */ PAD(0x04, 0x4c);
    /* 4c */ u32 unk_4c;
    /* 50 */ u32 unk_50;
    /* 54 */
} FS_UnkStruct15;

typedef struct FS_UnkStruct16 {
    /* 00 */ u32 unk_00;
    /* 04 */ u32 unk_04;
    /* 08 */ u32 unk_08;
    /* 0c */ u32 unk_0c;
    /* 10 */ u32 unk_10;
    /* 14 */ u32 unk_14;
    /* 18 */ u32 unk_18;
    /* 1c */ u32 unk_1c;
    /* 20 */ u32 unk_20;
    /* 24 */ u32 unk_24;
    /* 28 */ u32 unk_28;
    /* 2c */ u32 unk_2c;
    /* 30 */
} FS_UnkStruct16;

#ifdef __cplusplus
} // extern "C"
#endif

#endif
