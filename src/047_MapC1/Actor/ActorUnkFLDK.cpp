//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFLDK.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkFLDK);

Actor *ActorProfileUnkFLDK::Create() {
    return new(HeapIndex_2) ActorUnkFLDK();
}

ActorProfileUnkFLDK::ActorProfileUnkFLDK() :
    ActorProfile(ActorId_FLDK) {}

ActorUnkFLDK::ActorUnkFLDK() {}

void ActorUnkFLDK::func_ov047_021354a4(void) {}
void ActorUnkFLDK::func_ov047_02135570(void) {}

ActorUnkFLDK::~ActorUnkFLDK() {}
ActorProfileUnkFLDK::~ActorProfileUnkFLDK() {}
