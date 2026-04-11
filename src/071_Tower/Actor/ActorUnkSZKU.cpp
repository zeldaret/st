//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSZKU.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkSZKU sActorProfileUnkSZKU;

ARM ActorProfileUnkSZKU *ActorProfileUnkSZKU::GetProfile() {
    return &sActorProfileUnkSZKU;
}

ARM Actor *ActorProfileUnkSZKU::Create() {
    return new(HeapIndex_2) ActorUnkSZKU();
}

ARM ActorProfileUnkSZKU::ActorProfileUnkSZKU() :
    ActorProfile_Derived1(ActorId_SZKU) {}

ARM ActorUnkSZKU::ActorUnkSZKU() {}

ARM void ActorUnkSZKU::func_ov071_0215f424(void) {}
ARM void ActorUnkSZKU::func_ov071_0215f530(void) {}
ARM void ActorUnkSZKU::func_ov071_0215f5dc(void) {}
ARM void ActorUnkSZKU::func_ov071_0215f608(void) {}
ARM void ActorUnkSZKU::func_ov071_0215f654(void) {}
ARM void ActorUnkSZKU::func_ov071_0215f714(void) {}
ARM void ActorUnkSZKU::func_ov071_0215f7dc(void) {}
ARM void ActorUnkSZKU::func_ov071_0215f7f4(void) {}
ARM void ActorUnkSZKU::func_ov071_0215f80c(void) {}
ARM void ActorUnkSZKU::func_ov071_0215f824(void) {}
ARM void ActorUnkSZKU::func_ov071_0215f92c(void) {}
ARM void ActorUnkSZKU::func_ov071_0215fc0c(void) {}
ARM void ActorUnkSZKU::func_ov071_0215fc54(void) {}
ARM void ActorUnkSZKU::func_ov071_0215fca4(void) {}
ARM void ActorUnkSZKU::func_ov071_0215fd04(void) {}
ARM void ActorUnkSZKU::func_ov071_0215fd80(void) {}
ARM void ActorUnkSZKU::func_ov071_0215fdd4(void) {}
ARM void ActorUnkSZKU::func_ov071_0215fe54(void) {}
ARM void ActorUnkSZKU::func_ov071_0215fe94(void) {}
ARM void ActorUnkSZKU::func_ov071_0215fed4(void) {}
ARM void ActorUnkSZKU::func_ov071_0215ff08(void) {}
ARM void ActorUnkSZKU::func_ov071_0215ff3c(void) {}
ARM void ActorUnkSZKU::func_ov071_0215ffb8(void) {}
ARM void ActorUnkSZKU::func_ov071_0215ffbc(void) {}
ARM void ActorUnkSZKU::func_ov071_02160000(void) {}
ARM void ActorUnkSZKU::func_ov071_02160038(void) {}
ARM void ActorUnkSZKU::func_ov071_02160078(void) {}
ARM void ActorUnkSZKU::func_ov071_02160094(void) {}
ARM void ActorUnkSZKU::func_ov071_021600b8(void) {}
ARM void ActorUnkSZKU::func_ov071_021600d4(void) {}
ARM void ActorUnkSZKU::func_ov071_021600e8(void) {}

ARM ActorUnkSZKU::~ActorUnkSZKU() {}
ARM ActorProfileUnkSZKU::~ActorProfileUnkSZKU() {}
