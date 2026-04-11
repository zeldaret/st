//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPLSR.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkPLSR sActorProfileUnkPLSR;

ARM ActorProfileUnkPLSR *ActorProfileUnkPLSR::GetProfile() {
    return &sActorProfileUnkPLSR;
}

ARM Actor *ActorProfileUnkPLSR::Create() {
    return new(HeapIndex_2) ActorUnkPLSR();
}

ARM ActorProfileUnkPLSR::ActorProfileUnkPLSR() :
    ActorProfile_Derived1(ActorId_PLSR) {}

ARM ActorUnkPLSR::ActorUnkPLSR() {}

ARM void ActorUnkPLSR::func_ov038_0211f288(void) {}
ARM void ActorUnkPLSR::func_ov038_0211f740(void) {}
ARM void ActorUnkPLSR::func_ov038_0211f908(void) {}
ARM void ActorUnkPLSR::func_ov038_0211fcf0(void) {}
ARM void ActorUnkPLSR::func_ov038_02120478(void) {}
ARM void ActorUnkPLSR::func_ov038_02120654(void) {}
ARM void ActorUnkPLSR::func_ov038_0212072c(void) {}
ARM void ActorUnkPLSR::func_ov038_02120824(void) {}
ARM void ActorUnkPLSR::func_ov038_02120894(void) {}
ARM void ActorUnkPLSR::func_ov038_021208c4(void) {}

ARM ActorUnkPLSR::~ActorUnkPLSR() {}
ARM ActorProfileUnkPLSR::~ActorProfileUnkPLSR() {}
