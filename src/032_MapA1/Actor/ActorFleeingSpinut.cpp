#include "Actor/ActorFleeingSpinut.hpp"
#include "CommonFuncs.hpp"

#include "Actor/ActorUnkKEYN.hpp"
#include "System/Random.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_027e0998.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "nitro/types.h"

extern const unk32 data_ov000_020aecf8;

static const VecFx32Cpp data_ov032_021223a8(0x1B33, 0x800, 0x1B33);

static UnkStruct_ov019_020d24c8_28_258_00_Derived1 data_ov032_02122924;
static UnkStruct_ov019_020d24c8_28_258_00_Derived1 data_ov032_0212290c;

static ActorUnkZLSL_AnimationTag data_ov032_021223b4 = {.index = 0, .name = "walk", .unknown = 0x0};
static ActorUnkZLSL_AnimationTag data_ov032_021223cc = {.index = 1, .name = "discover", .unknown = 0x1};

DECL_PROFILE(ActorProfileFleeingSpinut);

Actor *ActorProfileFleeingSpinut::Create() {
    return new(HeapIndex_2) ActorFleeingSpinut();
}

ActorProfileFleeingSpinut::ActorProfileFleeingSpinut() :
    ActorProfile_ov000_020b3018(ActorId_FleeingSpinut, ActorId_Spinut) {
    this->mUnk_04.Init(FX_F32_TO_FX32(0.4f));
}

ActorFleeingSpinut::ActorFleeingSpinut() :
    mUnk_0B0(G3d_GetModelPtr(GET_PROFILE(ActorProfileFleeingSpinut)->vfunc_04()->mUnk_50)),
    mUnk_110(&this->mUnk_0B0, GET_PROFILE(ActorProfileFleeingSpinut)->vfunc_04()),
    mPrevState(ActorState_None),
    mUnk_1BE(0x0),
    mUnk_224(true) {
    SET_FLAG(this->mFlags, ActorFlag_6);
    *(s16 *) &this->mUnk_44 |= 0x40;

    this->mUnk_38          = (Actor_38 *) &this->mUnk_1E0;
    this->mUnk_38->mUnk_08 = 0x01;

    this->mUnk_21C = 0x0;
    this->mUnk_220 = 0x0;
    this->mUnk_1C0.mUnk_04 |= 0x8000;

    data_ov032_02122924.func_ov000_0205fc20(0x5D, 0x22, NULL, NULL);
    data_ov032_0212290c.func_ov000_0205fc20(0x5D, 0x7, NULL, NULL);

    this->Actor::func_ov000_0209862c(0x4);
    SET_FLAG(this->mFlags, ActorFlag_9);
    this->mUnk_A4 = &data_ov032_021223a8.vec;

    if (this->func_ov032_0211be04()) {
        UNSET_FLAG(this->mFlags, ActorFlag_16);
    }
}

ActorFleeingSpinut::~ActorFleeingSpinut() {}

bool ActorFleeingSpinut::Init(unk32 param1) {
#pragma unused(param1)
    this->mUnk_1EC.mUnk_00 = this->mUnk_5C.mParams[1];

    this->SetState(0x0);

    return true;
}

static PTMF<ActorFleeingSpinut> data_ov032_021223e4[ActorFleeingSpinutState_Max] = {
    &ActorFleeingSpinut::func_ov032_0211c2c4, // ActorFleeingSpinutState_0
    &ActorFleeingSpinut::func_ov032_0211c444, // ActorFleeingSpinutState_1
    &ActorFleeingSpinut::func_ov032_0211be30, // ActorFleeingSpinutState_2
    &ActorFleeingSpinut::func_ov032_0211bf84, // ActorFleeingSpinutState_3
    &ActorFleeingSpinut::func_ov032_0211c53c, // ActorFleeingSpinutState_4
    &ActorFleeingSpinut::func_ov032_0211c73c, // ActorFleeingSpinutState_5
    &ActorFleeingSpinut::func_ov032_0211c07c  // ActorFleeingSpinutState_6
};

void ActorFleeingSpinut::SetState(ActorState state) {
    this->mUnk_2C = data_ov000_020aecf8;

    this->mPrevState = this->mState;
    this->mState     = state;

    this->mUnk_1BE = 0x00;
    this->mUnk_224 = true;

    CALL_PTMF(data_ov032_021223e4[this->mState]);
}

static PTMF<ActorFleeingSpinut> data_ov032_0212241c[ActorFleeingSpinutState_Max] = {
    &ActorFleeingSpinut::func_ov032_0211c340, // ActorFleeingSpinutState_0
    &ActorFleeingSpinut::func_ov032_0211c4d4, // ActorFleeingSpinutState_1
    &ActorFleeingSpinut::func_ov032_0211bea8, // ActorFleeingSpinutState_2
    &ActorFleeingSpinut::func_ov032_0211bffc, // ActorFleeingSpinutState_3
    &ActorFleeingSpinut::func_ov032_0211c5cc, // ActorFleeingSpinutState_4
    &ActorFleeingSpinut::func_ov032_0211c7bc, // ActorFleeingSpinutState_5
    &ActorFleeingSpinut::func_ov032_0211c108  // ActorFleeingSpinutState_6
};

