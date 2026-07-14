//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMTE.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMTE);

Actor *ActorProfileUnkRMTE::Create() {
    return new(HeapIndex_2) ActorUnkRMTE();
}

ActorProfileUnkRMTE::ActorProfileUnkRMTE() :
    ActorProfile_Derived1(ActorId_RMTE) {}

ActorUnkRMTE::ActorUnkRMTE() {}

void ActorUnkRMTE::func_ov065_021594e0(void) {}
void ActorUnkRMTE::func_ov065_0215964c(void) {}

ActorUnkRMTE::~ActorUnkRMTE() {}
ActorProfileUnkRMTE::~ActorProfileUnkRMTE() {}
