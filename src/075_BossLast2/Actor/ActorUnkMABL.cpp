//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMABL.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkMABL sActorProfileUnkMABL;

ARM ActorProfileUnkMABL *ActorProfileUnkMABL::GetProfile() {
    return &sActorProfileUnkMABL;
}

ARM Actor *ActorProfileUnkMABL::Create() {
    return new(HeapIndex_2) ActorUnkMABL();
}

ARM ActorProfileUnkMABL::ActorProfileUnkMABL() :
    ActorProfile_Derived1(ActorId_MABL) {}

ARM ActorUnkMABL::ActorUnkMABL() {}

ARM void ActorUnkMABL::func_ov075_0215e324(void) {}
ARM void ActorUnkMABL::func_ov075_0215e684(void) {}
ARM void ActorUnkMABL::func_ov075_0215e738(void) {}
ARM void ActorUnkMABL::func_ov075_0215e7c4(void) {}
ARM void ActorUnkMABL::func_ov075_0215ea28(void) {}
ARM void ActorUnkMABL::func_ov075_0215ecc4(void) {}
ARM void ActorUnkMABL::func_ov075_0215ee20(void) {}
ARM void ActorUnkMABL::func_ov075_0215eeac(void) {}
ARM void ActorUnkMABL::func_ov075_0215f0dc(void) {}
ARM void ActorUnkMABL::func_ov075_0215f16c(void) {}
ARM void ActorUnkMABL::func_ov075_0215f47c(void) {}
ARM void ActorUnkMABL::func_ov075_0215f508(void) {}
ARM void ActorUnkMABL::func_ov075_0215f6d8(void) {}
ARM void ActorUnkMABL::func_ov075_0215f99c(void) {}
ARM void ActorUnkMABL::func_ov075_0215fa9c(void) {}
ARM void ActorUnkMABL::func_ov075_0215fb2c(void) {}
ARM void ActorUnkMABL::func_ov075_0215fcb0(void) {}
ARM void ActorUnkMABL::func_ov075_0215fdf4(void) {}
ARM void ActorUnkMABL::func_ov075_02160034(void) {}
ARM void ActorUnkMABL::func_ov075_02160134(void) {}
ARM void ActorUnkMABL::func_ov075_02160208(void) {}
ARM void ActorUnkMABL::func_ov075_02160288(void) {}
ARM void ActorUnkMABL::func_ov075_021602a8(void) {}
ARM void ActorUnkMABL::func_ov075_02160320(void) {}
ARM void ActorUnkMABL::func_ov075_021603c0(void) {}
ARM void ActorUnkMABL::func_ov075_02160454(void) {}
ARM void ActorUnkMABL::func_ov075_02160524(void) {}
ARM void ActorUnkMABL::func_ov075_021605d8(void) {}
ARM void ActorUnkMABL::func_ov075_021606e0(void) {}
ARM void ActorUnkMABL::func_ov075_02160704(void) {}
ARM void ActorUnkMABL::func_ov075_02160714(void) {}
ARM void ActorUnkMABL::func_ov075_0216071c(void) {}

ARM ActorUnkMABL::~ActorUnkMABL() {}
ARM ActorProfileUnkMABL::~ActorProfileUnkMABL() {}
