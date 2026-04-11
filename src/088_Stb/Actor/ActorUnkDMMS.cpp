//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMMS.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkDMMS sActorProfileUnkDMMS;

ARM ActorProfileUnkDMMS *ActorProfileUnkDMMS::GetProfile() {
    return &sActorProfileUnkDMMS;
}

ARM Actor *ActorProfileUnkDMMS::Create() {
    return new(HeapIndex_2) ActorUnkDMMS();
}

ARM ActorProfileUnkDMMS::ActorProfileUnkDMMS() :
    ActorProfile_Derived1(ActorId_DMMS) {}

ARM ActorUnkDMMS::ActorUnkDMMS() {}

ARM void ActorUnkDMMS::func_ov088_02171c28(void) {}
ARM void ActorUnkDMMS::func_ov088_02171c7c(void) {}
ARM void ActorUnkDMMS::func_ov088_02171c8c(void) {}
ARM void ActorUnkDMMS::func_ov088_02171ca0(void) {}
ARM void ActorUnkDMMS::func_ov088_02171cb4(void) {}

ARM ActorUnkDMMS::~ActorUnkDMMS() {}
ARM ActorProfileUnkDMMS::~ActorProfileUnkDMMS() {}
