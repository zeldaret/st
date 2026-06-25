//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMVS.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMVS);

Actor *ActorProfileUnkRMVS::Create() {
    return new(HeapIndex_2) ActorUnkRMVS();
}

ActorProfileUnkRMVS::ActorProfileUnkRMVS() :
    ActorProfile_Derived1(ActorId_RMVS) {}

ActorUnkRMVS::ActorUnkRMVS() {}

void ActorUnkRMVS::func_ov059_02162008(void) {}
void ActorUnkRMVS::func_ov059_021620a8(void) {}
void ActorUnkRMVS::func_ov059_021620d4(void) {}
void ActorUnkRMVS::func_ov059_02162124(void) {}

ActorUnkRMVS::~ActorUnkRMVS() {}
ActorProfileUnkRMVS::~ActorProfileUnkRMVS() {}
