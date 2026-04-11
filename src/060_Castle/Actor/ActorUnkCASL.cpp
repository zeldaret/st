//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCASL.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkCASL sActorProfileUnkCASL;

ARM ActorProfileUnkCASL *ActorProfileUnkCASL::GetProfile() {
    return &sActorProfileUnkCASL;
}

ARM Actor *ActorProfileUnkCASL::Create() {
    return new(HeapIndex_2) ActorUnkCASL();
}

ARM ActorProfileUnkCASL::ActorProfileUnkCASL() :
    ActorProfile_Derived1(ActorId_Castle) {}

ARM ActorUnkCASL::ActorUnkCASL() {}

ARM void ActorUnkCASL::func_ov060_0215eafc(void) {}
ARM void ActorUnkCASL::func_ov060_0215eb10(void) {}
ARM void ActorUnkCASL::func_ov060_0215eb24(void) {}

ARM ActorUnkCASL::~ActorUnkCASL() {}
ARM ActorProfileUnkCASL::~ActorProfileUnkCASL() {}
