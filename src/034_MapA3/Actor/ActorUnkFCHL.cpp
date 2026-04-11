//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFCHL.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkFCHL sActorProfileUnkFCHL;

ARM ActorProfileUnkFCHL *ActorProfileUnkFCHL::GetProfile() {
    return &sActorProfileUnkFCHL;
}

ARM Actor *ActorProfileUnkFCHL::Create() {
    return new(HeapIndex_2) ActorUnkFCHL();
}

ARM ActorProfileUnkFCHL::ActorProfileUnkFCHL() :
    ActorProfile_Derived1(ActorId_FCHL) {}

ARM ActorUnkFCHL::ActorUnkFCHL() {}

ARM void ActorUnkFCHL::func_ov034_02119ff0(void) {}
ARM void ActorUnkFCHL::func_ov034_0211a004(void) {}
ARM void ActorUnkFCHL::func_ov034_0211a208(void) {}
ARM void ActorUnkFCHL::func_ov034_0211a21c(void) {}
ARM void ActorUnkFCHL::func_ov034_0211a288(void) {}

ARM ActorUnkFCHL::~ActorUnkFCHL() {}
ARM ActorProfileUnkFCHL::~ActorProfileUnkFCHL() {}
