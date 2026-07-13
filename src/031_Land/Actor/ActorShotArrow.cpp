#include "Actor/ActorShotArrow.hpp"

#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkGYAM.hpp"
#include "Actor/ActorUnkIWTS.hpp"
#include "Actor/ActorUnkMRD2.hpp"
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

typedef struct UnkResourceStruct2 {
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */
} UnkResourceStruct2;

typedef struct {
    /* 00 */ VecFx32 mUnk_00;
    /* 0C */ VecFx32 mUnk_0C;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ VecFx32 mUnk_1C;
    /* 28 */ VecFx32 mUnk_28;
    /* 34 */
} UnkStruct_020f374c;

typedef struct {
    /* 00 */ STRUCT_PAD(0x00, 0x04);
    /* 04 */ ActorRef mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ Mat4x3p *mUnk_0C;
    /* 10 */ VecFx32 mUnk_10;
    /* 1C */ VecFx32 mUnk_1C;
    /* 28 */
} UnkStruct_020f38b0;

typedef struct {
    /* 00 */ STRUCT_PAD(0x00, 0x04);
    /* 04 */ VecFx32 mUnk_04;
    /* 10 */ STRUCT_PAD(0x10, 0x14);
    /* 14 */ VecFx32 mUnk_14;
    /* 20 */
} UnkStruct_020f3c38;

typedef struct {
    /* 000 */ STRUCT_PAD(0x0, 0x25B);
    /* 25B */ bool mUnk_25B;
    /* 25C */
} UnkStruct_ov060_02163ff4;

typedef struct {
    /* 0C */ Mat3p mUnk_0C;
    /* 30 */ Mat3p mUnk_30;
    /* 54 */ VecFx32 mUnk_54;
    /* 60 */ Mat3p mUnk_60;
    /* 84 */ Mat4x3p mUnk_84;
    /* B4 */ Mat4x3p mUnk_B4;
    /* E4 */ VecFx32 mUnk_E4;
    /* F0 */ fx32 mUnk_F0;
} UnkStack_ov031_020f2310;

struct UnkStruct_020f1b04 {
    /* 0C */ Actor *mUnk_0C;
    /* 10 */ STRUCT_PAD(0x10, 0x24);
    /* 24 */
};

extern "C" u8 data_ov031_02110b01[];       //       = {0x08, 0x02, 0x02, 0x0C, 0x04, 0x00};
extern "C" char data_ov031_02110b3c[0x10]; // = "arrow";
extern "C" char data_ov031_02110b4c[0x10]; // = "arrow_s";

extern "C" char data_ov031_02110b5c[0x14]; // = "ef_arrowB";
extern "C" char data_ov031_02110b08[0x34]; // = "ef_arrowB";

extern Mat4x3p data_027e0964;
extern ActorUnkIWTS *data_027e0d80;
extern bool data_ov060_02163fe0;
extern UnkStruct_ov060_02163ff4 data_ov060_02163ff4;
extern ActorUnkMRD2 *data_ov075_02163518;

extern "C" unk32 func_01ff9258(fx32, fx32);
extern "C" void func_01ff93c0(VecFx32 *, unk32);
extern "C" void func_01ff94cc(VecFx32 *, VecFx32 *, VecFx32 *);
extern "C" void func_01ff95a0(VecFx32 *, unk16);
extern "C" void func_01ff9638(VecFx32 *vec, s16 angle);
extern "C" void func_01ffa7a0(VecFx32 *, Mat3p *, VecFx32 *);
extern "C" void func_01ffa9e8(Mat4x3p *, Mat4x3p *);
extern "C" void func_01ffad5c(Mat4x3p *, Mat4x3p *, Mat4x3p *);
extern "C" void func_01ffb714(VecFx32 *, VecFx32 *, VecFx32 *);
extern "C" fx16 func_01ffbbe0(fx32, fx32);
extern "C" bool func_01ffccf4(VecFx32 *, VecFx32 *, VecFx32 *, unk32 *);
extern "C" void func_01ffe6c4(Actor **, ActorRef, VecFx32 *, VecFx32 *, s32, VecFx32 *, unk32);
extern "C" void func_0200eab0(G3d_Model *, unk16, u8);
extern "C" UnkResourceStruct2 *func_0200f05c(G3d_NameList *, char *);
extern "C" void func_ov000_02057c98(ModelRender *param1, UnkSystem5 *param2);
extern "C" bool func_ov000_0205aeac();
extern "C" void func_ov000_0207b6c0();
extern "C" unk32 func_ov000_0207df88(unk32 *, Cylinder *, unk32);
extern "C" void func_ov075_02160864(ActorShotArrow *, unk32);
extern "C" void GX_func_02024a84(Mat3p *param1);
extern "C" void CopySingle288(Mat4x3p *, Mat3p *);
extern "C" void func_01ffa60c(const Mat3p *, Mat3p *, Mat3p *);

