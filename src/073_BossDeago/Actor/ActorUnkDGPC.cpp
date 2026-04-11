//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDGPC.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkDGPC sActorProfileUnkDGPC;

ARM ActorProfileUnkDGPC *ActorProfileUnkDGPC::GetProfile() {
    return &sActorProfileUnkDGPC;
}

ARM Actor *ActorProfileUnkDGPC::Create() {
    return new(HeapIndex_2) ActorUnkDGPC();
}

ARM ActorProfileUnkDGPC::ActorProfileUnkDGPC() :
    ActorProfile_Derived1(ActorId_DGPC) {}

ARM ActorUnkDGPC::ActorUnkDGPC() {}

ARM void ActorUnkDGPC::func_ov073_021632cc(void) {}
ARM void ActorUnkDGPC::func_ov073_0216330c(void) {}
ARM void ActorUnkDGPC::func_ov073_0216333c(void) {}
ARM void ActorUnkDGPC::func_ov073_02163350(void) {}
ARM void ActorUnkDGPC::func_ov073_02163368(void) {}
ARM void ActorUnkDGPC::func_ov073_02163388(void) {}
ARM void ActorUnkDGPC::func_ov073_021633c0(void) {}
ARM void ActorUnkDGPC::func_ov073_021633c8(void) {}

ARM ActorUnkDGPC::~ActorUnkDGPC() {}
ARM ActorProfileUnkDGPC::~ActorProfileUnkDGPC() {}
