#include "Actor/ActorShotArrow.hpp"
#include "CommonFuncs.hpp"

#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkGYAM.hpp"
#include "Actor/ActorUnkIWTS.hpp"
#include "Actor/ActorUnkMRD2.hpp"
#include "Map/MapObjectId.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "Physics/Cylinder.hpp"
#include "RefStruct.hpp"
#include "System/OverlayManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d30.hpp"
#include "global.h"
#include "math.hpp"
#include "nitro/fx.h"
#include "nitro/gx.h"
#include "nitro/math.h"
#include <cstddef>

static const struct {
    u8 unk_00;
    u8 unk_01[7];
} data_ov031_02110b00 = {0x04, {0x08, 0x02, 0x02, 0x0C, 0x04, 0x02, 0x00}};

//! TODO: annoying to match
extern char data_ov031_02110b3c[0x10]; // = "arrow";
extern char data_ov031_02110b4c[0x10]; // = "arrow_s";
extern char data_ov031_02110b5c[0x14]; // = "ef_arrowB";
extern char data_ov031_02110b08[0x34]; // = "ef_arrowB";

extern MtxFx43 data_027e0964;
extern ActorUnkIWTS *data_027e0d80;
extern bool data_ov073_02163fe0;

struct UnkStruct_ov073_02163ff4 {
    /* 000 */ PAD(0x0, 0x25B);
    /* 25B */ bool mUnk_25B;
    /* 25C */
};
extern UnkStruct_ov073_02163ff4 data_ov073_02163ff4;

extern ActorUnkMRD2 *data_ov075_02163518;

DECL_PROFILE(ActorProfileShotArrow);

Actor *ActorProfileShotArrow::Create() {
    return new(HeapIndex_2) ActorShotArrow();
}

ActorProfileShotArrow::ActorProfileShotArrow() :
    ActorProfile(ActorId_ShotArrow) {
    this->mUnk_04.Init(FX_F32_TO_FX32(0.2f));
}

MapObjectProfile_Derived2_20_Base *func_ov031_020f1404() {
    return data_027e0ce0->mUnk_1C->mUnk_08[PlayerCharacter_Link][1];
}

ActorShotArrow::ActorShotArrow() :
    mUnk_94(true),
    mUnk_A0(GetModelFromProfile3(func_ov031_020f1404(), data_ov031_02110b5c)),
    mUnk_100(&this->mUnk_120, GetModelFromProfile3(func_ov031_020f1404(), data_ov031_02110b5c),
             func_ov031_020f1404()->func_ov000_02058a84(0, data_ov031_02110b08)),
    mUnk_140(this),
    mUnk_168(0),
    mUnk_16C(0),
    mUnk_170(0x1F),
    mUnk_172(0x1F),
    mUnk_174(0),
    mUnk_176(0),
    mUnk_178(this),
    mUnk_194(this),
    mUnk_1DC(0x548, 0),
    mUnk_258(0) {
    this->mUnk_140.mUnk_04 |= 0x8000;
    this->mUnk_140.mUnk_24 = true;
    this->mUnk_224         = 0;
    this->mUnk_25B         = false;
    this->mUnk_25C         = false;
    this->mUnk_25D         = false;

    bool var_r1_2 = true;
    if (this->mUnk_5C.mParams[1] != 3 && this->mUnk_5C.mParams[1] != 4) {
        var_r1_2 = false;
    }

    if (var_r1_2) {
        this->func_ov031_020f2794(2);
    } else {
        this->func_ov031_020f2794(0);
    }

    if (gOverlayManager.IsPirateHideout() && data_ov073_02163fe0) {
        this->mUnk_25C = true;
    }
}

ActorShotArrow::~ActorShotArrow() {
    if (func_ov000_0205aeac()) {
        bool paramIs3Or4 = this->mUnk_5C.mParams[1] == 0x3 || this->mUnk_5C.mParams[1] == 0x4;
        if (paramIs3Or4) {
            data_027e0cd8->mUnk_0C->func_ov000_02080a78(&this->mUnk_1DC.mUnk_00);
        }
    }
}

bool ActorShotArrow::Init(unk32 param1) {
#pragma unused(param1)

    fx32 sin_value = SIN(this->mAngle.angle_s);
    fx32 cos_value = COS(this->mAngle.angle_s);

    this->mUnk_2C  = 0;
    this->mVel.x   = FX_Mul(sin_value, 1024);
    this->mVel.z   = FX_Mul(cos_value, 1024);
    this->mVel.y   = 0;
    this->mUnk_16C = VecFx32_Length(&this->mVel);

    if (func_ov000_0205aeac()) {
        bool paramIs3Or4 = this->mUnk_5C.mParams[1] == 0x3 || this->mUnk_5C.mParams[1] == 0x4;
        if (paramIs3Or4) {
            VecFx32_Copy(&this->mPos, &this->mUnk_1DC.mUnk_00);
            data_027e0cd8->mUnk_0C->func_ov000_02080a5c(&this->mUnk_1DC.mUnk_00);
        }
    }

    this->SetState(ActorShotArrowState_0);

    this->mUnk_194.mUnk_04 = this->mRef.Get32();
    VecFx32_Copy(&this->mPos, &this->mUnk_194.mUnk_0C.pos);
    this->mUnk_194.mUnk_0C.size = FX_F32_TO_FX32(0.20f);
    this->mUnk_44               = 0x1F;
    return true;
}

void ActorShotArrow::func_ov031_020f1868() {
    this->mUnk_2C = 0;
}

void ActorShotArrow::func_ov031_020f1874() {}

static PTMF<ActorShotArrow> data_ov031_021142c0[ActorShotArrowState_Max] = {
    &ActorShotArrow::func_ov031_020f1a64, // ActorShotArrowState_0
    &ActorShotArrow::func_ov031_020f1c24, // ActorShotArrowState_1
    &ActorShotArrow::func_ov031_020f1dd4, // ActorShotArrowState_2
    &ActorShotArrow::func_ov031_020f1f54, // ActorShotArrowState_3
    &ActorShotArrow::func_ov031_020f206c, // ActorShotArrowState_4
    &ActorShotArrow::func_ov031_020f2134, // ActorShotArrowState_5
    &ActorShotArrow::func_ov031_020f21dc, // ActorShotArrowState_6
    &ActorShotArrow::func_ov031_020f1874  // ActorShotArrowState_7
};

