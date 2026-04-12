//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFR3.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkEFR3);

ARM Actor *ActorProfileUnkEFR3::Create() {
    return new(HeapIndex_2) ActorUnkEFR3();
}

ARM ActorProfileUnkEFR3::ActorProfileUnkEFR3() :
    ActorProfile_Derived1(ActorId_EFR3) {}

ARM ActorUnkEFR3::ActorUnkEFR3() {}

ARM void ActorUnkEFR3::func_ov083_0215c534(void) {}
ARM void ActorUnkEFR3::func_ov083_0215c5d0(void) {}

ARM ActorUnkEFR3::~ActorUnkEFR3() {}
ARM ActorProfileUnkEFR3::~ActorProfileUnkEFR3() {}
