#include "Actor/ActorUnkFLEN.hpp"
#include "System/SysNew.hpp"

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

ARM bool ActorUnkFLEN::func_ov031_020f80b8() {
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

ARM void ActorUnkFLEN::func_ov031_020f8118() {
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
    }
}

ARM void ActorUnkFLEN::func_ov031_020f81b4(s16 param_1) {
    this->mUnk_4C = param_1;

    switch (param_1) {
        case 0x0:
            break;
        case 0x1:
            this->func_ov031_020f81f8();
            return;
        case 0x2:
            if (!this->mUnk_94) {
                UNSET_FLAG(this->mFlags, ActorFlag_Alive);
            }
    }
}

// non-matching
ARM void ActorUnkFLEN::func_ov031_020f81f8(void) {}

ARM ActorUnkFLEN::~ActorUnkFLEN() {}
ARM ActorProfileUnkFLEN::~ActorProfileUnkFLEN() {}
