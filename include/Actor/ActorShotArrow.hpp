#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
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

class UnkClass_ActorShotArrow_94 {
public:
    /* 00 */ virtual void vfunc_00() override;
    /* 04 */ virtual void vfunc_04() override;
    /* 04 */ virtual void vfunc_08(unk32) override;
};

class ActorShotArrow : public Actor {
public:
    /* 000 (base) */
    /* 094 */ UnkClass_ActorShotArrow_94 mUnk_94;
    /* 09C */ STRUCT_PAD(0x98, 0xA0);
    /* 0A0 */ UnkSystem4 mUnk_A0;
    /* 100 */ UnkSystem5 mUnk_100;
    /* 120 */ STRUCT_PAD(0x120, 0x140);
    /* 140 */ unk32 mUnk_140;
    /* 144 */ STRUCT_PAD(0x144, 0x168);
    /* 168 */ unk32 mUnk_168;
    /* 16C */ fx32 mUnk_16C;
    /* 170 */ u16 mUnk_170;
    /* 172 */ u16 mUnk_172;
    /* 174 */ unk16 mUnk_174;
    /* 176 */ unk16 mUnk_176;
    /* 178 */ ActorShotArrow *mUnk_178;
    /* 17C */ STRUCT_PAD(0x17C, 0x184);
    /* 180 */ unk32 mUnk_184;
    /* 184 */ STRUCT_PAD(0x188, 0x190);
    /* 190 */ u16 mUnk_190;
    /* 192 */ STRUCT_PAD(0x192, 0x198);
    /* 198 */ u32 mUnk_198;
    /* 19A */ STRUCT_PAD(0x19C, 0x1A0);
    /* 1A0 */ VecFx32 mUnk_1A0;
    /* 1AC */ unk32 mUnk_1AC;
    /* 1B0 */ STRUCT_PAD(0x1B0, 0x1C8);
    /* 1C8 */ Actor *mUnk_1C8;
    /* 1CC */ VecFx32 mUnk_1CC;
    /* 1D8 */ s16 mUnk_1D8;
    /* 1DA */ s16 mUnk_1DA;
    /* 1DC */ VecFx32 mUnk_1DC;
    /* 1E0 */ STRUCT_PAD(0x1E8, 0x250);
    /* 250 */ unk16 mUnk_250;
    /* 252 */ unk16 mUnk_252;
    /* 254 */ STRUCT_PAD(0x254, 0x258);
    /* 258 */ u16 mUnk_258;
    /* 25A */ bool mUnk_25A;
    /* 25B */ bool mUnk_25B;
    /* 25C */ bool mUnk_25C;
    /* 25D */ bool mUnk_25D;
    /* 25E */ u8 mUnk_25E;

    ActorShotArrow();

    /* 00 */ virtual void func_ov000_0207b71c() override;
    /* 4C */ virtual ~ActorShotArrow() override;

    unk32 func_ov000_0207e294(Cylinder *);
    void func_ov000_02098838();
    unk32 func_ov017_020beeec(unk32);

    UnkStruct_027e0ce0_1C_0C *func_ov031_020f1404();
    ActorShotArrow *func_ov031_020f1608();
    bool func_ov031_020f173c();
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
    unk32 func_ov031_020f2270();
    void func_ov031_020f2280();
    void func_ov031_020f229c();
    void func_ov031_020f22d4(Mat3p *param_1, VecFx32 *param_2);
    void func_ov031_020f2310();
    void func_ov031_020f2654();
    void func_ov031_020f2794(unk16 param_1);
    void func_ov031_020f28ac();
    void func_ov031_020f2b8c();
    void func_ov031_020f2bbc();
    void func_ov031_020f2bec();
    void func_ov031_020f2c08(unk16);
    void func_ov031_020f2cac(unk32 *, unk32);
    void func_ov031_020f2ef0();
    void func_ov031_020f2f5c(VecFx32 *param_1);
    void func_ov031_020f2f9c();
    void func_ov031_020f3000();
    void func_ov031_020f311c();
    bool func_ov031_020f3210(u16);
    bool func_ov031_020f3258(u16 param_1);
    void func_ov031_020f3288();
    ActorShotArrow *func_ov031_020f32c4();
    ActorShotArrow *func_ov031_020f32e0();
    void func_ov031_020f3304();
    void func_ov031_020f3310();
    void func_ov031_020f33bc();
    void func_ov031_020f370c(unk32 param_1);
    void func_ov031_020f374c();
    void func_ov031_020f38b0();
    void func_ov031_020f3c38();
    void func_ov031_020f3d04(unk16 param_1);
    ActorShotArrow *func_ov031_020f3d4c();
};

class ActorProfileShotArrow : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileShotArrow();
    ~ActorProfileShotArrow();

    /* 0C */ virtual Actor *Create();

    static ActorProfileShotArrow *GetProfile();
};
