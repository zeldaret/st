//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPTSW.hpp"
#include "System/SysNew.hpp"
#include "versions.h"

#if IS_JP

ARM DECL_PROFILE(ActorProfileUnkPTSW);

ARM Actor *ActorProfileUnkPTSW::Create() {
    return new(HeapIndex_2) ActorUnkPTSW();
}

ARM ActorProfileUnkPTSW::ActorProfileUnkPTSW() :
    ActorProfile(ActorId_PTSW) {}

ARM ActorUnkPTSW::ActorUnkPTSW() {}

ARM void ActorUnkPTSW::func_ov052_0213761c(void) {}
ARM void ActorUnkPTSW::func_ov052_02137650(void) {}
ARM void ActorUnkPTSW::func_ov052_02137684(void) {}
ARM void ActorUnkPTSW::func_ov052_02137698(void) {}

ARM ActorUnkPTSW::~ActorUnkPTSW() {}
ARM ActorProfileUnkPTSW::~ActorProfileUnkPTSW() {}

#endif
