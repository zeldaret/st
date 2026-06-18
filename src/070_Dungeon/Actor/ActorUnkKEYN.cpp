//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKEYN.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"

DECL_PROFILE(ActorProfileUnkKEYN);

Actor *ActorProfileUnkKEYN::Create() {
    return new(HeapIndex_2) ActorUnkKEYN();
}

ActorProfileUnkKEYN::ActorProfileUnkKEYN() :
    ActorProfile_Derived1(ActorId_KEYN) {}

ActorUnkKEYN::ActorUnkKEYN() {}

void ActorUnkKEYN::func_ov070_0214143c(void) {}
void ActorUnkKEYN::func_ov070_02141618(void) {}
void ActorUnkKEYN::func_ov070_0214162c(void) {}
void ActorUnkKEYN::func_ov070_02141750(void) {}
void ActorUnkKEYN::func_ov070_0214175c(void) {}
void ActorUnkKEYN::func_ov070_02141818(void) {}
void ActorUnkKEYN::func_ov070_021418bc(void) {}
void ActorUnkKEYN::func_ov070_021418e0(void) {}
void ActorUnkKEYN::func_ov070_02141904(void) {}
void ActorUnkKEYN::func_ov070_0214191c(void) {}
void ActorUnkKEYN::func_ov070_02141950(void) {}
void ActorUnkKEYN::func_ov070_02141cd0(void) {}
void ActorUnkKEYN::func_ov070_02141cdc(void) {}
void ActorUnkKEYN::func_ov070_02141d2c(void) {}
void ActorUnkKEYN::func_ov070_02141d8c(void) {}
void ActorUnkKEYN::func_ov070_02141e2c(void) {}
void ActorUnkKEYN::func_ov070_02141e80(void) {}
void ActorUnkKEYN::func_ov070_02141f00(void) {}
void ActorUnkKEYN::func_ov070_02141f3c(void) {}
void ActorUnkKEYN::func_ov070_02141f7c(void) {}
void ActorUnkKEYN::func_ov070_02141fbc(void) {}
void ActorUnkKEYN::func_ov070_02142014(void) {}
void ActorUnkKEYN::func_ov070_021420a4(void) {}
void ActorUnkKEYN::func_ov070_021420d8(void) {}

void ActorUnkKEYN::func_ov070_02142140(void) {
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

void ActorUnkKEYN::func_ov070_021421bc(void) {}
void ActorUnkKEYN::func_ov070_021421e8(void) {}
void ActorUnkKEYN::func_ov070_021421ec(void) {}
void ActorUnkKEYN::func_ov070_02142230(void) {}
void ActorUnkKEYN::func_ov070_02142374(void) {}
void ActorUnkKEYN::func_ov070_021425f4(void) {}
void ActorUnkKEYN::func_ov070_0214262c(void) {}
void ActorUnkKEYN::func_ov070_0214266c(void) {}
void ActorUnkKEYN::func_ov070_02142688(void) {}
void ActorUnkKEYN::func_ov070_021426ac(void) {}

ActorUnkKEYN::~ActorUnkKEYN() {}
ActorProfileUnkKEYN::~ActorProfileUnkKEYN() {}
