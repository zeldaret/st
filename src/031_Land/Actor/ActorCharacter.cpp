#include "Actor/ActorCharacter.hpp"

#include "Actor/ActorUnkZLSL_ZSRS.hpp"
#include "CommonFuncs.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"

static PTMF<ActorCharacter> data_ov031_02113260[ActorCharacterState_Max] = {
    &ActorCharacter::vfunc_0E0, // ActorCharacterState_0
    &ActorCharacter::vfunc_0E4, // ActorCharacterState_1
    &ActorCharacter::vfunc_0E8, // ActorCharacterState_2
    &ActorCharacter::vfunc_0EC, // ActorCharacterState_3
    &ActorCharacter::vfunc_0F0, // ActorCharacterState_4
    &ActorCharacter::vfunc_0F4, // ActorCharacterState_5
    &ActorCharacter::vfunc_0F8, // ActorCharacterState_6
    &ActorCharacter::vfunc_0FC, // ActorCharacterState_7
    &ActorCharacter::vfunc_100, // ActorCharacterState_8
};

static PTMF<ActorCharacter> data_ov031_02113218[ActorCharacterState_Max] = {
    &ActorCharacter::vfunc_0BC, // ActorCharacterState_0
    &ActorCharacter::vfunc_0C0, // ActorCharacterState_1
    &ActorCharacter::vfunc_0C4, // ActorCharacterState_2
    &ActorCharacter::vfunc_0C8, // ActorCharacterState_3
    &ActorCharacter::vfunc_0CC, // ActorCharacterState_4
    &ActorCharacter::vfunc_0D0, // ActorCharacterState_5
    &ActorCharacter::vfunc_0D4, // ActorCharacterState_6
    &ActorCharacter::vfunc_0D8, // ActorCharacterState_7
    &ActorCharacter::vfunc_0DC, // ActorCharacterState_8
};

ActorCharacter::ActorCharacter(ModelRender *param1, UnkStruct_ov000_020b31f0 *param2) :
    Actor_Derived1(param1, param2),
    mUnk_120(0x64),
    mUnk_122(0xC8),
    mUnk_124(0x0),
    mUnk_126(0x0),
    mUnk_128(0x0),
    mUnk_12C(this),
    mUnk_140(0x0),
    mUnk_158(0x0),
    mUnk_15C(NULL) {
    this->mUnk_2C = 0x0;
    VecFx32_Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), &this->mUnk_144.vec);
    this->mUnk_144.param1 = 0x0;
    this->mUnk_144.param2 = 0x0;
}

ActorCharacter::~ActorCharacter() {}

ActorCharacter_12C::ActorCharacter_12C(ActorCharacter *param1) :
    mUnk_08(param1),
    mUnk_0C(0, 0, 0) {}

ActorCharacter_12C::~ActorCharacter_12C() {
    this->mUnk_08 = NULL;
}

// non-matching
bool ActorCharacter_12C::vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) {
#pragma unused(param2)
    if (param1->mUnk_08.y > FX_F32_TO_FX32(0.0f)) {
        return true;
    }

    if ((this->mUnk_0C.vec.x != param1->mUnk_08.x || this->mUnk_0C.vec.y != param1->mUnk_08.y) &&
        this->mUnk_0C.vec.z != param1->mUnk_08.z) {
        return true;
    }

    VecFx16_Copy(&param1->mUnk_08, &this->mUnk_0C.vec);
    this->mUnk_08->func_ov031_020e79bc();
    this->mUnk_08->SetState(ActorCharacterState_2);

    return true;
}
// non-matching
bool ActorCharacter_12C::vfunc_0C(RefStruct ref, UnkStruct_ov031_020e54d4 *param2, const VecFx32 *param3,
                                  const VecFx32 *param4) {}

void ActorCharacter::vfunc_AC() {
    this->mUnk_4A[0] = 0x5;

    switch (this->mUnk_5C.mParams[0]) {
        case 0x0:
            this->SetState(ActorCharacterState_0);
            break;

        case 0x1:
            this->mUnk_44 = 0xFF;
            this->SetState(ActorCharacterState_2);
            break;

        case 0x2:
            this->SetState(ActorCharacterState_1);
            break;

        default:
            this->SetState(ActorCharacterState_0);
            break;
    }
}
// non-matching
void ActorCharacter::vfunc_54(unk32 param1) {}

