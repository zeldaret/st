//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNCWA.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkNCWA);

Actor *ActorProfileUnkNCWA::Create() {
    return new(HeapIndex_2) ActorUnkNCWA();
}

ActorProfileUnkNCWA::ActorProfileUnkNCWA() :
    ActorProfile_Derived1(ActorId_NCWA) {}

ActorUnkNCWA::ActorUnkNCWA() {}

void ActorUnkNCWA::func_ov062_0215a084(void) {}
void ActorUnkNCWA::func_ov062_0215a220(void) {}
void ActorUnkNCWA::func_ov062_0215a238(void) {}
void ActorUnkNCWA::func_ov062_0215a28c(void) {}

ActorUnkNCWA::~ActorUnkNCWA() {}
ActorProfileUnkNCWA::~ActorProfileUnkNCWA() {}
