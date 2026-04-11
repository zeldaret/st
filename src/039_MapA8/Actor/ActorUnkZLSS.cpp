//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkZLSS.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkZLSS sActorProfileUnkZLSS;

ARM ActorProfileUnkZLSS *ActorProfileUnkZLSS::GetProfile() {
    return &sActorProfileUnkZLSS;
}

ARM Actor *ActorProfileUnkZLSS::Create() {
    return new(HeapIndex_2) ActorUnkZLSS();
}

ARM ActorProfileUnkZLSS::ActorProfileUnkZLSS() :
    ActorProfile(ActorId_ZLSS) {}

ARM ActorUnkZLSS::ActorUnkZLSS() {}

ARM void ActorUnkZLSS::func_ov039_0211b840(void) {}
ARM void ActorUnkZLSS::func_ov039_0211b8fc(void) {}
ARM void ActorUnkZLSS::func_ov039_0211b9a0(void) {}
ARM void ActorUnkZLSS::func_ov039_0211b9ac(void) {}
ARM void ActorUnkZLSS::func_ov039_0211ba00(void) {}
ARM void ActorUnkZLSS::func_ov039_0211ba10(void) {}
ARM void ActorUnkZLSS::func_ov039_0211bb38(void) {}
ARM void ActorUnkZLSS::func_ov039_0211bbe4(void) {}
ARM void ActorUnkZLSS::func_ov039_0211bca4(void) {}
ARM void ActorUnkZLSS::func_ov039_0211bcd8(void) {}
ARM void ActorUnkZLSS::func_ov039_0211bd94(void) {}
ARM void ActorUnkZLSS::func_ov039_0211be40(void) {}
ARM void ActorUnkZLSS::func_ov039_0211be94(void) {}
ARM void ActorUnkZLSS::func_ov039_0211beac(void) {}
ARM void ActorUnkZLSS::func_ov039_0211bec4(void) {}
ARM void ActorUnkZLSS::func_ov039_0211bedc(void) {}
ARM void ActorUnkZLSS::func_ov039_0211bee8(void) {}
ARM void ActorUnkZLSS::func_ov039_0211bf00(void) {}
ARM void ActorUnkZLSS::func_ov039_0211bf20(void) {}
ARM void ActorUnkZLSS::func_ov039_0211bf40(void) {}
ARM void ActorUnkZLSS::func_ov039_0211bf60(void) {}
ARM void ActorUnkZLSS::func_ov039_0211bf6c(void) {}
ARM void ActorUnkZLSS::func_ov039_0211bfa8(void) {}
ARM void ActorUnkZLSS::func_ov039_0211bfd4(void) {}
ARM void ActorUnkZLSS::func_ov039_0211bfe0(void) {}
ARM void ActorUnkZLSS::func_ov039_0211c240(void) {}
ARM void ActorUnkZLSS::func_ov039_0211c2d0(void) {}
ARM void ActorUnkZLSS::func_ov039_0211c354(void) {}
ARM void ActorUnkZLSS::func_ov039_0211c3b4(void) {}
ARM void ActorUnkZLSS::func_ov039_0211c3cc(void) {}
ARM void ActorUnkZLSS::func_ov039_0211c438(void) {}
ARM void ActorUnkZLSS::func_ov039_0211c490(void) {}
ARM void ActorUnkZLSS::func_ov039_0211c518(void) {}
ARM void ActorUnkZLSS::func_ov039_0211c584(void) {}
ARM void ActorUnkZLSS::func_ov039_0211c5f4(void) {}
ARM void ActorUnkZLSS::func_ov039_0211c674(void) {}
ARM void ActorUnkZLSS::func_ov039_0211c690(void) {}
ARM void ActorUnkZLSS::func_ov039_0211c6b0(void) {}
ARM void ActorUnkZLSS::func_ov039_0211c6bc(void) {}
ARM void ActorUnkZLSS::func_ov039_0211c6c0(void) {}
ARM void ActorUnkZLSS::func_ov039_0211c6d4(void) {}

ARM ActorUnkZLSS::~ActorUnkZLSS() {}
ARM ActorProfileUnkZLSS::~ActorProfileUnkZLSS() {}
