//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFR2.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkEFR2);

ARM Actor *ActorProfileUnkEFR2::Create() {
    return new(HeapIndex_2) ActorUnkEFR2();
}

ARM ActorProfileUnkEFR2::ActorProfileUnkEFR2() :
    ActorProfile_Derived1(ActorId_EFR2) {}

ARM ActorUnkEFR2::ActorUnkEFR2() {}

ARM void ActorUnkEFR2::func_ov094_02170778(void) {}
ARM void ActorUnkEFR2::func_ov094_02170814(void) {}

ARM ActorUnkEFR2::~ActorUnkEFR2() {}
ARM ActorProfileUnkEFR2::~ActorProfileUnkEFR2() {}
