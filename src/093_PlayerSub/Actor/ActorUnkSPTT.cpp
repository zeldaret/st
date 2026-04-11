//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSPTT.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkSPTT sActorProfileUnkSPTT;

ARM ActorProfileUnkSPTT *ActorProfileUnkSPTT::GetProfile() {
    return &sActorProfileUnkSPTT;
}

ARM Actor *ActorProfileUnkSPTT::Create() {
    return new(HeapIndex_2) ActorUnkSPTT();
}

ARM ActorProfileUnkSPTT::ActorProfileUnkSPTT() :
    ActorProfile(ActorId_SPTT) {}

ARM ActorUnkSPTT::ActorUnkSPTT() {}

ARM void ActorUnkSPTT::func_ov093_02176c70(void) {}
ARM void ActorUnkSPTT::func_ov093_02176e18(void) {}
ARM void ActorUnkSPTT::func_ov093_02176ea4(void) {}
ARM void ActorUnkSPTT::func_ov093_02176ef8(void) {}
ARM void ActorUnkSPTT::func_ov093_02176fa8(void) {}

ARM ActorUnkSPTT::~ActorUnkSPTT() {}
ARM ActorProfileUnkSPTT::~ActorProfileUnkSPTT() {}
