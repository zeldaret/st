//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSS.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMSS);

Actor *ActorProfileUnkRMSS::Create() {
    return new(HeapIndex_2) ActorUnkRMSS();
}

ActorProfileUnkRMSS::ActorProfileUnkRMSS() :
    ActorProfile_Derived1(ActorId_RMSS) {}

ActorUnkRMSS::ActorUnkRMSS() {}

void ActorUnkRMSS::func_ov063_0215c5fc(void) {}
void ActorUnkRMSS::func_ov063_0215c63c(void) {}

ActorUnkRMSS::~ActorUnkRMSS() {}
ActorProfileUnkRMSS::~ActorProfileUnkRMSS() {}
