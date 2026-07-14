//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRML2.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRML2);

Actor *ActorProfileUnkRML2::Create() {
    return new(HeapIndex_2) ActorUnkRML2();
}

ActorProfileUnkRML2::ActorProfileUnkRML2() :
    ActorProfile_Derived1(ActorId_RML2) {}

ActorUnkRML2::ActorUnkRML2() {}

void ActorUnkRML2::func_ov062_02158190(void) {}

ActorUnkRML2::~ActorUnkRML2() {}
ActorProfileUnkRML2::~ActorProfileUnkRML2() {}
