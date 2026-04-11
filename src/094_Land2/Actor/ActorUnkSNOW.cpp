//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSNOW.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkSNOW sActorProfileUnkSNOW;

ARM ActorProfileUnkSNOW *ActorProfileUnkSNOW::GetProfile() {
    return &sActorProfileUnkSNOW;
}

ARM Actor *ActorProfileUnkSNOW::Create() {
    return new(HeapIndex_2) ActorUnkSNOW();
}

ARM ActorProfileUnkSNOW::ActorProfileUnkSNOW() :
    ActorProfile(ActorId_SNOW) {}

ARM ActorUnkSNOW::ActorUnkSNOW() {}

ARM void ActorUnkSNOW::func_ov094_0216db6c(void) {}
ARM void ActorUnkSNOW::func_ov094_0216dc1c(void) {}
ARM void ActorUnkSNOW::func_ov094_0216dc4c(void) {}
ARM void ActorUnkSNOW::func_ov094_0216dd08(void) {}
ARM void ActorUnkSNOW::func_ov094_0216dd1c(void) {}
ARM void ActorUnkSNOW::func_ov094_0216dd30(void) {}
ARM void ActorUnkSNOW::func_ov094_0216dd98(void) {}
ARM void ActorUnkSNOW::func_ov094_0216dda8(void) {}

ARM ActorUnkSNOW::~ActorUnkSNOW() {}
ARM ActorProfileUnkSNOW::~ActorProfileUnkSNOW() {}
