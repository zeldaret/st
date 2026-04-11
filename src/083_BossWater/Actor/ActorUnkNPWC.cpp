//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNPWC.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkNPWC sActorProfileUnkNPWC;

ARM ActorProfileUnkNPWC *ActorProfileUnkNPWC::GetProfile() {
    return &sActorProfileUnkNPWC;
}

ARM Actor *ActorProfileUnkNPWC::Create() {
    return new(HeapIndex_2) ActorUnkNPWC();
}

ARM ActorProfileUnkNPWC::ActorProfileUnkNPWC() :
    ActorProfile(ActorId_NPWC) {}

ARM ActorUnkNPWC::ActorUnkNPWC() {}

ARM void ActorUnkNPWC::func_ov083_0215c3b4(void) {}

ARM ActorUnkNPWC::~ActorUnkNPWC() {}
ARM ActorProfileUnkNPWC::~ActorProfileUnkNPWC() {}
