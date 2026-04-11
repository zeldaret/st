//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMTR.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMTR sActorProfileUnkRMTR;

ARM ActorProfileUnkRMTR *ActorProfileUnkRMTR::GetProfile() {
    return &sActorProfileUnkRMTR;
}

ARM Actor *ActorProfileUnkRMTR::Create() {
    return new(HeapIndex_2) ActorUnkRMTR();
}

ARM ActorProfileUnkRMTR::ActorProfileUnkRMTR() :
    ActorProfile_Derived1(ActorId_RMTR) {}

ARM ActorUnkRMTR::ActorUnkRMTR() {}

ARM void ActorUnkRMTR::func_ov059_02162a9c(void) {}
ARM void ActorUnkRMTR::func_ov059_02162ad4(void) {}
ARM void ActorUnkRMTR::func_ov059_02162af4(void) {}

ARM ActorUnkRMTR::~ActorUnkRMTR() {}
ARM ActorProfileUnkRMTR::~ActorProfileUnkRMTR() {}
