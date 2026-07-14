//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMS4.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMS4);

Actor *ActorProfileUnkRMS4::Create() {
    return new(HeapIndex_2) ActorUnkRMS4();
}

ActorProfileUnkRMS4::ActorProfileUnkRMS4() :
    ActorProfile_Derived1(ActorId_RMS4) {}

ActorUnkRMS4::ActorUnkRMS4() {}

void ActorUnkRMS4::func_ov065_02159298(void) {}

ActorUnkRMS4::~ActorUnkRMS4() {}
ActorProfileUnkRMS4::~ActorProfileUnkRMS4() {}
