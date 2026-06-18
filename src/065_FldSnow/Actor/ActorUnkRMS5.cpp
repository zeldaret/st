//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMS5.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMS5);

Actor *ActorProfileUnkRMS5::Create() {
    return new(HeapIndex_2) ActorUnkRMS5();
}

ActorProfileUnkRMS5::ActorProfileUnkRMS5() :
    ActorProfile_Derived1(ActorId_RMS5) {}

ActorUnkRMS5::ActorUnkRMS5() {}

void ActorUnkRMS5::func_ov065_021593bc(void) {}

ActorUnkRMS5::~ActorUnkRMS5() {}
ActorProfileUnkRMS5::~ActorProfileUnkRMS5() {}
