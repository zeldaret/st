//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSMCT.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkSMCT);

Actor *ActorProfileUnkSMCT::Create() {
    return new(HeapIndex_2) ActorUnkSMCT();
}

ActorProfileUnkSMCT::ActorProfileUnkSMCT() :
    ActorProfile(ActorId_SMCT) {}

ActorUnkSMCT::ActorUnkSMCT() {}

void ActorUnkSMCT::func_ov091_02169c9c(void) {}
void ActorUnkSMCT::func_ov091_02169cd8(void) {}

ActorUnkSMCT::~ActorUnkSMCT() {}
ActorProfileUnkSMCT::~ActorProfileUnkSMCT() {}
