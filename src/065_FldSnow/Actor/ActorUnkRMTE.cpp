//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMTE.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMTE);

ARM Actor *ActorProfileUnkRMTE::Create() {
    return new(HeapIndex_2) ActorUnkRMTE();
}

ARM ActorProfileUnkRMTE::ActorProfileUnkRMTE() :
    ActorProfile_Derived1(ActorId_RMTE) {}

ARM ActorUnkRMTE::ActorUnkRMTE() {}

ARM void ActorUnkRMTE::func_ov065_021594e0(void) {}
ARM void ActorUnkRMTE::func_ov065_0215964c(void) {}

ARM ActorUnkRMTE::~ActorUnkRMTE() {}
ARM ActorProfileUnkRMTE::~ActorProfileUnkRMTE() {}
