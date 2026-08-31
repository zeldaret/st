#define VECFX32_CTORS

#include "Actor/ActorFleeingSpinut.hpp"

#include "Actor/ActorUnkKEYN.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_027e0998.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"

extern "C" unk32 data_ov000_020aecf8;

extern "C" bool func_01ff916c(void *, int, int);
extern "C" void func_01ff9318(void *, unk32, unk32);
extern "C" fx32 func_01ffb428(unk32, unk32);
extern "C" fx32 func_01ffb464(fx32);

extern "C" bool func_ov000_0205adfc(VecFx32 *, VecFx32 *);
extern "C" void func_ov000_020986b4(s16 *param1, Actor_Derived2 *param2, unk32 param3);

struct UnkStruct_ov032_02122908 {
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
};

UnkStruct_ov032_02122908 *data_ov032_02122908;
UnkStruct_ov019_020d24c8_28_258_00_Derived1 data_ov032_0212290c;
UnkStruct_ov019_020d24c8_28_258_00_Derived1 data_ov032_02122924; // @11142 Eur
static const VecFx32 data_ov032_021223a8(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f));

static ActorUnkZLSL_AnimationTag data_ov032_021223b4 = {.index = 0, .name = "walk", .unknown = 0x0};
static ActorUnkZLSL_AnimationTag data_ov032_021223cc = {.index = 1, .name = "discover", .unknown = 0x1};

static PTMF<ActorFleeingSpinut> data_ov032_021223e4[ActorFleeingSpinutState_Max] = {
    ActorFleeingSpinut::func_ov032_0211c2c4, // ActorFleeingSpinutState_0
    ActorFleeingSpinut::func_ov032_0211c444, // ActorFleeingSpinutState_1
    ActorFleeingSpinut::func_ov032_0211be30, // ActorFleeingSpinutState_2
    ActorFleeingSpinut::func_ov032_0211bf84, // ActorFleeingSpinutState_3
    ActorFleeingSpinut::func_ov032_0211c53c, // ActorFleeingSpinutState_4
    ActorFleeingSpinut::func_ov032_0211c73c, // ActorFleeingSpinutState_5
    ActorFleeingSpinut::func_ov032_0211c07c  // ActorFleeingSpinutState_6
};
static PTMF<ActorFleeingSpinut> data_ov032_0212241c[ActorFleeingSpinutState_Max] = {
    ActorFleeingSpinut::func_ov032_0211c340, // ActorFleeingSpinutState_0
    ActorFleeingSpinut::func_ov032_0211c4d4, // ActorFleeingSpinutState_1
    ActorFleeingSpinut::func_ov032_0211bea8, // ActorFleeingSpinutState_2
    ActorFleeingSpinut::func_ov032_0211bffc, // ActorFleeingSpinutState_3
    ActorFleeingSpinut::func_ov032_0211c5cc, // ActorFleeingSpinutState_4
    ActorFleeingSpinut::func_ov032_0211c7bc, // ActorFleeingSpinutState_5
    ActorFleeingSpinut::func_ov032_0211c108  // ActorFleeingSpinutState_6
};

DECL_PROFILE(ActorProfileFleeingSpinut);

Actor *ActorProfileFleeingSpinut::Create() {
    return new(HeapIndex_2) ActorFleeingSpinut();
}

ActorProfileFleeingSpinut::ActorProfileFleeingSpinut() :
    ActorProfile_ov000_020b3018(ActorId_FleeingSpinut, ActorId_Spinut) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.4f));
}

