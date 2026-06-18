//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFR2.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkEFR2);

Actor *ActorProfileUnkEFR2::Create() {
    return new(HeapIndex_2) ActorUnkEFR2();
}

ActorProfileUnkEFR2::ActorProfileUnkEFR2() :
    ActorProfile_Derived1(ActorId_EFR2) {}

ActorUnkEFR2::ActorUnkEFR2() {}

void ActorUnkEFR2::func_ov094_02170778(void) {}
void ActorUnkEFR2::func_ov094_02170814(void) {}

ActorUnkEFR2::~ActorUnkEFR2() {}
ActorProfileUnkEFR2::~ActorProfileUnkEFR2() {}
