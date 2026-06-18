//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNPWC.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkNPWC);

Actor *ActorProfileUnkNPWC::Create() {
    return new(HeapIndex_2) ActorUnkNPWC();
}

ActorProfileUnkNPWC::ActorProfileUnkNPWC() :
    ActorProfile(ActorId_NPWC) {}

ActorUnkNPWC::ActorUnkNPWC() {}

void ActorUnkNPWC::func_ov083_0215c3b4(void) {}

ActorUnkNPWC::~ActorUnkNPWC() {}
ActorProfileUnkNPWC::~ActorProfileUnkNPWC() {}
