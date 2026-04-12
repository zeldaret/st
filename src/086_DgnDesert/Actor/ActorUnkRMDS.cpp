//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMDS.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMDS);

ARM Actor *ActorProfileUnkRMDS::Create() {
    return new(HeapIndex_2) ActorUnkRMDS();
}

ARM ActorProfileUnkRMDS::ActorProfileUnkRMDS() :
    ActorProfile_Derived1(ActorId_RMDS) {}

ARM ActorUnkRMDS::ActorUnkRMDS() {}

ARM void ActorUnkRMDS::func_ov086_0215db44(void) {}
ARM void ActorUnkRMDS::func_ov086_0215dbb0(void) {}
ARM void ActorUnkRMDS::func_ov086_0215dbb4(void) {}
ARM void ActorUnkRMDS::func_ov086_0215dbc8(void) {}
ARM void ActorUnkRMDS::func_ov086_0215dbdc(void) {}
ARM void ActorUnkRMDS::func_ov086_0215dbe8(void) {}

ARM ActorUnkRMDS::~ActorUnkRMDS() {}
ARM ActorProfileUnkRMDS::~ActorProfileUnkRMDS() {}
