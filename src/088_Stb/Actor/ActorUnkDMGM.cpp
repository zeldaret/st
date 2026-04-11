//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMGM.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkDMGM);

ARM Actor *ActorProfileUnkDMGM::Create() {
    return new(HeapIndex_2) ActorUnkDMGM();
}

ARM ActorProfileUnkDMGM::ActorProfileUnkDMGM() :
    ActorProfile(ActorId_DMGM) {}

ARM ActorUnkDMGM::ActorUnkDMGM() {}

ARM void ActorUnkDMGM::func_ov088_0216e8b0(void) {}
ARM void ActorUnkDMGM::func_ov088_0216ebb8(void) {}
ARM void ActorUnkDMGM::func_ov088_0216ec78(void) {}

ARM ActorUnkDMGM::~ActorUnkDMGM() {}
ARM ActorProfileUnkDMGM::~ActorProfileUnkDMGM() {}
