//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMGM.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkDMGM);

Actor *ActorProfileUnkDMGM::Create() {
    return new(HeapIndex_2) ActorUnkDMGM();
}

ActorProfileUnkDMGM::ActorProfileUnkDMGM() :
    ActorProfile(ActorId_DMGM) {}

ActorUnkDMGM::ActorUnkDMGM() {}

void ActorUnkDMGM::func_ov088_0216e8b0(void) {}
void ActorUnkDMGM::func_ov088_0216ebb8(void) {}
void ActorUnkDMGM::func_ov088_0216ec78(void) {}

ActorUnkDMGM::~ActorUnkDMGM() {}
ActorProfileUnkDMGM::~ActorProfileUnkDMGM() {}
