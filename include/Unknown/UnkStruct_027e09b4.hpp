#pragma once

#include "global.h"
#include "math.hpp"
#include "nitro/fx.h"
#include "types.h"

struct UnkStruct_027e09b4_00 {
    /* 00 */ VecFx32 trans;
    /* 0C */ struct {
        fx32 x, z;
    } scale;
    /* 14 */ u16 unk_14;
    /* 16 */ fx16 unk_16;
    /* 18 */
};

class UnkStruct_027e09b4 : public AutoInstance<UnkStruct_027e09b4> {
public:
    /* 000 */ UnkStruct_027e09b4_00 mUnk_000[32];
    /* 300 */ UnkStruct_027e09b4_00 *mUnk_300;
    /* 304 */ unk32 mUnk_304;
    /* 308 */ unk16 mUnk_308;
    /* 30A */ unk16 mUnk_30A;
    /* 30C */

    UnkStruct_027e09b4();

    // main
    void func_01fff60c(VecFx32 *param1, unk32 param2, unk32 param3, s32 param4, unk32 param5, unk32 param6);

    // overlay 1
    void func_ov001_020bea84();

    static UnkStruct_027e09b4 *Create();
    static void Destroy();

    // overlay 17
    bool func_ov017_020c08c4(const VecFx32 *param1, unk32 param2, unk32 param3, s32 param4, s16 param5, u8 param6);
    void func_ov017_020c0970(const VecFx32 *param1, unk32 param2, unk32 param3, u16 param4, u16 param5, u32 param6,
                             fx32 param7);
    void func_ov017_020c0a30(const VecFx32 *param1, unk32 param2, unk32 param3, u16 param4, u16 param5);
    void func_ov017_020c0a6c(const VecFx32 *param1, s32 param2, s32 param3, s32 param4, u16 param5, u16 param6, s32 param7,
                             u16 param8);
    void func_ov017_020c0edc();

    static void func_ov017_020c0774(s32 param1, s32 param2, s32 param3, s32 param4);
    static s32 func_ov017_020c08a4(void);
    static void func_ov017_020c0b24(const VecFx32 *param1, s32 param2, s32 param3);
    static void func_ov017_020c0c50(u16 param1);
    static void func_ov017_020c0dec(void);
};

extern UnkStruct_027e09b4 *data_027e09b4;
