//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBPAP.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkBPAP);

ARM Actor *ActorProfileUnkBPAP::Create() {
    return new(HeapIndex_2) ActorUnkBPAP();
}

ARM ActorProfileUnkBPAP::ActorProfileUnkBPAP() :
    ActorProfile(ActorId_BPAP) {}

ARM ActorUnkBPAP::ActorUnkBPAP() {}

ARM void ActorUnkBPAP::func_ov021_020f3858(void) {}

ARM ActorUnkBPAP::~ActorUnkBPAP() {}
ARM ActorProfileUnkBPAP::~ActorProfileUnkBPAP() {}
