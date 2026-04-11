//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFW2.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkEFW2);

ARM Actor *ActorProfileUnkEFW2::Create() {
    return new(HeapIndex_2) ActorUnkEFW2();
}

ARM ActorProfileUnkEFW2::ActorProfileUnkEFW2() :
    ActorProfile_Derived1(ActorId_EFW2) {}

ARM ActorUnkEFW2::ActorUnkEFW2() {}

ARM void ActorUnkEFW2::func_ov094_0217092c(void) {}
ARM void ActorUnkEFW2::func_ov094_021709c8(void) {}

ARM ActorUnkEFW2::~ActorUnkEFW2() {}
ARM ActorProfileUnkEFW2::~ActorProfileUnkEFW2() {}
