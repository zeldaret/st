//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMTB.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMTB);

ARM Actor *ActorProfileUnkRMTB::Create() {
    return new(HeapIndex_2) ActorUnkRMTB();
}

ARM ActorProfileUnkRMTB::ActorProfileUnkRMTB() :
    ActorProfile_Derived1(ActorId_RMTB) {}

ARM ActorUnkRMTB::ActorUnkRMTB() {}

ARM void ActorUnkRMTB::func_ov059_02162bf0(void) {}

ARM ActorUnkRMTB::~ActorUnkRMTB() {}
ARM ActorProfileUnkRMTB::~ActorProfileUnkRMTB() {}
