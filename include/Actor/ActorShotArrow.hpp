#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorShotArrow_c4 : public Actor_c4 {
public:
    ActorShotArrow_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorShotArrow : public Actor {
public:
    /* 000 (base) */
    /* 094 */ STRUCT_PAD(0x94, 0x16C);
    /* 16C */ unk32 mUnk_16C;
    /* 094 */ STRUCT_PAD(0x170, 0x174);
    /* 174 */ unk16 mUnk_174;
    /* 176 */ STRUCT_PAD(0x176, 0x250);
    /* 250 */ unk16 mUnk_250;
    /* 252 */ unk16 mUnk_252;
    /* 254 */ STRUCT_PAD(0x254, 0x258);
    /* 258 */ u16 mUnk_258;

    ActorShotArrow();

    /* 4C */ virtual ~ActorShotArrow() override;

    unk32 func_ov031_020f1404();
    ActorShotArrow *func_ov031_020f1608();
    void func_ov031_020f173c();
    void func_ov031_020f1868();
    void func_ov031_020f1874();
    void func_ov031_020f1878(s16 param_1);
    void func_ov031_020f18bc();
    void func_ov031_020f1958();
    void func_ov031_020f195c();
    void func_ov031_020f1a64();
    void func_ov031_020f1b04();
    void func_ov031_020f1c24();
    void func_ov031_020f1c7c();
    void func_ov031_020f1dd4();
    void func_ov031_020f1e3c();
    void func_ov031_020f1f54();
    void func_ov031_020f2010();
    void func_ov031_020f206c();
    void func_ov031_020f20bc();
    void func_ov031_020f2134();
    void func_ov031_020f2160();
    void func_ov031_020f21dc();
    void func_ov031_020f2214();
    void func_ov031_020f2270();
    void func_ov031_020f2280();
    void func_ov031_020f229c();
    void func_ov031_020f22d4();
    void func_ov031_020f2310();
    void func_ov031_020f2654();
    unk16 func_ov031_020f2794(unk16 param_1);
    void func_ov031_020f28ac();
    void func_ov031_020f2b8c();
    void func_ov031_020f2bbc();
    void func_ov031_020f2bec();
    void func_ov031_020f2c08();
    void func_ov031_020f2cac();
    void func_ov031_020f2ef0();
    void func_ov031_020f2f5c();
    void func_ov031_020f2f9c();
    void func_ov031_020f3000();
    void func_ov031_020f311c();
    unk16 func_ov031_020f3210(unk16);
    void func_ov031_020f3258();
    void func_ov031_020f3288();
    void func_ov031_020f32c4();
    void func_ov031_020f32e0();
    void func_ov031_020f3304();
    void func_ov031_020f3310();
    void func_ov031_020f33bc();
    void func_ov031_020f370c();
    void func_ov031_020f374c();
    void func_ov031_020f38b0();
    void func_ov031_020f3c38();
    void func_ov031_020f3d04();
    void func_ov031_020f3d4c();
};

class ActorProfileShotArrow : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileShotArrow();
    ~ActorProfileShotArrow();

    /* 0C */ virtual Actor *Create();

    static ActorProfileShotArrow *GetProfile();
};