void ActorShotArrow::SetState(ActorShotArrowState state) {
    this->mState = state;
    this->func_ov031_020f1868();
    CALL_PTMF(data_ov031_021142c0[this->mState]);
}

void ActorShotArrow::vfunc_24() {
    if (this->mUnk_25A) {
        if (this->mUnk_25E < 0x1F) {
            if ((this->mUnk_25E = this->mUnk_25E + 0x4 & 0xFF) >= 0x1F) {
                this->mUnk_25E = 0x1F;
            }
        }
        this->mUnk_100.mUnk_00.func_01ffc3b4();
    }
    if (func_ov000_0205aeac() != 0) {
        bool paramIs3Or4 = this->mUnk_5C.mParams[1] == 0x3 || this->mUnk_5C.mParams[1] == 0x4;
        if (paramIs3Or4) {
            this->func_ov031_020f3000();
        }
    }

    if (this->mState != ActorShotArrowState_1 && this->mState != ActorShotArrowState_2 &&
        this->mState != ActorShotArrowState_3) {
        return;
    }
    this->func_ov031_020f3258(0x1);
    this->func_ov031_020f2280();
}

void ActorShotArrow::func_ov031_020f1958() {}

static PTMF<ActorShotArrow> data_ov031_02114300[ActorShotArrowState_Max] = {
    &ActorShotArrow::func_ov031_020f1b04, // ActorShotArrowState_0
    &ActorShotArrow::func_ov031_020f1c7c, // ActorShotArrowState_1
    &ActorShotArrow::func_ov031_020f1e3c, // ActorShotArrowState_2
    &ActorShotArrow::func_ov031_020f2010, // ActorShotArrowState_3
    &ActorShotArrow::func_ov031_020f20bc, // ActorShotArrowState_4
    &ActorShotArrow::func_ov031_020f2160, // ActorShotArrowState_5
    &ActorShotArrow::func_ov031_020f2214, // ActorShotArrowState_6
    &ActorShotArrow::func_ov031_020f1958  // ActorShotArrowState_7
};

void ActorShotArrow::Update() {
    this->mUnk_3C = &this->mUnk_140;
    CALL_PTMF(data_ov031_02114300[this->mState]);

    if (this->mUnk_25A) {
        if (this->mUnk_25E < 0x1F && (this->mUnk_25E = this->mUnk_25E + 0x4 & 0xFF) >= 0x1F) {
            this->mUnk_25E = 0x1F;
        }

        this->mUnk_100.mUnk_00.func_01ffc3b4();
    }

    if (func_ov000_0205aeac()) {
        bool paramIs3Or4 = this->mUnk_5C.mParams[1] == 0x3 || this->mUnk_5C.mParams[1] == 0x4;
        if (paramIs3Or4) {
            if (this->mUnk_170 > 0x10) {
                this->func_ov031_020f3000();
            } else {
                data_027e0cd8->mUnk_0C->func_ov000_02080a78(&this->mUnk_1DC.mUnk_00);
            }
        }
    }

    if (this->mUnk_178.mUnk_18 & 0x1) {
        this->func_ov031_020f2cac(&this->mUnk_178.mUnk_0C, true);
        this->mUnk_178.func_ov031_020f3304();
    }

    this->func_ov031_020f229c();
}

void ActorShotArrow::func_ov031_020f1a64() {
    if (this->mUnk_5C.mParams[1] == 0x1 || this->mUnk_5C.mParams[1] == 0x4) {
        this->mTimer.Set(0, 120);
    } else {
        this->mTimer.max             = 60;
        *(u16 *) &this->mTimer.value = 0; //! TODO: for some reasons volatile don't match here
    }

    unk32 value_func_020f2270 = this->func_ov031_020f2270();
    fx16 sin_value            = SIN(this->mAngle.angle_u);
    fx16 cos_value            = COS(this->mAngle.angle_u);

    this->mVel.x = FX_Mul(sin_value, value_func_020f2270);
    this->mVel.z = FX_Mul(cos_value, value_func_020f2270);
    this->mVel.y = FX_F32_TO_FX32(0.0f);
}

void ActorShotArrow::func_ov031_020f1b04() {
    if (this->mTimer.HasExpired()) {
        this->SetState(ActorShotArrowState_6);
        return;
    }

    this->func_ov031_020f28ac();
    this->func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->mUnk_16C = VecFx32_Length(&this->mVel);

    if (this->mUnk_5C.mParams[1] == 0x1 || this->mUnk_5C.mParams[1] == 0x4) {
        data_027e0d30->func_ov031_020d9684(this->mUnk_5C.mParams[2], &this->mPos);
    }

    if (!this->func_ov017_020beeec(0x0)) {
        UnkStruct_ov031_020e5d18_00 spC;
        spC.mUnk_00 = NULL;

        func_01ffe6c4(&spC.mUnk_00, this->mRef, &this->mPos, &this->mPrevPos, (s16) this->mUnk_44, &this->mPos, 0);

        if (((Actor *) &spC)->func_ov000_0207e294(this->mUnk_30)) {
            this->Kill();
        }

        return;
    }

    this->func_ov031_020f2ef0();
}

void ActorShotArrow::func_ov031_020f1c24() {
    this->mVel.x = FX_F32_TO_FX32(0.0f);
    this->mVel.y = FX_F32_TO_FX32(0.0f);
    this->mVel.z = FX_F32_TO_FX32(0.0f);

    this->func_ov031_020f2794(0x1);
    this->mUnk_174 = 0x1555;

    data_027e09a8->func_ov000_02071b30(0x8D7A, &this->mPos, 0);
    this->mUnk_16C = 0;
}