void ActorFleeingSpinut::Update() {
    this->mUnk_3C = &this->mUnk_1C0;

    if (!this->func_ov032_0211c938()) {
        this->mUnk_1EC.func_ov032_0211d028();
    } else {
        this->mUnk_1EC.func_ov032_0211cf74();
    }

    CALL_PTMF(data_ov032_0212241c[this->mState]);

    this->Actor::func_ov000_02098838();
    this->func_ov032_0211cb2c();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->Actor::func_ov000_02098b8c(0x0, NULL);

    if (this->mUnk_46 & 0x1) {
        this->mVel.y = FX_F32_TO_FX32(0.0f);
    }

    if (this->mUnk_224) {
        this->Actor::func_ov000_020989e0();
        bool var = true;

        if (this->mUnk_1C0.mUnk_08 & 0x3FFFF) {
            var = false;

            switch (this->mUnk_1C0.mUnk_1C) {
                case 0xC:
                case 0x4:
                    break;

                case 0xE:
                    if (!this->Actor::func_ov000_020986fc(0x0) && !this->Actor::func_ov000_020986fc(0x1)) {
                        var = true;
                        break;
                    }

                case 0xF:
                    this->Actor_Derived2::func_ov000_020990c0(&this->mUnk_1C0, 0x0, 0x0);
                    this->SetState(ActorFleeingSpinutState_2);
                    break;

                default:
                    this->mUnk_48 -= this->mUnk_1C0.mUnk_1E;
                    this->Actor_Derived2::func_ov000_020990c0(&this->mUnk_1C0, 0x0, 0x0);
                    data_027e09a8->func_ov000_02071b30(0x983C, &this->mPos, 0x0);
                    this->SetState(ActorFleeingSpinutState_2);
                    break;
            }
        }

        if (var) {
            this->Actor::func_ov000_02098ab4(0x2, 0x0, 0x1, NULL);
        }
    }
    if (GET_FLAG(this->mFlags, ActorFlag_14)) {
        this->mUnk_110.vfunc_34();
    }

    if (!GET_FLAG(this->mFlags, ActorFlag_Alive)) {
        return;
    }

    VecFx32 vec = this->mPos;

    UnkStruct_ov000_0207de98 sp04;
    VecFx32_Copy(&vec, &sp04.vec);
    sp04.param1 = 0x548;
    sp04.param2 = 0x1000;

    data_027e09c0->func_ov000_0207de98(this->mRef, &sp04, this->mUnk_38);
}

void ActorFleeingSpinut::vfunc_30(Actor_vfunc_30 *param1) {
    if (!this->func_ov032_0211be04()) {
        return;
    }

    bool var = true;
    this->Actor::func_ov017_020bef88(param1, &data_ov032_02122924, 0x1);

    if (this->mState != ActorFleeingSpinutState_6) {
        return;
    }

    if (!(data_ov032_0212290c.mUnk_04 & 0x1)) {
        var = false;
    }

    if (param1->mUnk_00.unk_00 != var && param1->mUnk_00.unk_01 != var) {
        return;
    }

    VecFx32 sp08 = this->mPos;

    sp08.x += FX_F32_TO_FX32(2.5f);
    sp08.z -= FX_F32_TO_FX32(2.5f);

    Vec2s sp04;

    if (!data_027e0998->vfunc_00(&sp08, &sp04, &this->mRef)) {
        return;
    }

    data_0204af1c.func_0201aa44(&data_ov032_0212290c, &sp04, 0x1, NULL);
}

void ActorFleeingSpinut::vfunc_2C(unk32 param1) {
    if (!this->Actor::func_01fff5d0(param1, 0x0)) {
        return;
    }

    this->Actor::func_ov017_020bf5c4(&this->mPos, 0x548, 0x548, 0x1F, 0x0);

    VecFx32 vec = this->mPos;

    vec.y += this->mUnk_21C;

    this->mUnk_0B0.func_01ffc634(&this->mUnk_98, this->mAngle, &vec);
}

bool ActorFleeingSpinut::func_ov032_0211be04() {
    return this->mUnk_5C.mParams[2] == 0x1 && !this->Actor::func_ov000_02098a60(0x0);
}

void ActorFleeingSpinut::func_ov032_0211be30() {
    this->mUnk_110.vfunc_1C(data_ov032_021223b4, 0x1000, 0x19A, 0x0);

    this->mUnk_1C0.func_ov000_02097bec();
    this->mUnk_38->mUnk_08 = 0x3;
}

