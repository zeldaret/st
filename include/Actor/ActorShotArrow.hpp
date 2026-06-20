#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "global.h"
#include "types.h"

enum ActorShotArrowState_ {
    ActorShotArrowState_0 = 0,
    ActorShotArrowState_1 = 1,
    ActorShotArrowState_2 = 2,
    ActorShotArrowState_3 = 3,
    ActorShotArrowState_4 = 4,
    ActorShotArrowState_5 = 5,
    ActorShotArrowState_6 = 6,
    ActorShotArrowState_7 = 7,
    ActorShotArrowState_Max,
};

class ActorShotArrow;

class ActorShotArrow_140 : public Actor_9C {
public:
    /* 00 (vtable) */
    /* 20 */ STRUCT_PAD(0x20, 0x24);
    /* 24 */ bool mUnk_24;
    /* 25 */ unk8 mUnk_25;
    /* 26 */ unk8 mUnk_26;
    /* 27 */ unk8 mUnk_27;

    ActorShotArrow_140(Actor *param1);
};

class ActorShotArrow_194_Base {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk16 mUnk_08;
    /* 08 */ unk16 mUnk_0A;
    /* 0C */ VecFx32 mUnk_0C;
    /* 18 */ fx32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */

    ActorShotArrow_194_Base() {
        this->mUnk_04 = 0;
        this->mUnk_08 = 0;
        VecFx32_Init(0, 0, 0, &this->mUnk_0C);
        this->mUnk_18 = 0;
        this->mUnk_1C = 0;
        this->mUnk_20 = 0;
        this->mUnk_24 = 0;
        this->mUnk_28 = 0;
    }

    // data_ov000_020b27c8
    /* 00 */ virtual ~ActorShotArrow_194_Base();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual bool vfunc_0C(Actor *, VecFx32 *vector);
    /* 10 */ virtual void vfunc_10(Actor *actor);
};

class ActorShotArrow_194 : public ActorShotArrow_194_Base {
public:
    /* 00 (base) */
    /* 2C */ ActorShotArrow *mUnk_2C;
    /* 30 */ unk32 mUnk_30;
    /* 34 */

    ActorShotArrow_194(ActorShotArrow *param1);

    // data_ov031_0211426c
    /* 00 */ virtual ~ActorShotArrow_194() override;                   // func_ov031_020f1608 (D1) & func_ov031_020f3d4c (D0)
    /* 0C */ virtual bool vfunc_0C(Actor *, VecFx32 *vector) override; // func_ov031_020f3c38
    /* 10 */ virtual void vfunc_10(Actor *actor) override;             // func_ov031_020f38b0
    /* 14 */ virtual void vfunc_14(Mat3p *, VecFx32 *);

    void func_ov031_020f374c(Actor *);
};

class UnkStruct_ov031_020f3310_00 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x06);
    /* 06 */ u16 mUnk_06;
    /* 0A */
};

class UnkStruct_ov031_020f3310_04 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x24);
    /* 24 */ unk32 mUnk_24[4];
    /* 34 */
};

class UnkStruct_ov031_020f3310 {
public:
    /* 00 */ UnkStruct_ov031_020f3310_00 *mUnk_00;
    /* 04 */ UnkStruct_ov031_020f3310_04 *mUnk_04;
    /* 08 */ VecFx16 mUnk_08;
    /* 20 */
};

class ActorShotArrow_178_Base {
public:
    /* 00 (vtable) */
    /* 04 */

    ActorShotArrow_178_Base();
    virtual ~ActorShotArrow_178_Base();

    /* 00 */ virtual bool vfunc_00(const UnkStruct_ov031_020f3310 *param1);
};

