//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKIMB.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkKIMB sActorProfileUnkKIMB;

ARM ActorProfileUnkKIMB *ActorProfileUnkKIMB::GetProfile() {
    return &sActorProfileUnkKIMB;
}

ARM Actor *ActorProfileUnkKIMB::Create() {
    return new(HeapIndex_2) ActorUnkKIMB();
}

ARM ActorProfileUnkKIMB::ActorProfileUnkKIMB() :
    ActorProfile_Derived1(ActorId_KIMB) {}

ARM ActorUnkKIMB::ActorUnkKIMB() {}

ARM void ActorUnkKIMB::func_ov074_0215d92c(void) {}
ARM void ActorUnkKIMB::func_ov074_0215d940(void) {}
ARM void ActorUnkKIMB::func_ov074_0215d9b8(void) {}
ARM void ActorUnkKIMB::func_ov074_0215d9cc(void) {}
ARM void ActorUnkKIMB::func_ov074_0215da14(void) {}
ARM void ActorUnkKIMB::func_ov074_0215dadc(void) {}
ARM void ActorUnkKIMB::func_ov074_0215dc10(void) {}
ARM void ActorUnkKIMB::func_ov074_0215dc24(void) {}
ARM void ActorUnkKIMB::func_ov074_0215dc78(void) {}
ARM void ActorUnkKIMB::func_ov074_0215dc8c(void) {}
ARM void ActorUnkKIMB::func_ov074_0215dcf0(void) {}
ARM void ActorUnkKIMB::func_ov074_0215dd68(void) {}
ARM void ActorUnkKIMB::func_ov074_0215de64(void) {}
ARM void ActorUnkKIMB::func_ov074_0215dee0(void) {}
ARM void ActorUnkKIMB::func_ov074_0215e13c(void) {}
ARM void ActorUnkKIMB::func_ov074_0215e1a4(void) {}
ARM void ActorUnkKIMB::func_ov074_0215e1d8(void) {}
ARM void ActorUnkKIMB::func_ov074_0215e27c(void) {}
ARM void ActorUnkKIMB::func_ov074_0215e410(void) {}
ARM void ActorUnkKIMB::func_ov074_0215e4b8(void) {}
ARM void ActorUnkKIMB::func_ov074_0215e4cc(void) {}
ARM void ActorUnkKIMB::func_ov074_0215e4ec(void) {}
ARM void ActorUnkKIMB::func_ov074_0215e584(void) {}
ARM void ActorUnkKIMB::func_ov074_0215e62c(void) {}

ARM ActorUnkKIMB::~ActorUnkKIMB() {}
ARM ActorProfileUnkKIMB::~ActorProfileUnkKIMB() {}
