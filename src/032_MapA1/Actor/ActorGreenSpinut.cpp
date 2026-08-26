#define VECFX32_CTORS

#include "Actor/ActorGreenSpinut.hpp"

#include "Actor/ActorUnkKEYN.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"

extern "C" unk32 data_ov000_020aecf8;

// maybe relocate in ModelRender
extern "C" void func_01ffc634(ModelRender *, VecFx32 *, UnkAngleStruct, VecFx32 *);

extern "C" bool func_ov000_0205adfc(VecFx32 *, VecFx32 *);

UnkStruct_ov019_020d24c8_28_258_00_Derived1 data_ov032_0212290c;
static const VecFx32 data_ov032_021223a8(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f));

static ActorUnkZLSL_AnimationTag data_ov032_021223b4 = {.index = 0, .name = "walk", .unknown = 0x0};
static ActorUnkZLSL_AnimationTag data_ov032_021223cc = {.index = 1, .name = "discover", .unknown = 0x1};

static PTMF<ActorGreenSpinut> data_ov032_021223e4[ActorGreenSpinutState_Max] = {
    ActorGreenSpinut::func_ov032_0211c2c4, // ActorGreenSpinutState_0
    ActorGreenSpinut::func_ov032_0211c444, // ActorGreenSpinutState_1
    ActorGreenSpinut::func_ov032_0211be30, // ActorGreenSpinutState_2
    ActorGreenSpinut::func_ov032_0211bf84, // ActorGreenSpinutState_3
    ActorGreenSpinut::func_ov032_0211c53c, // ActorGreenSpinutState_4
    ActorGreenSpinut::func_ov032_0211c73c, // ActorGreenSpinutState_5
    ActorGreenSpinut::func_ov032_0211c07c  // ActorGreenSpinutState_6
};
static PTMF<ActorGreenSpinut> data_ov032_0212241c[ActorGreenSpinutState_Max] = {
    ActorGreenSpinut::func_ov032_0211c340, // ActorGreenSpinutState_0
    ActorGreenSpinut::func_ov032_0211c4d4, // ActorGreenSpinutState_1
    ActorGreenSpinut::func_ov032_0211bea8, // ActorGreenSpinutState_2
    ActorGreenSpinut::func_ov032_0211bffc, // ActorGreenSpinutState_3
    ActorGreenSpinut::func_ov032_0211c5cc, // ActorGreenSpinutState_4
    ActorGreenSpinut::func_ov032_0211c7bc, // ActorGreenSpinutState_5
    ActorGreenSpinut::func_ov032_0211c108  // ActorGreenSpinutState_6
};

DECL_PROFILE(ActorProfileGreenSpinut);

Actor *ActorProfileGreenSpinut::Create() {
    return new(HeapIndex_2) ActorGreenSpinut();
}

ActorProfileGreenSpinut::ActorProfileGreenSpinut() :
    ActorProfile_ov000_020b3018(ActorId_GreenSpinut, ActorId_Spinut) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.4f));
}

ActorGreenSpinut::ActorGreenSpinut() :
    mUnk_0B0(G3d_GetModelPtr(GET_PROFILE(ActorProfileGreenSpinut)->vfunc_04()->mUnk_50)),
    mUnk_110(&this->mUnk_0B0, GET_PROFILE(ActorProfileGreenSpinut)->vfunc_04()),
    previousState(ActorState_None),
    mUnk_1BE(0x0) {
    *(s16 *) &this->mUnk_44 |= 0x40;
    SET_FLAG(this->mFlags, ActorFlag_6);

    this->mUnk_1E0.mUnk_00.mUnk_08 = 0x1;
    this->mUnk_38                  = &this->mUnk_1E0.mUnk_00;
    this->mUnk_224                 = true;

    this->mUnk_21C = 0x0;
    this->mUnk_220 = 0x0;
    this->mUnk_1C0.mUnk_04 |= 0x8000;

    // TBD
    ((UnkStruct_ov019_020d24c8_28_258_00 *) &data_ov032_0212290c)->func_ov000_0205fc20(0x5D, 0x22, NULL, NULL);
    data_ov032_0212290c.func_ov000_0205fc20(0x5D, 0x7, NULL, NULL);

    this->Actor::func_ov000_0209862c(0x4);

    SET_FLAG(this->mFlags, ActorFlag_9);
    this->mUnk_A4 = &data_ov032_021223a8;

    if (this->func_ov032_0211be04()) {
        UNSET_FLAG(this->mFlags, ActorFlag_16);
    }
}

