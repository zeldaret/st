//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBLBL.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkBLBL sActorProfileUnkBLBL;

ARM ActorProfileUnkBLBL *ActorProfileUnkBLBL::GetProfile() {
    return &sActorProfileUnkBLBL;
}

ARM Actor *ActorProfileUnkBLBL::Create() {
    return new(HeapIndex_2) ActorUnkBLBL();
}

ARM ActorProfileUnkBLBL::ActorProfileUnkBLBL() :
    ActorProfile_Derived1(ActorId_BLBL) {}

ARM ActorUnkBLBL::ActorUnkBLBL() {}

ARM void ActorUnkBLBL::func_ov038_0211eadc(void) {}
ARM void ActorUnkBLBL::func_ov038_0211eb0c(void) {}
ARM void ActorUnkBLBL::func_ov038_0211eb14(void) {}
ARM void ActorUnkBLBL::func_ov038_0211eb64(void) {}
ARM void ActorUnkBLBL::func_ov038_0211eb90(void) {}
ARM void ActorUnkBLBL::func_ov038_0211ebbc(void) {}

ARM ActorUnkBLBL::~ActorUnkBLBL() {}
ARM ActorProfileUnkBLBL::~ActorProfileUnkBLBL() {}