void ActorFleeingSpinut::func_ov032_0211bea8() {
    this->Actor_Derived2::func_ov000_020992dc();

    if (!GET_FLAG(this->mFlags, ActorFlag_5)) {
        return;
    }

    this->mUnk_38->mUnk_08 = 0x1;

    if (this->mUnk_48 <= 0x0) {
        data_027e09a8->func_ov000_02071b30(0x983D, &this->mPos, 0x0);

        this->Actor::func_ov000_020984d0();
        this->Actor::func_ov017_020bf3e0(0x1, 0x0);

        if (this->func_ov032_0211be04()) {
            RefStruct ref;
            ActorUnkKEYN::func_ov070_0214143c(&ref, &this->mPos, this->mRef, this->mUnk_5C.mUnk_24, this->mUnk_5C.mUnk_18[0],
                                              this->mUnk_5C.mUnk_1A[0]);
            return;
        }

        this->Actor_Derived2::func_ov000_020997c4(0x0);
        return;
    }

    this->SetState(this->mPrevState);
}

void ActorFleeingSpinut::func_ov032_0211bf84() {
    this->mUnk_110.vfunc_1C(data_ov032_021223b4, 0x1000, 0x19A, 0x0);
    this->mTimer.Set(0, 15);
    this->mVel.x = FX_F32_TO_FX32(0.0f);
    this->mVel.z = FX_F32_TO_FX32(0.0f);
}

void ActorFleeingSpinut::func_ov032_0211bffc() {
    if (this->func_ov032_0211ca20()) {
        if (this->mTimer.HasReachedMaxU()) {
            this->SetState(ActorFleeingSpinutState_1);
        } else {
            this->SetState(ActorFleeingSpinutState_4);
        }
    } else {
        if (!this->func_ov032_0211c938() || this->func_ov032_0211c9d8()) {
            this->SetState(ActorFleeingSpinutState_0);
        }
    }

    this->mTimer.Update();
}

void ActorFleeingSpinut::func_ov032_0211c07c() {
    this->mUnk_110.vfunc_1C(data_ov032_021223cc, 0x1000, 0x19A, 0x0);

    this->mVel.x = FX_F32_TO_FX32(0.0f);
    this->mVel.z = FX_F32_TO_FX32(0.0f);

    data_027e09a8->func_ov000_02071b30(0x9837, &this->mPos, 0x0);
}

void ActorFleeingSpinut::func_ov032_0211c108() {
    UnkStruct_PlayerGet_50 *pGet50 = this->mUnk_110.vfunc_28();
    fx32 pGet50Unk8                = pGet50->mUnk_08;
    fx32 pGet50Unk10               = pGet50->mUnk_10;

    bool var;
    if (this->mUnk_1BE % 2 == 0 || !data_027e0ce0->func_01fff1a4()) {
        var = false;
    } else {
        var = true;
    }

    unk32 temp_r5_2 = func_01ffb428(pGet50Unk10 - pGet50Unk8, FX_F32_TO_FX32(1.0f)) >> 0xC;

    unk16 sp8;
    unk16 *psp8 = (unk16 *) &sp8;
    func_ov000_020986b4(psp8, this, var);

    unk16 value = *psp8;
    if (temp_r5_2 > 0) {
        func_01ff9318(&this->mAngle, value, func_01ffb464(INT_TO_FX32(temp_r5_2)));
    }

    if (!this->mUnk_110.vfunc_28()->func_01ff8fa8()) {
        return;
    }

    data_027e0cec->func_ov000_0209feac(0x880, &this->mPos, 0x2, 0x0, 0x0);

    if (!this->func_ov032_0211c938()) {
        this->SetState(ActorFleeingSpinutState_0);
        return;
    }

    if (this->func_ov032_0211c9d8()) {
        this->SetState(ActorFleeingSpinutState_5);
        return;
    }

    if (this->mUnk_1EC.func_ov032_0211d040(&this->mPos)) {
        this->SetState(ActorFleeingSpinutState_4);
        return;
    }

    this->mUnk_1BE++;
    this->mUnk_110.vfunc_28()->mUnk_02 = 0x0;
    this->mUnk_110.vfunc_28()->mUnk_08 = 0x0;
    data_027e09a8->func_ov000_02071b30(0x9837, &this->mPos, 0x0);
}

void ActorFleeingSpinut::func_ov032_0211c2c4() {
    this->mUnk_1EC.mUnk_2C = 0x0;
    this->mUnk_1EC.func_ov032_0211cc48(&this->mPos);

    this->mUnk_110.vfunc_1C(data_ov032_021223b4, 0x1000, 0x19A, 0x0);

    this->mVel.x = FX_F32_TO_FX32(0.0f);
    this->mVel.z = FX_F32_TO_FX32(0.0f);
}

void ActorFleeingSpinut::func_ov032_0211c340() {
    this->mUnk_1EC.func_ov032_0211cd60(&this->mPos, &this->mAngle.angle_s, &this->mVel, 0xF6, 0xE39, 0xF6);

    if (this->func_ov032_0211c938() && this->func_ov032_0211ca20()) {
        this->SetState(ActorFleeingSpinutState_1);
        return;
    }

    if (this->mUnk_110.vfunc_10()->mUnk_04.func_02015080(0x1000)) {
        data_027e09a8->func_ov000_02071b30(0x9838, &this->mPos, 0x0);
        return;
    }

    if (this->mUnk_110.vfunc_10()->mUnk_04.func_02015080(0xF000)) {
        data_027e09a8->func_ov000_02071b30(0x9839, &this->mPos, 0x0);
    }
}

