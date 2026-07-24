#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov031_Items.hpp"
#include "global.h"
#include "types.h"

typedef u32 ActorShotArrowState;
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
    /* 28 */

    ActorShotArrow_140(Actor *param1);
};

class ActorShotArrow_178 : public UnkStruct_ov031_Items_00 {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0x08);
    /* 08 */ ActorShotArrow *mUnk_08;
    /* 0C */ VecFx32 mUnk_0C;
    /* 18 */ u16 mUnk_18;
    /* 1A */

    ActorShotArrow_178(ActorShotArrow *param1);

    // data_ov031_02114288
    /* 00 */ virtual ~ActorShotArrow_178() override;
    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1) override;
    /* 0C */ virtual bool vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 param2, unk32 param3) override;

    void func_ov031_020f3304();
};

class ActorShotArrow_194 : public UnkStruct_ov031_Items_01 {
public:
    /* 00 (base) */
    /* 2C */ ActorShotArrow *mUnk_2C;
    /* 30 */ unk32 mUnk_30;
    /* 34 */

    const bool IsParam1_3Or4() const {
        Actor *pActor = (Actor *) this->mUnk_2C;
        return pActor->mUnk_5C.mParams[1] == 0x03 || pActor->mUnk_5C.mParams[1] == 0x04;
    }

    ActorShotArrow_194(ActorShotArrow *param1);

    // data_ov031_0211426c
    /* 0C */ virtual bool vfunc_0C(Actor *param1, VecFx32 *vector) override; // func_ov031_020f3c38
    /* 10 */ virtual void vfunc_10(Actor *actor) override;                   // func_ov031_020f38b0
    // /* 14 */ virtual void vfunc_14(Mat3p *, VecFx32 *);

    void func_ov031_020f374c(Actor *param1);
};

class ActorShotArrow_1C8 {
public:
    /* 00 */ Actor *mUnk_00;
    /* 04 */ VecFx32 mUnk_04;
    /* 10 */ s16 mUnk_10;
    /* 12 */ s16 mUnk_12;
    /* 14 */

    ActorShotArrow_1C8() {
        this->mUnk_00   = NULL;
        this->mUnk_04.x = 0;
        this->mUnk_04.y = 0;
        this->mUnk_04.z = 0;
        this->mUnk_10   = 0;
        this->mUnk_12   = 0;
    }
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
    /* 1DC */ UnkStruct_ov031_Items_02 mUnk_1DC;
    /* 1E0 */ STRUCT_PAD(0x1E8, 0x224);
    /* 224 */ Mat4x3p *mUnk_224;
    /* 228 */ Mat4x3p mUnk_228;
    /* 258 */ u16 mUnk_258;
    /* 25A */ bool mUnk_25A;
    /* 25B */ bool mUnk_25B;
    /* 25C */ bool mUnk_25C;
    /* 25D */ bool mUnk_25D;
    /* 25E */ u8 mUnk_25E;
    /* 25F */

    ActorShotArrow();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 4C */ virtual ~ActorShotArrow() override;

    void func_ov031_020f1868();
    void SetState(ActorShotArrowState state);

    unk32 func_ov031_020f2270();
    void func_ov031_020f2280();
    void func_ov031_020f229c();
    void func_ov031_020f22d4(Mat3p *param1, VecFx32 *param2);
    void func_ov031_020f2654(Mat3p *param1);
    void func_ov031_020f2794(unk16 param1);
    void func_ov031_020f28ac();
    void func_ov031_020f2b8c();
    void func_ov031_020f2bbc();
    void func_ov031_020f2bec();
    void func_ov031_020f2c08(unk16 param1);
    void func_ov031_020f2cac(VecFx32 *param1, bool param2);
    void func_ov031_020f2ef0();
    void func_ov031_020f2f5c(VecFx32 *param1);
    bool func_ov031_020f2f9c();
    void func_ov031_020f3000();
    void func_ov031_020f311c(Mat4x3p *param1);
    bool func_ov031_020f3210(u16 param1);
    bool func_ov031_020f3258(u16 param1);
    void func_ov031_020f3d04(unk16 param1);

    // data_ov031_021142c0
    void func_ov031_020f1a64();
    void func_ov031_020f1c24();
    void func_ov031_020f1dd4();
    void func_ov031_020f1f54();
    void func_ov031_020f206c();
    void func_ov031_020f2134();
    void func_ov031_020f21dc();
    void func_ov031_020f1874();

    // data_ov031_02114300
    void func_ov031_020f1b04();
    void func_ov031_020f1c7c();
    void func_ov031_020f1e3c();
    void func_ov031_020f2010();
    void func_ov031_020f20bc();
    void func_ov031_020f2160();
    void func_ov031_020f2214();
    void func_ov031_020f1958();
};

class ActorProfileShotArrow : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileShotArrow();

    /* 0C */ virtual Actor *Create();

    static ActorProfileShotArrow *GetProfile();
};
