//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFLDK.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkFLDK sActorProfileUnkFLDK;

ARM ActorProfileUnkFLDK *ActorProfileUnkFLDK::GetProfile() {
    return &sActorProfileUnkFLDK;
}

ARM Actor *ActorProfileUnkFLDK::Create() {
    return new(HeapIndex_2) ActorUnkFLDK();
}

ARM ActorProfileUnkFLDK::ActorProfileUnkFLDK() :
    ActorProfile(ActorId_FLDK) {}

ARM ActorUnkFLDK::ActorUnkFLDK() {}

ARM void ActorUnkFLDK::func_ov047_021354a4(void) {}
ARM void ActorUnkFLDK::func_ov047_02135570(void) {}

ARM ActorUnkFLDK::~ActorUnkFLDK() {}
ARM ActorProfileUnkFLDK::~ActorProfileUnkFLDK() {}
