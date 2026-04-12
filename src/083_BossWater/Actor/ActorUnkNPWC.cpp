//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNPWC.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkNPWC);

ARM Actor *ActorProfileUnkNPWC::Create() {
    return new(HeapIndex_2) ActorUnkNPWC();
}

ARM ActorProfileUnkNPWC::ActorProfileUnkNPWC() :
    ActorProfile(ActorId_NPWC) {}

ARM ActorUnkNPWC::ActorUnkNPWC() {}

ARM void ActorUnkNPWC::func_ov083_0215c3b4(void) {}

ARM ActorUnkNPWC::~ActorUnkNPWC() {}
ARM ActorProfileUnkNPWC::~ActorProfileUnkNPWC() {}