void ActorCharacter::vfunc_0BC() {
    this->mVel.x = FX_F32_TO_FX32(0.0f);
    this->mVel.z = FX_F32_TO_FX32(0.0f);

    if (this->mUnk_0B0 & 0x100) {
        return;
    }

    this->vfunc_98(0x0);
}

void ActorCharacter::vfunc_0E0() {}

void ActorCharacter::vfunc_0C0() {
    unk32 old114 = this->mUnk_114;
    fx32 old118  = this->mUnk_118;
    unk32 old11C = this->mUnk_11C;

    if (old114 == -0x1) {
        old114 = this->vfunc_A8();
    }

    this->mUnk_114 = -0x1;
    this->mUnk_118 = FX_F32_TO_FX32(1.0f);
    this->mUnk_11C = FX_F32_TO_FX32(0.1001f);

    this->vfunc_98((u16) old114);

    this->mUnk_094.mUnk_0C->vfunc_10()->mUnk_04.mUnk_04 = old118;

    this->mUnk_094.mUnk_0C->mUnk_24 = old11C;
    this->mUnk_128                  = this->vfunc_90();
}

// non-matching
void ActorCharacter::vfunc_0E4() {}
// non-matching
void ActorCharacter::func_ov031_020e79bc() {}
// non-matching
void ActorCharacter::vfunc_0C4() {}
// non-matching
void ActorCharacter::vfunc_0E8() {}
// non-matching
void ActorCharacter::vfunc_0C8() {}
// non-matching
void ActorCharacter::vfunc_0EC() {}
// non-matching
bool ActorCharacter::func_ov031_020e812c() {}

void ActorCharacter::vfunc_0CC() {
    this->mUnk_0B0 |= 0x1;
    this->mVel.x = FX_F32_TO_FX32(0.0f);
    this->mVel.z = FX_F32_TO_FX32(0.0f);

    if (this->GetUnk0B0() & 0x2 && this->Actor_Derived1::func_ov000_020a9248(0x2000)) {
        this->SetState(ActorCharacterState_5);
        return;
    }

    if (this->GetUnk0B0() & 0x100) {
        this->mUnk_0B0 |= 0x200;
        return;
    }

    this->vfunc_98(0x1);
}

void ActorCharacter::vfunc_0F0() {
    if (this->mUnk_0B0 & 0x100) {
        this->mUnk_0B0 |= 0x200;
    }

    if (this->func_ov031_020e812c()) {
        this->SetState(ActorCharacterState_5);
    }

    this->vfunc_110();
}

void ActorCharacter::vfunc_0D0() {
    this->mVel.x = FX_F32_TO_FX32(0.0f);
    this->mVel.z = FX_F32_TO_FX32(0.0f);

    if (this->mUnk_0B0 & 0x100) {
        return;
    }

    this->vfunc_98(0x2);
}

void ActorCharacter::vfunc_0F4() {}

void ActorCharacter::vfunc_0D4() {
    this->mVel.x = FX_F32_TO_FX32(0.0f);
    this->mVel.z = FX_F32_TO_FX32(0.0f);

    unk32 old114 = this->mUnk_114;
    fx32 old118  = this->mUnk_118;
    unk32 old11C = this->mUnk_11C;

    if (old114 == -0x1) {
        old114 = this->vfunc_A8();
    }

    this->mUnk_114 = -0x1;
    this->mUnk_118 = FX_F32_TO_FX32(1.0f);
    this->mUnk_11C = FX_F32_TO_FX32(0.1001f);

    this->vfunc_98((u16) old114);

    this->mUnk_094.mUnk_0C->vfunc_10()->mUnk_04.mUnk_04 = old118;

    this->mUnk_094.mUnk_0C->mUnk_24 = old11C;
}

void ActorCharacter::vfunc_0F8() {
    this->mUnk_158 = 0x1;
    this->vfunc_110();
}

void ActorCharacter::vfunc_0D8() {
    this->mVel.x = FX_F32_TO_FX32(0.0f);
    this->mVel.z = FX_F32_TO_FX32(0.0f);

    if (!this->Actor_Derived1::func_ov000_020a9248(0x2000) || this->mUnk_0B0 & 0x20) {
        this->mUnk_0B0 &= 0xFFDF;

        if (this->mUnk_0B0 & 0x100) {
            this->mUnk_0B0 |= 0x200;
            return;
        }

        this->vfunc_98(0x1);
        return;
    }

    this->SetState(ActorCharacterState_0);
}

