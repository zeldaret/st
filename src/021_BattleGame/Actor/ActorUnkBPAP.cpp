//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBPAP.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkBPAP);

Actor *ActorProfileUnkBPAP::Create() {
    return new(HeapIndex_2) ActorUnkBPAP();
}

ActorProfileUnkBPAP::ActorProfileUnkBPAP() :
    ActorProfile(ActorId_BPAP) {}

ActorUnkBPAP::ActorUnkBPAP() {}

void ActorUnkBPAP::func_ov021_020f3858(void) {}

ActorUnkBPAP::~ActorUnkBPAP() {}
ActorProfileUnkBPAP::~ActorProfileUnkBPAP() {}
