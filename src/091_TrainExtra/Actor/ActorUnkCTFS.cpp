//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCTFS.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkCTFS sActorProfileUnkCTFS;

ARM ActorProfileUnkCTFS *ActorProfileUnkCTFS::GetProfile() {
    return &sActorProfileUnkCTFS;
}

ARM Actor *ActorProfileUnkCTFS::Create() {
    return new(HeapIndex_2) ActorUnkCTFS();
}

ARM ActorProfileUnkCTFS::ActorProfileUnkCTFS() :
    ActorProfile_Derived1(ActorId_CTFS) {}

ARM ActorUnkCTFS::ActorUnkCTFS() {}

ARM void ActorUnkCTFS::func_ov091_0216a194(void) {}
ARM void ActorUnkCTFS::func_ov091_0216a1a8(void) {}
ARM void ActorUnkCTFS::func_ov091_0216a1d8(void) {}
ARM void ActorUnkCTFS::func_ov091_0216a330(void) {}
ARM void ActorUnkCTFS::func_ov091_0216a344(void) {}
ARM void ActorUnkCTFS::func_ov091_0216a3e4(void) {}
ARM void ActorUnkCTFS::func_ov091_0216a4a4(void) {}
ARM void ActorUnkCTFS::func_ov091_0216a584(void) {}
ARM void ActorUnkCTFS::func_ov091_0216a608(void) {}
ARM void ActorUnkCTFS::func_ov091_0216a638(void) {}
ARM void ActorUnkCTFS::func_ov091_0216a6a4(void) {}
ARM void ActorUnkCTFS::func_ov091_0216a75c(void) {}
ARM void ActorUnkCTFS::func_ov091_0216a868(void) {}
ARM void ActorUnkCTFS::func_ov091_0216a87c(void) {}
ARM void ActorUnkCTFS::func_ov091_0216ab2c(void) {}
ARM void ActorUnkCTFS::func_ov091_0216ab40(void) {}
ARM void ActorUnkCTFS::func_ov091_0216adcc(void) {}
ARM void ActorUnkCTFS::func_ov091_0216ae74(void) {}
ARM void ActorUnkCTFS::func_ov091_0216af50(void) {}
ARM void ActorUnkCTFS::func_ov091_0216b01c(void) {}
ARM void ActorUnkCTFS::func_ov091_0216b100(void) {}
ARM void ActorUnkCTFS::func_ov091_0216b144(void) {}
ARM void ActorUnkCTFS::func_ov091_0216b1c8(void) {}
ARM void ActorUnkCTFS::func_ov091_0216b1d4(void) {}
ARM void ActorUnkCTFS::func_ov091_0216b228(void) {}
ARM void ActorUnkCTFS::func_ov091_0216b250(void) {}
ARM void ActorUnkCTFS::func_ov091_0216b274(void) {}
ARM void ActorUnkCTFS::func_ov091_0216b2e4(void) {}

ARM ActorUnkCTFS::~ActorUnkCTFS() {}
ARM ActorProfileUnkCTFS::~ActorProfileUnkCTFS() {}