MapObjectProfile_Derived2_20_Base *func_ov031_020f1404() {
    return data_027e0ce0->mUnk_1C->mUnk_08[PlayerCharacter_Link][1];
}

DECL_PROFILE(ActorProfileShotArrow);

Actor *ActorProfileShotArrow::Create() {
    return new(HeapIndex_2) ActorShotArrow();
}

ActorProfileShotArrow::ActorProfileShotArrow() :
    ActorProfile(ActorId_AROW) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.2f));
}

ActorShotArrow::ActorShotArrow() :
    mUnk_9C(true),
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

    if (gOverlayManager.IsPirateHideout() && data_ov060_02163fe0) {
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

bool ActorShotArrow::vfunc_18(unk32 param1) {
    fx32 sin_value = SIN((u16) this->mAngle);
    fx32 cos_value = COS((u16) this->mAngle);

    this->mUnk_2C  = 0;
    this->mVel.x   = MUL_FX32(sin_value, 1024);
    this->mVel.z   = MUL_FX32(cos_value, 1024);
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
    VecFx32_Copy(&this->mPos, &this->mUnk_194.mUnk_0C);
    this->mUnk_194.mUnk_18 = FLOAT_TO_FX32(0.20f);
    this->mUnk_44          = 0x1F;
    return true;
}

void ActorShotArrow::func_ov031_020f1868() {
    this->mUnk_2C = 0;
}

void ActorShotArrow::func_ov031_020f1874() {}

static PTMF<ActorShotArrow> data_ov031_021142c0[ActorShotArrowState_Max] = {
    ActorShotArrow::func_ov031_020f1a64, // ActorShotArrowState_0
    ActorShotArrow::func_ov031_020f1c24, // ActorShotArrowState_1
    ActorShotArrow::func_ov031_020f1dd4, // ActorShotArrowState_2
    ActorShotArrow::func_ov031_020f1f54, // ActorShotArrowState_3
    ActorShotArrow::func_ov031_020f206c, // ActorShotArrowState_4
    ActorShotArrow::func_ov031_020f2134, // ActorShotArrowState_5
    ActorShotArrow::func_ov031_020f21dc, // ActorShotArrowState_6
    ActorShotArrow::func_ov031_020f1874  // ActorShotArrowState_7
};

void ActorShotArrow::SetState(ActorShotArrowState state) {
    this->mState = state;
    this->func_ov031_020f1868();
    CALL_PTMF(PTMF<ActorShotArrow>, data_ov031_021142c0[this->mState]);
}

void ActorShotArrow::vfunc_24() {
    if (this->mUnk_25A) {
        if (this->mUnk_25E < 0x1F) {
            if ((this->mUnk_25E = this->mUnk_25E + 0x4 & 0xFF) >= 0x1F) {
                this->mUnk_25E = 0x1F;
            }
        }
        this->mUnk_100.func_01ffc3b4();
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
    ActorShotArrow::func_ov031_020f1b04, // ActorShotArrowState_0
    ActorShotArrow::func_ov031_020f1c7c, // ActorShotArrowState_1
    ActorShotArrow::func_ov031_020f1e3c, // ActorShotArrowState_2
    ActorShotArrow::func_ov031_020f2010, // ActorShotArrowState_3
    ActorShotArrow::func_ov031_020f20bc, // ActorShotArrowState_4
    ActorShotArrow::func_ov031_020f2160, // ActorShotArrowState_5
    ActorShotArrow::func_ov031_020f2214, // ActorShotArrowState_6
    ActorShotArrow::func_ov031_020f1958  // ActorShotArrowState_7
};

void ActorShotArrow::vfunc_20() {
    this->mUnk_3C = &this->mUnk_140;
    CALL_PTMF(PTMF<ActorShotArrow>, data_ov031_02114300[this->mState]);

    if (this->mUnk_25A) {
        if (this->mUnk_25E < 0x1F && (this->mUnk_25E = this->mUnk_25E + 0x4 & 0xFF) >= 0x1F) {
            this->mUnk_25E = 0x1F;
        }

        this->mUnk_100.func_01ffc3b4();
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

// non-matching
void ActorShotArrow::func_ov031_020f1a64() {
    if (this->mUnk_5C.mParams[1] == 0x1 || this->mUnk_5C.mParams[1] == 0x4) {
        this->mUnk_50 = 0x0;
        this->mUnk_52 = 0x78;
    } else {
        this->mUnk_50 = 0x0;
        this->mUnk_52 = 0x3C;
    }

    unk32 value_func_020f2270 = this->func_ov031_020f2270();
    unk16 sin_value           = SIN((u16) this->mAngle);
    unk16 cos_value           = COS((u16) this->mAngle);

    this->mVel.x = MUL_FX32(sin_value, value_func_020f2270);
    this->mVel.y = FLOAT_TO_FX32(0.0f);
    this->mVel.z = MUL_FX32(cos_value, value_func_020f2270);
}

// non-matching
void ActorShotArrow::func_ov031_020f1b04() {
    UnkStruct_020f1b04 stack;

    if (this->IsTimerOut()) {
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
        stack.mUnk_0C = NULL;
        VecFx32 *mPos = &this->mPos;
        func_01ffe6c4(&stack.mUnk_0C, this->mRef, mPos, &this->mPrevPos, (s16) this->mUnk_44, mPos, 0);

        if (this->func_ov000_0207e294(this->mUnk_30)) {
            this->Kill();
        }

        return;
    }

    this->func_ov031_020f2ef0();
}

void ActorShotArrow::func_ov031_020f1c24() {
    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.y = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);

    this->func_ov031_020f2794(0x1);
    this->mUnk_174 = 0x1555;

    data_027e09a8->func_ov000_02071b30(0x8D7A, &this->mPos, 0);
    this->mUnk_16C = 0;
}

// non-matching
void ActorShotArrow::func_ov031_020f1c7c() {
    if (this->func_ov031_020f3210(0x1)) {
        this->Kill();
    }

    if (this->mUnk_1C8.mUnk_00 && GET_FLAG(this->mUnk_1C8.mUnk_00->mFlags, ActorFlag_Alive) &&
        !GET_FLAG(this->mUnk_1C8.mUnk_00->mFlags, ActorFlag_18)) {

        VecFx32_Copy(&this->mUnk_1C8.mUnk_00->mPos, &this->mPos);

        s16 delta        = this->mUnk_1C8.mUnk_00->mAngle - this->mUnk_1C8.mUnk_10;
        VecFx32 vec_fx32 = this->mUnk_1C8.mUnk_04;
        func_01ff9638(&vec_fx32, delta);

        VecFx32_Add(&this->mPos, &vec_fx32, &this->mPos);
        this->mAngle = this->mUnk_1C8.mUnk_00->mAngle + (s16) (this->mUnk_1C8.mUnk_12 - this->mUnk_1C8.mUnk_10);
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
    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.y = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);

    this->func_ov031_020f2794(0x1);
    this->mUnk_174 = 0x1555;

    data_027e09a8->func_ov000_02071b30(0x8D7A, &this->mPos, 0);
    this->mUnk_16C = 0;
    this->mUnk_50  = 0;
    this->mUnk_52  = this->mUnk_258;
}

void ActorShotArrow::func_ov031_020f1e3c() {
    if (!this->mUnk_25B && this->IsTimerOut()) {
        if (this->func_ov031_020f3210(0x1)) {
            this->Kill();
            return;
        }

        this->mUnk_52 = this->mUnk_258;
        this->mUnk_50 = 0;
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
    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.y = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);
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
        data_ov060_02163ff4.mUnk_25B = true;
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
        data_ov060_02163ff4.mUnk_25B = true;
    }
}

void ActorShotArrow::func_ov031_020f20bc() {
    if (this->func_ov031_020f3210(0x1) != 0) {
        this->Kill();
    }

    this->mUnk_176 += -0x11C7;
    this->mVel.y -= FLOAT_TO_FX32(0.002f);

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
        data_ov060_02163ff4.mUnk_25B = true;
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
    this->mUnk_168 = MUL_FX32(this->mUnk_168 + this->mUnk_16C, FLOAT_TO_FX32(0.8f));
}

void ActorShotArrow::func_ov031_020f22d4(Mat3p *param1, VecFx32 *param2) {
    func_0200eab0(this->mUnk_A0.mpModel, 0x0, this->mUnk_25E);
    this->mUnk_A0.vfunc_14(param1, param2);
}

// non-matching
void ActorShotArrow::vfunc_2C(unk32 param1) {
    UnkStack_ov031_020f2310 stack;

    VecFx32_Copy(&this->mPos, &stack.mUnk_E4);
    stack.mUnk_F0 = 0x2000;

    if (!data_027e09bc->mUnk_04->func_01ffd640(&stack.mUnk_E4)) {
        return;
    }

    u8 var4 = 0x1F;
    u8 var5 = 0x1F;

    if (this->mUnk_170 < (s16) 0x10) {
        var4 = FLOAT_TO_FX32(this->mUnk_170);
    }

    if (this->mUnk_172 < (s16) 0x10) {
        var5 = FLOAT_TO_FX32(this->mUnk_170);
    }

    if (var4 == 0) {
        return;
    }

    func_0200eab0(this->mUnk_94.mpModel, 0x0, var4);

    if (this->mState == ActorShotArrowState_2 && this->mUnk_224 != NULL) {
        Mat4x3p_InitXRotation(&stack.mUnk_84, SIN((u16) this->mUnk_174), COS((u16) this->mUnk_174));

        func_01ffad5c(this->mUnk_224, &data_027e0964, &stack.mUnk_B4);
        func_01ffad5c(&stack.mUnk_84, &this->mUnk_228, &stack.mUnk_84);
        func_01ffad5c(&stack.mUnk_84, &stack.mUnk_B4, &stack.mUnk_B4);

        CopySingle288(&stack.mUnk_B4, &stack.mUnk_60);

        VecFx32_Copy(&this->mPos, &this->mPrevPos);
        VecFx32_Copy(&stack.mUnk_B4.wColumn, &this->mPos);

        this->mUnk_94.vfunc_14(&stack.mUnk_60, &this->mPos);

        if (var5 >= 0x1F) {
            this->func_ov031_020f2654(&stack.mUnk_60);
        }
    } else {
        VecFx32_Copy(&this->mPos, &stack.mUnk_30.zColumn);

        Mat3p_InitYRotation(&stack.mUnk_30, SIN((u16) this->mAngle), COS((u16) this->mAngle));
        Mat3p_InitXRotation(&stack.mUnk_30, SIN((u16) (s16) (this->mUnk_174 + this->mUnk_176)),
                            COS((u16) (s16) (this->mUnk_174 + this->mUnk_176)));

        func_01ffa60c(&stack.mUnk_0C, &stack.mUnk_30, &stack.mUnk_30);

        // should have if/else structure
        stack.mUnk_54.y = MUL_FX32(FLOAT_TO_FX32(0.2f), SIN(this->mUnk_174 + this->mUnk_176));

        this->mUnk_94.vfunc_14(&stack.mUnk_30, &stack.mUnk_54);

        if (this->mUnk_25A) {
            this->func_ov031_020f22d4(&stack.mUnk_30, &stack.mUnk_54);
        }

        if (var5 >= 0x1F && this->mState != ActorShotArrowState_4) {
            this->func_ov031_020f2654(&stack.mUnk_30);
        }
    }

    data_027e09b4->func_ov017_020c08c4(&this->mPos, 0x7B, 0x666, var4, this->mAngle, 0x1);
}

// non-matching
void ActorShotArrow::func_ov031_020f2654(Mat3p *param1) {}

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
            func_ov000_02057c98(&this->mUnk_A0, &this->mUnk_100);
            break;
        default:
            break;
    }
}