void ActorFleeingSpinut::func_ov032_0211c444() {
    this->mUnk_110.vfunc_1C(data_ov032_021223cc, 0x2000, 0x19A, 0x0);

    data_027e09a8->func_ov000_02071b30(0x9837, &this->mPos, 0x0);

    this->mVel.x   = FX_F32_TO_FX32(0.0f);
    this->mVel.z   = FX_F32_TO_FX32(0.0f);
    this->mUnk_224 = false;
}

void ActorFleeingSpinut::func_ov032_0211c4d4() {
    if (!this->mUnk_110.vfunc_28()->func_01ff8fa8()) {
        return;
    }

    data_027e0cec->func_ov000_0209feac(0x880, &this->mPos, 0x2, 0x0, 0x0);

    this->SetState(ActorFleeingSpinutState_4);
}

void ActorFleeingSpinut::func_ov032_0211c53c() {
    this->mUnk_1EC.mUnk_2C = 0x1;

    this->mUnk_110.vfunc_1C(data_ov032_021223b4, 0x3000, 0x19A, 0x0);

    this->mUnk_224 = false;
    this->mUnk_1EC.func_ov032_0211d08c(&this->mPos);

    this->mTimer.Set(0, 10);

    this->mVel.x = FX_F32_TO_FX32(0.0f);
    this->mVel.z = FX_F32_TO_FX32(0.0f);
}

void ActorFleeingSpinut::func_ov032_0211c5cc() {
    if (this->mTimer.HasExpired()) {
        this->mUnk_224 = true;
    }

    this->mUnk_1EC.func_ov032_0211cd60(&this->mPos, &this->mAngle.angle_s, &this->mVel, 0x429, 0x429 + 0xA10, 0x429);

    if (this->mUnk_1EC.mUnk_28 & 0x1) {
        this->SetState(ActorFleeingSpinutState_6);
        return;
    }

    if (!this->func_ov032_0211c938()) {
        this->SetState(ActorFleeingSpinutState_0);
        return;
    }

    if (this->func_ov032_0211c9d8() && (this->mUnk_1EC.mUnk_28 & 0x2)) {
        this->SetState(ActorFleeingSpinutState_5);
        return;
    }

    if (this->mUnk_110.vfunc_10()->mUnk_04.func_02015080(0x1000)) {
        data_027e09a8->func_ov000_02071b30(0x983A, &this->mPos, 0x0);
        return;
    }

    if (!this->mUnk_110.vfunc_10()->mUnk_04.func_02015080(0xF000)) {
        return;
    }

    data_027e09a8->func_ov000_02071b30(0x983B, &this->mPos, 0x0);
}

void ActorFleeingSpinut::func_ov032_0211c73c() {
    this->mUnk_1EC.func_ov032_0211cc48(&this->mPos);

    this->mUnk_1EC.mUnk_2C = 0x1;

    this->mUnk_110.vfunc_1C(data_ov032_021223b4, 0x1000, 0x19A, 0x0);

    this->mVel.x = FX_F32_TO_FX32(0.0f);
    this->mVel.z = FX_F32_TO_FX32(0.0f);
}

void ActorFleeingSpinut::func_ov032_0211c7bc() {
    this->mUnk_1EC.func_ov032_0211cd60(&this->mPos, &this->mAngle.angle_s, &this->mVel, 0xF6, 0xE39, 0xF6);

    if (this->func_ov032_0211ca6c() && this->mUnk_1EC.mUnk_28 & 0x2) {
        this->SetState(ActorFleeingSpinutState_3);
        return;
    }

    if (this->mUnk_1EC.mUnk_28 & 0x1) {
        this->SetState(ActorFleeingSpinutState_6);
        return;
    }

    if (this->func_ov032_0211c938() && this->func_ov032_0211ca20()) {
        this->SetState(ActorFleeingSpinutState_1);
        return;
    }

    if (!this->func_ov032_0211c938()) {
        this->SetState(ActorFleeingSpinutState_0);
        return;
    }

    if (this->mUnk_110.vfunc_10()->mUnk_04.func_02015080(0x1000)) {
        data_027e09a8->func_ov000_02071b30(0x9838, &this->mPos, 0x0);
        return;
    }

    if (!this->mUnk_110.vfunc_10()->mUnk_04.func_02015080(0xF000)) {
        return;
    }

    data_027e09a8->func_ov000_02071b30(0x9839, &this->mPos, 0x0);
}

