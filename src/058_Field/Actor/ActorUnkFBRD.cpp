#include "Actor/ActorUnkFBRD.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"

DECL_PROFILE(ActorProfileUnkFBRD);

Actor *ActorProfileUnkFBRD::Create() {
    return new(HeapIndex_2) ActorUnkFBRD();
}

ActorProfileUnkFBRD::ActorProfileUnkFBRD() :
    ActorProfile_Derived1(ActorId_FBRD, ActorId_TBRD) {
    this->mUnk_04.Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(2.0f));
}

unk32 ActorUnkFBRD_1CC::vfunc_04(RefStruct param1, unk32 param2, unk32 param3, unk32 *param4) {
    this->Actor_9C::vfunc_04(param1, param2, param3, param4);
    return 0x0;
}

ActorUnkFBRD_1F8::ActorUnkFBRD_1F8(ActorUnkFBRD *actor) :
    mUnk_04(actor),
    mUnk_08(false),
    mUnk_09(false) {}

bool ActorUnkFBRD_1F8::vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) {
    u32 value = param1->mUnk_04->mUnk_24[param1->mUnk_00->mUnk_06];
    if ((value >> 0x5 & 0x3) == 0x2) {
        this->mUnk_08 = true;
        return true;
    }

    if (param1->mUnk_08.y <= FX_F32_TO_FX32(0.0f) && !(value >> 0x7 & 0x3)) {
        return true;
    }

    return false;
}

// non-matching
bool ActorUnkFBRD_1F8::vfunc_10(RefStruct param1, unk32 param2) {}

// non-matching
ActorUnkFBRD::ActorUnkFBRD() :
    mUnk_100(NULL, NULL, NULL, NULL),
    mUnk_1F8(this) {}

// non-matching
ActorUnkFBRD::~ActorUnkFBRD() {}

// non-matching
bool ActorUnkFBRD::Init(unk32 param1) {}
// non-matching
void ActorUnkFBRD::Setup() {}
// non-matching
void ActorUnkFBRD::func_ov058_02149314() {}
// non-matching
void ActorUnkFBRD::func_ov058_02149354() {}
// non-matching
void ActorUnkFBRD::func_ov058_0214938c() {}
// non-matching
void ActorUnkFBRD::func_ov058_021494c0() {}
// non-matching
void ActorUnkFBRD::func_ov058_0214951c() {}
// non-matching
void ActorUnkFBRD::func_ov058_02149574() {}
// non-matching
void ActorUnkFBRD::func_ov058_021495fc() {}
// non-matching
void ActorUnkFBRD::vfunc_24() {}

void ActorUnkFBRD::Update() {
    VecFx32_Copy(&this->mPos, &this->mPrevPos);

    if (this->mUnk_100.vfunc_30() != -0x1) {
        this->mUnk_100.vfunc_34();
    }

    this->func_ov058_02149354();
}

// non-matching
void ActorUnkFBRD::func_ov058_021496e4() {}
// non-matching
void ActorUnkFBRD::func_ov058_021498b4() {}
// non-matching
void ActorUnkFBRD::func_ov058_02149bcc() {}
// non-matching
void ActorUnkFBRD::func_ov058_02149c5c() {}
// non-matching
void ActorUnkFBRD::func_ov058_02149d84() {}
// non-matching
void ActorUnkFBRD::func_ov058_02149d98() {}
// non-matching
void ActorUnkFBRD::func_ov058_0214a36c() {}
// non-matching
void ActorUnkFBRD::func_ov058_0214a384() {}
// non-matching
void ActorUnkFBRD::vfunc_2C(unk32 param1) {}
// non-matching
void ActorUnkFBRD::func_ov058_0214a7e0() {}
// non-matching
void ActorUnkFBRD::func_ov058_0214a840() {}
// non-matching
void ActorUnkFBRD::func_ov058_0214a8d0() {}
// non-matching
void ActorUnkFBRD::func_ov058_0214a8e4() {}

ActorProfileUnkFBRD::~ActorProfileUnkFBRD() {}
