//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkITSC.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkITSC);

ARM Actor *ActorProfileUnkITSC::Create() {
    return new(HeapIndex_2) ActorUnkITSC();
}

ARM ActorProfileUnkITSC::ActorProfileUnkITSC() :
    ActorProfile_Derived1(ActorId_ITSC) {}

ARM ActorUnkITSC::ActorUnkITSC() {}

ARM void ActorUnkITSC::func_ov084_02159dd8(void) {}
ARM void ActorUnkITSC::func_ov084_02159dfc(void) {}
ARM void ActorUnkITSC::func_ov084_0215a0dc(void) {}
ARM void ActorUnkITSC::func_ov084_0215a118(void) {}
ARM void ActorUnkITSC::func_ov084_0215a280(void) {}

ARM ActorUnkITSC::~ActorUnkITSC() {}
ARM ActorProfileUnkITSC::~ActorProfileUnkITSC() {}
