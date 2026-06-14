#include "Actor/ActorUnkFLEN.hpp"
#include "System/SysNew.hpp"

extern "C" u16 data_ov031_02110b90[];
extern "C" ActorId data_ov031_02110b94[];

ARM DECL_PROFILE(ActorProfileUnkFLEN);

ARM Actor *ActorProfileUnkFLEN::Create() {
    return new(HeapIndex_2) ActorUnkFLEN();
}

ARM ActorProfileUnkFLEN::ActorProfileUnkFLEN() :
    ActorProfile(ActorId_FLEN) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.0f));
}

ARM ActorUnkFLEN::ActorUnkFLEN() :
    mUnk_94(0) {}

ARM bool ActorUnkFLEN::vfunc_18(int param_1) {
    this->mUnk_94 = this->mUnk_5C.mParams[1];
    if (this->mUnk_5C.mParams[1] >= (s16) 0x2) {
        this->mUnk_94 = 0;
    }
    if (ActorProfile *profile = data_ov000_020b539c_eur.GetProfileFromId(data_ov031_02110b94[this->mUnk_5C.mParams[0]])) {
        profile->vfunc_08();
    }
    this->func_ov031_020f81b4(0x0);
    return true;
}

ARM void ActorUnkFLEN::vfunc_20() {
    if (this->mUnk_50 < this->mUnk_52) {
        ++this->mUnk_50;
    }

    switch (this->mUnk_4C) {
        case 0x0:
            if (!this->func_ov000_02098a60(0x0)) {
                break;
            }
            this->func_ov031_020f81b4(0x1);
            break;
        case 0x1:
            this->func_ov031_020f81b4(0x2);
            break;
        case 0x2:
            if (!this->func_ov000_02098a60(0x0)) {
                this->func_ov031_020f81b4(0x0);
            }
            break;
    }
}

ARM void ActorUnkFLEN::func_ov031_020f81b4(s16 param_1) {
    this->mUnk_4C = param_1;

    switch (param_1) {
        case 0x0:
            break;
        case 0x1:
            this->func_ov031_020f81f8();
            break;
        case 0x2:
            if (!this->mUnk_94) {
                UNSET_FLAG(this->mFlags, ActorFlag_Alive);
            }
            break;
    }
}

ARM unk32 ActorUnkFLEN::func_ov031_020f81f8() {
    /* 08 */ ActorParams mUnk_08;
    /* 04 */ u16 mUnk_04;
    mUnk_08.mUnk_28 = 0;
    mUnk_08.func_ov000_020975f8();
    mUnk_08.mUnk_28       = this->mRef.Get32();
    mUnk_08.mInitialAngle = this->mAngle;

    VecFx32_Copy(&this->mPos, &mUnk_08.mInitialPos);
    mUnk_08.mInitialPos.y += 0x5000;
    u16 index          = this->mUnk_5C.mParams[0];
    mUnk_08.mParams[0] = data_ov031_02110b90[index];
    ((Actor *) &mUnk_04)->func_ov000_020973f4(&data_ov000_020b539c_eur, data_ov031_02110b94[index], &mUnk_08, 0);

    return mUnk_04 != 0;
}

ARM ActorUnkFLEN::~ActorUnkFLEN() {}
ARM ActorProfileUnkFLEN::~ActorProfileUnkFLEN() {}
