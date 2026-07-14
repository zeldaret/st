//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSZKU.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"

DECL_PROFILE(ActorProfileUnkSZKU);

Actor *ActorProfileUnkSZKU::Create() {
    return new(HeapIndex_2) ActorUnkSZKU();
}

ActorProfileUnkSZKU::ActorProfileUnkSZKU() :
    ActorProfile_Derived1(ActorId_SZKU) {}

ActorUnkSZKU::ActorUnkSZKU() {}

void ActorUnkSZKU::func_ov071_0215f424(void) {}
void ActorUnkSZKU::func_ov071_0215f530(void) {}
void ActorUnkSZKU::func_ov071_0215f5dc(void) {}
void ActorUnkSZKU::func_ov071_0215f608(void) {}
void ActorUnkSZKU::func_ov071_0215f654(void) {}
void ActorUnkSZKU::func_ov071_0215f714(void) {}
void ActorUnkSZKU::func_ov071_0215f7dc(void) {}
void ActorUnkSZKU::func_ov071_0215f7f4(void) {}
void ActorUnkSZKU::func_ov071_0215f80c(void) {}
void ActorUnkSZKU::func_ov071_0215f824(void) {}
void ActorUnkSZKU::func_ov071_0215f92c(void) {}
void ActorUnkSZKU::func_ov071_0215fc0c(void) {}
void ActorUnkSZKU::func_ov071_0215fc54(void) {}
void ActorUnkSZKU::func_ov071_0215fca4(void) {}
void ActorUnkSZKU::func_ov071_0215fd04(void) {}
void ActorUnkSZKU::func_ov071_0215fd80(void) {}
void ActorUnkSZKU::func_ov071_0215fdd4(void) {}
void ActorUnkSZKU::func_ov071_0215fe54(void) {}
void ActorUnkSZKU::func_ov071_0215fe94(void) {}
void ActorUnkSZKU::func_ov071_0215fed4(void) {}
void ActorUnkSZKU::func_ov071_0215ff08(void) {}

void ActorUnkSZKU::func_ov071_0215ff3c(void) {
    if (this->mUnk_50 < this->mUnk_52) {
        this->mUnk_50++;
    }

    if (!data_027e09b8->func_01ffd420()) {
        if (data_027e0d34->TryItemGive(this->mItemId)) {
            this->func_ov000_02098a88(0, 1);
            this->Kill();
            this->func_ov000_020984f0();
        }
    }
}

void ActorUnkSZKU::func_ov071_0215ffb8(void) {}
void ActorUnkSZKU::func_ov071_0215ffbc(void) {}
void ActorUnkSZKU::func_ov071_02160000(void) {}
void ActorUnkSZKU::func_ov071_02160038(void) {}
void ActorUnkSZKU::func_ov071_02160078(void) {}
void ActorUnkSZKU::func_ov071_02160094(void) {}
void ActorUnkSZKU::func_ov071_021600b8(void) {}
void ActorUnkSZKU::func_ov071_021600d4(void) {}
void ActorUnkSZKU::func_ov071_021600e8(void) {}

ActorUnkSZKU::~ActorUnkSZKU() {}
ActorProfileUnkSZKU::~ActorProfileUnkSZKU() {}