bool ActorFleeingSpinut::func_ov032_0211c938() {
    if (this->mUnk_5C.mParams[0] == 0x0) {
        return true;
    }

    UnkStruct_027e0cd8_0C_Base *temp_r8 = data_027e0cd8->mUnk_0C;
    bool var_r8 = temp_r8->func_ov000_020802ec(this->mUnk_5C.mParams[0], data_027e0ce0->func_01fff148(0));

    if (data_027e0ce0->func_01fff1a4()) {
        //! @bug or fake match? probably meant to be `var_r8 = var_r8 || temp_r6->func_ov000_020802ec(...)`?
        UnkStruct_027e0cd8_0C_Base *temp_r6 = data_027e0cd8->mUnk_0C;
        var_r8 = var_r8 | temp_r6->func_ov000_020802ec(this->mUnk_5C.mParams[0], data_027e0ce0->func_01fff148(1));
    }

    return var_r8;
}

bool ActorFleeingSpinut::func_ov032_0211c9d8() {
    return !this->func_ov032_0211cab8(0x0, 0x5000) && !this->func_ov032_0211cab8(0x1, 0x5000);
}

bool ActorFleeingSpinut::func_ov032_0211ca20() {
    return this->func_ov032_0211cab8(0x0, 0x3CCD) || this->func_ov032_0211cab8(0x1, 0x3CCD);
}

bool ActorFleeingSpinut::func_ov032_0211ca6c() {
    return !this->func_ov032_0211cab8(0x0, 0x3CCD) && !this->func_ov032_0211cab8(0x1, 0x3CCD);
}

bool ActorFleeingSpinut::func_ov032_0211cab8(unk32 param1, unk32 param2) {
    if (param1 == 0x1 && !data_027e0ce0->func_01fff1a4()) {
        return false;
    }

    if (func_ov000_0205adfc(data_027e0ce0->func_01fff148(param1), &this->mPos) &&
        this->Actor::func_ov000_0209867c(param1) < param2) {
        return true;
    }

    return false;
}

void ActorFleeingSpinut::func_ov032_0211cb2c() {
    if (this->mUnk_110.vfunc_30() != 0x1) {
        if (this->mUnk_21C <= FX_F32_TO_FX32(0.0f)) {
            this->mUnk_220 = 0x0;
            return;
        }

        this->mUnk_220 -= this->mUnk_2C;
        func_01ff916c(&this->mUnk_21C, 0x0, this->mUnk_220);
        return;
    }

    fx32 value = this->mUnk_110.vfunc_28()->mUnk_08;

    if (value > FX_F32_TO_FX32(1.0f) && value < FX_F32_TO_FX32(16.0f)) {
        value -= FX32_ONE;
        this->mUnk_21C = FX_Mul(value + -FX_Mul(value, value) / 14, 0x3B4);
    } else {
        this->mUnk_21C = FX_F32_TO_FX32(0.0f);
    }
}

ActorFleeingSpinut_1EC::ActorFleeingSpinut_1EC() :
    mUnk_00(0x0),
    mUnk_04(NULL),
    mUnk_08(NULL),
    mUnk_1C(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f)),
    mUnk_2C(0x0) {
    this->mUnk_0C[0] = NULL;
    this->mUnk_0C[1] = NULL;
    this->mUnk_14[0] = NULL;
    this->mUnk_14[1] = NULL;
    this->mUnk_28    = 0x0;
}

void ActorFleeingSpinut_1EC::func_ov032_0211cc48(const VecFx32 *param1) {
    this->mUnk_04 = this->func_ov032_0211cd20(param1);

    unk32 var_r5                             = INT_MAX;
    u32 temp_r0_2                            = this->mUnk_04->vfunc_1C();
    UnkStruct_027e0960_TableEntry_04 *var_r7 = NULL;

    for (int var_r8 = 0; var_r8 < temp_r0_2; var_r8++) {
        UnkStruct_027e0960_TableEntry_04 *temp_r0_4 = this->mUnk_04->vfunc_18(var_r8);

        if (!temp_r0_4->func_02017930(this->mUnk_04)) {
            VecFx32 sp0;
            temp_r0_4->vfunc_0C(&sp0);
            unk32 temp_r0_5 = func_01ff9258(param1->x - sp0.x, param1->z - sp0.z);

            if (var_r5 > temp_r0_5) {
                var_r5 = temp_r0_5;
                var_r7 = temp_r0_4;
            }
        }
    }

    if (var_r7 != NULL) {
        this->mUnk_08 = var_r7;
        this->mUnk_08->vfunc_0C(&this->mUnk_1C.vec);
    }
}

UnkStruct_027e0960_TableEntry_04 *ActorFleeingSpinut_1EC::func_ov032_0211cd20(const VecFx32 *param1) {
    UnkStruct_027e0960_TableEntry *tEntry = data_027e0960->func_ov000_0205a3fc(*param1, this->mUnk_00);
    return tEntry->mTable.GetPtr(tEntry->func_ov000_02059da4(param1));
}

