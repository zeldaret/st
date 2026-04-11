//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTRER.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkTRER sActorProfileUnkTRER;

ARM ActorProfileUnkTRER *ActorProfileUnkTRER::GetProfile() {
    return &sActorProfileUnkTRER;
}

ARM Actor *ActorProfileUnkTRER::Create() {
    return new(HeapIndex_2) ActorUnkTRER();
}

ARM ActorProfileUnkTRER::ActorProfileUnkTRER() :
    ActorProfile_Derived1(ActorId_TRER) {}

ARM ActorUnkTRER::ActorUnkTRER() {}

ARM void ActorUnkTRER::func_ov027_02144944(void) {}
ARM void ActorUnkTRER::func_ov027_021449dc(void) {}
ARM void ActorUnkTRER::func_ov027_02144a18(void) {}
ARM void ActorUnkTRER::func_ov027_02144cf0(void) {}
ARM void ActorUnkTRER::func_ov027_02144d48(void) {}
ARM void ActorUnkTRER::func_ov027_02144db8(void) {}
ARM void ActorUnkTRER::func_ov027_02144ecc(void) {}
ARM void ActorUnkTRER::func_ov027_02144ed0(void) {}
ARM void ActorUnkTRER::func_ov027_02144f48(void) {}
ARM void ActorUnkTRER::func_ov027_02144f4c(void) {}
ARM void ActorUnkTRER::func_ov027_02144f58(void) {}
ARM void ActorUnkTRER::func_ov027_02144f5c(void) {}
ARM void ActorUnkTRER::func_ov027_02144f9c(void) {}

ARM ActorUnkTRER::~ActorUnkTRER() {}
ARM ActorProfileUnkTRER::~ActorProfileUnkTRER() {}