// non-matching
void ActorShotArrow::func_ov031_020f28ac() {
    VecFx32 vec1;
    VecFx32 vec2;

    this->func_ov000_020989e0();
    bool notEarlyReturn = true;

    if (this->mUnk_140.mUnk_08 == 0x3FFFF) {
        notEarlyReturn = false;

        switch (this->mUnk_140.mUnk_1C) {
            case 0x8:
                if ((s16) this->mUnk_140.mUnk_0C.index == 0x102) {
                    bool var = false;
                    if ((s16) this->mUnk_140.mUnk_0C.index == 0x102) {
                        if (this->mUnk_140.mUnk_0C.data == 0x1 || this->mUnk_140.mUnk_0C.data == 0x3) {
                            var = true;
                        }
                    }
                    bool var2 = false;
                    if (!var) {
                        var2 = true;
                    }
                    VecFx32 *result = this->func_ov000_0209853c(var2);
                    func_01ffb714(&this->mPos, result, &vec1);
                    this->func_ov031_020f2cac(&vec1, true);
                    break;
                }

                if (!func_ov000_0205cbc4(this->mUnk_140.mUnk_0C.Get32(), &vec2)) {
                    vec1.x = FLOAT_TO_FX32(0.0f);
                    vec1.y = FLOAT_TO_FX32(0.0f);
                    vec1.z = FLOAT_TO_FX32(0.0f);
                } else {
                    func_01ffb714(&this->mPos, &vec2, &vec1);
                }

                this->func_ov031_020f2cac(&vec1, true);
                break;
            case 0x4:
                Actor *actor = gpActorManager->func_01fff3b4(this->mUnk_140.mUnk_0C);

                if (actor != NULL) {
                    func_01ffb714(&this->mPos, &actor->mPrevPos, &vec1);
                    this->func_ov031_020f2cac(&vec1, true);
                }

                break;
            case 0xE:
                if (this->mUnk_140.mUnk_0C.index == 0x102) {
                    bool var = false;

                    if (this->mUnk_140.mUnk_0C.index == 0x102) {
                        if (this->mUnk_140.mUnk_0C.data == 0x1 || this->mUnk_140.mUnk_0C.data == 0x3) {
                            var = true;
                        }
                    }

                    bool var2 = true;
                    if (!var) {
                        var2 = false;
                    }

                    if (this->func_ov000_02098800(var2)) {
                        notEarlyReturn = true;
                    } else {
                        data_027e0ce0->func_ov000_0208bd30(var2, 0xE6, 0, 0);
                        func_01ffb714(&this->mPos, this->func_ov000_0209853c(0), &vec1);
                        this->func_ov031_020f2cac(&vec1, true);
                    }
                }
                break;
            case 0xF:
                if (this->mUnk_5C.mParams[1] == 0x0 || this->mUnk_5C.mParams[1] == 0x3) {
                    data_027e0ce0->func_ov000_0208bc1c(1, 0, 0x18, 0, 0, 0);
                }

                VecFx32 *result = this->func_ov000_0209853c(0x1);
                func_01ffb714(&this->mPos, result, &vec1);
                this->func_ov031_020f2cac(&vec1, true);
                break;
            case 0x3:
                if (this->mUnk_140.mUnk_0C.type != ActorRefType_0) {
                    Actor *actor = gpActorManager->func_01fff3b4(this->mUnk_140.mUnk_0C);
                    if (actor) {
                        func_01ffb714(&actor->mPos, &actor->mPrevPos, &vec1);
                        VecFx32_TryNormalize(&vec1);
                        this->func_ov031_020f2cac(&vec1, true);
                    }
                }

                break;
            default:
                break;
        }
    }

    if (!notEarlyReturn) {
        return;
    }

    this->func_ov031_020f2f9c();

    if ((this->mUnk_5C.mParams[1] != 0) && (this->mUnk_5C.mParams[1] != 3)) {
        u32 var_r0 = this->func_ov000_02098ab4(data_ov031_02110b01[this->mUnk_5C.mParams[1]], 0, 1, &this->mVel);
        if (var_r0) {
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

// non-matching
void ActorShotArrow::func_ov031_020f2c08(unk16 param1) {
    VecFx32 vel;

    this->mVel.x = MUL_FX32(SIN((u16) this->mAngle), param1);
    this->mVel.z = MUL_FX32(COS((u16) this->mAngle), param1);
    this->mVel.y = FLOAT_TO_FX32(0.0f);

    vel = this->mVel;
    func_01ff93c0(&vel, -0x1000);
    this->func_ov031_020f2cac(&vel, false);
}

// non-matching
void ActorShotArrow::func_ov031_020f2cac(VecFx32 *param1, bool param2) {
    VecFx32 vel;
    VecFx32 pos;
    VecFx16 vec;

    if (this->mState == ActorShotArrowState_4) {
        return;
    }

    this->mUnk_140.mUnk_04 &= ~0x8;
    this->SetState(ActorShotArrowState_4);

    if (param1->x == 0 && param1->y == 0) {
        if (param1->z != 0) {
            vel = this->mVel;
            if (this->mVel.x == 0 && this->mVel.y == 0 && this->mVel.z == 0) {
                VecFx32_Copy(&this->mVel, param1);
            } else {
                func_01ff94cc(&this->mVel, param1, &vel);
            }
        } else {
            this->mVel.x = -this->mVel.x;
            this->mVel.y = -this->mVel.y;
            this->mVel.z = -this->mVel.z;
        }
    }

    VecFx32_TryNormalize(&this->mVel);
    func_01ff93c0(&this->mVel, 0x19A);
    this->mVel.y = 0xCD;

    if (param2) {
        pos = this->mPos;
        this->mPos.x -= FLOAT_TO_FX32(SIN((u16) this->mAngle));
        this->mPos.z -= FLOAT_TO_FX32(COS((u16) this->mAngle));
        data_027e09a8->func_ov000_02071eac(&this->mPos);
        data_027e09a8->func_ov000_02071b30(0x8D7B, &pos, 0x0);

        vec.x = (fx16) FLOAT_TO_FX32(SIN((u16) (this->mAngle - 0x8000)));
        vec.y = (fx16) FLOAT_TO_FX32(0.0f);
        vec.z = (fx16) FLOAT_TO_FX32(COS((u16) (this->mAngle - 0x8000)));

        data_027e0cec->func_ov000_0209feac(0x804, &pos, 0x2, 0x0, 0x0);
        data_027e0cec->func_ov000_0209ff24(0x805, &pos, &vec, 2);
    }

    this->mAngle = func_01ffbbe0(this->mVel.x, this->mVel.z);
}

// non-matching
void ActorShotArrow::func_ov031_020f2ef0() {
    Actor *value = NULL;
    ActorShotArrow_178 *unk_178;

    unk_178 = &this->mUnk_178;
    func_01ffe6c4(&value, this->mRef.Get32(), &this->mPos, &this->mVel, (s16) this->mUnk_44, &this->mPos, 0);

    this->mUnk_46 = (s16) (value->func_ov000_0207df88(this->mUnk_30, 0x3) | func_ov000_0207e294(this->mUnk_30));
}

void ActorShotArrow::func_ov031_020f2f5c(VecFx32 *param1) {
    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, param1, &this->mPos);
    func_01ffb714(&this->mPos, &this->mVel, &this->mPos);
}

bool ActorShotArrow::func_ov031_020f2f9c() {
    VecFx32_Copy(&this->mPos, &this->mUnk_194.mUnk_0C);
    this->mUnk_194.mUnk_18 = FLOAT_TO_FX32(0.2f);
    data_027e09c0->func_ov000_0207e58c(this->mRef, 0x3, data_ov031_02110b01[this->mUnk_5C.mParams[1]], &this->mUnk_194);
    return true;
}

// non-matching
void ActorShotArrow::func_ov031_020f3000() {
    VecFx32 vec;
    Mat3p m1;
    Mat3p m2;

    vec.x = FLOAT_TO_FX32(0.0f);
    vec.y = FLOAT_TO_FX32(0.0f);
    vec.z = FLOAT_TO_FX32(0.4f);

    Mat3p_InitYRotation(&m1, SIN((u16) this->mAngle), COS((u16) this->mAngle));
    Mat3p_InitXRotation(&m2, SIN((u16) (s16) (this->mUnk_174 + this->mUnk_176)),
                        COS((u16) (s16) (this->mUnk_174 + this->mUnk_176)));

    func_01ffa60c(&m2, &m1, &m1);

    func_01ffa7a0(&vec, &m1, &vec);

    vec.y = MUL_FX32(vec.y, 0x800);

    VecFx32_Add(&vec, &this->mPos, &vec);
    VecFx32_Copy(&vec, &this->mUnk_1DC.mUnk_00);
}

void ActorShotArrow::func_ov031_020f311c(Mat4x3p *param1) {
    Mat4x3p m1;
    Mat4x3p m2;

    UNSET_FLAG(this->mFlags, ActorFlag_Visible);
    this->mUnk_224 = param1;

    if (param1 != NULL) {
        Mat4x3p_InitXRotation(&m1, SIN((u16) this->mUnk_176), COS((u16) this->mUnk_176));
        Mat4x3p_InitYRotation(&m2, SIN((u16) this->mAngle), COS((u16) this->mAngle));

        func_01ffad5c(&m1, &m2, &m1);

        VecFx32_Copy(&this->mPos, &m1.wColumn);
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

// non-matching
bool ActorShotArrow::func_ov031_020f3258(u16 param1) {
    if (this->mUnk_172 == 0) {
        return true;
    }

    if (this->mUnk_172 > param1) {
        this->mUnk_172 -= param1;
    } else {
        this->mUnk_172 = 0;
    }

    return false;
}

ActorShotArrow_178::ActorShotArrow_178(ActorShotArrow *param1) {
    this->mUnk_08   = param1;
    this->mUnk_0C.x = FLOAT_TO_FX32(0.0f);
    this->mUnk_0C.y = FLOAT_TO_FX32(0.0f);
    this->mUnk_0C.z = FLOAT_TO_FX32(0.0f);
    this->mUnk_18   = 0;
}

ActorShotArrow_178::~ActorShotArrow_178() {
    this->mUnk_08 = NULL;
}

void ActorShotArrow_178::func_ov031_020f3304() {
    this->mUnk_18 = FLOAT_TO_FX32(0.0f);
}

// non-matching
bool ActorShotArrow_178::vfunc_08(const UnkStruct_ov031_020f3310 *param1) {
    u32 var = param1->mUnk_04->mUnk_24[param1->mUnk_00->mUnk_06];

    if ((var >> 0x17 & 1) == 1) {
        return false;
    }

    if ((this->mUnk_08->mUnk_178.mUnk_18 & 0x1) == 0 && (var >> 0x1F & 1) == 1) {
        this->mUnk_08->func_ov031_020f2b8c();
    } else if ((this->mUnk_08->mUnk_178.mUnk_18 & 0x2) == 0) {
        if (this->mUnk_08->mState == ActorShotArrowState_4) {
            this->mUnk_08->Kill();
            return false;
        }

        this->mUnk_08->mUnk_178.mUnk_18 |= 0x1;
        VecFx16_Copy2VecFx32(&param1->mUnk_08, &this->mUnk_08->mUnk_178.mUnk_0C);
    }

    return true;
}

// non-matching
bool ActorShotArrow_178::vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 param2) {}

ActorShotArrow_194::ActorShotArrow_194(ActorShotArrow *param1) {
    this->mUnk_2C = param1;
    this->mUnk_30 = 0;
}

void ActorShotArrow_194::func_ov031_020f374c(Actor *actor) {
    UnkStruct_020f374c stack;

    stack.mUnk_28 = this->mUnk_2C->mVel;
    func_01ff93c0(&stack.mUnk_28, this->mUnk_30);
    stack.mUnk_1C = this->mUnk_0C;
    VecFx32_Add(&stack.mUnk_1C, &stack.mUnk_28, &stack.mUnk_1C);

    func_01ffb714(&stack.mUnk_1C, &actor->mVel, &stack.mUnk_1C);
    actor->vfunc_10(&stack.mUnk_0C);

    stack.mUnk_00 = stack.mUnk_0C;
    func_01ffb714(&stack.mUnk_00, &stack.mUnk_1C, &stack.mUnk_00);

    unk32 temp = func_01ff9258(stack.mUnk_00.x, stack.mUnk_00.z);

    //! @bug: stack.mUnk_18 is used uninitialized?
    if (temp > stack.mUnk_18 && stack.mUnk_18 > FLOAT_TO_FX32(0.15f)) {
        fx32 temp_r5 = (temp - stack.mUnk_18) + FLOAT_TO_FX32(0.15f);
        u16 value    = (u32) (s16) func_01ffbbe0(stack.mUnk_00.x, stack.mUnk_00.z);

        fx16 sin = SIN(value);
        fx16 cos = COS(value);

        stack.mUnk_28.x += MUL_FX32(sin, temp_r5);
        stack.mUnk_28.z += MUL_FX32(cos, temp_r5);
    }

    this->mUnk_2C->func_ov031_020f2f5c(&stack.mUnk_28);
    this->mUnk_2C->mUnk_1C8.mUnk_00 = actor;
}

// non-matching
void ActorShotArrow_194::vfunc_10(Actor *actor) {
    UnkStruct_020f38b0 stack;

    if (!(this->mUnk_04 != actor->mRef && actor->mUnk_34 != NULL)) {
        return;
    }

    if (this->mUnk_2C->mState != ActorShotArrowState_0 && this->mUnk_2C->mState != ActorShotArrowState_5) {
        return;
    }

    if (actor->GetActorId() == ActorId_AROW) {
        return;
    }

    s16 result = func_01ffbbe0(this->mUnk_2C->mVel.x, this->mUnk_2C->mVel.z);

    switch (actor->GetActorId()) {
        case ActorId_WIDR:
            this->func_ov031_020f374c(actor);
            this->mUnk_2C->func_ov031_020f2bec();

            if (actor != NULL) {
                func_01ffb714(&this->mUnk_2C->mPos, &actor->mPos, &stack.mUnk_1C);
                VecFx32_Copy(&stack.mUnk_1C, &this->mUnk_2C->mUnk_1C8.mUnk_04);
                this->mUnk_2C->mUnk_1C8.mUnk_10 = actor->mAngle;
                this->mUnk_2C->mUnk_1C8.mUnk_12 = result;
            }
            break;

        case ActorId_IWTS:
            this->func_ov031_020f374c(actor);
            stack.mUnk_0C = NULL;

            if (!data_027e0d80->func_ov084_02153064(&this->mUnk_2C->mRef, &stack.mUnk_0C)) {
                this->mUnk_2C->func_ov031_020f311c(stack.mUnk_0C);
                this->mUnk_2C->mUnk_258 = 0x01;
            }
            break;

        case ActorId_MRD2:
            if (data_ov075_02163518->mUnk_910 != 1) {
                this->func_ov031_020f374c(actor);
                stack.mUnk_08 = 0;

                if (data_ov075_02163518->func_ov075_0215bbf0(&this->mUnk_2C->mRef, &stack.mUnk_08)) {
                    func_ov075_02160864(this->mUnk_2C, stack.mUnk_08);
                    this->mUnk_2C->mUnk_258 = 0x01;
                }
            }
            break;

        case ActorId_RYAW:
            this->mUnk_2C->SetState(ActorShotArrowState_6);
            UNSET_FLAG(this->mUnk_2C->mFlags, ActorFlag_Visible);
            break;

        case ActorId_LOCK:
            stack.mUnk_04 = actor->mUnk_5C.mUnk_28;
            if (stack.mUnk_04.data != 0 && stack.mUnk_04.type != ActorRefType_0) {
                ActorUnkGYAM *lockedActor = (ActorUnkGYAM *) gpActorManager->func_01fff3b4(actor->mUnk_5C.mUnk_28);

                if (lockedActor != NULL && lockedActor->GetActorId() == ActorId_GYAM) {
                    this->func_ov031_020f374c(actor);
                    this->mUnk_2C->func_ov031_020f311c(&lockedActor->mUnk_220);
                    SET_FLAG(this->mUnk_2C->mFlags, ActorFlag_Visible);
                    this->mUnk_2C->mUnk_258 = 0x0;
                    break;
                }
            }
            // fallthrough

        default:
            if (!this->IsParam1_3Or4()) {
                this->func_ov031_020f374c(actor);
                this->mUnk_2C->func_ov031_020f2bbc();
                if (actor) {
                    func_01ffb714(&this->mUnk_2C->mPos, &actor->mPos, &stack.mUnk_10);
                    VecFx32_Copy(&stack.mUnk_10, &this->mUnk_2C->mUnk_1C8.mUnk_04);
                    this->mUnk_2C->mUnk_1C8.mUnk_10 = actor->mAngle;
                    this->mUnk_2C->mUnk_1C8.mUnk_12 = result;
                }
            }

            if (this->mUnk_2C->mUnk_25C) {
                this->mUnk_2C->mUnk_25D = true;
            }

            break;
    }
}

// non-matching
bool ActorShotArrow_194::vfunc_0C(Actor *actor, VecFx32 *vector) {
    UnkStruct_020f3c38 stack;
    if (!(actor->mRef != this->mUnk_04 && actor->mUnk_34 != NULL) ||
        !(this->mUnk_2C->mState == ActorShotArrowState_0 || this->mUnk_2C->mState == ActorShotArrowState_5)) {
        return false;
    }

    func_01ffb714(&actor->mVel, &this->mUnk_2C->mVel, &stack.mUnk_14);
    actor->vfunc_10(&stack.mUnk_04);
    if (!func_01ffccf4(&this->mUnk_0C, &stack.mUnk_04, &stack.mUnk_14, &this->mUnk_30)) {
        return false;
    }

    VecFx32_Copy(&this->mUnk_2C->mVel, vector);
    VecFx32_TryNormalize(vector);
    return true;
}

void ActorShotArrow::func_ov031_020f3d04(unk16 param1) {
    this->mUnk_176 = param1;
    func_01ff9638(&this->mVel, -this->mAngle);
    func_01ff95a0(&this->mVel, param1);
    func_01ff9638(&this->mVel, this->mAngle);
}