void ActorCharacter::vfunc_0FC() {
    if (this->mUnk_0B0 & 0x100) {
        this->mUnk_0B0 |= 0x200;
    }

    if (!this->func_ov031_020e812c()) {
        return;
    }

    this->SetState(0x0);
}

void ActorCharacter::vfunc_0DC() {
    this->mUnk_4A[0] = 0x0;
    UNSET_FLAG(this->mFlags, ActorFlag_Visible);

    if (this->mUnk_0B0 & 0x100) {
        return;
    }

    this->vfunc_98(0x0);
}

void ActorCharacter::vfunc_100() {
    if (!this->Actor_Derived1::func_ov000_020a8db0()) {
        return;
    }

    this->vfunc_AC();
}

void ActorCharacter::vfunc_104() {
    this->mUnk_0B0 &= 0xFFFB;
    SET_FLAG(this->mFlags, ActorFlag_Visible);
}

void ActorCharacter::SetState(ActorState state) {
    this->mUnk_126 = 0x0;
    this->mState   = state;

    this->vfunc_104();

    CALL_PTMF(PTMF<ActorCharacter>, data_ov031_02113218[this->mState]);
}

void ActorCharacter::Update() {
    if (!this->vfunc_108(0x5000)) {
        return;
    }

    if (this->mUnk_5C.mParams[2] == 0x2) {
        if (this->Actor_Derived1::func_ov000_020a8dd0()) {
            UNSET_FLAG(this->mFlags, ActorFlag_Alive);
        }
    }

    VecFx32_Copy(&this->mPos, &this->mPrevPos);

    this->vfunc_60();

    CALL_PTMF(PTMF<ActorCharacter>, data_ov031_02113260[this->mState]);
    if (!GET_FLAG(this->mFlags, ActorFlag_Visible)) {
        return;
    }

    this->Actor::func_ov000_02098838();

    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->vfunc_A4();
    this->mUnk_094.mUnk_0C->vfunc_34();

    if (this->mUnk_0B0 & 0x80) {
        return;
    }

    this->vfunc_10C();
}

// non-matching
void ActorCharacter::vfunc_10C() {
    if (this->mUnk_158 != 0x0) {
        switch (this->mState) {
            case ActorCharacterState_2:
                this->Actor::func_ov000_02098910(&this->mUnk_12C, 0x10);
                break;

            case ActorCharacterState_1:
                this->Actor::func_ov000_02098910(NULL, 0x10);
                break;

            case ActorCharacterState_6: {
                VecFx32 sp00 = this->mPos;
                sp00.y += 0x100;

                this->mPos.y   = data_027e0cd8->mUnk_0C->vfunc_28(&sp00, 0x1, 0x0);
                this->mUnk_158 = 0x0;
                break;
            }

            default:
                break;
        }

        if (this->mUnk_46 & 0x1) {
            this->mVel.y   = FX_F32_TO_FX32(0.0f);
            this->mUnk_158 = 0x0;
        }
    }

    VecFx32_Copy(&this->mPos, &this->mUnk_144.vec);
    this->mUnk_144.param1 = this->mpProfile->mUnk_04.size;
    this->mUnk_144.param2 = this->mpProfile->mUnk_04.size;

    if (GET_FLAG(this->mFlags, ActorFlag_Alive)) {
        return;
    }

    data_027e09c0->func_ov000_0207de98(this->mRef, &this->mUnk_144, this->mUnk_38);
}

bool ActorCharacter::vfunc_108(unk32 param1) {
    return this->Actor::func_ov017_020beeec(param1);
}

// non-matching
void ActorCharacter::vfunc_110() {
    if (this->mUnk_15C == NULL) {
        return;
    }

    if (this->mUnk_094.mUnk_0C->vfunc_30() != 0x1) {
        return;
    }

    for (unk32 index = 0x0; index < 2; ++index) {
        if (this->mUnk_094.mUnk_0C->vfunc_28()->func_02015080(this->mUnk_15C[index]) == 0x0) {
            u32 sp4;
            u32 *sp4Ptr = &sp4;
            func_01fff05c(sp4Ptr, data_027e0cd8->mUnk_0C, &this->mPos);
            data_027e09a8->func_ov000_02071934(*sp4Ptr & 0x1F, &this->mPos, this->Actor::GetActorId(), index != 0);
            return;
        }
    }
}
