//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFLEN.hpp"
#include "System/SysNew.hpp"

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

// non-matching
ARM void ActorUnkFLEN::func_ov031_020f80b8(void) {}
// non-matching
ARM void ActorUnkFLEN::func_ov031_020f8118(void) {}
// non-matching
ARM void ActorUnkFLEN::func_ov031_020f81b4(void) {}
// non-matching
ARM void ActorUnkFLEN::func_ov031_020f81f8(void) {}

ARM ActorUnkFLEN::~ActorUnkFLEN() {}
ARM ActorProfileUnkFLEN::~ActorProfileUnkFLEN() {}
