//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSS.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMSS sActorProfileUnkRMSS;

ARM ActorProfileUnkRMSS *ActorProfileUnkRMSS::GetProfile() {
    return &sActorProfileUnkRMSS;
}

ARM Actor *ActorProfileUnkRMSS::Create() {
    return new(HeapIndex_2) ActorUnkRMSS();
}

ARM ActorProfileUnkRMSS::ActorProfileUnkRMSS() :
    ActorProfile_Derived1(ActorId_RMSS) {}

ARM ActorUnkRMSS::ActorUnkRMSS() {}

ARM void ActorUnkRMSS::func_ov063_0215c5fc(void) {}
ARM void ActorUnkRMSS::func_ov063_0215c63c(void) {}

ARM ActorUnkRMSS::~ActorUnkRMSS() {}
ARM ActorProfileUnkRMSS::~ActorProfileUnkRMSS() {}