u16 *ActorFleeingSpinut_1EC::func_ov032_0211cd60(VecFx32 *param1, s16 *param2, VecFx32 *param3, unk32 param4, s16 param5,
                                                 unk32 param6) {
    VecFx32 sp1C;
    VecFx32 sp10;
    VecFx32 sp4;
    UnkAngleStruct sp0;
    fx16 temp_r1;
    fx32 var_r4;
    unk32 temp_r5;

    if (param4 == 0x0 || this->mUnk_04 == NULL) {
        param3->z = FX_F32_TO_FX32(0.0f);
        param3->x = FX_F32_TO_FX32(0.0f);
        return &this->mUnk_28;
    }

    this->mUnk_28 = 0x0;

    if (this->func_ov032_0211d920(param1)) {
        param3->z = FX_F32_TO_FX32(0.0f);
        param3->x = FX_F32_TO_FX32(0.0f);
        this->mUnk_28 |= 0x1;
        return &this->mUnk_28;
    }

    if (this->func_ov032_0211d864(param1)) {
        this->func_ov032_0211d910();
    }

    this->mUnk_04->vfunc_0C(&sp1C);
    func_01ffb714(&sp1C, param1, &sp10);
    func_01ffb714(&sp1C, &this->mUnk_1C.vec, &sp4);

    temp_r1 = func_01ffbbe0(sp10.x, sp10.z);
    sp0     = temp_r1;

    func_01ff930c(param2, temp_r1, param5);
    temp_r5 = func_01ff9258(sp1C.x - param1->x, sp1C.z - param1->z);

    var_r4 = FX_Mul(param4, func_02017f54(param2, sp0));
    if (var_r4 < param6) {
        var_r4 = param6;
    }

    if (temp_r5 < param4) {
        func_01ffb714(&sp1C, param1, param3);
        this->func_ov032_0211d7e8(&sp1C);
    } else if (VecFx32_Dot(&sp10, &sp4) < 0) {
        this->mUnk_1C.CopyOut(&sp1C);
        this->func_ov032_0211d7e8(&sp1C);
    } else {
        param3->x = FX_Mul(SIN(sp0.angle_s), var_r4);
        param3->z = FX_Mul(COS(sp0.angle_s), var_r4);
    }

    return &this->mUnk_28;
}

void ActorFleeingSpinut_1EC::func_ov032_0211cf74() {
    this->func_ov032_0211cfac(0x0);

    if (!data_027e0ce0->func_01fff1a4()) {
        return;
    }

    this->func_ov032_0211cfac(0x1);
}

void ActorFleeingSpinut_1EC::func_ov032_0211cfac(unk32 param1) {
    UnkStruct_027e0960_TableEntry_04 *entry04 = this->func_ov032_0211cd20(data_027e0ce0->func_01fff148(param1));

    VecFx32 sp00;
    entry04->vfunc_0C(&sp00);

    if (this->mUnk_0C[param1] != NULL && this->mUnk_0C[param1]->func_02017930(entry04)) {
        return;
    }

    this->mUnk_14[param1] = this->mUnk_0C[param1];
    this->mUnk_0C[param1] = entry04;
}

void ActorFleeingSpinut_1EC::func_ov032_0211d028() {
    this->mUnk_14[0] = NULL;
    this->mUnk_14[1] = NULL;
    this->mUnk_0C[0] = NULL;
    this->mUnk_0C[1] = NULL;
}

bool ActorFleeingSpinut_1EC::func_ov032_0211d040(VecFx32 *param1) {
    return (this->func_ov032_0211d568(param1, this->mUnk_04, NULL) > 0) ||
           (this->func_ov032_0211d568(param1, this->mUnk_08, NULL) > 0);
}

#define UNK_CHECK1(a, b)                                                                       \
    (temp_r5->UnknownInline1(param1, a) > b || !this->func_ov032_0211d2e4(this->mUnk_04, a) || \
     this->func_ov032_0211d2e4(this->mUnk_08, a))

void ActorFleeingSpinut_1EC::func_ov032_0211d08c(VecFx32 *param1) {
    VecFx32 sp18;
    VecFx32 spC;
    VecFx32 sp0;

    UnkStruct_027e0ce0 *temp_r5 = data_027e0ce0;

    if (this->func_ov032_0211d568(param1, this->mUnk_08, this->mUnk_04) > 0) {
        if (UNK_CHECK1(0, 0x3CCD) && (!temp_r5->func_01fff1a4() || UNK_CHECK1(1, 0x3CCD)) &&
            this->func_ov032_0211d568(param1, this->mUnk_04, this->mUnk_08) != 0) {
            return;
        }

        this->func_ov032_0211d910();
        return;
    }

    if (this->func_ov032_0211d568(param1, this->mUnk_04, this->mUnk_08) != 0) {
        return;
    }

    sp18 = *temp_r5->func_01fff148(0);
    func_01ffb714(&sp18, param1, &sp18);

    if (temp_r5->func_01fff1a4()) {
        func_01ffb714(temp_r5->func_01fff148(1), param1, &spC);
    }

    this->mUnk_04->vfunc_0C(&sp0);
    func_01ffb714(&sp0, param1, &sp0);

    if ((VecFx32_Length(&sp18) > 0x3CCD) || (VecFx32_Dot(&sp0, &sp18) <= 0)) {
        if (!temp_r5->func_01fff1a4()) {
            return;
        }

        if (VecFx32_Length(&spC) > 0x3CCD) {
            return;
        }

        if (VecFx32_Dot(&sp0, &spC) <= 0) {
            return;
        }
    }

    this->func_ov032_0211d910();
}