ActorGreenSpinut::~ActorGreenSpinut() {}

bool ActorGreenSpinut::vfunc_18(unk32 param1) {
    this->mUnk_1EC.mUnk_00 = this->mUnk_5C.mParams[1];

    this->SetState(0x0);

    return true;
}

void ActorGreenSpinut::SetState(ActorState state) {
    ActorState oldState = this->mState;
    this->mState        = state;

    this->previousState = oldState;
    this->mUnk_1BE      = 0x0;
    this->mUnk_2C       = data_ov000_020aecf8;
    this->mUnk_224      = true;

    CALL_PTMF(PTMF<ActorGreenSpinut>, data_ov032_021223e4[oldState]);
}

// non-matching
void ActorGreenSpinut::vfunc_20() {
    this->mUnk_3C = &this->mUnk_1C0;
    if (!this->func_ov032_0211c938()) {
        this->mUnk_1EC.func_ov032_0211d028();
    } else {
        this->mUnk_1EC.func_ov032_0211cf74();
    }

    CALL_PTMF(PTMF<ActorGreenSpinut>, data_ov032_0212241c[this->mState]);

    this->Actor::func_ov000_02098838();
    this->func_ov032_0211cb2c();
}

// non-matching
void ActorGreenSpinut::vfunc_30(Actor_vfunc_30 *param1) {
    if (!this->func_ov032_0211be04()) {
        return;
    }
    this->Actor::func_ov017_020bef88(param1, (void *) 0x11142, 0x1);
}

// non-matching
void ActorGreenSpinut::vfunc_2C(unk32 param1) {
    if (!this->Actor::func_01fff5d0(param1, 0x0)) {
        return;
    }

    this->Actor::func_ov017_020bf5c4(&this->mPos, 0x548, 0x548, 0x1F, 0x0);

    VecFx32 vec = this->mPos;

    vec.y += this->mUnk_21C;

    func_01ffc634(&this->mUnk_0B0, &this->mUnk_98, this->mAngleStruct, &vec);
}

bool ActorGreenSpinut::func_ov032_0211be04() {
    return this->mUnk_5C.mParams[2] == 0x1 && !this->Actor::func_ov000_02098a60(0x0);
}

void ActorGreenSpinut::func_ov032_0211be30() {
    this->mUnk_110.vfunc_1C(data_ov032_021223b4, 0x1000, 0x19A, 0x0);

    this->mUnk_1C0.func_ov000_02097bec();
    this->mUnk_38->mUnk_08 = 0x3;
}

void ActorGreenSpinut::func_ov032_0211bea8() {
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

    this->SetState(this->previousState);
}

void ActorGreenSpinut::func_ov032_0211bf84() {
    this->mUnk_110.vfunc_1C(data_ov032_021223b4, 0x1000, 0x19A, 0x0);

    this->mUnk_52 = 0xF;
    this->mUnk_50 = 0x0;

    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);
}

void ActorGreenSpinut::func_ov032_0211bffc() {
    if (this->func_ov032_0211ca20()) {
        if (this->mUnk_50 >= this->mUnk_52) {
            this->SetState(ActorGreenSpinutState_1);
        } else {
            this->SetState(ActorGreenSpinutState_4);
        }
    } else {
        if (!this->func_ov032_0211c938() || this->func_ov032_0211c9d8()) {
            this->SetState(ActorGreenSpinutState_0);
        }
    }

    this->IsTimerOut();
}

void ActorGreenSpinut::func_ov032_0211c07c() {
    this->mUnk_110.vfunc_1C(data_ov032_021223cc, 0x1000, 0x19A, 0x0);

    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);

    data_027e09a8->func_ov000_02071b30(0x9837, &this->mPos, 0x0);
}

// non-matching
void ActorGreenSpinut::func_ov032_0211c108() {}

