//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCASL.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkCASL);

Actor *ActorProfileUnkCASL::Create() {
    return new(HeapIndex_2) ActorUnkCASL();
}

ActorProfileUnkCASL::ActorProfileUnkCASL() :
    ActorProfile_Derived1(ActorId_Castle) {}

ActorUnkCASL::ActorUnkCASL() {}

void ActorUnkCASL::func_ov060_0215eafc(void) {}
void ActorUnkCASL::func_ov060_0215eb10(void) {}
void ActorUnkCASL::func_ov060_0215eb24(void) {}

ActorUnkCASL::~ActorUnkCASL() {}
ActorProfileUnkCASL::~ActorProfileUnkCASL() {}
