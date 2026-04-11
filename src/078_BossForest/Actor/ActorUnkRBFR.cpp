//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRBFR.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRBFR sActorProfileUnkRBFR;

ARM ActorProfileUnkRBFR *ActorProfileUnkRBFR::GetProfile() {
    return &sActorProfileUnkRBFR;
}

ARM Actor *ActorProfileUnkRBFR::Create() {
    return new(HeapIndex_2) ActorUnkRBFR();
}

ARM ActorProfileUnkRBFR::ActorProfileUnkRBFR() :
    ActorProfile_Derived1(ActorId_RBFR) {}

ARM ActorUnkRBFR::ActorUnkRBFR() {}

ARM void ActorUnkRBFR::func_ov078_0215ce24(void) {}
ARM void ActorUnkRBFR::func_ov078_0215ce38(void) {}
ARM void ActorUnkRBFR::func_ov078_0215ced0(void) {}
ARM void ActorUnkRBFR::func_ov078_0215cee8(void) {}
ARM void ActorUnkRBFR::func_ov078_0215cefc(void) {}
ARM void ActorUnkRBFR::func_ov078_0215cf7c(void) {}

ARM ActorUnkRBFR::~ActorUnkRBFR() {}
ARM ActorProfileUnkRBFR::~ActorProfileUnkRBFR() {}
