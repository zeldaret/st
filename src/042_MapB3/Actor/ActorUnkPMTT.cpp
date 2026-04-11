//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPMTT.hpp"
#include "System/SysNew.hpp"
#include "versions.h"

#if IS_JP

static ActorProfileUnkPMTT sActorProfileUnkPMTT;

ARM ActorProfileUnkPMTT *ActorProfileUnkPMTT::GetProfile() {
    return &sActorProfileUnkPMTT;
}

ARM Actor *ActorProfileUnkPMTT::Create() {
    return new(HeapIndex_2) ActorUnkPMTT();
}

ARM ActorProfileUnkPMTT::ActorProfileUnkPMTT() :
    ActorProfile(ActorId_PMTT) {}

ARM ActorUnkPMTT::ActorUnkPMTT() {}

ARM void ActorUnkPMTT::func_ov042_0212d8a4(void) {}
ARM void ActorUnkPMTT::func_ov042_0212d8cc(void) {}
ARM void ActorUnkPMTT::func_ov042_0212d904(void) {}
ARM void ActorUnkPMTT::func_ov042_0212d930(void) {}
ARM void ActorUnkPMTT::func_ov042_0212dc78(void) {}
ARM void ActorUnkPMTT::func_ov042_0212dc8c(void) {}
ARM void ActorUnkPMTT::func_ov042_0212de64(void) {}
ARM void ActorUnkPMTT::func_ov042_0212df28(void) {}
ARM void ActorUnkPMTT::func_ov042_0212df3c(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e080(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e144(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e19c(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e1f4(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e2a0(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e414(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e4d8(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e4f8(void) {}
ARM void ActorUnkPMTT::func_ov042_0212e53c(void) {}

ARM ActorUnkPMTT::~ActorUnkPMTT() {}
ARM ActorProfileUnkPMTT::~ActorProfileUnkPMTT() {}

#endif
