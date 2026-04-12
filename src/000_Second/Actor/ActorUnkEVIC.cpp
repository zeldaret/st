//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEVIC.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkEVIC);

ARM Actor *ActorProfileUnkEVIC::Create() {
    return new(HeapIndex_2) ActorUnkEVIC();
}

ARM ActorProfileUnkEVIC::ActorProfileUnkEVIC() :
    ActorProfile(ActorId_EVIC) {}

ARM ActorUnkEVIC::ActorUnkEVIC() {}

ARM void ActorUnkEVIC::func_ov000_0209c014(void) {}

ARM ActorUnkEVIC::~ActorUnkEVIC() {}
ARM ActorProfileUnkEVIC::~ActorProfileUnkEVIC() {}
