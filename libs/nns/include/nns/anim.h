#pragma once

#include <nitro/math.h>
#include <types.h>

#ifdef __cplusplus
extern "C" {
#endif

// note: some of those names are from an assert inside `CellAnimObject::func_ov000_020609c4`

typedef struct AnimCallbackFunctor {
    // `unk_00` is function kind? in `func_020075ec` it's calling `pFunc` with one arg when set to 2 or 3
    // and in `func_02007498` it goes with two when set to 1
    /* 00 */ unk32 unk_00;
    /* 04 */ unk32 unk_04;
    /* 08 */ void *pFunc;
    /* 0C */ unk32 unk_0C;
} AnimCallbackFunctor; // size = 0x10

typedef struct AnimController {
    /* 00 */ void *unk_00;
    /* 04 */ void *unk_04;
    /* 08 */ unk32 unk_08;
    /* 0C */ unk32 unk_0C; // pause the animation timer
    /* 10 */ unk32 unk_10; // animation timer
    /* 14 */ unk32 unk_14; // animation speed (also affects above timer)
    /* 18 */ unk32 unk_18;
    /* 1C */ void *unk_1C; // pointer to animation bank ("ABNK")
    /* 20 */ AnimCallbackFunctor callbackFunctor;
} AnimController; // size = 0x30

typedef struct UnkAnimStruct1 {
    /* 00 */ unk32 unk_00;
    /* 04 */ unk32 unk_04; // related to the width of the texture (scaling matrix?)
    /* 08 */ unk32 unk_08; // related to the height of the texture
    /* 0C */ struct {      //! TODO: used to be `Vec2us`
        u16 x;
        u16 y;
    } unk_0C;
    /* 10 */ unk16 unk_10;
    /* 12 */ unk16 unk_12;
} UnkAnimStruct1; // size = 0x14

typedef struct CellAnim {
    /* 00 */ AnimController animCtrl;
    /* 30 */ void *unk_30; // pointer to somewhere inside "CEBK"
    /* 34 */ void *unk_34;
    /* 38 */ unk32 unk_38;
    /* 3C */ UnkAnimStruct1 unk_3C;
} CellAnim; // size = 0x50

#ifdef __cplusplus
} // extern "C"
#endif
