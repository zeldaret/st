#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorRupee.hpp"
#include "types.h"

class ActorHeart_c4 : public Actor_c4 {
public:
    ActorHeart_c4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorHeart : public Actor {
public:
    /* 00 (base) */
    /* 94 */ u16 mUnk_94;
    /* 96 */ u16 mUnk_96;
    /* 98 */ Actor_9c mUnk_98;
    /* 9C */ unk32 mUnk_9C;
    /* A0 */ unk32 mUnk_A0;
    /* A4 */ unk32 mUnk_A4;
    /* A8 */ STRUCT_PAD(0xA8, 0xB4);
    /* B4 */ unk16 mUnk_B4;
    /* B6 */ STRUCT_PAD(0xB6, 0xB8);
    /* B8 */ s16 mUnk_B8;
    /* BA */ unk16 mUnk_BA;
    /* BC */ unk16 mUnk_BC;
    /* BE */ s8 mUnk_BE;
    /* BF */ STRUCT_PAD(0xBF, 0xC0);
    /* C0 */ ActorRef mUnk_C0;
    /* C4 */ ActorRef mUnk_C4;
    /* C8 */ ActorHeart_c4 mUnk_C8;
    /* EC */ VecFx32 mUnk_EC;

    ActorHeart();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 2C */ virtual void vfunc_2c(unk32 param1) override;
    /* 4C */ virtual ~ActorHeart() override {};

    void func_ov031_020f0750();
    static void func_ov031_020eed64(ActorRef *pOutRef, const VecFx32 *pPos, u32 params, ActorRef ref);
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
