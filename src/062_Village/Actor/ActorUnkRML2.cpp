//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRML2.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRML2);

ARM Actor *ActorProfileUnkRML2::Create() {
    return new(HeapIndex_2) ActorUnkRML2();
}

ARM ActorProfileUnkRML2::ActorProfileUnkRML2() :
    ActorProfile_Derived1(ActorId_RML2) {}

ARM ActorUnkRML2::ActorUnkRML2() {}

ARM void ActorUnkRML2::func_ov062_02158190(void) {}

ARM ActorUnkRML2::~ActorUnkRML2() {}
ARM ActorProfileUnkRML2::~ActorProfileUnkRML2() {}