void ActorShotArrow::func_ov031_020f1c7c() {
    if (this->func_ov031_020f3210(0x1)) {
        this->Kill();
    }

    if (this->mUnk_1C8.mUnk_00 && GET_FLAG(this->mUnk_1C8.mUnk_00->mFlags, ActorFlag_Alive) &&
        !GET_FLAG(this->mUnk_1C8.mUnk_00->mFlags, ActorFlag_18)) {

        VecFx32_Copy(&this->mUnk_1C8.mUnk_00->mPos, &this->mPos);

        s16 delta        = this->mUnk_1C8.mUnk_00->mAngle.angle_s - this->mUnk_1C8.mUnk_10;
        VecFx32 vec_fx32 = this->mUnk_1C8.mUnk_04;
        func_01ff9638(&vec_fx32, delta);
        VecFx32_Add(&this->mPos, &vec_fx32, &this->mPos);

        s16 diff     = this->mUnk_1C8.mUnk_12 - this->mUnk_1C8.mUnk_10;
        this->mAngle = diff + this->mUnk_1C8.mUnk_00->mAngle.angle_s;
    } else {
        this->func_ov031_020f2c08(0x400);
    }

    this->func_ov031_020f2280();
    this->func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    if (func_ov000_0205aeac() && (this->mUnk_5C.mParams[1] == 0x3 || this->mUnk_5C.mParams[1] == 0x4) != false) {
        data_027e0cd8->mUnk_0C->func_ov000_02080a78(&this->mUnk_1DC.mUnk_00);
    }
}

void ActorShotArrow::func_ov031_020f1dd4() {
    this->mVel.x = FX_F32_TO_FX32(0.0f);
    this->mVel.y = FX_F32_TO_FX32(0.0f);
    this->mVel.z = FX_F32_TO_FX32(0.0f);

    this->func_ov031_020f2794(0x1);
    this->mUnk_174 = 0x1555;

    data_027e09a8->func_ov000_02071b30(0x8D7A, &this->mPos, 0);
    this->mUnk_16C = 0;
    this->mTimer.Set(0, this->mUnk_258);
}

void ActorShotArrow::func_ov031_020f1e3c() {
    if (!this->mUnk_25B && this->mTimer.HasExpired()) {
        if (this->func_ov031_020f3210(0x1)) {
            this->Kill();
            return;
        }

        this->mTimer.Set(0, this->mUnk_258);
    }

    Actor *targetActor = this->mUnk_1C8.mUnk_00;
    if (targetActor == NULL || !GET_FLAG(targetActor->mFlags, ActorFlag_Alive) ||
        GET_FLAG(targetActor->mFlags, ActorFlag_18)) {
        this->func_ov031_020f2c08(0x400);
    }

    this->func_ov031_020f2280();
    this->func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    if (!func_ov000_0205aeac()) {
        return;
    }

    bool paramIs3Or4 = this->mUnk_5C.mParams[1] == 0x3 || this->mUnk_5C.mParams[1] == 0x4;
    if (!paramIs3Or4) {
        return;
    }

    data_027e0cd8->mUnk_0C->func_ov000_02080a78(&this->mUnk_1DC.mUnk_00);
}

void ActorShotArrow::func_ov031_020f1f54() {
    this->mVel.x = FX_F32_TO_FX32(0.0f);
    this->mVel.y = FX_F32_TO_FX32(0.0f);
    this->mVel.z = FX_F32_TO_FX32(0.0f);
    this->func_ov031_020f2794(0x1);

    this->mUnk_174 = 0x1555;
    data_027e09a8->func_ov000_02071b30(0x8D7A, &this->mPos, 0);
    this->mUnk_16C = 0;

    if (func_ov000_0205aeac()) {
        bool paramIs3Or4 = this->mUnk_5C.mParams[1] == 0x3 || this->mUnk_5C.mParams[1] == 0x4;
        if (paramIs3Or4) {
            data_027e0cd8->mUnk_0C->func_ov000_02080a78(&this->mUnk_1DC.mUnk_00);
        }
    }

    if (this->mUnk_25C && !this->mUnk_25D) {
        data_ov073_02163ff4.mUnk_25B = true;
    }
}

void ActorShotArrow::func_ov031_020f2010() {
    if (this->func_ov031_020f3210(0x1) != 0) {
        this->Kill();
    }

    this->func_ov031_020f2280();
    this->func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
}

void ActorShotArrow::func_ov031_020f206c() {
    this->func_ov031_020f2794(0);
    this->mUnk_170 = 0x10;
    this->mUnk_16C = 0;
    this->mUnk_168 = 0;

    if (this->mUnk_25C && !this->mUnk_25D) {
        data_ov073_02163ff4.mUnk_25B = true;
    }
}

void ActorShotArrow::func_ov031_020f20bc() {
    if (this->func_ov031_020f3210(0x1) != 0) {
        this->Kill();
    }

    this->mUnk_176 += -0x11C7;
    this->mVel.y -= FX_F32_TO_FX32(0.002f);

    this->func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
}

void ActorShotArrow::func_ov031_020f2134() {
    data_027e09a8->func_ov000_02071b30(0x8D7A, &this->mPos, 0);
}

void ActorShotArrow::func_ov031_020f2160() {
    if (!this->mUnk_1C8.mUnk_00 || !GET_FLAG(this->mUnk_1C8.mUnk_00->mFlags, ActorFlag_Alive)) {
        this->func_ov031_020f2c08(0x400);
        return;
    }

    this->func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->mUnk_16C = VecFx32_Length(&this->mVel);
    this->func_ov031_020f2f9c();
    this->func_ov031_020f2ef0();
}

void ActorShotArrow::func_ov031_020f21dc() {
    this->mUnk_172 = 0;
    this->mUnk_16C = 0;

    if (this->mUnk_25C && !this->mUnk_25D) {
        data_ov073_02163ff4.mUnk_25B = true;
    }
}

void ActorShotArrow::func_ov031_020f2214() {
    if (this->mUnk_170 > (s16) 0x4) {
        this->mUnk_170 -= 0x4;
    } else {
        this->Kill();
    }

    this->func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
}

unk32 ActorShotArrow::func_ov031_020f2270() {
    return (this->mUnk_5C.mParams[0] << 0x4) + 0x400;
}

void ActorShotArrow::func_ov031_020f2280() {
    this->mUnk_174 = (-this->mUnk_174 * 15) >> 4;
}

void ActorShotArrow::func_ov031_020f229c() {
    this->mUnk_168 = FX_Mul(this->mUnk_168 + this->mUnk_16C, FX_F32_TO_FX32(0.8f));
}

void ActorShotArrow::func_ov031_020f22d4(MtxFx33 *param1, VecFx32 *param2) {
    func_0200eab0(this->mUnk_A0.mpModel, 0x0, this->mUnk_25E);
    this->mUnk_A0.vfunc_14(param1, param2);
}