void ActorGreenSpinut::func_ov032_0211c2c4() {
    this->mUnk_1EC.mUnk_2C = 0x0;
    this->mUnk_1EC.func_ov032_0211cc48(&this->mPos);

    this->mUnk_110.vfunc_1C(data_ov032_021223b4, 0x1000, 0x19A, 0x0);

    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);
}

void ActorGreenSpinut::func_ov032_0211c340() {
    this->mUnk_1EC.func_ov032_0211cd60(&this->mPos, &this->mAngle, &this->mVel, 0xF6, 0xE39, 0xF6);

    if (this->func_ov032_0211c938() && this->func_ov032_0211ca20()) {
        this->SetState(ActorGreenSpinutState_1);
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

void ActorGreenSpinut::func_ov032_0211c444() {
    this->mUnk_110.vfunc_1C(data_ov032_021223cc, 0x2000, 0x19A, 0x0);

    data_027e09a8->func_ov000_02071b30(0x9837, &this->mPos, 0x0);

    this->mVel.x   = FLOAT_TO_FX32(0.0f);
    this->mVel.z   = FLOAT_TO_FX32(0.0f);
    this->mUnk_224 = false;
}

void ActorGreenSpinut::func_ov032_0211c4d4() {
    if (!this->mUnk_110.vfunc_28()->func_01ff8fa8()) {
        return;
    }

    data_027e0cec->func_ov000_0209feac(0x880, &this->mPos, 0x2, 0x0, 0x0);

    this->SetState(ActorGreenSpinutState_4);
}

void ActorGreenSpinut::func_ov032_0211c53c() {
    this->mUnk_1EC.mUnk_2C = 0x1;

    this->mUnk_110.vfunc_1C(data_ov032_021223b4, 0x3000, 0x19A, 0x0);

    this->mUnk_224 = false;
    this->mUnk_1EC.func_ov032_0211d08c(&this->mPos);

    this->mUnk_52 = 0xA;
    this->mUnk_50 = 0x0;

    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);
}

// non-matching
void ActorGreenSpinut::func_ov032_0211c5cc() {}

void ActorGreenSpinut::func_ov032_0211c73c() {
    this->mUnk_1EC.func_ov032_0211cc48(&this->mPos);

    this->mUnk_1EC.mUnk_2C = 0x1;

    this->mUnk_110.vfunc_1C(data_ov032_021223b4, 0x1000, 0x19A, 0x0);

    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);
}

// non-matching
void ActorGreenSpinut::func_ov032_0211c7bc() {}

