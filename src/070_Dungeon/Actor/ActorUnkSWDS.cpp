//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSWDS.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkSWDS sActorProfileUnkSWDS;

ARM ActorProfileUnkSWDS *ActorProfileUnkSWDS::GetProfile() {
    return &sActorProfileUnkSWDS;
}

ARM Actor *ActorProfileUnkSWDS::Create() {
    return new(HeapIndex_2) ActorUnkSWDS();
}

ARM ActorProfileUnkSWDS::ActorProfileUnkSWDS() :
    ActorProfile(ActorId_SWDS) {}

ARM ActorUnkSWDS::ActorUnkSWDS() {}

ARM void ActorUnkSWDS::func_ov070_02143a50(void) {}
ARM void ActorUnkSWDS::func_ov070_02143adc(void) {}
ARM void ActorUnkSWDS::func_ov070_02143bd4(void) {}
ARM void ActorUnkSWDS::func_ov070_02143be8(void) {}

ARM ActorUnkSWDS::~ActorUnkSWDS() {}
ARM ActorProfileUnkSWDS::~ActorProfileUnkSWDS() {}