void ActorShotArrow::vfunc_2C(unk32 param1) {
    UnkVecFx32Struct spE4;
    MtxFx43 spB4;
    MtxFx43 sp84;
    MtxFx33 sp60;
    VecFx32 sp54;
    MtxFx33 sp30;
    MtxFx33 spC;

    spE4.unk_00.x = this->mPos.x;
    spE4.unk_00.y = this->mPos.y;
    spE4.unk_00.z = this->mPos.z;
    spE4.unk_0C   = 0x2000;

    if (!data_027e09bc->mUnk_04[param1]->func_01ffd640(&spE4)) {
        return;
    }

    u16 var_r4 = 0x1F;
    u16 var_r5 = 0x1F;

    if ((s32) this->mUnk_170 < 0x10) {
        var_r4 = (this->mUnk_170 * 32) / 16;
    }

    if ((s32) this->mUnk_172 < 0x10) {
        var_r5 = (this->mUnk_172 * 32) / 16;
    }

    if (var_r4 == 0) {
        return;
    }

    func_0200eab0(this->mUnk_94.mpModel, 0, var_r4);

    if (this->mState == 2 && this->mUnk_224 != NULL) {
        MtxFx43_InitXRotation(&sp84, SIN(this->mUnk_174), COS(this->mUnk_174));
        func_01ffad5c(this->mUnk_224, &data_027e0964, &spB4);
        func_01ffad5c(&sp84, &this->mUnk_228, &sp84);
        func_01ffad5c(&sp84, &spB4, &spB4);
        CopySingle288(&spB4, &sp60);

        VecFx32_Copy(&this->mPos, &this->mPrevPos);

        VecFx32 temp;
        temp.x = spB4._30;
        temp.z = spB4._32;
        temp.y = spB4._31;
        VecFx32_Copy(&temp, &this->mPos);

        this->mUnk_94.vfunc_14(&sp60, &this->mPos);

        if ((s32) var_r5 >= 0x1F) {
            this->func_ov031_020f2654(&sp60);
        }
    } else {
        sp54.x = this->mPos.x;
        sp54.y = this->mPos.y;
        sp54.z = this->mPos.z;

        MtxFx33_InitYRotation(&sp30, SIN(this->mAngle.angle_u), COS(this->mAngle.angle_u));

        s16 angle = this->mUnk_174 + this->mUnk_176;
        fx16 sin  = SIN(angle);
        fx16 cos  = COS(angle);

        MtxFx33_InitXRotation(&spC, sin, cos);
        func_01ffa60c(&spC, &sp30, &sp30);

        if (this->mState == 4) {
            sp54.y -= FX_Mul(sin, 0x333);
        } else {
            sp54.y += FX_Mul(sin, 0x333);
        }

        this->mUnk_94.vfunc_14(&sp30, &sp54);

        if (this->mUnk_25A) {
            this->func_ov031_020f22d4(&sp30, &sp54);
        }

        if ((s32) var_r5 >= 0x1F && this->mState != 4) {
            this->func_ov031_020f2654(&sp30);
        }
    }

    data_027e09b4->func_ov017_020c08c4(&this->mPos, 0x7B, 0x666, (s32) (u8) var_r4, (s32) (s16) this->mAngle.angle_s, 1);
}

void ActorShotArrow::func_ov031_020f2654(MtxFx33 *param1) {
    VecFx32 sp0;

    fx32 scaleZ = FX_Mul(this->mUnk_168, FX_F32_TO_FX32(1.0f));

    FlushGfxQueue();
    G3_MtxMode(2);
    G3_PushMtx();

    sp0 = this->mPos;
    sp0.x -= MUL_FXUNK2(SIN(this->mAngle.angle_s), FX_F32_TO_FX32(0.5f));
    sp0.z -= MUL_FXUNK2(COS(this->mAngle.angle_s), FX_F32_TO_FX32(0.5f));

    G3_Translate(sp0.x, sp0.y, sp0.z);
    func_02024a84(param1);
    G3_Scale(0x1000, 0x1000, scaleZ);
    G3_TexImageParam(GX_TEXFMT_NONE, GX_TEXGEN_NONE, GX_TEXSIZE_S8, GX_TEXSIZE_T8, GX_TEXREPEAT_NONE, GX_TEXFLIP_NONE,
                     GX_TEXPLTTCOLOR0_USE, 0);
    G3_TexPlttBase(0, GX_TEXFMT_NONE);
    G3_PolygonAttr(GX_LIGHTMASK_NONE, GX_POLYGONMODE_UNK_00, 3, 1, 7, FALSE);

    REG_GFX_FIFO_DIFFUSE_AMBIENT_REFLECT   = 0x4210FFFF;
    REG_GFX_FIFO_SPECULAR_REF_AND_EMISSION = 0;

    {
        G3_Begin(GX_BEGIN_TRIS);
        G3_Vtx(0, 0, 0xF000);
        G3_Vtx(0xFEC0, 0, 0);
        G3_Vtx(0x140, 0, 0);
        G3_End();
    }

    G3_MtxMode(2);
    G3_PopMtx(1);
}

void ActorShotArrow::func_ov031_020f2794(unk16 param1) {
    switch (param1) {
        case 0x0:
            this->mUnk_94.vfunc_08(GetModelFromProfile3(func_ov031_020f1404(), data_ov031_02110b3c));
            this->mUnk_25A = false;
            break;
        case 0x1:
            this->mUnk_94.vfunc_08(GetModelFromProfile3(func_ov031_020f1404(), data_ov031_02110b4c));
            this->mUnk_25A = false;
            break;
        case 0x2:
            this->mUnk_94.vfunc_08(GetModelFromProfile3(func_ov031_020f1404(), data_ov031_02110b4c));
            this->mUnk_25A = true;
            this->mUnk_A0.func_ov000_02057c98(&this->mUnk_100.mUnk_00);
            break;
        default:
            break;
    }
}

