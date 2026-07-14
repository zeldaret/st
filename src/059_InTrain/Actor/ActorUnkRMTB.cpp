//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMTB.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMTB);

Actor *ActorProfileUnkRMTB::Create() {
    return new(HeapIndex_2) ActorUnkRMTB();
}

ActorProfileUnkRMTB::ActorProfileUnkRMTB() :
    ActorProfile_Derived1(ActorId_RMTB) {}

ActorUnkRMTB::ActorUnkRMTB() {}

void ActorUnkRMTB::func_ov059_02162bf0(void) {}

ActorUnkRMTB::~ActorUnkRMTB() {}
ActorProfileUnkRMTB::~ActorProfileUnkRMTB() {}
