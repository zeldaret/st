//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAWA.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkCAWA sActorProfileUnkCAWA;

ARM ActorProfileUnkCAWA *ActorProfileUnkCAWA::GetProfile() {
    return &sActorProfileUnkCAWA;
}

ARM Actor *ActorProfileUnkCAWA::Create() {
    return new(HeapIndex_2) ActorUnkCAWA();
}

ARM ActorProfileUnkCAWA::ActorProfileUnkCAWA() :
    ActorProfile_Derived1(ActorId_CAWA) {}

ARM ActorUnkCAWA::ActorUnkCAWA() {}

ARM void ActorUnkCAWA::func_ov061_02158b88(void) {}
ARM void ActorUnkCAWA::func_ov061_02158ba8(void) {}
ARM void ActorUnkCAWA::func_ov061_02158ccc(void) {}
ARM void ActorUnkCAWA::func_ov061_02158cf8(void) {}
ARM void ActorUnkCAWA::func_ov061_02158d4c(void) {}

ARM ActorUnkCAWA::~ActorUnkCAWA() {}
ARM ActorProfileUnkCAWA::~ActorProfileUnkCAWA() {}
