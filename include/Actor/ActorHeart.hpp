#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "types.h"

class ActorHeart_c4 : public Actor_c4 {
    ActorHeart_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorHeart : public Actor {
public:
    /* 00 (base) */
    /* 94 */ STRUCT_PAD(0x94, 0x98);
    /* 98 */ unk32 mUnk_98;
    /* 9C */ unk32 mUnk_9c;
    /* A0 */ STRUCT_PAD(0xA0, 0xB8);
    /* B8 */ u16 mUnk_b8;
    /* BA */ STRUCT_PAD(0xBA, 0xBC);
    /* BC */ u16 mUnk_bc;
    /* BE */ u8 mUnk_be;
    /* BF */ STRUCT_PAD(0xBF, 0xC0);
    /* C0 */ unk32 mUnk_c0;
    /* C4 */ unk32 mUnk_c4;

    ActorHeart();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 2C */ virtual void vfunc_2c(unk32 param1) override;
    /* 4C */ virtual ~ActorHeart() override {};

    void func_ov031_020f0750();
    void func_ov031_020eed64(unk32 *param_2, unk32 param_3, unk32 param_4);
    void func_ov031_020ef1b4(unk16 param_2);
    void func_ov031_020ef208();
    void func_ov031_020ef4a8();
    void func_ov031_020ef528();
    void func_ov031_020ef570();
    void func_ov031_020ef698();

    // data_ov031_02113d74
    void func_ov031_020ef2f8();
    void func_ov031_020ef334();
    void func_ov031_020ef3a0();
    void func_ov031_020ef3d0();
    void func_ov031_020ef444();
    void func_ov031_020ef458();

    // data_ov031_02113da4
    void func_ov031_020ef2ec();
    void func_ov031_020ef320();
    void func_ov031_020ef35c();
    void func_ov031_020ef3b8();
    void func_ov031_020ef430();
    void func_ov031_020ef448();
};

class ActorProfileHeart : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileHeart();
    ~ActorProfileHeart() {}

    /* 0C */ virtual Actor *Create();

    static ActorProfileHeart *GetProfile();
};
