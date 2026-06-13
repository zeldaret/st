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

// non-matching
ARM void ActorUnkFLEN::func_ov031_020f8118(void) {}
// non-matching
ARM void ActorUnkFLEN::func_ov031_020f81b4(unk32) {}
// non-matching
ARM void ActorUnkFLEN::func_ov031_020f81f8(void) {}

ARM ActorUnkFLEN::~ActorUnkFLEN() {}
ARM ActorProfileUnkFLEN::~ActorProfileUnkFLEN() {}