bool ActorFleeingSpinut_1EC::func_ov032_0211d2e4(UnkStruct_027e0960_TableEntry_04_Base *param1, unk32 param2) {
    if (param1 == NULL || this->mUnk_0C[param2] == NULL) {
        return false;
    }

    if (this->mUnk_0C[param2] != NULL && param1->func_02017930(this->mUnk_0C[param2])) {
        return true;
    }

    u32 temp_r0 = param1->vfunc_1C();

    for (u32 var_r7 = 0; var_r7 < temp_r0; var_r7++) {
        UnkStruct_027e0960_TableEntry_04_Base *temp_r0 = param1->vfunc_18(var_r7);

        if (this->mUnk_0C[param2] != NULL && temp_r0->func_02017930(this->mUnk_0C[param2])) {
            return true;
        }
    }

    return false;
}

UnkStruct_027e0960_TableEntry_04 *ActorFleeingSpinut_1EC::func_ov032_0211d384(VecFx32 *param1) {
    if (this->func_ov032_0211d920(param1)) {
        return NULL;
    }

    UnkStruct_027e0960_TableEntry_04 *spC[5];
    u32 sp8 = this->mUnk_04->vfunc_1C();
    bool sp4;
    UnkStruct_027e0960_TableEntry_04 *temp_r0_3;
    u32 var_r5;
    u32 var_r6;
    UnkStruct_027e0960_TableEntry_04 *var_r11;

    sp4     = false;
    var_r5  = 0;
    var_r11 = NULL;
    var_r6  = 0;

    for (; var_r6 < sp8; var_r6++) {
        temp_r0_3 = this->mUnk_04->vfunc_18(var_r6);

        if (!temp_r0_3->func_02017930(this->mUnk_04)) {
            if (this->func_ov032_0211d568(param1, temp_r0_3, this->mUnk_04) >= 1) {
                if (this->mUnk_08 == temp_r0_3) {
                    sp4 = true;
                } else if (var_r5 < ARRAY_LEN(spC)) {
                    spC[var_r5] = temp_r0_3;
                    var_r5++;
                } else if (gRandom.Next32(0) & 0x80000000) {
                    spC[gRandom.Next32(ARRAY_LEN(spC))] = temp_r0_3;
                }
            } else if ((var_r11 == NULL || gRandom.Next32(0) & 0x80000000) && this->mUnk_08 != temp_r0_3) {
                var_r11 = temp_r0_3;
            }
        }
    }

    return var_r5 != 0 ? spC[gRandom.Next32(var_r5)] : sp4 ? this->mUnk_08 : var_r11;
}

unk32 ActorFleeingSpinut_1EC::func_ov032_0211d568(VecFx32 *param1, UnkStruct_027e0960_TableEntry_04_Base *param2,
                                                  UnkStruct_027e0960_TableEntry_04_Base *param3) {
    if (this->func_ov032_0211d674(param1, param2) == 0) {
        return 0x0;
    }

    unk32 ret = 0;
    u32 val   = param2->vfunc_1C();
    if (val < 0x2) {
        return ret;
    }

    VecFx32 sp00;
    param2->vfunc_0C(&sp00);

    UnkStruct_027e0960_TableEntry_04_Base *temp;
    for (u32 i = 0; i < val; ++i) {
        temp = param2->vfunc_18(i);

        if (!temp->func_02017930(param2) && (param3 == NULL || !temp->func_02017930(param3)) &&
            this->func_ov032_0211d674(&sp00, temp)) {

            if (val != 0x2) {
                ret++;
            } else {
                ret += this->func_ov032_0211d568(&sp00, temp, param2);
            }
        }
    }

    return ret;
}

bool ActorFleeingSpinut_1EC::func_ov032_0211d674(VecFx32 *param1, UnkStruct_027e0960_TableEntry_04_Base *param2) {
    if (this->func_ov032_0211d6d8(param1, param2, 0x0) &&
        (!data_027e0ce0->func_01fff1a4() || this->func_ov032_0211d6d8(param1, param2, 0x1))) {
        return true;
    }
    return false;
}

