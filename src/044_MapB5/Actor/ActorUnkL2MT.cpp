//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkL2MT.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkL2MT sActorProfileUnkL2MT;

ARM ActorProfileUnkL2MT *ActorProfileUnkL2MT::GetProfile() {
    return &sActorProfileUnkL2MT;
}

ARM Actor *ActorProfileUnkL2MT::Create() {
    return new(HeapIndex_2) ActorUnkL2MT();
}

ARM ActorProfileUnkL2MT::ActorProfileUnkL2MT() :
    ActorProfile_Derived1(ActorId_L2MT) {}

ARM ActorUnkL2MT::ActorUnkL2MT() {}

ARM void ActorUnkL2MT::func_ov044_0212c954(void) {}
ARM void ActorUnkL2MT::func_ov044_0212c974(void) {}
ARM void ActorUnkL2MT::func_ov044_0212c978(void) {}

ARM ActorUnkL2MT::~ActorUnkL2MT() {}
ARM ActorProfileUnkL2MT::~ActorProfileUnkL2MT() {}
