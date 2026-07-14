//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGRCF.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkGRCF);

Actor *ActorProfileUnkGRCF::Create() {
    return new(HeapIndex_2) ActorUnkGRCF();
}

ActorProfileUnkGRCF::ActorProfileUnkGRCF() :
    ActorProfile(ActorId_GRCF) {}

ActorUnkGRCF::ActorUnkGRCF() {}

void ActorUnkGRCF::func_ov038_0211ecdc(void) {}
void ActorUnkGRCF::func_ov038_0211ed38(void) {}

ActorUnkGRCF::~ActorUnkGRCF() {}
ActorProfileUnkGRCF::~ActorProfileUnkGRCF() {}
