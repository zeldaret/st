//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkALEV.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkALEV sActorProfileUnkALEV;

ARM ActorProfileUnkALEV *ActorProfileUnkALEV::GetProfile() {
    return &sActorProfileUnkALEV;
}

ARM Actor *ActorProfileUnkALEV::Create() {
    return new(HeapIndex_2) ActorUnkALEV();
}

ARM ActorProfileUnkALEV::ActorProfileUnkALEV() :
    ActorProfile(ActorId_ALEV) {}

ARM ActorUnkALEV::ActorUnkALEV() {}

ARM void ActorUnkALEV::func_ov070_0213f828(void) {}
ARM void ActorUnkALEV::func_ov070_0213f848(void) {}
ARM void ActorUnkALEV::func_ov070_0213f858(void) {}
ARM void ActorUnkALEV::func_ov070_0213f86c(void) {}
ARM void ActorUnkALEV::func_ov070_0213f8dc(void) {}

ARM ActorUnkALEV::~ActorUnkALEV() {}
ARM ActorProfileUnkALEV::~ActorProfileUnkALEV() {}