void ActorShotArrow::func_ov031_020f28ac() {
    VecFx32 sp1C;
    VecFx32 sp10;
    bool var_r1;
    bool var_r6;
    bool var_r7;

    STACK_PAD(4);

    this->func_ov000_020989e0();
    var_r7 = true;

    if (this->mUnk_140.mUnk_08 & 0x3FFFF) {
        var_r7 = false;

        switch (this->mUnk_140.mUnk_1C) {
            case 8:
                if (this->mUnk_140.mUnk_0C.acRef.type_index == 0x102) {
                    var_r1 = this->mUnk_140.mUnk_0C.acRef.UnkCheck3(0x102);
                    func_01ffb714(&this->mPos, this->func_ov000_0209853c(var_r1), &sp1C);
                } else if (!func_ov000_0205cbc4(this->mUnk_140.mUnk_0C.Get32(), &sp10)) {
                    sp1C.x = 0;
                    sp1C.y = 0;
                    sp1C.z = 0;
                } else {
                    func_01ffb714(&this->mPos, &sp10, &sp1C);
                }

                this->func_ov031_020f2cac(&sp1C, true);
                break;
            case 4: {
                Actor *var_r0_2 = gpActorManager->func_01fff3b4(this->mUnk_140.mUnk_0C);

                if (var_r0_2 != NULL) {
                    func_01ffb714(&this->mPos, &var_r0_2->mPos, &sp1C);
                    this->func_ov031_020f2cac(&sp1C, true);
                }

                break;
            }
            case 14:
                if (this->mUnk_140.mUnk_0C.acRef.type_index == 0x102) {
                    var_r6 = this->mUnk_140.mUnk_0C.acRef.UnkCheck3(0x102);

                    if (this->func_ov000_02098800(var_r6)) {
                        data_027e0ce0->func_ov000_0208bd30(var_r6, 0xE6, 0, 0);
                        func_01ffb714(&this->mPos, this->func_ov000_0209853c(0), &sp1C);
                        this->func_ov031_020f2cac(&sp1C, true);
                    } else {
                        var_r7 = 1;
                    }
                }

                break;
            case 15:
                if (this->mUnk_5C.mParams[1] == 0 || this->mUnk_5C.mParams[1] == 3) {
                    data_027e0ce0->func_ov000_0208bc1c(1, 0, 0x18, NULL, NULL, 0);
                }

                func_01ffb714(&this->mPos, this->func_ov000_0209853c(1), &sp1C);
                this->func_ov031_020f2cac(&sp1C, true);
                break;
            case 3:
                if (this->mUnk_140.mUnk_0C.common.type != 0) {
                    Actor *var_r0_2 = gpActorManager->func_01fff3b4(this->mUnk_140.mUnk_0C);

                    if (var_r0_2 != NULL) {
                        func_01ffb714(&var_r0_2->mPos, &var_r0_2->mPrevPos, &sp1C);
                        VecFx32_TryNormalize(&sp1C);
                        this->func_ov031_020f2cac(&sp1C, true);
                    }
                }

                break;
            default:
                break;
        }
    }

    if (var_r7 == 0) {
        return;
    }

    this->func_ov031_020f2f9c();

    if (this->mUnk_5C.mParams[1] != 0 && this->mUnk_5C.mParams[1] != 3) {
        if (this->func_ov000_02098ab4(data_ov031_02110b00.unk_01[this->mUnk_5C.mParams[1]], 0, 1, &mVel) != 0) {
            this->Kill();
        }
    }
}

void ActorShotArrow::func_ov031_020f2b8c() {
    if (this->mState == ActorShotArrowState_0 || this->mState == ActorShotArrowState_5) {
        this->mUnk_178.mUnk_18 |= 2;
        this->SetState(ActorShotArrowState_3);
    }
}

void ActorShotArrow::func_ov031_020f2bbc() {
    if (this->mState == ActorShotArrowState_0 || this->mState == ActorShotArrowState_5) {
        this->mUnk_178.mUnk_18 |= 2;
        this->SetState(ActorShotArrowState_1);
    }
}

void ActorShotArrow::func_ov031_020f2bec() {
    if (this->mState == ActorShotArrowState_0) {
        this->SetState(ActorShotArrowState_5);
    }
}

void ActorShotArrow::func_ov031_020f2c08(unk16 param1) {
    VecFx32 sp0;

    fx16 sin = SIN(this->mAngle.angle_u);
    fx16 cos = COS(this->mAngle.angle_u);

    this->mVel.x = FX_Mul(sin, param1);
    this->mVel.z = FX_Mul(cos, param1);
    this->mVel.y = FX_F32_TO_FX32(0.0f);

    sp0 = this->mVel;
    func_01ff93c0(&sp0, -0x1000);
    this->func_ov031_020f2cac(&sp0, false);
}

void ActorShotArrow::func_ov031_020f2cac(const VecFx32 *param1, bool param2) {
    VecFx32 sp1C;
    VecFx32 sp10;
    VecFx16 sp8;

    if (this->mState == ActorShotArrowState_4) {
        return;
    }

    this->mUnk_140.mUnk_04 &= ~0x8;
    s16 temp_r8 = this->mAngle.angle_s;
    this->SetState(ActorShotArrowState_4);

    if (!VecFx32_IsCleared(param1)) {
        sp1C = this->mVel;

        if (VecFx32_IsCleared(&this->mVel)) {
            this->mVel.x = param1->x;
            this->mVel.y = param1->y;
            this->mVel.z = param1->z;
        } else {
            func_01ff94cc(&this->mVel, (VecFx32 *) param1, &sp1C);
        }
    } else {
        this->mVel.x = -this->mVel.x;
        this->mVel.y = -this->mVel.y;
        this->mVel.z = -this->mVel.z;
    }

    VecFx32_TryNormalize(&this->mVel);
    func_01ff93c0(&this->mVel, 0x19A);
    this->mVel.y = 0xCD;

    if (param2) {
        sp10 = this->mPos;
        this->mPos.x -= MUL_FXUNK2(SIN(this->mAngle.angle_u), FX_F32_TO_FX32(0.3f));
        this->mPos.z -= MUL_FXUNK2(COS(this->mAngle.angle_u), FX_F32_TO_FX32(0.3f));
        data_027e09a8->func_ov000_02071eac(&this->mPos);
        data_027e09a8->func_ov000_02071b30(0x8D7B, &sp10, 0x0);

        s16 diff = temp_r8 - 0x8000;
        sp8.x    = MUL_FXUNK2(SIN(diff), FX_F32_TO_FX32(1.0f));
        sp8.y    = FX_F32_TO_FX32(0.0f);
        sp8.z    = MUL_FXUNK2(COS(diff), FX_F32_TO_FX32(1.0f));

        data_027e0cec->func_ov000_0209feac(0x804, &sp10, 0x2, 0x0, 0x0);
        data_027e0cec->func_ov000_0209ff24(0x805, &sp10, &sp8, 2);
    }

    this->mAngle = func_01ffbbe0(this->mVel.x, this->mVel.z);
}

