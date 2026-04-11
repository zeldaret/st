//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFIBB.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkFIBB sActorProfileUnkFIBB;

ARM ActorProfileUnkFIBB *ActorProfileUnkFIBB::GetProfile() {
    return &sActorProfileUnkFIBB;
}

ARM Actor *ActorProfileUnkFIBB::Create() {
    return new(HeapIndex_2) ActorUnkFIBB();
}

ARM ActorProfileUnkFIBB::ActorProfileUnkFIBB() :
    ActorProfile_Derived1(ActorId_FIBB) {}

ARM ActorUnkFIBB::ActorUnkFIBB() {}

ARM void ActorUnkFIBB::func_ov054_0213c414(void) {}
ARM void ActorUnkFIBB::func_ov054_0213c568(void) {}
ARM void ActorUnkFIBB::func_ov054_0213c5b8(void) {}
ARM void ActorUnkFIBB::func_ov054_0213c648(void) {}
ARM void ActorUnkFIBB::func_ov054_0213c6c4(void) {}
ARM void ActorUnkFIBB::func_ov054_0213c6f8(void) {}
ARM void ActorUnkFIBB::func_ov054_0213c768(void) {}
ARM void ActorUnkFIBB::func_ov054_0213c7f8(void) {}
ARM void ActorUnkFIBB::func_ov054_0213c868(void) {}
ARM void ActorUnkFIBB::func_ov054_0213c918(void) {}
ARM void ActorUnkFIBB::func_ov054_0213c9cc(void) {}
ARM void ActorUnkFIBB::func_ov054_0213cab4(void) {}
ARM void ActorUnkFIBB::func_ov054_0213cb24(void) {}
ARM void ActorUnkFIBB::func_ov054_0213cb94(void) {}
ARM void ActorUnkFIBB::func_ov054_0213cc04(void) {}
ARM void ActorUnkFIBB::func_ov054_0213cd28(void) {}
ARM void ActorUnkFIBB::func_ov054_0213cd3c(void) {}
ARM void ActorUnkFIBB::func_ov054_0213cda0(void) {}
ARM void ActorUnkFIBB::func_ov054_0213cda4(void) {}
ARM void ActorUnkFIBB::func_ov054_0213ce08(void) {}
ARM void ActorUnkFIBB::func_ov054_0213ce0c(void) {}
ARM void ActorUnkFIBB::func_ov054_0213ce70(void) {}
ARM void ActorUnkFIBB::func_ov054_0213ce7c(void) {}
ARM void ActorUnkFIBB::func_ov054_0213cee0(void) {}
ARM void ActorUnkFIBB::func_ov054_0213cf0c(void) {}
ARM void ActorUnkFIBB::func_ov054_0213cf70(void) {}
ARM void ActorUnkFIBB::func_ov054_0213cf7c(void) {}
ARM void ActorUnkFIBB::func_ov054_0213cfe0(void) {}
ARM void ActorUnkFIBB::func_ov054_0213d0d0(void) {}
ARM void ActorUnkFIBB::func_ov054_0213d0dc(void) {}
ARM void ActorUnkFIBB::func_ov054_0213d140(void) {}
ARM void ActorUnkFIBB::func_ov054_0213d184(void) {}
ARM void ActorUnkFIBB::func_ov054_0213d1e8(void) {}
ARM void ActorUnkFIBB::func_ov054_0213d220(void) {}
ARM void ActorUnkFIBB::func_ov054_0213d330(void) {}
ARM void ActorUnkFIBB::func_ov054_0213d3b4(void) {}
ARM void ActorUnkFIBB::func_ov054_0213d4dc(void) {}
ARM void ActorUnkFIBB::func_ov054_0213d510(void) {}
ARM void ActorUnkFIBB::func_ov054_0213d534(void) {}

ARM ActorUnkFIBB::~ActorUnkFIBB() {}
ARM ActorProfileUnkFIBB::~ActorProfileUnkFIBB() {}
