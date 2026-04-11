//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNTTZ.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkNTTZ);

ARM Actor *ActorProfileUnkNTTZ::Create() {
    return new(HeapIndex_2) ActorUnkNTTZ();
}

ARM ActorProfileUnkNTTZ::ActorProfileUnkNTTZ() :
    ActorProfile(ActorId_NTTZ) {}

ARM ActorUnkNTTZ::ActorUnkNTTZ() {}

ARM void ActorUnkNTTZ::func_ov031_020f6190(void) {}
ARM void ActorUnkNTTZ::func_ov031_020f6198(void) {}
ARM void ActorUnkNTTZ::func_ov031_020f619c(void) {}
ARM void ActorUnkNTTZ::func_ov031_020f61a0(void) {}
ARM void ActorUnkNTTZ::func_ov031_020f61f0(void) {}

ARM ActorUnkNTTZ::~ActorUnkNTTZ() {}
ARM ActorProfileUnkNTTZ::~ActorProfileUnkNTTZ() {}