void ActorShotArrow::func_ov031_020f2ef0() {
    ActorShotArrow_178 *unk_178;

    UnkStruct_ov031_020e5d18_00 spC;
    spC.mUnk_00 = NULL;

    func_01ffe6c4(&spC.mUnk_00, this->mRef, &this->mPos, &this->mPrevPos, (s16) this->mUnk_44, &this->mPos, &this->mUnk_178);

    s32 temp_r5 = 0;
    temp_r5 |= ((Actor *) &spC)->func_ov000_0207df88(this->mUnk_30, 0x3);
    temp_r5 |= ((Actor *) &spC)->func_ov000_0207e294(this->mUnk_30);
    this->mUnk_46 = temp_r5;
}

void ActorShotArrow::func_ov031_020f2f5c(VecFx32 *param1) {
    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, param1, &this->mPos);
    func_01ffb714(&this->mPos, &this->mVel, &this->mPos);
}

bool ActorShotArrow::func_ov031_020f2f9c() {
    VecFx32_Copy(&this->mPos, &this->mUnk_194.mUnk_0C.pos);
    this->mUnk_194.mUnk_0C.size = FX_F32_TO_FX32(0.2f);
    data_027e09c0->func_ov000_0207e58c(this->mRef, 0x3, data_ov031_02110b00.unk_01[this->mUnk_5C.mParams[1]], &this->mUnk_194);
    return true;
}

void ActorShotArrow::func_ov031_020f3000() {
    VecFx32 vec;
    MtxFx33 m1;
    MtxFx33 m2;

    vec.x = FX_F32_TO_FX32(0.0f);
    vec.y = FX_F32_TO_FX32(0.0f);
    vec.z = FX_F32_TO_FX32(0.4f);

    MtxFx33_InitYRotation(&m1, SIN(this->mAngle.angle_s), COS(this->mAngle.angle_s));
    MtxFx33_InitXRotation(&m2, SIN((s16) (this->mUnk_174 + this->mUnk_176)), COS((s16) (this->mUnk_174 + this->mUnk_176)));

    func_01ffa60c(&m2, &m1, &m1);

    func_01ffa7a0(&vec, &m1, &vec);

    vec.y = FX_Mul(vec.y, 0x800);

    VecFx32_Add(&vec, &this->mPos, &vec);
    VecFx32_Copy(&vec, &this->mUnk_1DC.mUnk_00);
}

void ActorShotArrow::func_ov031_020f311c(MtxFx43 *param1) {
    MtxFx43 m1;
    MtxFx43 m2;

    UNSET_FLAG(this->mFlags, ActorFlag_Visible);
    this->mUnk_224 = param1;

    if (param1 != NULL) {
        MtxFx43_InitXRotation(&m1, SIN(this->mUnk_176), COS(this->mUnk_176));
        MtxFx43_InitYRotation(&m2, SIN(this->mAngle.angle_s), COS(this->mAngle.angle_s));

        func_01ffad5c(&m1, &m2, &m1);

        VecFx32_Copy(&this->mPos, (VecFx32 *) &m1._30);
        func_01ffad5c(this->mUnk_224, &data_027e0964, &m2);

        func_01ffa9e8(&m2, &m2);
        func_01ffad5c(&m1, &m2, &this->mUnk_228);
    }

    this->SetState(ActorShotArrowState_2);
}

bool ActorShotArrow::func_ov031_020f3210(u16 param1) {
    if (this->mUnk_25B) {
        return false;
    }

    if (this->mUnk_170 == 0) {
        return true;
    }

    u32 value = this->mUnk_170 - param1;
    if (this->mUnk_170 <= param1) {
        value = 0;
    }

    this->mUnk_170 = value;
    this->func_ov031_020f3258(param1);
    return false;
}

bool ActorShotArrow::func_ov031_020f3258(u16 param1) {
    s32 var_r1;

    if (this->mUnk_172 == 0) {
        return true;
    }

    if (this->mUnk_172 > param1) {
        var_r1 = this->mUnk_172 - param1;
    } else {
        var_r1 = 0;
    }

    this->mUnk_172 = var_r1;
    return false;
}

ActorShotArrow_178::ActorShotArrow_178(ActorShotArrow *param1) {
    this->mUnk_08   = param1;
    this->mUnk_0C.x = FX_F32_TO_FX32(0.0f);
    this->mUnk_0C.y = FX_F32_TO_FX32(0.0f);
    this->mUnk_0C.z = FX_F32_TO_FX32(0.0f);
    this->mUnk_18   = 0;
}

ActorShotArrow_178::~ActorShotArrow_178() {
    this->mUnk_08 = NULL;
}

void ActorShotArrow_178::func_ov031_020f3304() {
    this->mUnk_18 = FX_F32_TO_FX32(0.0f);
}

bool ActorShotArrow_178::vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) {
#pragma unused(param2)

    u32 temp_r3 = param1->mUnk_04->mUnk_24[param1->mUnk_00->mUnk_06];

    if ((temp_r3 >> 0x17 & 0x01) == 0x01) {
        return false;
    }

    if ((this->mUnk_08->mUnk_178.mUnk_18 & 0x1) == 0 && (temp_r3 >> 0x1F & 0x01) == 0x01) {
        this->mUnk_08->func_ov031_020f2b8c();
    } else if ((this->mUnk_08->mUnk_178.mUnk_18 & 0x2) == 0) {
        if (this->mUnk_08->mState == ActorShotArrowState_4) {
            this->mUnk_08->Kill();
            return false;
        }

        VecFx32 temp;
        VecFx16_Copy2VecFx32(&param1->mUnk_08, &temp);

        this->mUnk_08->mUnk_178.mUnk_18 |= 0x1;

        VecFx32_Copy(&temp, &this->mUnk_08->mUnk_178.mUnk_0C);
    }

    return true;
}

