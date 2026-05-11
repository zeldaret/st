//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRBWT.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e0cdc.hpp"

ARM DECL_PROFILE(ActorProfileUnkRBWT);

ARM Actor *ActorProfileUnkRBWT::Create() {
    // return new(HeapIndex_2) ActorUnkRBWT();
}

ARM ActorProfileUnkRBWT::ActorProfileUnkRBWT() :
    ActorProfile_Derived1(ActorId_RBWT) {}

ARM ActorUnkRBWT::ActorUnkRBWT() {}

ARM ActorUnkRBWT *ActorUnkRBWT::func_ov083_0215b8c0() {
    func_ov000_02099afc();
    return this;
}
ARM void ActorUnkRBWT::func_ov083_0215b9ac(void) {}
ARM void ActorUnkRBWT::func_ov083_0215bcb8(void) {
    if (this->mUnk_154 == 3) {
        this->func_ov083_0215bdfc();
    }
    data_027e0cdc->func_ov000_02082a28(7);
    data_027e0cdc->func_ov000_02082a28(0xe);
}
ARM void ActorUnkRBWT::func_ov083_0215bcf0(void) {}
ARM void ActorUnkRBWT::func_ov083_0215bd64(void) {
    this->vfunc_20();
}
ARM void ActorUnkRBWT::func_ov083_0215bd78(void) {
    func_ov031_020f7574();
    if (mUnk_154 != 2 && mUnk_154 != 3) {
        mUnk_F4.vfunc_18(&mPos);
    }
}
ARM void ActorUnkRBWT::func_ov083_0215bdac(void) {}
ARM void ActorUnkRBWT::func_ov083_0215bdec(void) {
    this->func_ov083_0215bfc4(1);
}
ARM void ActorUnkRBWT::func_ov083_0215bdfc(void) {}
ARM void ActorUnkRBWT::func_ov083_0215bec4(void) {
    func_ov000_02098a88(1, 1);
}
ARM void ActorUnkRBWT::func_ov083_0215bed8(void) {}
ARM void ActorUnkRBWT::func_ov083_0215bfc4(unk32 param1) {}
ARM void ActorUnkRBWT::func_ov083_0215c0f4(void) {}
ARM void ActorUnkRBWT::func_ov083_0215c114(void) {}
ARM void ActorUnkRBWT::func_ov083_0215c120(void) {}
ARM void ActorUnkRBWT::func_ov083_0215c144(void) {}
ARM int ActorUnkRBWT::func_ov083_0215c154(void) {}
ARM void ActorUnkRBWT::func_ov083_0215c15c(void) {}

ARM ActorUnkRBWT::~ActorUnkRBWT() {}
ARM ActorProfileUnkRBWT::~ActorProfileUnkRBWT() {}
