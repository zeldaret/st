//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTMNC.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkTMNC sActorProfileUnkTMNC;

ARM ActorProfileUnkTMNC *ActorProfileUnkTMNC::GetProfile() {
    return &sActorProfileUnkTMNC;
}

ARM Actor *ActorProfileUnkTMNC::Create() {
    return new(HeapIndex_2) ActorUnkTMNC();
}

ARM ActorProfileUnkTMNC::ActorProfileUnkTMNC() :
    ActorProfile_Derived1(ActorId_TMNC) {}

ARM ActorUnkTMNC::ActorUnkTMNC() {}

ARM void ActorUnkTMNC::func_ov058_0214dde0(void) {}
ARM void ActorUnkTMNC::func_ov058_0214de70(void) {}

ARM ActorUnkTMNC::~ActorUnkTMNC() {}
ARM ActorProfileUnkTMNC::~ActorProfileUnkTMNC() {}
