#ifndef _NNS_TEXT_H
#define _NNS_TEXT_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

struct Text_UnkStruct2;
struct Text_UnkStruct4;

typedef void (*Text_UnkCallback1)(Text_UnkStruct2 *param1, void *param2, unk32 param3, unk32 param4, unk32 param5,
                                  Text_UnkStruct4 *param6);
typedef void (*Text_UnkCallback2)(Text_UnkStruct2 *param1, unk32 param2);
typedef void (*Text_UnkCallback3)(Text_UnkStruct2 *param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5,
                                  unk32 param6);

typedef struct Text_UnkStruct5 {
    /* 00 */ unk8 unk_00;
    /* 01 */ unk8 unk_01;
    /* 02 */ unk8 unk_02;
} Text_UnkStruct5;

typedef struct Text_UnkStruct4 {
    /* 00 */ Text_UnkStruct5 *unk_00;
    /* 04 */ void *unk_04;
} Text_UnkStruct4;

typedef struct Text_UnkStruct3 {
    /* 00 */ Text_UnkCallback1 func_00;
    /* 04 */ Text_UnkCallback2 func_04;
    /* 08 */ Text_UnkCallback3 func_08;
} Text_UnkStruct3;

typedef struct Text_UnkStruct2 {
    /* 00 */ void *unk_00;
    /* 04 */ unk32 unk_04;
    /* 08 */ unk32 unk_08;
    /* 0C */ unk8 unk_0C;
    /* 0D */ unk8 unk_0D;
    /* 0E */ unk8 unk_0E;
    /* 0F */ unk8 unk_0F;
    /* 10 */ unk32 unk_10;
    /* 14 */ Text_UnkStruct3 *unk_14;
} Text_UnkStruct2;

typedef struct Text_UnkStruct1 {
    /* 00 */ Text_UnkStruct2 *unk_00;
    /* 04 */ void *unk_04;
    /* 08 */ unk32 unk_08;
    /* 0C */ unk32 unk_0C;
} Text_UnkStruct1;

#ifdef __cplusplus
}
#endif

#endif
