//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSPTT.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkSPTT);

Actor *ActorProfileUnkSPTT::Create() {
    return new(HeapIndex_2) ActorUnkSPTT();
}

ActorProfileUnkSPTT::ActorProfileUnkSPTT() :
    ActorProfile(ActorId_SPTT) {}

ActorUnkSPTT::ActorUnkSPTT() {}

void ActorUnkSPTT::func_ov093_02176c70(void) {}
void ActorUnkSPTT::func_ov093_02176e18(void) {}
void ActorUnkSPTT::func_ov093_02176ea4(void) {}
void ActorUnkSPTT::func_ov093_02176ef8(void) {}
void ActorUnkSPTT::func_ov093_02176fa8(void) {}

ActorUnkSPTT::~ActorUnkSPTT() {}
ActorProfileUnkSPTT::~ActorProfileUnkSPTT() {}
