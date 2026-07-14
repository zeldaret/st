//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTMNC.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkTMNC);

Actor *ActorProfileUnkTMNC::Create() {
    return new(HeapIndex_2) ActorUnkTMNC();
}

ActorProfileUnkTMNC::ActorProfileUnkTMNC() :
    ActorProfile_Derived1(ActorId_TMNC) {}

ActorUnkTMNC::ActorUnkTMNC() {}

void ActorUnkTMNC::func_ov058_0214dde0(void) {}
void ActorUnkTMNC::func_ov058_0214de70(void) {}

ActorUnkTMNC::~ActorUnkTMNC() {}
ActorProfileUnkTMNC::~ActorProfileUnkTMNC() {}