class ActorShotArrow_178 : ActorShotArrow_178_Base {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0x08);
    /* 08 */ ActorShotArrow *mUnk_08;
    /* 0C */ VecFx32 mUnk_0C;
    /* 18 */ u16 mUnk_18;
    /* 1A */

    ActorShotArrow_178(ActorShotArrow *param1);

    virtual ~ActorShotArrow_178() override;
    virtual bool vfunc_00(const UnkStruct_ov031_020f3310 *param1) override;

    void func_ov031_020f3304();
    bool func_ov031_020f33bc();
};

class ActorShotArrow_1C8 {
public:
    /* 00 */ Actor *mUnk_00;
    /* 04 */ VecFx32 mUnk_04;
    /* 10 */ s16 mUnk_10;
    /* 12 */ s16 mUnk_14;

    ActorShotArrow_1C8();
};

class ActorShotArrow_1DC {
public:
    /* 00 */ VecFx32 mUnk_00;

    ActorShotArrow_1DC(unk32 param1, unk32 param2);
    ~ActorShotArrow_1DC();
};

class ActorShotArrow : public Actor {
public:
    /* 000 (base) */
    /* 094 */ UnkSystem6_Derived2 mUnk_94;
    /* 09C */ bool mUnk_9C;
    /* 09C */ STRUCT_PAD(0x9D, 0xA0);
    /* 0A0 */ ModelRender mUnk_A0;
    /* 100 */ UnkSystem5_Derived1 mUnk_100;
    /* 120 */ unk32 mUnk_120;
    /* 124 */ STRUCT_PAD(0x124, 0x140);
    /* 140 */ ActorShotArrow_140 mUnk_140;
    /* 168 */ unk32 mUnk_168;
    /* 16C */ fx32 mUnk_16C;
    /* 170 */ u16 mUnk_170;
    /* 172 */ u16 mUnk_172;
    /* 174 */ unk16 mUnk_174;
    /* 176 */ unk16 mUnk_176;
    /* 178 */ ActorShotArrow_178 mUnk_178;
    /* 194 */ ActorShotArrow_194 mUnk_194;
    /* 1C8 */ ActorShotArrow_1C8 mUnk_1C8;
    /* 1DC */ ActorShotArrow_1DC mUnk_1DC;
    /* 1E0 */ STRUCT_PAD(0x1E8, 0x224);
    /* 224 */ Mat4x3p *mUnk_224;
    /* 228 */ Mat4x3p mUnk_228;
    /* 258 */ u16 mUnk_258;
    /* 25A */ bool mUnk_25A;
    /* 25B */ bool mUnk_25B;
    /* 25C */ bool mUnk_25C;
    /* 25D */ bool mUnk_25D;
    /* 25E */ u8 mUnk_25E;

    ActorShotArrow();

    /* 00 */ virtual void func_ov000_0207b71c() override;
    /* 4C */ virtual ~ActorShotArrow() override;

    ActorShotArrow *func_ov031_020f1608();
    bool func_ov031_020f173c();
    void func_ov031_020f1868();
    void func_ov031_020f1874();
    void func_ov031_020f1878(ActorShotArrowState_ state);
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
    void func_ov031_020f2654(Mat3p *);
    void func_ov031_020f2794(unk16 param_1);
    u32 func_ov031_020f28ac();
    void func_ov031_020f2b8c();
    void func_ov031_020f2bbc();
    void func_ov031_020f2bec();
    void func_ov031_020f2c08(unk16);
    u32 func_ov031_020f2cac(unk32 *, unk32);
    void func_ov031_020f2ef0();
    void func_ov031_020f2f5c(VecFx32 *param_1);
    bool func_ov031_020f2f9c();
    void func_ov031_020f3000();
    void func_ov031_020f311c(Mat4x3p *param_1);
    bool func_ov031_020f3210(u16);
    bool func_ov031_020f3258(u16 param_1);
    void func_ov031_020f3d04(unk16 param_1);
};

class ActorProfileShotArrow : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileShotArrow();
    ~ActorProfileShotArrow();

    /* 0C */ virtual Actor *Create();

    static ActorProfileShotArrow *GetProfile();
};