bool ActorFleeingSpinut_1EC::func_ov032_0211d6d8(VecFx32 *param1, UnkStruct_027e0960_TableEntry_04_Base *param2,
                                                 unk32 param3) {
    VecFx32 sp18;
    VecFx32 spC;
    VecFx32 sp0;
    bool var_r4;
    bool var_r5;
    VecFx32 *temp_r4;
    void *temp_r1;

    temp_r4 = data_027e0ce0->func_01fff148(param3);
    param2->vfunc_0C(&sp18);
    func_01ffb714(&sp18, param1, &sp0);
    func_01ffb714(temp_r4, param1, &spC);
    var_r4 = false;

    if (VecFx32_Dot(&sp0, &spC) > 0) {
        var_r5 = 0;

        if (this->mUnk_0C[param3] != 0) {
            if (!param2->func_02017930(this->mUnk_0C[param3])) {
                if (this->mUnk_0C[param3]->func_02017930(this->func_ov032_0211cd20(param1)) != 0 &&
                    *(void *volatile *) &this->mUnk_14[param3] != NULL) {
                    if (param2->func_02017930(this->mUnk_14[param3])) {
                        //! TODO: try to remove this by using an inline
                        goto block_8;
                    }
                }
            } else {
            block_8:
                var_r5 = true;
            }
        }

        if (var_r5 != 0) {
            var_r4 = true;
        }
    }

    return !var_r4;
}

void ActorFleeingSpinut_1EC::func_ov032_0211d7e8(VecFx32 *param1) {
    this->func_ov032_0211d830(this->func_ov032_0211d384(param1));
    this->func_ov032_0211d80c();
}

void ActorFleeingSpinut_1EC::func_ov032_0211d80c() {
    this->mUnk_28 |= 0x2;
    if (this->mUnk_04 == NULL) {
        this->mUnk_28 |= 0x1;
    }
}

void ActorFleeingSpinut_1EC::func_ov032_0211d830(UnkStruct_027e0960_TableEntry_04 *param1) {
    this->mUnk_08 = this->mUnk_04;
    if (this->mUnk_04 != NULL) {
        this->mUnk_04->vfunc_0C(&this->mUnk_1C.vec);
    }
    this->mUnk_04 = param1;
}

bool ActorFleeingSpinut_1EC::func_ov032_0211d864(VecFx32 *param1) {
    if (this->mUnk_2C == 0x0) {
        return false;
    }

    if (!this->func_ov032_0211d568(param1, this->mUnk_04, NULL)) {

        if (this->func_ov032_0211d568(param1, this->mUnk_08, NULL) > 0x0) {
            return true;
        }
    }

    return this->func_ov032_0211da0c(0x0, param1) ||
           (data_027e0ce0->func_01fff1a4() && this->func_ov032_0211da0c(0x1, param1));
}

void ActorFleeingSpinut_1EC::func_ov032_0211d910() {
    UnkStruct_027e0960_TableEntry_04 *oldUnk04 = this->mUnk_04;
    this->mUnk_04                              = this->mUnk_08;
    this->mUnk_08                              = oldUnk04;
}

bool ActorFleeingSpinut_1EC::func_ov032_0211d920(VecFx32 *param1) {
    VecFx32 *temp_r0;
    UnkStruct_027e0ce0 *temp_r5;
    bool var_r6;
    bool var_r7;
    bool var_r8;

    temp_r5 = *(UnkStruct_027e0ce0 **) &data_027e0ce0;

    if (!temp_r5->func_01fff1a4()) {
        return false;
    }

    var_r6 = false;
    var_r7 = false;
    var_r8 = false;

    temp_r0 = temp_r5->func_01fff148(0x0);
    if (func_01ff9258(param1->x - temp_r0->x, param1->z - temp_r0->z) < 0x3000) {
        temp_r0 = temp_r5->func_01fff148(0x1);

        if (func_01ff9258(param1->x - temp_r0->x, param1->z - temp_r0->z) < 0x3000) {
            var_r8 = true;
        }
    }

    if (var_r8 && this->func_ov032_0211d568(param1, this->mUnk_04, NULL) == 0) {
        var_r7 = true;
    }

    if (var_r7 && this->func_ov032_0211d568(param1, this->mUnk_08, NULL) == 0) {
        var_r6 = true;
    }

    return var_r6;
}

bool ActorFleeingSpinut_1EC::func_ov032_0211da0c(unk32 param1, VecFx32 *param2) {
    VecFx32 sp18;
    VecFx32 spC;
    VecFx32 sp0;
    bool var_r4;
    bool var_r5;
    bool var_r6;
    bool var_r6_2;
    bool var_r6_3;

    VecFx32 *temp_r4 = data_027e0ce0->func_01fff148(param1);
    this->mUnk_04->vfunc_0C(&sp18);

    func_01ffb714(&sp18, param2, &sp0);
    func_01ffb714(temp_r4, param2, &spC);

    var_r5 = false;
    var_r6 = false;

    if (!(VecFx32_Dot(&sp0, &spC) <= 0 || (func_01ff9258(temp_r4->x - param2->x, temp_r4->z - param2->z) >= 0x2800))) {
        var_r6 = true;
    }

    if (var_r6) {
        var_r4   = true;
        var_r6_2 = this->mUnk_0C[param1] != NULL && this->mUnk_0C[param1]->func_02017930(this->mUnk_04);

        if (!var_r6_2) {
            var_r6_3 = this->mUnk_14[param1] != NULL && this->mUnk_14[param1]->func_02017930(this->mUnk_04);

            if (!var_r6_3) {
                var_r4 = false;
            }
        }

        if (var_r4) {
            var_r5 = true;
        }
    }

    return var_r5;
}