bool ActorShotArrow_178::vfunc_0C(RefStruct ref, UnkStruct_ov031_020e54d4 *param2, const VecFx32 *param3,
                                  const VecFx32 *param4) {
    VecFx32 sp3C;
    VecFx32 jp_sp48;
    VecFx32 jp_sp3C;
    VecFx32 sp30;
    VecFx32 sp24;
    VecFx32 sp18;
    VecFx32 spC;
    MapObjRef sp8;
    MapObjRef sp4;
    Vec2bCpp sp2;
    Vec2bCpp sp0;
    bool var_r1;
    bool var_r5;
    MapObject *pMapObj;
    bool var_r7;

    var_r5 = true;

    if (((param2->mUnk_08 >> 0x17) & 0x01) == 0x01) {
        return false;
    }

    var_r7 = true;
    if (ref.moRef.unk_00_u16 != 0x1000) {
        var_r7 = false;
    }

#if IS_JP
    if (var_r7) {
        sp8     = ref.moRef;
        sp2     = sp8.GetUnk02();
        pMapObj = gpMapObjManager->func_01fff498(sp2);

        if (pMapObj != NULL) {
            switch (pMapObj->GetMapObjectId()) {
                case MapObjectId_BombFlower:
                case MapObjectId_ITFL:
                case MapObjectId_Pot:
                    var_r1 = true;

                    if (this->mUnk_08->mUnk_5C.mParams[1] != 3 && this->mUnk_08->mUnk_5C.mParams[1] != 4) {
                        var_r1 = false;
                    }

                    if (var_r1) {
                        return true;
                    }

                    break;
                case MapObjectId_SWRA:
                case MapObjectId_SWEY:
                    jp_sp48.x = 0;
                    jp_sp48.y = 0;
                    jp_sp48.z = 0x1000;

                    jp_sp3C.x = 0;
                    jp_sp3C.y = 0;
                    jp_sp3C.z = 0x1000;

                    func_01ff9638(&jp_sp3C, this->mUnk_08->mUnk_5C.mInitialAngle);
                    func_01ff9638(&jp_sp48, pMapObj->mAngle.angle_s);

                    if (VecFx32_Dot(&jp_sp3C, &jp_sp48) > 0) {
                        return false;
                    }

                    break;
                default:
                    break;
            }
        }
    }
#else
    var_r1 = true;

    if (this->mUnk_08->mUnk_5C.mParams[1] != 3 && this->mUnk_08->mUnk_5C.mParams[1] != 4) {
        var_r1 = false;
    }

    if (var_r1 && var_r7) {
        sp8                = ref.moRef;
        sp2                = sp8.GetUnk02();
        MapObject *pMapObj = gpMapObjManager->func_01fff498(sp2);

        if (pMapObj != NULL) {
            switch (pMapObj->GetMapObjectId()) {
                case MapObjectId_BombFlower:
                case MapObjectId_ITFL:
                case MapObjectId_Pot:
                    return true;
                default:
                    break;
            }
        }
    }
#endif

    if (((param2->mUnk_08 >> 0x1F) & 0x01) == 0x01) {
        if (var_r7) {
            sp4                = ref.moRef;
            sp0                = sp4.GetUnk02();
            MapObject *pMapObj = gpMapObjManager->func_01fff498(sp0);

            if (pMapObj != NULL) {
                if (pMapObj->GetMapObjectId() == MapObjectId_TREE && pMapObj->mUnk_20.mParams[2] == 0x02) {
                    sp30.x = 0;
                    sp30.y = 0;
                    sp30.z = -FX_F32_TO_FX32(0.4f);

                    func_01ff9638(&sp30, this->mUnk_08->mAngle.angle_s);

                    VecFx32 temp;
                    temp.x = pMapObj->mPos.x;
                    temp.z = pMapObj->mPos.z;
                    temp.y = this->mUnk_08->mPos.y;

                    sp24.x = temp.x;
                    sp24.y = temp.y;
                    sp24.z = temp.z;

                    VecFx32_Add(&sp24, &sp30, &sp24);

                    this->mUnk_08->mPos.x = (this->mUnk_08->mPos.x + sp24.x) >> 1;
                    this->mUnk_08->mPos.z = (this->mUnk_08->mPos.z + sp24.z) >> 1;
                    VecFx32_Copy(&this->mUnk_08->mPos, &this->mUnk_08->mPrevPos);

                    this->mUnk_08->func_ov031_020f2b8c();
                    return false;
                }
            }
        }

        this->mUnk_08->func_ov031_020f2b8c();
        return true;
    }

    if ((param2->mUnk_08 & 0x1F) == 0x0A) {
        var_r5 = false;
    }

    VecFx32 temp;
    switch (param2->vfunc_00()) {
        case 0:
        case 1:
            sp3C.x = this->mUnk_08->mVel.x;
            sp3C.y = this->mUnk_08->mVel.y;
            sp3C.z = this->mUnk_08->mVel.z;

            sp3C.x = -sp3C.x;
            sp3C.y = -sp3C.y;
            sp3C.z = -sp3C.z;
            break;
        case 2:
            param2->vfunc_14(&spC);
            VecFx32_Add(&spC, param4, &spC);
            VecFx32_Add(&sp18, param4, &sp18);

            if (param3->x > spC.x && param3->x < sp18.x) {
                sp3C.z = this->mUnk_08->mVel.z;

                sp3C.x = 0;
                sp3C.y = 0;
                sp3C.z = -sp3C.z;
            } else {
                sp3C.x = this->mUnk_08->mVel.x;

                sp3C.x = -sp3C.x;
                sp3C.y = 0;
                sp3C.z = 0;
            }

            break;
        default:
            break;
    }

    this->mUnk_08->func_ov031_020f2cac(&sp3C, var_r5);
    return true;
}

ActorShotArrow_194::ActorShotArrow_194(ActorShotArrow *param1) {
    this->mUnk_2C = param1;
    this->mUnk_30 = 0;
}

