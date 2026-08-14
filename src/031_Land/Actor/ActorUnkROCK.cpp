#include "Actor/ActorUnkROCK.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"

extern "C" Mat3p data_027e0130;

static MapObject_10 data_ov031_021166b8;

DECL_PROFILE(ActorProfileUnkROCK);

Actor *ActorProfileUnkROCK::Create() {
    return new(HeapIndex_2) ActorUnkROCK();
}

// non-matching
ActorProfileUnkROCK::ActorProfileUnkROCK() :
    ActorProfileUnkROCK_Base(ActorId_ROCK) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.5f));
    VecFx32_Init(FLOAT_TO_FX32(7.0017f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mUnk_D8.mUnk_0C);
    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.6f), FLOAT_TO_FX32(1.2f), &this->mUnk_D8.mUnk_18);
}

ActorUnkROCK::ActorUnkROCK() :
    mUnk_94(G3d_GetModelPtr(GET_PROFILE(ActorProfileUnkROCK)->mUnk_3C.mUnk_50)),
    mUnk_9C(true) {
    this->mUnk_44    = 0x1F;
    this->mUnk_4A[1] = 0x02;
}

bool ActorUnkROCK::vfunc_18(unk32 param1) {
    this->mUnk_A0.mUnk_04 = this->mRef;
    this->mUnk_A0.mUnk_08 = &this->mPos;
    this->mUnk_A0.mUnk_0C = &data_ov031_021166b8;

    this->func_ov031_020e8a48(ActorUnkROCKState_0);

    return true;
}

void ActorUnkROCK::vfunc_20() {
    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    switch (this->mState) {
        case ActorUnkROCKState_1:
            data_027e0ce0->func_ov000_0208bacc(0x1, &this->mPos);
            break;
        case ActorUnkROCKState_3:
            this->func_ov000_02098838();
            VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
            if (this->func_ov000_02098910(NULL, 0x10) == 0x0) {
                break;
            }
            this->func_ov031_020e8a48(ActorUnkROCKState_4);
            break;
        case ActorUnkROCKState_0:
        case ActorUnkROCKState_2:
        case ActorUnkROCKState_4:
        default:
            break;
    }
}

void ActorUnkROCK::func_ov031_020e8a48(ActorState state) {
    this->mUnk_52 = 0xFFFF;
    this->mUnk_50 = 0x0000;

    if (this->mState == ActorUnkROCKState_0) {
        data_027e09c0->func_ov000_0207e254(&this->mUnk_A0);
    }

    this->mState = state;
    switch (state) {
        case ActorUnkROCKState_0:
            data_027e09c0->func_ov000_0207e240(&this->mUnk_A0);
            break;
        case ActorUnkROCKState_4:
            this->func_ov031_020e8acc();
            break;
        case ActorUnkROCKState_1:
        case ActorUnkROCKState_2:
        case ActorUnkROCKState_3:
        default:
            break;
    }
}

void ActorUnkROCK::func_ov031_020e8acc() {
    data_027e09a8->func_ov000_02071b30(0x0, &this->mPos, 0x0);
    this->func_ov000_020984d0();
}

void ActorUnkROCK::vfunc_2C(unk32 param1) {
    if (!this->func_01fff5d0(param1, 0x0)) {
        return;
    }
    VecFx32 vecSp18;
    VecFx32_Init(FLOAT_TO_FX32(1.2f), FLOAT_TO_FX32(1.2f), FLOAT_TO_FX32(1.2f), &vecSp18);

    VecFx32 vecSp0C = this->mPos;
    vecSp0C.y += FLOAT_TO_FX32(0.8f);

    this->mUnk_94.vfunc_10(&vecSp18, &data_027e0130, &vecSp0C);

    data_027e09b4->func_01fff60c(&this->mPos, 0xC00, 0xC00, 0x1F, 0x0, 0x0);
}

// non-matching
bool ActorUnkROCK::Grab(ActorGrabParams param1) {
    if (param1.unk_00 != 0x100 || param1.unk_02 != 1) {
        return false;
    }
    if (!this->Actor::Grab(param1)) {
        return false;
    }
    this->func_ov031_020e8a48(ActorUnkROCKState_1);
    return true;
}

// non-matching
bool ActorUnkROCK::Drop(ActorGrabParams param1, const VecFx32 *param2) {
    if (!this->Actor::Drop(param1, param2)) {
        return false;
    }

    this->func_ov031_020e8a48(ActorUnkROCKState_3);
    return true;
}
