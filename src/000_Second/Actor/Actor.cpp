#include "Actor/Actor.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include <nitro/mi.h>

ARM Actor::Actor() {
    this->mVel.x  = 0;
    this->mVel.y  = 0;
    this->mVel.z  = 0;
    this->mUnk_2C = 0xCD;
    this->mUnk_38 = 0;
    this->mUnk_3C = NULL;
    this->mUnk_40 = 0;
    this->mUnk_48 = 4;
    this->mState  = ActorState_None;
    this->mUnk_50 = 0;
    this->mUnk_52 = 0;
    this->mUnk_54 = 0;
    this->ResetFlags();
    this->mUnk_5C.mUnk_28 = 0;
    this->mUnk_5C.func_ov000_020975f8();
    this->mRef.Reset();
    this->mpProfile = NULL;
    MI_CpuCopyFast(&data_ov000_020b539c_eur.mUnk_00, &this->mUnk_5C, sizeof(ActorParams));
    VecFx32_Copy(&this->mUnk_5C.mInitialPos, &this->mPos);
    VecFx32_Copy(&this->mUnk_5C.mInitialPos, &this->mPrevPos);
    this->mAngle = this->mUnk_5C.mInitialAngle;
    SET_FLAGS(this->mFlags, ActorFlag_Alive, ActorFlag_Visible, ActorFlag_Active, ActorFlag_14);
    this->mUnk_44 = 0xFF;
    this->mUnk_46 = 0;
    this->func_ov000_0209862c(0);
    this->func_ov000_0209848c(data_ov000_020b539c_eur.mUnk_30);
}

ARM Actor::~Actor() {}

// non-matching (equivalent)
ARM void Actor::func_ov000_0209848c(ActorProfile *param1) {
    Cylinder *temp_r3 = &param1->mUnk_04;
    unk32 unk_1c      = param1->mUnk_1C;

    this->mpProfile = param1;

    this->mUnk_34  = &param1->mUnk_04;
    this->mUnk_30  = &param1->mUnk_04;
    this->mYOffset = unk_1c;
}

ARM bool Actor::vfunc_18(unk32 param1) {
    return true;
}

ARM void Actor::vfunc_1C() {}

ARM void Actor::vfunc_20() {}

ARM void Actor::vfunc_24() {}

ARM void Actor::vfunc_28() {}

ARM void Actor::vfunc_2C(unk32 param1) {}

ARM void Actor::vfunc_30() {}

ARM unk32 Actor::vfunc_34() {
    return 1;
}

ARM void Actor::func_ov000_020984d0() {
    UNSET_FLAG(this->mFlags, ActorFlag_Alive);

    if (GET_FLAG(this->mFlags, ActorFlag_16)) {
        this->func_ov000_020984f0();
    }
}

ARM void Actor::func_ov000_020984f0() {
    if (this->mUnk_5C.mUnk_24 >= 0) {
        data_027e0cd8->func_ov000_02081ecc(this->mUnk_5C.mUnk_24, 1);
    }
}

ARM void Actor::GetOffsetPos(VecFx32 *pPos) const {
    pPos->x = this->mPos.x;
    pPos->y = this->mPos.y;
    pPos->z = this->mPos.z;
    pPos->y += this->mYOffset;
}

ARM VecFx32 *Actor::func_ov000_0209853c(unk32 param1) {
    return data_027e0ce0->func_01fff148(param1);
}

ARM bool Actor::vfunc_04() {
    return this->mpProfile->mUnk_1E & 1;
}

ARM unk16 Actor::vfunc_08() {
    return this->mpProfile->mUnk_1A;
}

ARM unk8 Actor::vfunc_0C() {
    return this->mpProfile->mUnk_18;
}

ARM bool Actor::Grab(ActorGrabParams grabParams) {
    // fake match?
    if (GET_FLAG((volatile ActorFlags *) this->mFlags, ActorFlag_Grabbed)) {
        return false;
    }

    SET_FLAG(this->mFlags, ActorFlag_Grabbed);

    switch (grabParams.unk_00) {
        case 0x100:
        case 0x101: {
            u16 var_r3 = grabParams.unk_02;

            if (grabParams.unk_00 == 0x101) {
                var_r3 = 0;
            }

            this->mUnk_4A[var_r3] = 0;
            break;
        }
        default:
            break;
    }

    return true;
}

ARM bool Actor::Drop(ActorGrabParams param2, const VecFx32 *pVel) {
    // fake match?
    if (!GET_FLAG((volatile ActorFlags *) this->mFlags, ActorFlag_Grabbed)) {
        return false;
    }

    this->mVel.x = pVel->x;
    this->mVel.y = pVel->y;
    this->mVel.z = pVel->z;

    UNSET_FLAG(this->mFlags, ActorFlag_Grabbed);
    return true;
}

ARM void Actor::func_ov000_0209862c(unk32 param1) {
    for (s8 i = 0; i < ARRAY_LEN(this->mUnk_4A); i++) {
        this->mUnk_4A[i] = param1;
    }
}
