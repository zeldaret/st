//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSF.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMSF sActorProfileUnkRMSF;

ARM ActorProfileUnkRMSF *ActorProfileUnkRMSF::GetProfile() {
    return &sActorProfileUnkRMSF;
}

ARM Actor *ActorProfileUnkRMSF::Create() {
    return new(HeapIndex_2) ActorUnkRMSF();
}

ARM ActorProfileUnkRMSF::ActorProfileUnkRMSF() :
    ActorProfile_Derived1(ActorId_RMSF) {}

ARM ActorUnkRMSF::ActorUnkRMSF() {}

ARM void ActorUnkRMSF::func_ov063_0215c250(void) {}
ARM void ActorUnkRMSF::func_ov063_0215c290(void) {}

ARM ActorUnkRMSF::~ActorUnkRMSF() {}
ARM ActorProfileUnkRMSF::~ActorProfileUnkRMSF() {}
