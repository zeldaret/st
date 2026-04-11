//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPRPL.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkPRPL sActorProfileUnkPRPL;

ARM ActorProfileUnkPRPL *ActorProfileUnkPRPL::GetProfile() {
    return &sActorProfileUnkPRPL;
}

ARM Actor *ActorProfileUnkPRPL::Create() {
    return new(HeapIndex_2) ActorUnkPRPL();
}

ARM ActorProfileUnkPRPL::ActorProfileUnkPRPL() :
    ActorProfile(ActorId_PRPL) {}

ARM ActorUnkPRPL::ActorUnkPRPL() {}

ARM void ActorUnkPRPL::func_ov081_02150c74(void) {}
ARM void ActorUnkPRPL::func_ov081_02150d9c(void) {}
ARM void ActorUnkPRPL::func_ov081_02150e6c(void) {}
ARM void ActorUnkPRPL::func_ov081_02150ea8(void) {}
ARM void ActorUnkPRPL::func_ov081_02150ee4(void) {}
ARM void ActorUnkPRPL::func_ov081_02150f20(void) {}
ARM void ActorUnkPRPL::func_ov081_02150f5c(void) {}
ARM void ActorUnkPRPL::func_ov081_02150f98(void) {}
ARM void ActorUnkPRPL::func_ov081_02150fd0(void) {}
ARM void ActorUnkPRPL::func_ov081_021510e4(void) {}
ARM void ActorUnkPRPL::func_ov081_02151128(void) {}
ARM void ActorUnkPRPL::func_ov081_02151170(void) {}
ARM void ActorUnkPRPL::func_ov081_02151304(void) {}
ARM void ActorUnkPRPL::func_ov081_02151348(void) {}
ARM void ActorUnkPRPL::func_ov081_02151370(void) {}
ARM void ActorUnkPRPL::func_ov081_02151398(void) {}
ARM void ActorUnkPRPL::func_ov081_02151448(void) {}
ARM void ActorUnkPRPL::func_ov081_02151490(void) {}
ARM void ActorUnkPRPL::func_ov081_02151494(void) {}
ARM void ActorUnkPRPL::func_ov081_021514d8(void) {}
ARM void ActorUnkPRPL::func_ov081_02151554(void) {}
ARM void ActorUnkPRPL::func_ov081_021515b0(void) {}
ARM void ActorUnkPRPL::func_ov081_02151780(void) {}
ARM void ActorUnkPRPL::func_ov081_021517f8(void) {}
ARM void ActorUnkPRPL::func_ov081_02151834(void) {}
ARM void ActorUnkPRPL::func_ov081_02151944(void) {}
ARM void ActorUnkPRPL::func_ov081_02151988(void) {}
ARM void ActorUnkPRPL::func_ov081_021519e4(void) {}
ARM void ActorUnkPRPL::func_ov081_021519f4(void) {}
ARM void ActorUnkPRPL::func_ov081_02151a04(void) {}
ARM void ActorUnkPRPL::func_ov081_02151a24(void) {}

ARM ActorUnkPRPL::~ActorUnkPRPL() {}
ARM ActorProfileUnkPRPL::~ActorProfileUnkPRPL() {}
