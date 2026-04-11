//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMMM.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkDMMM sActorProfileUnkDMMM;

ARM ActorProfileUnkDMMM *ActorProfileUnkDMMM::GetProfile() {
    return &sActorProfileUnkDMMM;
}

ARM Actor *ActorProfileUnkDMMM::Create() {
    return new(HeapIndex_2) ActorUnkDMMM();
}

ARM ActorProfileUnkDMMM::ActorProfileUnkDMMM() :
    ActorProfile_Derived1(ActorId_DMMM) {}

ARM ActorUnkDMMM::ActorUnkDMMM() {}

ARM void ActorUnkDMMM::func_ov088_02171e3c(void) {}
ARM void ActorUnkDMMM::func_ov088_02171e90(void) {}
ARM void ActorUnkDMMM::func_ov088_02171ea0(void) {}
ARM void ActorUnkDMMM::func_ov088_02171eb4(void) {}
ARM void ActorUnkDMMM::func_ov088_02171ec8(void) {}
ARM void ActorUnkDMMM::func_ov088_02171f18(void) {}

ARM ActorUnkDMMM::~ActorUnkDMMM() {}
ARM ActorProfileUnkDMMM::~ActorProfileUnkDMMM() {}
