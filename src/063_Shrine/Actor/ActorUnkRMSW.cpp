//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSW.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMSW);

ARM Actor *ActorProfileUnkRMSW::Create() {
    return new(HeapIndex_2) ActorUnkRMSW();
}

ARM ActorProfileUnkRMSW::ActorProfileUnkRMSW() :
    ActorProfile_Derived1(ActorId_RMSW) {}

ARM ActorUnkRMSW::ActorUnkRMSW() {}

ARM void ActorUnkRMSW::func_ov063_0215c05c(void) {}
ARM void ActorUnkRMSW::func_ov063_0215c0b0(void) {}
ARM void ActorUnkRMSW::func_ov063_0215c0c8(void) {}
ARM void ActorUnkRMSW::func_ov063_0215c0dc(void) {}
ARM void ActorUnkRMSW::func_ov063_0215c11c(void) {}

ARM ActorUnkRMSW::~ActorUnkRMSW() {}
ARM ActorProfileUnkRMSW::~ActorProfileUnkRMSW() {}
