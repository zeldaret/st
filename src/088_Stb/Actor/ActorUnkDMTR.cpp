//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMTR.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkDMTR);

Actor *ActorProfileUnkDMTR::Create() {
    return new(HeapIndex_2) ActorUnkDMTR();
}

ActorProfileUnkDMTR::ActorProfileUnkDMTR() :
    ActorProfile(ActorId_DMTR) {}

ActorUnkDMTR::ActorUnkDMTR() {}

void ActorUnkDMTR::func_ov088_0216c74c(void) {}
void ActorUnkDMTR::func_ov088_0216c818(void) {}
void ActorUnkDMTR::func_ov088_0216cb08(void) {}
void ActorUnkDMTR::func_ov088_0216cbf0(void) {}

ActorUnkDMTR::~ActorUnkDMTR() {}
ActorProfileUnkDMTR::~ActorProfileUnkDMTR() {}
