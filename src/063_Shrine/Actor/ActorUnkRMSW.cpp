//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSW.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMSW);

Actor *ActorProfileUnkRMSW::Create() {
    return new(HeapIndex_2) ActorUnkRMSW();
}

ActorProfileUnkRMSW::ActorProfileUnkRMSW() :
    ActorProfile_Derived1(ActorId_RMSW) {}

ActorUnkRMSW::ActorUnkRMSW() {}

void ActorUnkRMSW::func_ov063_0215c05c(void) {}
void ActorUnkRMSW::func_ov063_0215c0b0(void) {}
void ActorUnkRMSW::func_ov063_0215c0c8(void) {}
void ActorUnkRMSW::func_ov063_0215c0dc(void) {}
void ActorUnkRMSW::func_ov063_0215c11c(void) {}

ActorUnkRMSW::~ActorUnkRMSW() {}
ActorProfileUnkRMSW::~ActorProfileUnkRMSW() {}
