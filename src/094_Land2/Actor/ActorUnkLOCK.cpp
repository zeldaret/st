//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkLOCK.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkLOCK);

ARM Actor *ActorProfileUnkLOCK::Create() {
    return new(HeapIndex_2) ActorUnkLOCK();
}

ARM ActorProfileUnkLOCK::ActorProfileUnkLOCK() :
    ActorProfile(ActorId_LOCK) {}

ARM ActorUnkLOCK::ActorUnkLOCK() {}

ARM void ActorUnkLOCK::func_ov094_02166128(void) {}
ARM void ActorUnkLOCK::func_ov094_0216613c(void) {}
ARM void ActorUnkLOCK::func_ov094_02166144(void) {}
ARM void ActorUnkLOCK::func_ov094_02166150(void) {}
ARM void ActorUnkLOCK::func_ov094_02166154(void) {}

ARM ActorUnkLOCK::~ActorUnkLOCK() {}
ARM ActorProfileUnkLOCK::~ActorProfileUnkLOCK() {}
