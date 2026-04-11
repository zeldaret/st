//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMFR.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkDMFR sActorProfileUnkDMFR;

ARM ActorProfileUnkDMFR *ActorProfileUnkDMFR::GetProfile() {
    return &sActorProfileUnkDMFR;
}

ARM Actor *ActorProfileUnkDMFR::Create() {
    return new(HeapIndex_2) ActorUnkDMFR();
}

ARM ActorProfileUnkDMFR::ActorProfileUnkDMFR() :
    ActorProfile_Derived1(ActorId_DMFR) {}

ARM ActorUnkDMFR::ActorUnkDMFR() {}

ARM void ActorUnkDMFR::func_ov088_02170690(void) {}
ARM void ActorUnkDMFR::func_ov088_021706a4(void) {}
ARM void ActorUnkDMFR::func_ov088_021706f8(void) {}
ARM void ActorUnkDMFR::func_ov088_02170708(void) {}
ARM void ActorUnkDMFR::func_ov088_0217071c(void) {}
ARM void ActorUnkDMFR::func_ov088_02170730(void) {}
ARM void ActorUnkDMFR::func_ov088_02170780(void) {}
ARM void ActorUnkDMFR::func_ov088_021707a4(void) {}
ARM void ActorUnkDMFR::func_ov088_021707b4(void) {}
ARM void ActorUnkDMFR::func_ov088_02170800(void) {}

ARM ActorUnkDMFR::~ActorUnkDMFR() {}
ARM ActorProfileUnkDMFR::~ActorProfileUnkDMFR() {}
