#pragma once

#include "global.h"
#include "math.hpp"
#include "types.h"
#include "versions.h"

class UnkStruct_027e095c : public AutoInstance<UnkStruct_027e095c> {
public:
#if IS_JP
    /* 000 */ VecFx32 mUnk_000[64];
    /* 300 */ unk32 mUnk_2F4;
    /* 304 */ STRUCT_PAD(0x304, 0x900);
    /* 900 */ void *mUnk_8DC;
    /* 904 */ unk32 mUnk_8E0;
    /* 908 */ STRUCT_PAD(0x908, 0x964);
    /* 960 */ void *mUnk_940;
    /* 968 */
#else
    /* 000 */ VecFx32 mUnk_000[63];
    /* 2F4 */ unk32 mUnk_2F4;
    /* 2F8 */ STRUCT_PAD(0x2F8, 0x8DC);
    /* 8DC */ void *mUnk_8DC;
    /* 8E0 */ unk32 mUnk_8E0;
    /* 8E4 */ STRUCT_PAD(0x8E4, 0x940);
    /* 940 */ void *mUnk_940;
    /* 944 */
#endif

    UnkStruct_027e095c();
    ~UnkStruct_027e095c() {}

    // overlay 0
    void func_ov000_020592ec();
    void func_ov000_020592a0();

    // overlay 1
    static UnkStruct_027e095c *Create();
    static void Destroy();
};

extern UnkStruct_027e095c *data_027e095c;
