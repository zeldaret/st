//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMS5.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMS5 sActorProfileUnkRMS5;

ARM ActorProfileUnkRMS5 *ActorProfileUnkRMS5::GetProfile() {
    return &sActorProfileUnkRMS5;
}

ARM Actor *ActorProfileUnkRMS5::Create() {
    return new(HeapIndex_2) ActorUnkRMS5();
}

ARM ActorProfileUnkRMS5::ActorProfileUnkRMS5() :
    ActorProfile_Derived1(ActorId_RMS5) {}

ARM ActorUnkRMS5::ActorUnkRMS5() {}

ARM void ActorUnkRMS5::func_ov065_021593bc(void) {}

ARM ActorUnkRMS5::~ActorUnkRMS5() {}
ARM ActorProfileUnkRMS5::~ActorProfileUnkRMS5() {}
