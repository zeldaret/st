//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTSMT.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkTSMT);

Actor *ActorProfileUnkTSMT::Create() {
    return new(HeapIndex_2) ActorUnkTSMT();
}

ActorProfileUnkTSMT::ActorProfileUnkTSMT() :
    ActorProfile(ActorId_TSMT) {}

ActorUnkTSMT::ActorUnkTSMT() {}

void ActorUnkTSMT::func_ov091_0216efc4(void) {}
void ActorUnkTSMT::func_ov091_0216eff4(void) {}
void ActorUnkTSMT::func_ov091_0216f024(void) {}
void ActorUnkTSMT::func_ov091_0216f034(void) {}

ActorUnkTSMT::~ActorUnkTSMT() {}
ActorProfileUnkTSMT::~ActorProfileUnkTSMT() {}