void ActorShotArrow_194::func_ov031_020f374c(Actor *actor) {
    VecFx32 sp28;
    VecFx32 sp1C;
    Cylinder spC;
    VecFx32 sp0;

    sp28 = this->mUnk_2C->mVel;
    func_01ff93c0(&sp28, this->mUnk_30);
    sp1C = this->mUnk_0C.pos;
    VecFx32_Add(&sp1C, &sp28, &sp1C);

    func_01ffb714(&sp1C, &actor->mVel, &sp1C);
    actor->vfunc_10(&spC);

    sp0 = spC.pos;
    func_01ffb714(&sp0, &sp1C, &sp0);

    unk32 temp = func_01ff9258(sp0.x, sp0.z);

    if (temp > spC.size && spC.size > FX_F32_TO_FX32(0.15f)) {
        fx32 temp_r5 = (temp - spC.size) + FX_F32_TO_FX32(0.15f);
        u16 value    = (u32) (s16) (s32) func_01ffbbe0(sp0.x, sp0.z);

        fx16 sin = SIN(value);
        fx16 cos = COS(value);

        sp28.x += FX_Mul(sin, temp_r5);
        sp28.z += FX_Mul(cos, temp_r5);
    }

    this->mUnk_2C->func_ov031_020f2f5c(&sp28);
    this->mUnk_2C->mUnk_1C8.mUnk_00 = actor;
}

void ActorShotArrow_194::vfunc_10(const Actor *actor) {
    VecFx32 sp1C;
    VecFx32 sp10;
    MtxFx43 *spC;
    unk32 sp8;
    RefStruct sp4;

    STACK_PAD(4);

    u32 actorRef = actor->mRef.Get32();
    u32 thisRef  = *(vu32 *) &this->mUnk_04;

    if (!(actorRef != thisRef && actor->mUnk_34 != NULL)) {
        return;
    }

    if (this->mUnk_2C->mState != ActorShotArrowState_0 && this->mUnk_2C->mState != ActorShotArrowState_5) {
        return;
    }

    if (((Actor *) actor)->GetActorId() == ActorId_ShotArrow) {
        return;
    }

    s16 result = func_01ffbbe0(this->mUnk_2C->mVel.x, this->mUnk_2C->mVel.z);

    switch (((Actor *) actor)->GetActorId()) {
        case ActorId_WIDR:
            this->func_ov031_020f374c(((Actor *) actor));
            this->mUnk_2C->func_ov031_020f2bec();

            if (actor != NULL) {
                func_01ffb714(&this->mUnk_2C->mPos, &actor->mPos, &sp1C);
                VecFx32_Copy(&sp1C, &this->mUnk_2C->mUnk_1C8.mUnk_04);
                this->mUnk_2C->mUnk_1C8.mUnk_10 = actor->mAngle.angle_s;
                this->mUnk_2C->mUnk_1C8.mUnk_12 = result;
            }

            break;
        case ActorId_IWTS:
            this->func_ov031_020f374c((Actor *) actor);
            spC = NULL;

            if (data_027e0d80->func_ov084_02153064(&this->mUnk_2C->mRef, &spC)) {
                this->mUnk_2C->func_ov031_020f311c(spC);
                this->mUnk_2C->mUnk_258 = 0x01;
            }

            break;
        case ActorId_MRD2: {
            ActorUnkMRD2 *ptr = data_ov075_02163518;

            if (ptr->mUnk_910 == 1) {
                this->func_ov031_020f374c((Actor *) actor);
                sp8 = 0;

                if (ptr->func_ov075_0215bbf0(&this->mUnk_2C->mRef, &sp8)) {
                    this->mUnk_2C->func_ov075_02160864(sp8);
                    this->mUnk_2C->mUnk_258 = 0x01;
                }
            }

            break;
        }
        case ActorId_RYAW:
            this->mUnk_2C->SetState(ActorShotArrowState_6);
            UNSET_FLAG(this->mUnk_2C->mFlags, ActorFlag_Visible);
            break;
        case ActorId_LOCK:
            sp4 = actor->mUnk_5C.mUnk_28;

            if (sp4.acRef.type_index != 0 && sp4.common.type != ActorRefType_0) {
                ActorUnkGYAM *lockedActor = (ActorUnkGYAM *) gpActorManager->func_01fff3b4(sp4);

                if (lockedActor != NULL && lockedActor->GetActorId() == ActorId_GYAM) {
                    this->func_ov031_020f374c((Actor *) actor);
                    this->mUnk_2C->func_ov031_020f311c(&lockedActor->mUnk_220);
                    SET_FLAG(this->mUnk_2C->mFlags, ActorFlag_Visible);
                    this->mUnk_2C->mUnk_258 = 0x0;
                    break;
                }
            }
            // fallthrough
        default:
            if (!this->IsParam1_3Or4()) {
                this->func_ov031_020f374c((Actor *) actor);
                this->mUnk_2C->func_ov031_020f2bbc();
                if (actor) {
                    func_01ffb714(&this->mUnk_2C->mPos, &actor->mPos, &sp10);
                    VecFx32_Copy(&sp10, &this->mUnk_2C->mUnk_1C8.mUnk_04);
                    this->mUnk_2C->mUnk_1C8.mUnk_10 = actor->mAngle.angle_s;
                    this->mUnk_2C->mUnk_1C8.mUnk_12 = result;
                }
            }

            if (this->mUnk_2C->mUnk_25C) {
                this->mUnk_2C->mUnk_25D = true;
            }

            break;
    }
}

bool ActorShotArrow_194::vfunc_0C(Actor *actor, VecFx32 *vector) {
    VecFx32 sp14;
    Cylinder sp4;

    STACK_PAD(4);

    u32 actorRef = actor->mRef.Get32();
    u32 thisRef  = *(vu32 *) &this->mUnk_04;

    if (!(actorRef != thisRef && actor->mUnk_34 != NULL) ||
        !(this->mUnk_2C->mState == ActorShotArrowState_0 || this->mUnk_2C->mState == ActorShotArrowState_5)) {
        return false;
    }

    func_01ffb714(&actor->mVel, &this->mUnk_2C->mVel, &sp14);
    actor->vfunc_10(&sp4);

    if (!func_01ffccf4(&this->mUnk_0C, &sp4.pos, &sp14, &this->mUnk_30)) {
        return false;
    }

    VecFx32_Copy(&this->mUnk_2C->mVel, vector);
    VecFx32_TryNormalize(vector);
    return true;
}

void ActorShotArrow::func_ov031_020f3d04(unk16 param1) {
    this->mUnk_176 = param1;
    func_01ff9638(&this->mVel, -this->mAngle.angle_s);
    func_01ff95a0(&this->mVel, param1);
    func_01ff9638(&this->mVel, this->mAngle.angle_s);
}
