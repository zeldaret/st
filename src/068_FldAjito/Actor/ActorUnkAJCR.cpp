//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkAJCR.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkAJCR);

ARM Actor *ActorProfileUnkAJCR::Create() {
    return new(HeapIndex_2) ActorUnkAJCR();
}

ARM ActorProfileUnkAJCR::ActorProfileUnkAJCR() :
    ActorProfile(ActorId_AJCR) {}

ARM ActorUnkAJCR::ActorUnkAJCR() {}

ARM void ActorUnkAJCR::func_ov068_0215d7f4(void) {}
ARM void ActorUnkAJCR::func_ov068_0215d8d8(void) {}

ARM ActorUnkAJCR::~ActorUnkAJCR() {}
ARM ActorProfileUnkAJCR::~ActorProfileUnkAJCR() {}
