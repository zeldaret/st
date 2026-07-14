//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFWI.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkEFWI);

Actor *ActorProfileUnkEFWI::Create() {
    return new(HeapIndex_2) ActorUnkEFWI();
}

ActorProfileUnkEFWI::ActorProfileUnkEFWI() :
    ActorProfile_Derived1(ActorId_EFWI) {}

ActorUnkEFWI::ActorUnkEFWI() {}

void ActorUnkEFWI::func_ov098_02181738(void) {}
void ActorUnkEFWI::func_ov098_021817d4(void) {}

ActorUnkEFWI::~ActorUnkEFWI() {}
ActorProfileUnkEFWI::~ActorProfileUnkEFWI() {}
