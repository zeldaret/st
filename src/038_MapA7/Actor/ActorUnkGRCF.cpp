//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGRCF.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkGRCF);

ARM Actor *ActorProfileUnkGRCF::Create() {
    return new(HeapIndex_2) ActorUnkGRCF();
}

ARM ActorProfileUnkGRCF::ActorProfileUnkGRCF() :
    ActorProfile(ActorId_GRCF) {}

ARM ActorUnkGRCF::ActorUnkGRCF() {}

ARM void ActorUnkGRCF::func_ov038_0211ecdc(void) {}
ARM void ActorUnkGRCF::func_ov038_0211ed38(void) {}

ARM ActorUnkGRCF::~ActorUnkGRCF() {}
ARM ActorProfileUnkGRCF::~ActorProfileUnkGRCF() {}
