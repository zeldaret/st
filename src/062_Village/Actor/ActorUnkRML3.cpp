//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRML3.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRML3);

ARM Actor *ActorProfileUnkRML3::Create() {
    return new(HeapIndex_2) ActorUnkRML3();
}

ARM ActorProfileUnkRML3::ActorProfileUnkRML3() :
    ActorProfile_Derived1(ActorId_RML3) {}

ARM ActorUnkRML3::ActorUnkRML3() {}

ARM void ActorUnkRML3::func_ov062_021582b4(void) {}

ARM ActorUnkRML3::~ActorUnkRML3() {}
ARM ActorProfileUnkRML3::~ActorProfileUnkRML3() {}
