#pragma once

#include "Actor/ActorRef.hpp"
#include "Actor/ActorShotArrow.hpp"
#include "Unknown/UnkFileSystem.hpp"
#include "global.h"
#include "types.h"

class UnkStruct_027e0cd8_0C_Base;

class UnkStruct_027e09c0_60 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */

    UnkStruct_027e09c0_60() {
        this->mUnk_00 = 0;
        this->mUnk_10 = 0;
        this->mUnk_04 = 0;
        this->mUnk_08 = 0;
        this->mUnk_0C = 0;
    }
};

class UnkStruct_027e09c0_04 {
public:
    void func_ov000_0207f4d4();
};

class UnkStruct_027e09c0 : public AutoInstance<UnkStruct_027e09c0> {
public:
    /* 000 */ unk32 mUnk_000;
    /* 004 */ UnkStruct_027e09c0_04 *mUnk_004[16];
    /* 044 */ UnkStruct_027e09c0_04 **mUnk_044;
    /* 048 */ void *mUnk_048;
    /* 04C */ void *mUnk_04C;
    /* 050 */ unk32 mUnk_050;
    /* 054 */ void *mUnk_054;
    /* 058 */ void *mUnk_058;
    /* 05C */ unk32 mUnk_05C;
    /* 060 */ UnkStruct_027e09c0_60 mUnk_060[64];
    /* 760 */ void *mUnk_760;
    /* 764 */ void *mUnk_764;
    /* 768 */ unk32 mUnk_768;
    /* 76C */ void *mUnk_76C;
    /* 770 */ void *mUnk_770;
    /* 774 */ unk32 mUnk_774;
    /* 778 */ unk32 mUnk_778;
    /* 77C */ STRUCT_PAD(0x77C, 0x878);
    /* 878 */ unk32 mUnk_878;
    /* 87C */ STRUCT_PAD(0x87C, 0x978);
    /* 978 */

    UnkStruct_027e09c0();

    // overlay 0
    void func_ov000_0207da40();
    void func_ov000_0207e58c(ActorRef param1, unk32 param2, u8 param3, UnkStruct_ov031_Items_01 *param4);

    // overlay 1
    void func_ov001_020be394();
    void func_ov001_020be3c4();
    void func_ov001_020be3dc(UnkFileSystem3 *param1, UnkStruct_027e0cd8_0C_Base *param2);
    void func_ov001_020be400();

    static UnkStruct_027e09c0 *Create();
    static void Destroy();
    static void DestroyImpl();
};

extern UnkStruct_027e09c0 *data_027e09c0;
