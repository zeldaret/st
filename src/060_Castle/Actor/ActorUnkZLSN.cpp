//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkZLSN.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkZLSN sActorProfileUnkZLSN;

ARM ActorProfileUnkZLSN *ActorProfileUnkZLSN::GetProfile() {
    return &sActorProfileUnkZLSN;
}

ARM Actor *ActorProfileUnkZLSN::Create() {
    return new(HeapIndex_2) ActorUnkZLSN();
}

ARM ActorProfileUnkZLSN::ActorProfileUnkZLSN() :
    ActorProfile_Derived1(ActorId_ZLSN) {}

ARM ActorUnkZLSN::ActorUnkZLSN() {}

ARM void ActorUnkZLSN::func_ov060_0215f148(void) {}
ARM void ActorUnkZLSN::func_ov060_0215f15c(void) {}
ARM void ActorUnkZLSN::func_ov060_0215f170(void) {}
ARM void ActorUnkZLSN::func_ov060_0215f184(void) {}
ARM void ActorUnkZLSN::func_ov060_0215f2ec(void) {}
ARM void ActorUnkZLSN::func_ov060_0215f330(void) {}
ARM void ActorUnkZLSN::func_ov060_0215f4ec(void) {}
ARM void ActorUnkZLSN::func_ov060_0215f55c(void) {}
ARM void ActorUnkZLSN::func_ov060_0215f5d0(void) {}
ARM void ActorUnkZLSN::func_ov060_0215f78c(void) {}
ARM void ActorUnkZLSN::func_ov060_0215f7c4(void) {}
ARM void ActorUnkZLSN::func_ov060_0215f7d0(void) {}
ARM void ActorUnkZLSN::func_ov060_0215f80c(void) {}
ARM void ActorUnkZLSN::func_ov060_0215f814(void) {}
ARM void ActorUnkZLSN::func_ov060_0215f924(void) {}
ARM void ActorUnkZLSN::func_ov060_0215f9e0(void) {}
ARM void ActorUnkZLSN::func_ov060_0215fba8(void) {}
ARM void ActorUnkZLSN::func_ov060_0215fc80(void) {}
ARM void ActorUnkZLSN::func_ov060_0215fd38(void) {}
ARM void ActorUnkZLSN::func_ov060_0215fe7c(void) {}
ARM void ActorUnkZLSN::func_ov060_0215ff48(void) {}
ARM void ActorUnkZLSN::func_ov060_021600c0(void) {}
ARM void ActorUnkZLSN::func_ov060_021600cc(void) {}
ARM void ActorUnkZLSN::func_ov060_021600e8(void) {}
ARM void ActorUnkZLSN::func_ov060_02160104(void) {}

ARM ActorUnkZLSN::~ActorUnkZLSN() {}
ARM ActorProfileUnkZLSN::~ActorProfileUnkZLSN() {}
