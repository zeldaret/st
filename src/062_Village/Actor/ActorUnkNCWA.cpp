//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNCWA.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkNCWA);

ARM Actor *ActorProfileUnkNCWA::Create() {
    return new(HeapIndex_2) ActorUnkNCWA();
}

ARM ActorProfileUnkNCWA::ActorProfileUnkNCWA() :
    ActorProfile_Derived1(ActorId_NCWA) {}

ARM ActorUnkNCWA::ActorUnkNCWA() {}

ARM void ActorUnkNCWA::func_ov062_0215a084(void) {}
ARM void ActorUnkNCWA::func_ov062_0215a220(void) {}
ARM void ActorUnkNCWA::func_ov062_0215a238(void) {}
ARM void ActorUnkNCWA::func_ov062_0215a28c(void) {}

ARM ActorUnkNCWA::~ActorUnkNCWA() {}
ARM ActorProfileUnkNCWA::~ActorProfileUnkNCWA() {}
