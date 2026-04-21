//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDKTR.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkDKTR);

ARM Actor *ActorProfileUnkDKTR::Create() {
    return new(HeapIndex_2) ActorUnkDKTR();
}

ARM ActorProfileUnkDKTR::ActorProfileUnkDKTR() :
    ActorProfile_Derived1(ActorId_DKTR) {
    for (s8 i = 0; i < ARRAY_LEN(this->mUnk_16); i++) {
        this->mUnk_16[i] = 2;
    }

    this->mUnk_04.pos.x = FLOAT_TO_Q20(0.0f);
    this->mUnk_04.pos.y = FLOAT_TO_Q20(0.25f);
    this->mUnk_04.pos.z = FLOAT_TO_Q20(0.0f);
    this->mUnk_04.size  = FLOAT_TO_Q20(0.25f);

    this->mUnk_3C.mUnk_15 = 1;
}

ARM ActorUnkDKTR::ActorUnkDKTR() :
    mUnk_0A8((Actor_UnkSystem2 *) &mUnk_0AC),
    mUnk_0AC(1, 0),
    mUnk_304(0) {
    this->mUnk_B30 = 0x79;
    this->mUnk_B34 = 0;
    this->mUnk_B38 = 0;
    this->mUnk_B3A = -1;
    this->mUnk_B3B = 0;
    this->mUnk_B3C = 0;
    this->mUnk_B3D = 0;
    this->mUnk_B3E = 0x2B;
    this->mUnk_B3F = 0;
    this->mUnk_B40 = 0;
    this->mUnk_B44 = 0;
    this->func_ov000_0209862c(4);
    this->mUnk_48 = 5;
    this->mUnk_318.mUnk_10.func_ov026_02101c54(GET_PROFILE(ActorProfileUnkDKTR)->vfunc_04());
    this->mUnk_0A8->func_ov026_020ee538(this->mUnk_318.mUnk_10.mUnk_00);
}

ARM ActorUnkDKTR::~ActorUnkDKTR() {}

ARM void ActorUnkDKTR::func_ov026_0212b958(void) {}
ARM bool ActorUnkDKTR::vfunc_18(unk32 param1) {}
ARM void ActorUnkDKTR::vfunc_1c(void) {}
ARM void ActorUnkDKTR::vfunc_20(void) {}
ARM void ActorUnkDKTR::vfunc_24(void) {}
ARM void ActorUnkDKTR::func_ov026_0212bde0(void) {}
ARM void ActorUnkDKTR::func_ov026_0212bfec(void) {}
ARM void ActorUnkDKTR::func_ov026_0212c134(void) {}
ARM void ActorUnkDKTR::vfunc_2c(unk32 param1) {}
ARM void ActorUnkDKTR::vfunc_30(void) {}
ARM void ActorUnkDKTR::func_ov026_0212c398(void) {}
ARM void ActorUnkDKTR::func_ov026_0212c3c8(void) {}
ARM void ActorUnkDKTR::func_ov026_0212c3f4(void) {}
ARM void ActorUnkDKTR::vfunc2_0C(void) {}
ARM void ActorUnkDKTR::func_ov026_0212c56c(void) {}
ARM void ActorUnkDKTR::func_ov026_0212c624(void) {}
ARM void ActorUnkDKTR::func_ov026_0212ca18(void) {}
ARM void ActorUnkDKTR::func_ov026_0212cd64(void) {}
ARM void ActorUnkDKTR::func_ov026_0212cdcc(void) {}
ARM void ActorUnkDKTR::func_ov026_0212cec4(void) {}
ARM void ActorUnkDKTR::func_ov026_0212d040(void) {}
ARM void ActorUnkDKTR::func_ov026_0212d12c(void) {}
ARM void ActorUnkDKTR::func_ov026_0212d2ac(void) {}
ARM void ActorUnkDKTR::func_ov026_0212d310(void) {}
ARM void ActorUnkDKTR::func_ov026_0212d324(void) {}
ARM void ActorUnkDKTR::func_ov026_0212d328(void) {}
ARM void ActorUnkDKTR::func_ov026_0212d490(void) {}
ARM void ActorUnkDKTR::func_ov026_0212d534(void) {}
ARM void ActorUnkDKTR::func_ov026_0212d738(void) {}
ARM void ActorUnkDKTR::func_ov026_0212d7e0(void) {}
ARM void ActorUnkDKTR::func_ov026_0212d81c(void) {}
ARM void ActorUnkDKTR::func_ov026_0212d834(void) {}
ARM void ActorUnkDKTR::func_ov026_0212d87c(void) {}
ARM void ActorUnkDKTR::func_ov026_0212d954(void) {}
ARM void ActorUnkDKTR::func_ov026_0212d97c(void) {}
ARM void ActorUnkDKTR::func_ov026_0212da08(void) {}
ARM void ActorUnkDKTR::func_ov026_0212da34(void) {}
ARM void ActorUnkDKTR::func_ov026_0212db5c(void) {}
ARM void ActorUnkDKTR::func_ov026_0212db88(void) {}
ARM void ActorUnkDKTR::func_ov026_0212dc68(void) {}
ARM void ActorUnkDKTR::func_ov026_0212dd0c(void) {}
ARM void ActorUnkDKTR::func_ov026_0212dd80(void) {}
ARM void ActorUnkDKTR::func_ov026_0212dd94(void) {}
ARM void ActorUnkDKTR::func_ov026_0212de00(void) {}
ARM void ActorUnkDKTR::func_ov026_0212e034(void) {}
ARM void ActorUnkDKTR::func_ov026_0212e15c(void) {}
ARM void ActorUnkDKTR::func_ov026_0212e178(void) {}
ARM void ActorUnkDKTR::func_ov026_0212e278(void) {}
ARM void ActorUnkDKTR::func_ov026_0212e2b4(void) {}

ARM ActorProfileUnkDKTR::~ActorProfileUnkDKTR() {}