ActorFleeingSpinut::ActorFleeingSpinut() :
    mUnk_0B0(G3d_GetModelPtr(GET_PROFILE(ActorProfileFleeingSpinut)->vfunc_04()->mUnk_50)),
    mUnk_110(&this->mUnk_0B0, GET_PROFILE(ActorProfileFleeingSpinut)->vfunc_04()),
    mPrevState(ActorState_None),
    mUnk_1BE(0x0) {
    *(s16 *) &this->mUnk_44 |= 0x40;
    SET_FLAG(this->mFlags, ActorFlag_6);

    this->mUnk_1E0.mUnk_00.mUnk_08 = 0x1;
    this->mUnk_38                  = &this->mUnk_1E0.mUnk_00;
    this->mUnk_224                 = true;

    this->mUnk_21C = 0x0;
    this->mUnk_220 = 0x0;
    this->mUnk_1C0.mUnk_04 |= 0x8000;

    data_ov032_02122924.func_ov000_0205fc20(0x5D, 0x22, NULL, NULL);
    data_ov032_0212290c.func_ov000_0205fc20(0x5D, 0x7, NULL, NULL);

    this->Actor::func_ov000_0209862c(0x4);

    SET_FLAG(this->mFlags, ActorFlag_9);
    this->mUnk_A4 = &data_ov032_021223a8;

    if (this->func_ov032_0211be04()) {
        UNSET_FLAG(this->mFlags, ActorFlag_16);
    }
}

ActorFleeingSpinut::~ActorFleeingSpinut() {}

bool ActorFleeingSpinut::vfunc_18(unk32 param1) {
    this->mUnk_1EC.mUnk_00 = this->mUnk_5C.mParams[1];

    this->SetState(0x0);

    return true;
}

// non-matching (assignation order)
void ActorFleeingSpinut::SetState(ActorState state) {
    ActorState oldState = this->mState;
    this->mState        = state;

    this->mPrevState = oldState;
    this->mUnk_1BE   = 0x0;
    this->mUnk_2C    = data_ov000_020aecf8;
    this->mUnk_224   = true;

    CALL_PTMF(PTMF<ActorFleeingSpinut>, data_ov032_021223e4[oldState]);
}

void ActorFleeingSpinut::vfunc_20() {
    this->mUnk_3C = &this->mUnk_1C0;
    if (!this->func_ov032_0211c938()) {
        this->mUnk_1EC.func_ov032_0211d028();
    } else {
        this->mUnk_1EC.func_ov032_0211cf74();
    }

    CALL_PTMF(PTMF<ActorFleeingSpinut>, data_ov032_0212241c[this->mState]);

    this->Actor::func_ov000_02098838();
    this->func_ov032_0211cb2c();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->Actor::func_ov000_02098b8c(0x0, NULL);

    if (this->mUnk_46 & 0x1) {
        this->mVel.y = FLOAT_TO_FX32(0.0f);
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

// non-matching (@1142)
void ActorFleeingSpinut::vfunc_30(Actor_vfunc_30 *param1) {
    if (!this->func_ov032_0211be04()) {
        return;
    }

    bool var = true;
    this->Actor::func_ov017_020bef88(param1, &data_ov032_02122924, 0x1);

    if (this->mState != ActorFleeingSpinutState_6) {
        return;
    }

    if (!(data_ov032_02122908->mUnk_08 & 0x1)) {
        var = false;
    }

    if (param1->mUnk_00 != var && param1->mUnk_01 != var) {
        return;
    }

    VecFx32 sp08 = this->mPos;

    sp08.x += FLOAT_TO_FX32(2.5f);
    sp08.z -= FLOAT_TO_FX32(2.5f);

    Vec2s sp04;

    if (!data_027e0998->vfunc_00(&sp08, &sp04, (u16 *) &this->mRef)) {
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

    this->mUnk_0B0.func_01ffc634(&this->mUnk_98, this->mAngleStruct, &vec);
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
            ActorRef ref;
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

    this->mUnk_52 = 0xF;
    this->mUnk_50 = 0x0;

    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);
}

void ActorFleeingSpinut::func_ov032_0211bffc() {
    if (this->func_ov032_0211ca20()) {
        if (this->mUnk_50 >= this->mUnk_52) {
            this->SetState(ActorFleeingSpinutState_1);
        } else {
            this->SetState(ActorFleeingSpinutState_4);
        }
    } else {
        if (!this->func_ov032_0211c938() || this->func_ov032_0211c9d8()) {
            this->SetState(ActorFleeingSpinutState_0);
        }
    }

    this->IsTimerOut();
}

void ActorFleeingSpinut::func_ov032_0211c07c() {
    this->mUnk_110.vfunc_1C(data_ov032_021223cc, 0x1000, 0x19A, 0x0);

    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);

    data_027e09a8->func_ov000_02071b30(0x9837, &this->mPos, 0x0);
}

// non-matching (func_01ffb428 & sp8)
void ActorFleeingSpinut::func_ov032_0211c108() {
    UnkStruct_PlayerGet_50 *pGet50 = this->mUnk_110.vfunc_28();
    unk32 pGet50Unk8               = pGet50->mUnk_08;
    unk32 pGet50Unk10              = pGet50->mUnk_10;

    bool var;
    if (this->mUnk_1BE % 2 == 0 || !data_027e0ce0->func_01fff1a4()) {
        var = false;
    } else {
        var = true;
    }

    unk32 temp_r5_2 = func_01ffb428(pGet50Unk10 - pGet50Unk8, 0x1000) >> 0xC;
    unk16 sp8;
    func_ov000_020986b4(&sp8, this, var);

    if (temp_r5_2 > 0) {
        func_01ff9318(&this->mAngle, sp8, func_01ffb464(temp_r5_2 << 0xC));
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

    ++this->mUnk_1BE;

    this->mUnk_110.vfunc_28()->mUnk_02 = 0x0;
    this->mUnk_110.vfunc_28()->mUnk_08 = 0x0;

    data_027e09a8->func_ov000_02071b30(0x9837, &this->mPos, 0x0);
}

void ActorFleeingSpinut::func_ov032_0211c2c4() {
    this->mUnk_1EC.mUnk_2C = 0x0;
    this->mUnk_1EC.func_ov032_0211cc48(&this->mPos);

    this->mUnk_110.vfunc_1C(data_ov032_021223b4, 0x1000, 0x19A, 0x0);

    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);
}

void ActorFleeingSpinut::func_ov032_0211c340() {
    this->mUnk_1EC.func_ov032_0211cd60(&this->mPos, &this->mAngle, &this->mVel, 0xF6, 0xE39, 0xF6);

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

    this->mVel.x   = FLOAT_TO_FX32(0.0f);
    this->mVel.z   = FLOAT_TO_FX32(0.0f);
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

    this->mUnk_52 = 0xA;
    this->mUnk_50 = 0x0;

    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);
}

