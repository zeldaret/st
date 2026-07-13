#pragma once

#include "Actor/ActorRef.hpp"
#include "Actor/ActorShotArrow.hpp"
#include "Unknown/UnkFileSystem.hpp"
#include "global.h"
#include "types.h"

class UnkStruct_027e0cd8_0C_Base;

struct UnkStruct_ov000_0207de98 {
    VecFx32 vec;
    unk32 param1;
    unk32 param2;
};

class UnkStruct_027e09c0 : public AutoInstance<UnkStruct_027e09c0> {
public:
    /* 00 */ unk32 mUnk_00;

    UnkStruct_027e09c0();
    ~UnkStruct_027e09c0();

    // overlay 0
    void func_ov000_0207da40();
    void func_ov000_0207de98(ActorRef param1, UnkStruct_ov000_0207de98 *param2, Actor_38 *param3);
    void func_ov000_0207e58c(ActorRef param1, unk32 param2, u8 param3, UnkStruct_ov031_Items_01 *param4);
    bool func_ov000_0207e458(unk32 param1, unk32 param2, VecFx32 *param3, unk32 param4, VecFx32 *param5, ActorRef param6);

    // overlay 1
    void func_ov001_020be394();
    void func_ov001_020be3c4();
    void func_ov001_020be3dc(UnkFileSystem3 *param1, UnkStruct_027e0cd8_0C_Base *param2);
    void func_ov001_020be400();

    static UnkStruct_027e09c0 *Create();
    static void Destroy();
};

extern UnkStruct_027e09c0 *data_027e09c0;
