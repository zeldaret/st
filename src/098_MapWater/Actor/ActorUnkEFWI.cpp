//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFWI.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkEFWI);

ARM Actor *ActorProfileUnkEFWI::Create() {
    return new(HeapIndex_2) ActorUnkEFWI();
}

ARM ActorProfileUnkEFWI::ActorProfileUnkEFWI() :
    ActorProfile_Derived1(ActorId_EFWI) {}

ARM ActorUnkEFWI::ActorUnkEFWI() {}

ARM void ActorUnkEFWI::func_ov098_02181738(void) {}
ARM void ActorUnkEFWI::func_ov098_021817d4(void) {}

ARM ActorUnkEFWI::~ActorUnkEFWI() {}
ARM ActorProfileUnkEFWI::~ActorProfileUnkEFWI() {}