// non-matching
bool ActorGreenSpinut::func_ov032_0211c938() {
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

bool ActorGreenSpinut::func_ov032_0211c9d8() {
    return !this->func_ov032_0211cab8(0x0, 0x5000) && !this->func_ov032_0211cab8(0x1, 0x5000);
}

bool ActorGreenSpinut::func_ov032_0211ca20() {
    return this->func_ov032_0211cab8(0x0, 0x3CCD) || this->func_ov032_0211cab8(0x1, 0x3CCD);
}

bool ActorGreenSpinut::func_ov032_0211ca6c() {
    return !this->func_ov032_0211cab8(0x0, 0x3CCD) && !this->func_ov032_0211cab8(0x1, 0x3CCD);
}

bool ActorGreenSpinut::func_ov032_0211cab8(unk32 param1, unk32 param2) {
    if (param1 == 0x1 && !data_027e0ce0->func_01fff1a4()) {
        return false;
    }

    if (func_ov000_0205adfc(data_027e0ce0->func_01fff148(param1), &this->mPos) &&
        this->Actor::func_ov000_0209867c(param1) < param2) {
        return true;
    }

    return false;
}

// non-matching
void ActorGreenSpinut::func_ov032_0211cb2c() {}

ActorGreenSpinut_1EC::ActorGreenSpinut_1EC() :
    mUnk_00(0x0),
    mUnk_04(NULL),
    mUnk_08(NULL),
    mUnk_1C(0x0),
    mUnk_20(0x0),
    mUnk_24(0x0),
    mUnk_2C(0x0) {
    this->mUnk_0C = 0x0;
    this->mUnk_10 = 0x0;
    this->mUnk_14 = 0x0;
    this->mUnk_18 = 0x0;
    this->mUnk_28 = 0x0;
}

// non-matching
void ActorGreenSpinut_1EC::func_ov032_0211cc48(VecFx32 *param1) {}

// non-matching
UnkStruct_027e0960_TableEntry_04 *ActorGreenSpinut_1EC::func_ov032_0211cd20(VecFx32 *param1) {
    UnkStruct_027e0960_TableEntry *tEntry = data_027e0960->func_ov000_0205a3fc(*param1, this->mUnk_00);
    tEntry->func_ov000_02059da4(param1);
    return tEntry->mTable.GetPtr(0x1);
}

// non-matching
void ActorGreenSpinut_1EC::func_ov032_0211cd60(VecFx32 *param1, s16 *param2, VecFx32 *param3, unk32 param4, unk32 param5,
                                               unk32 param6) {}

void ActorGreenSpinut_1EC::func_ov032_0211cf74() {
    this->func_ov032_0211cfac(0x0);

    if (!data_027e0ce0->func_01fff1a4()) {
        return;
    }

    this->func_ov032_0211cfac(0x1);
}

extern "C" bool func_02017930(unk32, UnkStruct_027e0960_TableEntry_04 *);

// non-matching
void ActorGreenSpinut_1EC::func_ov032_0211cfac(unk32 param1) {
    VecFx32 sp00;
    UnkStruct_027e0960_TableEntry_04 *entry04 = this->func_ov032_0211cd20(data_027e0ce0->func_01fff148(param1));
    entry04->vfunc_0C(&sp00);

    if (entry04->mUnk_0C != 0x0 && func_02017930(entry04->mUnk_0C, entry04)) {
        return;
    }
    entry04->mUnk_0C = 0x0;
}

void ActorGreenSpinut_1EC::func_ov032_0211d028() {
    this->mUnk_14 = 0x0;
    this->mUnk_18 = 0x0;
    this->mUnk_0C = 0x0;
    this->mUnk_10 = 0x0;
}

bool ActorGreenSpinut_1EC::func_ov032_0211d040(unk32 param1) {
    return (this->func_ov032_0211d568(param1, this->mUnk_04, 0x0) > 0) ||
           (this->func_ov032_0211d568(param1, this->mUnk_08, 0x0) > 0);
}
// non-matching
void ActorGreenSpinut_1EC::func_ov032_0211d08c(VecFx32 *param1) {}
// non-matching
void ActorGreenSpinut_1EC::func_ov032_0211d2e4() {}
// non-matching
void ActorGreenSpinut_1EC::func_ov032_0211d384() {}
// non-matching
unk32 ActorGreenSpinut_1EC::func_ov032_0211d568(unk32 param1, UnkStruct_ov032_0211d830 *param2, unk32 param3) {}
// non-matching
void ActorGreenSpinut_1EC::func_ov032_0211d674() {}
// non-matching
void ActorGreenSpinut_1EC::func_ov032_0211d6d8() {}
// non-matching
void ActorGreenSpinut_1EC::func_ov032_0211d7e8() {}
// non-matching
void ActorGreenSpinut_1EC::func_ov032_0211d80c() {}

void ActorGreenSpinut_1EC::func_ov032_0211d830(UnkStruct_ov032_0211d830 *param1) {
    this->mUnk_08 = this->mUnk_04;
    if (this->mUnk_04 != NULL) {
        this->mUnk_04->vfunc_0C(&this->mUnk_1C);
    }
    this->mUnk_04 = param1;
}

// non-matching
void ActorGreenSpinut_1EC::func_ov032_0211d864() {}

void ActorGreenSpinut_1EC::func_ov032_0211d910() {
    UnkStruct_ov032_0211d830 *oldUnk04 = this->mUnk_04;
    this->mUnk_04                      = this->mUnk_08;
    this->mUnk_08                      = oldUnk04;
}

// non-matching
void ActorGreenSpinut_1EC::func_ov032_0211d920() {}
// non-matching
void ActorGreenSpinut_1EC::func_ov032_0211da0c() {}
