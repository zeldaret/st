//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBPAP.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkBPAP sActorProfileUnkBPAP;

ARM ActorProfileUnkBPAP *ActorProfileUnkBPAP::GetProfile() {
    return &sActorProfileUnkBPAP;
}

ARM Actor *ActorProfileUnkBPAP::Create() {
    return new(HeapIndex_2) ActorUnkBPAP();
}

ARM ActorProfileUnkBPAP::ActorProfileUnkBPAP() :
    ActorProfile(ActorId_BPAP) {}

ARM ActorUnkBPAP::ActorUnkBPAP() {}

ARM void ActorUnkBPAP::func_ov021_020f3858(void) {}

ARM ActorUnkBPAP::~ActorUnkBPAP() {}
ARM ActorProfileUnkBPAP::~ActorProfileUnkBPAP() {}