void ActorFleeingSpinut::func_ov032_0211c5cc() {
    if (this->IsTimerOut()) {
        this->mUnk_224 = true;
    }

    this->mUnk_1EC.func_ov032_0211cd60(&this->mPos, &this->mAngle, &this->mVel, 0x429, 0x429 + 0xA10, 0x429);

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

    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);
}

void ActorFleeingSpinut::func_ov032_0211c7bc() {
    this->mUnk_1EC.func_ov032_0211cd60(&this->mPos, &this->mAngle, &this->mVel, 0xF6, 0xE39, 0xF6);

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

// non-matching (ldr of mUnk_0C)
bool ActorFleeingSpinut::func_ov032_0211c938() {
    if (this->mUnk_5C.mParams[0] == 0x0) {
        return true;
    }

    UnkStruct_027e0cd8 *data_2 = data_027e0cd8;
    UnkStruct_027e0ce0 *data_1 = data_027e0ce0;

    UnkStruct_027e0cd8_0C_Base *data_2_0C = data_2->mUnk_0C;
    bool ret = data_2_0C->func_ov000_020802ec(this->mUnk_5C.mParams[0], data_1->func_01fff148(0x0));

    if (data_027e0ce0->func_01fff1a4()) {
        bool var  = true;
        data_2_0C = data_2->mUnk_0C;
        if (ret || !data_2_0C->func_ov000_020802ec(this->mUnk_5C.mParams[0], data_1->func_01fff148(0x1))) {
            var = false;
        }
        ret = var;
    }
    return ret;
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

// non-matching (MUL_FX32 etc.)
void ActorFleeingSpinut::func_ov032_0211cb2c() {
    if (this->mUnk_110.vfunc_30() != 0x1) {
        if (this->mUnk_21C <= FLOAT_TO_FX32(0.0f)) {
            this->mUnk_220 = 0x0;
            return;
        }

        this->mUnk_220 -= this->mUnk_2C;
        func_01ff916c(&this->mUnk_21C, 0x0, this->mUnk_220);
        return;
    }

    fx32 value = this->mUnk_110.vfunc_28()->mUnk_08;
    if (FLOAT_TO_FX32(1.0f) < value && value < FLOAT_TO_FX32(16.0f)) {
        value -= FLOAT_TO_FX32(1.0f);
        this->mUnk_21C = MUL_FX32(value + ROUND_FX32(-MUL_FX32(value, value) * 0x92492493), 0x3B4);
        return;
    }

    this->mUnk_21C = FLOAT_TO_FX32(0.0f);
}

ActorFleeingSpinut_1EC::ActorFleeingSpinut_1EC() :
    mUnk_00(0x0),
    mUnk_04(NULL),
    mUnk_08(NULL),
    mUnk_1C(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f)),
    mUnk_2C(0x0) {
    this->mUnk_0C = 0x0;
    this->mUnk_10 = 0x0;
    this->mUnk_14 = 0x0;
    this->mUnk_18 = 0x0;
    this->mUnk_28 = 0x0;
}

// non-matching
void ActorFleeingSpinut_1EC::func_ov032_0211cc48(VecFx32 *param1) {
    this->mUnk_04 = this->func_ov032_0211cd20(param1);
}

// non-matching
UnkStruct_027e0960_TableEntry_04 *ActorFleeingSpinut_1EC::func_ov032_0211cd20(VecFx32 *param1) {
    UnkStruct_027e0960_TableEntry *tEntry = data_027e0960->func_ov000_0205a3fc(*param1, this->mUnk_00);
    tEntry->func_ov000_02059da4(param1);
    return tEntry->mTable.GetPtr(0x1);
}

extern "C" void func_01ffb714(VecFx32 *, VecFx32 *, void *);
extern "C" fx16 func_01ffbbe0(fx32, fx32);
extern "C" unk32 func_01ff930c(s16 *, s16, unk32, s16);
extern "C" unk32 func_01ff9258(fx32, fx32);
extern "C" fx32 func_02017f54(s16 *, UnkAngleStruct);

// non-matching
u16 *ActorFleeingSpinut_1EC::func_ov032_0211cd60(VecFx32 *param1, s16 *param2, VecFx32 *param3, unk32 param4, unk32 param5,
                                                 unk32 param6) {
    if (param6 == 0x0 || this->mUnk_04 == NULL) {
        param3->z = FLOAT_TO_FX32(0.0f);
        param3->x = FLOAT_TO_FX32(0.0f);
        return &this->mUnk_28;
    }

    this->mUnk_28 = 0x0;

    if (this->func_ov032_0211d920(param1)) {
        param3->z = FLOAT_TO_FX32(0.0f);
        param3->x = FLOAT_TO_FX32(0.0f);
        this->mUnk_28 |= 0x1;
        return &this->mUnk_28;
    }

    if (this->func_ov032_0211d864(param1)) {
        this->func_ov032_0211d910();
    }

    VecFx32 sp1C;
    this->mUnk_04->vfunc_0C(&sp1C);

    VecFx32 sp10;
    func_01ffb714(&sp10, &sp10, &sp1C);

    VecFx32 sp04;
    func_01ffb714(&sp10, &this->mUnk_1C, &sp04);

    fx16 sp00 = (fx32) func_01ffbbe0(sp10.x, sp10.z);

    func_01ff930c(param2, sp00, param5, sp00);

    func_01ff9258(sp1C.x - param1->x, sp1C.z - param1->z);

    UnkAngleStruct spm04 = {.angle = (u16) sp00};
    func_02017f54(param2, spm04);
}

void ActorFleeingSpinut_1EC::func_ov032_0211cf74() {
    this->func_ov032_0211cfac(0x0);

    if (!data_027e0ce0->func_01fff1a4()) {
        return;
    }

    this->func_ov032_0211cfac(0x1);
}

extern "C" bool func_02017930(UnkStruct_027e0960_TableEntry_04_Base *, UnkStruct_027e0960_TableEntry_04_Base *);

// non-matching
void ActorFleeingSpinut_1EC::func_ov032_0211cfac(unk32 param1) {
    VecFx32 sp00;
    UnkStruct_027e0960_TableEntry_04 *entry04 = this->func_ov032_0211cd20(data_027e0ce0->func_01fff148(param1));
    entry04->vfunc_0C(&sp00);

    if (entry04->mUnk_0C != NULL && func_02017930(entry04->mUnk_0C, entry04)) {
        return;
    }

    entry04->mUnk_14 = entry04->mUnk_0C;
    entry04->mUnk_0C = NULL;
}

void ActorFleeingSpinut_1EC::func_ov032_0211d028() {
    this->mUnk_14 = 0x0;
    this->mUnk_18 = 0x0;
    this->mUnk_0C = 0x0;
    this->mUnk_10 = 0x0;
}

bool ActorFleeingSpinut_1EC::func_ov032_0211d040(VecFx32 *param1) {
    return (this->func_ov032_0211d568(param1, this->mUnk_04, NULL) > 0) ||
           (this->func_ov032_0211d568(param1, this->mUnk_08, NULL) > 0);
}

// non-matching
void ActorFleeingSpinut_1EC::func_ov032_0211d08c(VecFx32 *param1) {
    if (this->func_ov032_0211d568(param1, this->mUnk_08, this->mUnk_04) > 0x0) {
        VecFx32 *vec = data_027e0ce0->func_01fff148(0x0);
        if ((func_01ff9258(vec->x - param1->x, vec->z - param1->z) > 0x3CCD)) {
            return;
        }
    }
}

// non-matching
bool ActorFleeingSpinut_1EC::func_ov032_0211d2e4(UnkStruct_027e0960_TableEntry_04_Base *param1) {
    if (param1 == NULL) {
    }
}

// non-matching
UnkStruct_027e0960_TableEntry_04 *ActorFleeingSpinut_1EC::func_ov032_0211d384(VecFx32 *param1) {
    VecFx32 *sp00 = param1;
    if (this->func_ov032_0211d920(param1)) {
        return NULL;
    }

    u32 sp08 = this->mUnk_04->vfunc_1C();
    u32 sp04 = 0x0;

    // loop
}

// non-matching (regalloc)
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

    for (u32 i = 0; i < val; ++i) {
        UnkStruct_027e0960_TableEntry_04_Base *temp = param2->vfunc_18(i);
        if (!func_02017930(temp, param2) && (param3 == NULL || !func_02017930(temp, param3)) &&
            this->func_ov032_0211d674(&sp00, temp)) {
            if (val != 0x2) {
                ++ret;
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

// non-matching
bool ActorFleeingSpinut_1EC::func_ov032_0211d6d8(VecFx32 *param1, UnkStruct_027e0960_TableEntry_04_Base *param2,
                                                 unk32 param3) {}

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
        this->mUnk_04->vfunc_0C(&this->mUnk_1C);
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

// non-matching (regalloc :sob:)
bool ActorFleeingSpinut_1EC::func_ov032_0211d920(VecFx32 *param1) {
    UnkStruct_027e0ce0 *data = data_027e0ce0;
    if (!data->func_01fff1a4()) {
        return false;
    }

    bool ret    = false;
    bool var_r7 = false;
    bool var_r8 = false;

    VecFx32 *vec = data->func_01fff148(0x0);
    if (func_01ff9258(param1->x - vec->x, param1->z - vec->z) < 0x3000) {
        vec = data->func_01fff148(0x1);

        if (func_01ff9258(param1->x - vec->x, param1->z - vec->z) < 0x3000) {
            var_r8 = true;
        }
    }

    if (var_r8 && this->func_ov032_0211d568(param1, this->mUnk_04, NULL) == 0) {
        var_r7 = true;
    }

    if (var_r7 && this->func_ov032_0211d568(param1, this->mUnk_08, NULL) == 0) {
        ret = true;
    }

    return ret;
}

// non-matching
bool ActorFleeingSpinut_1EC::func_ov032_0211da0c(unk32 param1, VecFx32 *param2) {}
