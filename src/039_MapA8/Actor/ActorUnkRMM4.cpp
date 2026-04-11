//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMM4.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMM4 sActorProfileUnkRMM4;

ARM ActorProfileUnkRMM4 *ActorProfileUnkRMM4::GetProfile() {
    return &sActorProfileUnkRMM4;
}

ARM Actor *ActorProfileUnkRMM4::Create() {
    return new(HeapIndex_2) ActorUnkRMM4();
}

ARM ActorProfileUnkRMM4::ActorProfileUnkRMM4() :
    ActorProfile_Derived1(ActorId_RMM4) {}

ARM ActorUnkRMM4::ActorUnkRMM4() {}

ARM void ActorUnkRMM4::func_ov039_0211acd0(void) {}
ARM void ActorUnkRMM4::func_ov039_0211ace4(void) {}
ARM void ActorUnkRMM4::func_ov039_0211ad08(void) {}
ARM void ActorUnkRMM4::func_ov039_0211ad1c(void) {}
ARM void ActorUnkRMM4::func_ov039_0211b078(void) {}
ARM void ActorUnkRMM4::func_ov039_0211b104(void) {}
ARM void ActorUnkRMM4::func_ov039_0211b1ac(void) {}
ARM void ActorUnkRMM4::func_ov039_0211b1c0(void) {}
ARM void ActorUnkRMM4::func_ov039_0211b1e0(void) {}
ARM void ActorUnkRMM4::func_ov039_0211b264(void) {}
ARM void ActorUnkRMM4::func_ov039_0211b310(void) {}
ARM void ActorUnkRMM4::func_ov039_0211b4a4(void) {}

ARM ActorUnkRMM4::~ActorUnkRMM4() {}
ARM ActorProfileUnkRMM4::~ActorProfileUnkRMM4() {}
