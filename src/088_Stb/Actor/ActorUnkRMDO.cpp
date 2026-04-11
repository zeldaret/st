//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMDO.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMDO sActorProfileUnkRMDO;

ARM ActorProfileUnkRMDO *ActorProfileUnkRMDO::GetProfile() {
    return &sActorProfileUnkRMDO;
}

ARM Actor *ActorProfileUnkRMDO::Create() {
    return new(HeapIndex_2) ActorUnkRMDO();
}

ARM ActorProfileUnkRMDO::ActorProfileUnkRMDO() :
    ActorProfile(ActorId_RMDO) {}

ARM ActorUnkRMDO::ActorUnkRMDO() {}

ARM void ActorUnkRMDO::func_ov088_02171ab8(void) {}
ARM void ActorUnkRMDO::func_ov088_02171ad8(void) {}
ARM void ActorUnkRMDO::func_ov088_02171adc(void) {}
ARM void ActorUnkRMDO::func_ov088_02171ae0(void) {}
ARM void ActorUnkRMDO::func_ov088_02171af4(void) {}
ARM void ActorUnkRMDO::func_ov088_02171af8(void) {}

ARM ActorUnkRMDO::~ActorUnkRMDO() {}
ARM ActorProfileUnkRMDO::~ActorProfileUnkRMDO() {}
