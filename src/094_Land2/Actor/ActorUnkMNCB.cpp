//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMNCB.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkMNCB sActorProfileUnkMNCB;

ARM ActorProfileUnkMNCB *ActorProfileUnkMNCB::GetProfile() {
    return &sActorProfileUnkMNCB;
}

ARM Actor *ActorProfileUnkMNCB::Create() {
    return new(HeapIndex_2) ActorUnkMNCB();
}

ARM ActorProfileUnkMNCB::ActorProfileUnkMNCB() :
    ActorProfile(ActorId_MNCB) {}

ARM ActorUnkMNCB::ActorUnkMNCB() {}

ARM void ActorUnkMNCB::func_ov094_0216fbc0(void) {}
ARM void ActorUnkMNCB::func_ov094_0216fbd4(void) {}
ARM void ActorUnkMNCB::func_ov094_0216fbdc(void) {}
ARM void ActorUnkMNCB::func_ov094_0216fc74(void) {}
ARM void ActorUnkMNCB::func_ov094_0216fc7c(void) {}
ARM void ActorUnkMNCB::func_ov094_0216fd58(void) {}
ARM void ActorUnkMNCB::func_ov094_0216fe34(void) {}
ARM void ActorUnkMNCB::func_ov094_0216fe70(void) {}
ARM void ActorUnkMNCB::func_ov094_0216ffe8(void) {}
ARM void ActorUnkMNCB::func_ov094_02170374(void) {}
ARM void ActorUnkMNCB::func_ov094_02170584(void) {}

ARM ActorUnkMNCB::~ActorUnkMNCB() {}
ARM ActorProfileUnkMNCB::~ActorProfileUnkMNCB() {}
