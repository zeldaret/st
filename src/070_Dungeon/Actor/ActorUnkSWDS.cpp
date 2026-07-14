//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSWDS.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkSWDS);

Actor *ActorProfileUnkSWDS::Create() {
    return new(HeapIndex_2) ActorUnkSWDS();
}

ActorProfileUnkSWDS::ActorProfileUnkSWDS() :
    ActorProfile(ActorId_SWDS) {}

ActorUnkSWDS::ActorUnkSWDS() {}

void ActorUnkSWDS::func_ov070_02143a50(void) {}
void ActorUnkSWDS::func_ov070_02143adc(void) {}
void ActorUnkSWDS::func_ov070_02143bd4(void) {}
void ActorUnkSWDS::func_ov070_02143be8(void) {}

ActorUnkSWDS::~ActorUnkSWDS() {}
ActorProfileUnkSWDS::~ActorProfileUnkSWDS() {}
