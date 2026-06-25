//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkLOCK.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkLOCK);

Actor *ActorProfileUnkLOCK::Create() {
    return new(HeapIndex_2) ActorUnkLOCK();
}

ActorProfileUnkLOCK::ActorProfileUnkLOCK() :
    ActorProfile(ActorId_LOCK) {}

ActorUnkLOCK::ActorUnkLOCK() {}

void ActorUnkLOCK::func_ov094_02166128(void) {}
void ActorUnkLOCK::func_ov094_0216613c(void) {}
void ActorUnkLOCK::func_ov094_02166144(void) {}
void ActorUnkLOCK::func_ov094_02166150(void) {}
void ActorUnkLOCK::func_ov094_02166154(void) {}

ActorUnkLOCK::~ActorUnkLOCK() {}
ActorProfileUnkLOCK::~ActorProfileUnkLOCK() {}
