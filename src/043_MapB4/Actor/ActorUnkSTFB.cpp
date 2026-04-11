//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSTFB.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkSTFB sActorProfileUnkSTFB;

ARM ActorProfileUnkSTFB *ActorProfileUnkSTFB::GetProfile() {
    return &sActorProfileUnkSTFB;
}

ARM Actor *ActorProfileUnkSTFB::Create() {
    return new(HeapIndex_2) ActorUnkSTFB();
}

ARM ActorProfileUnkSTFB::ActorProfileUnkSTFB() :
    ActorProfile(ActorId_STFB) {}

ARM ActorUnkSTFB::ActorUnkSTFB() {}

ARM void ActorUnkSTFB::func_ov043_021283c8(void) {}
ARM void ActorUnkSTFB::func_ov043_02128410(void) {}
ARM void ActorUnkSTFB::func_ov043_02128530(void) {}
ARM void ActorUnkSTFB::func_ov043_02128544(void) {}
ARM void ActorUnkSTFB::func_ov043_02128580(void) {}
ARM void ActorUnkSTFB::func_ov043_0212877c(void) {}
ARM void ActorUnkSTFB::func_ov043_021287f8(void) {}
ARM void ActorUnkSTFB::func_ov043_021288e8(void) {}
ARM void ActorUnkSTFB::func_ov043_02128954(void) {}
ARM void ActorUnkSTFB::func_ov043_02128a08(void) {}

ARM ActorUnkSTFB::~ActorUnkSTFB() {}
ARM ActorProfileUnkSTFB::~ActorProfileUnkSTFB() {}
