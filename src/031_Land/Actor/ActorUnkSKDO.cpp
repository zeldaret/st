//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSKDO.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkSKDO sActorProfileUnkSKDO;

ARM ActorProfileUnkSKDO *ActorProfileUnkSKDO::GetProfile() {
    return &sActorProfileUnkSKDO;
}

ARM Actor *ActorProfileUnkSKDO::Create() {
    return new(HeapIndex_2) ActorUnkSKDO();
}

ARM ActorProfileUnkSKDO::ActorProfileUnkSKDO() :
    ActorProfile(ActorId_SKDO) {}

ARM ActorUnkSKDO::ActorUnkSKDO() {}

ARM void ActorUnkSKDO::func_ov031_02106de0(void) {}
ARM void ActorUnkSKDO::func_ov031_02106de8(void) {}
ARM void ActorUnkSKDO::func_ov031_02106e58(void) {}
ARM void ActorUnkSKDO::func_ov031_02106e90(void) {}
ARM void ActorUnkSKDO::func_ov031_02106e98(void) {}

ARM ActorUnkSKDO::~ActorUnkSKDO() {}
ARM ActorProfileUnkSKDO::~ActorProfileUnkSKDO() {}
