#pragma once

#include "global.h"
#include "types.h"

class UnkStruct_027e09bc_0C {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x34);
    /* 34 */ VecFx32 mUnk_34;

    unk32 func_01ffd640(VecFx32 *param1);
    void func_ov000_02078230(unk32 param1);
    bool func_ov000_0207834c(VecFx32 *param1, unk32 param2, unk32 param3);
    bool func_ov000_02078764(VecFx32 *param1, void *param2, unk32 param3);
};

class UnkStruct_027e09bc : public AutoInstance<UnkStruct_027e09bc> {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ UnkStruct_027e09bc_0C *mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ UnkStruct_027e09bc_0C *mUnk_0C;

    UnkStruct_027e09bc();
    ~UnkStruct_027e09bc();

    // overlay 1
    void func_ov001_020babc8();
    void func_ov001_020bab5c();

    static UnkStruct_027e09bc *Create();
    static void Destroy();
};

extern UnkStruct_027e09bc *data_027e09bc;
