//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBANI.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkBANI sActorProfileUnkBANI;

ARM ActorProfileUnkBANI *ActorProfileUnkBANI::GetProfile() {
    return &sActorProfileUnkBANI;
}

ARM Actor *ActorProfileUnkBANI::Create() {
    return new(HeapIndex_2) ActorUnkBANI();
}

ARM ActorProfileUnkBANI::ActorProfileUnkBANI() :
    ActorProfile_Derived1(ActorId_BANI) {}

ARM ActorUnkBANI::ActorUnkBANI() {}

ARM void ActorUnkBANI::func_ov069_02158144(void) {}
ARM void ActorUnkBANI::func_ov069_02158158(void) {}
ARM void ActorUnkBANI::func_ov069_021581f4(void) {}
ARM void ActorUnkBANI::func_ov069_02158218(void) {}
ARM void ActorUnkBANI::func_ov069_021582d4(void) {}
ARM void ActorUnkBANI::func_ov069_021582fc(void) {}
ARM void ActorUnkBANI::func_ov069_02158324(void) {}
ARM void ActorUnkBANI::func_ov069_02158358(void) {}
ARM void ActorUnkBANI::func_ov069_021583e4(void) {}
ARM void ActorUnkBANI::func_ov069_02158638(void) {}
ARM void ActorUnkBANI::func_ov069_0215871c(void) {}
ARM void ActorUnkBANI::func_ov069_02158748(void) {}
ARM void ActorUnkBANI::func_ov069_021587a0(void) {}
ARM void ActorUnkBANI::func_ov069_02158d00(void) {}
ARM void ActorUnkBANI::func_ov069_02158d24(void) {}
ARM void ActorUnkBANI::func_ov069_02158d50(void) {}
ARM void ActorUnkBANI::func_ov069_02158d6c(void) {}

ARM ActorUnkBANI::~ActorUnkBANI() {}
ARM ActorProfileUnkBANI::~ActorProfileUnkBANI() {}
