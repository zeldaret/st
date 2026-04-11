//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkE3LV.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkE3LV sActorProfileUnkE3LV;

ARM ActorProfileUnkE3LV *ActorProfileUnkE3LV::GetProfile() {
    return &sActorProfileUnkE3LV;
}

ARM Actor *ActorProfileUnkE3LV::Create() {
    return new(HeapIndex_2) ActorUnkE3LV();
}

ARM ActorProfileUnkE3LV::ActorProfileUnkE3LV() :
    ActorProfile_Derived1(ActorId_E3LV) {}

ARM ActorUnkE3LV::ActorUnkE3LV() {}

ARM void ActorUnkE3LV::func_ov099_02181d2c(void) {}
ARM void ActorUnkE3LV::func_ov099_02181dd8(void) {}
ARM void ActorUnkE3LV::func_ov099_02181e04(void) {}
ARM void ActorUnkE3LV::func_ov099_02181e18(void) {}

ARM ActorUnkE3LV::~ActorUnkE3LV() {}
ARM ActorProfileUnkE3LV::~ActorProfileUnkE3LV() {}
