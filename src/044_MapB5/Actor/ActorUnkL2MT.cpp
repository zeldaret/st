//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkL2MT.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkL2MT);

Actor *ActorProfileUnkL2MT::Create() {
    return new(HeapIndex_2) ActorUnkL2MT();
}

ActorProfileUnkL2MT::ActorProfileUnkL2MT() :
    ActorProfile_Derived1(ActorId_L2MT) {}

ActorUnkL2MT::ActorUnkL2MT() {}

void ActorUnkL2MT::func_ov044_0212c954(void) {}
void ActorUnkL2MT::func_ov044_0212c974(void) {}
void ActorUnkL2MT::func_ov044_0212c978(void) {}

ActorUnkL2MT::~ActorUnkL2MT() {}
ActorProfileUnkL2MT::~ActorProfileUnkL2MT() {}
