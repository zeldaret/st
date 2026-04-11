//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPSBK.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkPSBK sActorProfileUnkPSBK;

ARM ActorProfileUnkPSBK *ActorProfileUnkPSBK::GetProfile() {
    return &sActorProfileUnkPSBK;
}

ARM Actor *ActorProfileUnkPSBK::Create() {
    return new(HeapIndex_2) ActorUnkPSBK();
}

ARM ActorProfileUnkPSBK::ActorProfileUnkPSBK() :
    ActorProfile_Derived1(ActorId_PSBK) {}

ARM ActorUnkPSBK::ActorUnkPSBK() {}

ARM void ActorUnkPSBK::func_ov048_02130d64(void) {}
ARM void ActorUnkPSBK::func_ov048_02131000(void) {}
ARM void ActorUnkPSBK::func_ov048_02131014(void) {}
ARM void ActorUnkPSBK::func_ov048_02131094(void) {}
ARM void ActorUnkPSBK::func_ov048_0213111c(void) {}
ARM void ActorUnkPSBK::func_ov048_021311e8(void) {}
ARM void ActorUnkPSBK::func_ov048_02131224(void) {}
ARM void ActorUnkPSBK::func_ov048_02131268(void) {}
ARM void ActorUnkPSBK::func_ov048_021312ac(void) {}
ARM void ActorUnkPSBK::func_ov048_021312e4(void) {}
ARM void ActorUnkPSBK::func_ov048_021312fc(void) {}
ARM void ActorUnkPSBK::func_ov048_0213130c(void) {}
ARM void ActorUnkPSBK::func_ov048_0213138c(void) {}
ARM void ActorUnkPSBK::func_ov048_021314fc(void) {}
ARM void ActorUnkPSBK::func_ov048_02131690(void) {}
ARM void ActorUnkPSBK::func_ov048_02131744(void) {}
ARM void ActorUnkPSBK::func_ov048_021317d8(void) {}
ARM void ActorUnkPSBK::func_ov048_02131818(void) {}
ARM void ActorUnkPSBK::func_ov048_021318c4(void) {}
ARM void ActorUnkPSBK::func_ov048_02131b28(void) {}
ARM void ActorUnkPSBK::func_ov048_02131bac(void) {}
ARM void ActorUnkPSBK::func_ov048_02131c28(void) {}
ARM void ActorUnkPSBK::func_ov048_02131ca8(void) {}
ARM void ActorUnkPSBK::func_ov048_02131d20(void) {}
ARM void ActorUnkPSBK::func_ov048_02131db4(void) {}
ARM void ActorUnkPSBK::func_ov048_02131dbc(void) {}
ARM void ActorUnkPSBK::func_ov048_02131dc8(void) {}
ARM void ActorUnkPSBK::func_ov048_02131e34(void) {}
ARM void ActorUnkPSBK::func_ov048_02131e9c(void) {}
ARM void ActorUnkPSBK::func_ov048_02131f28(void) {}
ARM void ActorUnkPSBK::func_ov048_02131f44(void) {}
ARM void ActorUnkPSBK::func_ov048_02132054(void) {}
ARM void ActorUnkPSBK::func_ov048_021320c0(void) {}

ARM ActorUnkPSBK::~ActorUnkPSBK() {}
ARM ActorProfileUnkPSBK::~ActorProfileUnkPSBK() {}
