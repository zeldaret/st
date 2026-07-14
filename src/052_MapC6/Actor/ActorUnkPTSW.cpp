//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPTSW.hpp"
#include "System/SysNew.hpp"
#include "versions.h"

#if IS_JP

DECL_PROFILE(ActorProfileUnkPTSW);

Actor *ActorProfileUnkPTSW::Create() {
    return new(HeapIndex_2) ActorUnkPTSW();
}

ActorProfileUnkPTSW::ActorProfileUnkPTSW() :
    ActorProfile(ActorId_PTSW) {}

ActorUnkPTSW::ActorUnkPTSW() {}

void ActorUnkPTSW::func_ov052_0213761c(void) {}
void ActorUnkPTSW::func_ov052_02137650(void) {}
void ActorUnkPTSW::func_ov052_02137684(void) {}
void ActorUnkPTSW::func_ov052_02137698(void) {}

ActorUnkPTSW::~ActorUnkPTSW() {}
ActorProfileUnkPTSW::~ActorProfileUnkPTSW() {}

#endif
