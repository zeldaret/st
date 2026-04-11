//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSCCN.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkSCCN sActorProfileUnkSCCN;

ARM ActorProfileUnkSCCN *ActorProfileUnkSCCN::GetProfile() {
    return &sActorProfileUnkSCCN;
}

ARM Actor *ActorProfileUnkSCCN::Create() {
    return new(HeapIndex_2) ActorUnkSCCN();
}

ARM ActorProfileUnkSCCN::ActorProfileUnkSCCN() :
    ActorProfile(ActorId_SCCN) {}

ARM ActorUnkSCCN::ActorUnkSCCN() {}

ARM void ActorUnkSCCN::func_ov031_020efaa0(void) {}

ARM ActorUnkSCCN::~ActorUnkSCCN() {}
ARM ActorProfileUnkSCCN::~ActorProfileUnkSCCN() {}
