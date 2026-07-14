//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkITSC.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkITSC);

Actor *ActorProfileUnkITSC::Create() {
    return new(HeapIndex_2) ActorUnkITSC();
}

ActorProfileUnkITSC::ActorProfileUnkITSC() :
    ActorProfile_Derived1(ActorId_ITSC) {}

ActorUnkITSC::ActorUnkITSC() {}

void ActorUnkITSC::func_ov084_02159dd8(void) {}
void ActorUnkITSC::func_ov084_02159dfc(void) {}
void ActorUnkITSC::func_ov084_0215a0dc(void) {}
void ActorUnkITSC::func_ov084_0215a118(void) {}
void ActorUnkITSC::func_ov084_0215a280(void) {}

ActorUnkITSC::~ActorUnkITSC() {}
ActorProfileUnkITSC::~ActorProfileUnkITSC() {}
