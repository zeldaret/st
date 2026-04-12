//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTSMT.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkTSMT);

ARM Actor *ActorProfileUnkTSMT::Create() {
    return new(HeapIndex_2) ActorUnkTSMT();
}

ARM ActorProfileUnkTSMT::ActorProfileUnkTSMT() :
    ActorProfile(ActorId_TSMT) {}

ARM ActorUnkTSMT::ActorUnkTSMT() {}

ARM void ActorUnkTSMT::func_ov091_0216efc4(void) {}
ARM void ActorUnkTSMT::func_ov091_0216eff4(void) {}
ARM void ActorUnkTSMT::func_ov091_0216f024(void) {}
ARM void ActorUnkTSMT::func_ov091_0216f034(void) {}

ARM ActorUnkTSMT::~ActorUnkTSMT() {}
ARM ActorProfileUnkTSMT::~ActorProfileUnkTSMT() {}
