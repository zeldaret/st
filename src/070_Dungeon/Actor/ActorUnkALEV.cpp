//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkALEV.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkALEV);

Actor *ActorProfileUnkALEV::Create() {
    return new(HeapIndex_2) ActorUnkALEV();
}

ActorProfileUnkALEV::ActorProfileUnkALEV() :
    ActorProfile(ActorId_ALEV) {}

ActorUnkALEV::ActorUnkALEV() {}

void ActorUnkALEV::func_ov070_0213f828(void) {}
void ActorUnkALEV::func_ov070_0213f848(void) {}
void ActorUnkALEV::func_ov070_0213f858(void) {}
void ActorUnkALEV::func_ov070_0213f86c(void) {}
void ActorUnkALEV::func_ov070_0213f8dc(void) {}

ActorUnkALEV::~ActorUnkALEV() {}
ActorProfileUnkALEV::~ActorProfileUnkALEV() {}
