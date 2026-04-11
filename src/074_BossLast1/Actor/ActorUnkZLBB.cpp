//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkZLBB.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkZLBB sActorProfileUnkZLBB;

ARM ActorProfileUnkZLBB *ActorProfileUnkZLBB::GetProfile() {
    return &sActorProfileUnkZLBB;
}

ARM Actor *ActorProfileUnkZLBB::Create() {
    return new(HeapIndex_2) ActorUnkZLBB();
}

ARM ActorProfileUnkZLBB::ActorProfileUnkZLBB() :
    ActorProfile_Derived1(ActorId_ZLBB) {}

ARM ActorUnkZLBB::ActorUnkZLBB() {}

ARM void ActorUnkZLBB::func_ov074_02155920(void) {}
ARM void ActorUnkZLBB::func_ov074_021559b0(void) {}
ARM void ActorUnkZLBB::func_ov074_021559c0(void) {}
ARM void ActorUnkZLBB::func_ov074_02155a08(void) {}
ARM void ActorUnkZLBB::func_ov074_02155dec(void) {}
ARM void ActorUnkZLBB::func_ov074_02155e7c(void) {}
ARM void ActorUnkZLBB::func_ov074_02155e80(void) {}
ARM void ActorUnkZLBB::func_ov074_02156074(void) {}
ARM void ActorUnkZLBB::func_ov074_021560b8(void) {}
ARM void ActorUnkZLBB::func_ov074_021560cc(void) {}
ARM void ActorUnkZLBB::func_ov074_02156138(void) {}
ARM void ActorUnkZLBB::func_ov074_0215613c(void) {}
ARM void ActorUnkZLBB::func_ov074_02156178(void) {}
ARM void ActorUnkZLBB::func_ov074_02156210(void) {}
ARM void ActorUnkZLBB::func_ov074_02156a14(void) {}

ARM ActorUnkZLBB::~ActorUnkZLBB() {}
ARM ActorProfileUnkZLBB::~ActorProfileUnkZLBB() {}
