//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFSC.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkEFSC sActorProfileUnkEFSC;

ARM ActorProfileUnkEFSC *ActorProfileUnkEFSC::GetProfile() {
    return &sActorProfileUnkEFSC;
}

ARM Actor *ActorProfileUnkEFSC::Create() {
    return new(HeapIndex_2) ActorUnkEFSC();
}

ARM ActorProfileUnkEFSC::ActorProfileUnkEFSC() :
    ActorProfile_Derived1(ActorId_EFSC) {}

ARM ActorUnkEFSC::ActorUnkEFSC() {}

ARM void ActorUnkEFSC::func_ov086_0215b85c(void) {}
ARM void ActorUnkEFSC::func_ov086_0215b96c(void) {}
ARM void ActorUnkEFSC::func_ov086_0215b9d4(void) {}
ARM void ActorUnkEFSC::func_ov086_0215ba40(void) {}
ARM void ActorUnkEFSC::func_ov086_0215ba54(void) {}
ARM void ActorUnkEFSC::func_ov086_0215bb04(void) {}

ARM ActorUnkEFSC::~ActorUnkEFSC() {}
ARM ActorProfileUnkEFSC::~ActorProfileUnkEFSC() {}
