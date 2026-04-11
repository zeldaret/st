//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRCHU.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRCHU sActorProfileUnkRCHU;

ARM ActorProfileUnkRCHU *ActorProfileUnkRCHU::GetProfile() {
    return &sActorProfileUnkRCHU;
}

ARM Actor *ActorProfileUnkRCHU::Create() {
    return new(HeapIndex_2) ActorUnkRCHU();
}

ARM ActorProfileUnkRCHU::ActorProfileUnkRCHU() :
    ActorProfile(ActorId_RCHU) {}

ARM ActorUnkRCHU::ActorUnkRCHU() {}

ARM void ActorUnkRCHU::func_ov055_0213b330(void) {}
ARM void ActorUnkRCHU::func_ov055_0213b444(void) {}
ARM void ActorUnkRCHU::func_ov055_0213b4a0(void) {}
ARM void ActorUnkRCHU::func_ov055_0213b538(void) {}
ARM void ActorUnkRCHU::func_ov055_0213b570(void) {}
ARM void ActorUnkRCHU::func_ov055_0213b614(void) {}
ARM void ActorUnkRCHU::func_ov055_0213b644(void) {}
ARM void ActorUnkRCHU::func_ov055_0213b67c(void) {}
ARM void ActorUnkRCHU::func_ov055_0213b6b4(void) {}
ARM void ActorUnkRCHU::func_ov055_0213b740(void) {}
ARM void ActorUnkRCHU::func_ov055_0213b7bc(void) {}
ARM void ActorUnkRCHU::func_ov055_0213b894(void) {}
ARM void ActorUnkRCHU::func_ov055_0213b8a4(void) {}
ARM void ActorUnkRCHU::func_ov055_0213b920(void) {}
ARM void ActorUnkRCHU::func_ov055_0213b9d8(void) {}
ARM void ActorUnkRCHU::func_ov055_0213b9e8(void) {}
ARM void ActorUnkRCHU::func_ov055_0213b9ec(void) {}
ARM void ActorUnkRCHU::func_ov055_0213ba0c(void) {}
ARM void ActorUnkRCHU::func_ov055_0213baa0(void) {}
ARM void ActorUnkRCHU::func_ov055_0213bb58(void) {}
ARM void ActorUnkRCHU::func_ov055_0213bc50(void) {}
ARM void ActorUnkRCHU::func_ov055_0213bc7c(void) {}
ARM void ActorUnkRCHU::func_ov055_0213bd18(void) {}
ARM void ActorUnkRCHU::func_ov055_0213bd70(void) {}
ARM void ActorUnkRCHU::func_ov055_0213bda0(void) {}
ARM void ActorUnkRCHU::func_ov055_0213bdb4(void) {}
ARM void ActorUnkRCHU::func_ov055_0213bdd0(void) {}
ARM void ActorUnkRCHU::func_ov055_0213be10(void) {}
ARM void ActorUnkRCHU::func_ov055_0213be4c(void) {}

ARM ActorUnkRCHU::~ActorUnkRCHU() {}
ARM ActorProfileUnkRCHU::~ActorProfileUnkRCHU() {}
