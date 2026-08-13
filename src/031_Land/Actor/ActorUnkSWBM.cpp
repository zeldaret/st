#include "Actor/ActorUnkSWBM.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e0958.hpp"

static const Cylinder data_ov031_02113114(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.35f));

// non-matching
bool ActorUnkSWBM_94::vfunc_08(const UnkStruct_ov031_020f3310 *param1) {
    return ((u32) param1->mUnk_04->mUnk_24[param1->mUnk_00->mUnk_06] >> 0x16 & 0x1) != 0x1;
}

bool ActorUnkSWBM_94::vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 *param2, unk32 param3) {
    return ((u32) param2[0x2] >> 0x16 & 0x1) != 0x1;
}

bool ActorUnkSWBM_98::vfunc_0C(Actor *param1, VecFx32 *vector) {
    bool retValue = this->UnkStruct_ov031_Items_01::vfunc_0C(param1, vector);
    if (!retValue) {
        return retValue;
    }

    u16 angle = this->mUnk_2C->mAngle;

    vector->x = SIN(angle);
    vector->y = FLOAT_TO_FX32(0.0f);
    vector->z = COS(angle);
    return retValue;
}

void ActorUnkSWBM_98::vfunc_10(Actor *actor) {
    switch (GET_FLAG(actor->mFlags, ActorFlag_17)) {
        case false:
            ActorUnkSWBM *actorSWBM = this->mUnk_2C;
            if (actorSWBM->mState != ActorUnkSWBMState_0) {
                break;
            }
            actorSWBM->func_ov031_020e6e84(ActorUnkSWBMState_1);
            break;
        case true:
            this->mUnk_2C->func_ov031_020e6d80(0x8C98);
            break;
    }
}

extern "C" void FlushGfxQueue();

// non-matching
void ActorUnkSWBM_C8::vfunc_00(unk32 param1, unk32 param2, unk32 param3) {
    FlushGfxQueue();
}

DECL_PROFILE(ActorProfileUnkSWBM);

Actor *ActorProfileUnkSWBM::Create() {
    return new(HeapIndex_2) ActorUnkSWBM();
}

ActorProfileUnkSWBM::ActorProfileUnkSWBM() :
    ActorProfile(ActorId_SWBM) {
    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mUnk_04.pos);
    this->mUnk_04.size = FLOAT_TO_FX32(0.35f);
}

ActorUnkSWBM::ActorUnkSWBM() :
    mUnk_098(this),
    mUnk_0DC(this),
    mUnk_0E0(0xE),
    mUnk_108(0x0),
    mUnk_10A(0x0) {
    MI_CpuFill32(0x0, this->mUnk_0E4, ARRAY_LEN(this->mUnk_0E4) * sizeof *this->mUnk_0E4);
    this->mState  = ActorUnkSWBMState_0;
    this->mUnk_52 = 0xFFFF;
    this->mUnk_50 = 0x0000;
}

bool ActorUnkSWBM::vfunc_18(unk32 param1) {
    this->mUnk_44          = 0x1F;
    this->mUnk_098.mUnk_04 = this->mRef;

    this->mUnk_34 = (Cylinder *) &data_ov031_02113114;
    VecFx32_Copy(&this->mPos, &this->mUnk_098.mUnk_0C.pos);
    this->mUnk_098.mUnk_0C.size = FLOAT_TO_FX32(0.35f);

    this->mVel.x = MUL_FX32(SIN((u16) this->mAngle), 0xB33);
    this->mVel.z = MUL_FX32(COS((u16) this->mAngle), 0xB33);
    this->mVel.y = FLOAT_TO_FX32(0.0f);
    return true;
}

void ActorUnkSWBM::func_ov031_020e6d48() {
    switch (this->mState) {
        case ActorUnkSWBMState_1:
            if (this->mUnk_0E0 != 6) {
                return;
            }
        case ActorUnkSWBMState_0:
            this->mState = ActorUnkSWBMState_0;
            this->func_ov031_020e6d80(0x8C98);
            break;
        default:
            break;
    }
}

// non-matching
void ActorUnkSWBM::func_ov031_020e6d80(unk32 param1) {}

void ActorUnkSWBM::func_ov031_020e6e84(ActorState state) {
    if (state != ActorUnkSWBMState_1) {
        if (state == ActorUnkSWBMState_2) {
            UNSET_FLAG(this->mFlags, ActorFlag_Alive);
        }
    } else {
        if (this->mUnk_0E0 > 0x6) {
            this->mUnk_0E0 = 0x6;
        }

        this->mVel.x /= 3;
        this->mVel.z /= 3;
    }
    this->mState  = state;
    this->mUnk_52 = 0xFFFF;
    this->mUnk_50 = 0x0000;
}

// non-matching
void ActorUnkSWBM::vfunc_20() {}

void ActorUnkSWBM::vfunc_24() {
    if (this->mState == ActorUnkSWBMState_0) {
        this->func_ov031_020e6e84(ActorUnkSWBMState_1);
        return;
    }
    this->vfunc_20();
}

// non-matching
void ActorUnkSWBM::func_ov031_020e718c() {}

void ActorUnkSWBM::vfunc_2C(unk32 param1) {
    if (this->mState == ActorUnkSWBMState_2) {
        return;
    }
    if (!this->func_01fff5d0(param1, 0x0)) {
        return;
    }
    data_027e0958->func_ov000_02058fc4(&this->mUnk_0C8, &this->mPos);
}
