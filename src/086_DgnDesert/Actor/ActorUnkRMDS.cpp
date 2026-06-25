//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMDS.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMDS);

Actor *ActorProfileUnkRMDS::Create() {
    return new(HeapIndex_2) ActorUnkRMDS();
}

ActorProfileUnkRMDS::ActorProfileUnkRMDS() :
    ActorProfile_Derived1(ActorId_RMDS) {}

ActorUnkRMDS::ActorUnkRMDS() {}

void ActorUnkRMDS::func_ov086_0215db44(void) {}
void ActorUnkRMDS::func_ov086_0215dbb0(void) {}
void ActorUnkRMDS::func_ov086_0215dbb4(void) {}
void ActorUnkRMDS::func_ov086_0215dbc8(void) {}
void ActorUnkRMDS::func_ov086_0215dbdc(void) {}
void ActorUnkRMDS::func_ov086_0215dbe8(void) {}

ActorUnkRMDS::~ActorUnkRMDS() {}
ActorProfileUnkRMDS::~ActorProfileUnkRMDS() {}
