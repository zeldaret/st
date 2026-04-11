//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMVF.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMVF sActorProfileUnkRMVF;

ARM ActorProfileUnkRMVF *ActorProfileUnkRMVF::GetProfile() {
    return &sActorProfileUnkRMVF;
}

ARM Actor *ActorProfileUnkRMVF::Create() {
    return new(HeapIndex_2) ActorUnkRMVF();
}

ARM ActorProfileUnkRMVF::ActorProfileUnkRMVF() :
    ActorProfile_Derived1(ActorId_RMVF) {}

ARM ActorUnkRMVF::ActorUnkRMVF() {}

ARM void ActorUnkRMVF::func_ov059_02161ce4(void) {}
ARM void ActorUnkRMVF::func_ov059_02161cf8(void) {}
ARM void ActorUnkRMVF::func_ov059_02161d98(void) {}
ARM void ActorUnkRMVF::func_ov059_02161dc4(void) {}
ARM void ActorUnkRMVF::func_ov059_02161e14(void) {}
ARM void ActorUnkRMVF::func_ov059_02161e1c(void) {}
ARM void ActorUnkRMVF::func_ov059_02161e40(void) {}
ARM void ActorUnkRMVF::func_ov059_02161e50(void) {}
ARM void ActorUnkRMVF::func_ov059_02161ea4(void) {}

ARM ActorUnkRMVF::~ActorUnkRMVF() {}
ARM ActorProfileUnkRMVF::~ActorProfileUnkRMVF() {}
