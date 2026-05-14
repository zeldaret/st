//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKEYN.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"

ARM DECL_PROFILE(ActorProfileUnkKEYN);

ARM Actor *ActorProfileUnkKEYN::Create() {
    return new(HeapIndex_2) ActorUnkKEYN();
}

ARM ActorProfileUnkKEYN::ActorProfileUnkKEYN() :
    ActorProfile_Derived1(ActorId_KEYN) {}

ARM ActorUnkKEYN::ActorUnkKEYN() {}

ARM void ActorUnkKEYN::func_ov070_0214143c(void) {}
ARM void ActorUnkKEYN::func_ov070_02141618(void) {}
ARM void ActorUnkKEYN::func_ov070_0214162c(void) {}
ARM void ActorUnkKEYN::func_ov070_02141750(void) {}
ARM void ActorUnkKEYN::func_ov070_0214175c(void) {}
ARM void ActorUnkKEYN::func_ov070_02141818(void) {}
ARM void ActorUnkKEYN::func_ov070_021418bc(void) {}
ARM void ActorUnkKEYN::func_ov070_021418e0(void) {}
ARM void ActorUnkKEYN::func_ov070_02141904(void) {}
ARM void ActorUnkKEYN::func_ov070_0214191c(void) {}
ARM void ActorUnkKEYN::func_ov070_02141950(void) {}
ARM void ActorUnkKEYN::func_ov070_02141cd0(void) {}
ARM void ActorUnkKEYN::func_ov070_02141cdc(void) {}
ARM void ActorUnkKEYN::func_ov070_02141d2c(void) {}
ARM void ActorUnkKEYN::func_ov070_02141d8c(void) {}
ARM void ActorUnkKEYN::func_ov070_02141e2c(void) {}
ARM void ActorUnkKEYN::func_ov070_02141e80(void) {}
ARM void ActorUnkKEYN::func_ov070_02141f00(void) {}
ARM void ActorUnkKEYN::func_ov070_02141f3c(void) {}
ARM void ActorUnkKEYN::func_ov070_02141f7c(void) {}
ARM void ActorUnkKEYN::func_ov070_02141fbc(void) {}
ARM void ActorUnkKEYN::func_ov070_02142014(void) {}
ARM void ActorUnkKEYN::func_ov070_021420a4(void) {}
ARM void ActorUnkKEYN::func_ov070_021420d8(void) {}

ARM void ActorUnkKEYN::func_ov070_02142140(void) {
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

ARM void ActorUnkKEYN::func_ov070_021421bc(void) {}
ARM void ActorUnkKEYN::func_ov070_021421e8(void) {}
ARM void ActorUnkKEYN::func_ov070_021421ec(void) {}
ARM void ActorUnkKEYN::func_ov070_02142230(void) {}
ARM void ActorUnkKEYN::func_ov070_02142374(void) {}
ARM void ActorUnkKEYN::func_ov070_021425f4(void) {}
ARM void ActorUnkKEYN::func_ov070_0214262c(void) {}
ARM void ActorUnkKEYN::func_ov070_0214266c(void) {}
ARM void ActorUnkKEYN::func_ov070_02142688(void) {}
ARM void ActorUnkKEYN::func_ov070_021426ac(void) {}

ARM ActorUnkKEYN::~ActorUnkKEYN() {}
ARM ActorProfileUnkKEYN::~ActorProfileUnkKEYN() {}
