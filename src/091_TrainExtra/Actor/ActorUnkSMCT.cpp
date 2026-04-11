//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSMCT.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkSMCT sActorProfileUnkSMCT;

ARM ActorProfileUnkSMCT *ActorProfileUnkSMCT::GetProfile() {
    return &sActorProfileUnkSMCT;
}

ARM Actor *ActorProfileUnkSMCT::Create() {
    return new(HeapIndex_2) ActorUnkSMCT();
}

ARM ActorProfileUnkSMCT::ActorProfileUnkSMCT() :
    ActorProfile(ActorId_SMCT) {}

ARM ActorUnkSMCT::ActorUnkSMCT() {}

ARM void ActorUnkSMCT::func_ov091_02169c9c(void) {}
ARM void ActorUnkSMCT::func_ov091_02169cd8(void) {}

ARM ActorUnkSMCT::~ActorUnkSMCT() {}
ARM ActorProfileUnkSMCT::~ActorProfileUnkSMCT() {}
