#include "Actor/ActorUnkCRFT.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkCRFT);

Actor *ActorProfileUnkCRFT::Create() {
    return new(HeapIndex_2) ActorUnkCRFT();
}

ActorProfileUnkCRFT::ActorProfileUnkCRFT() :
    ActorProfile_Derived1(ActorId_CRFT) {
    this->mUnk_04.Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.7101f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.6101f));
    this->mUnk_1C = 0x1400;
    this->mUnk_18 = 0x1;
    this->mUnk_1A = 0x2000;
    this->mUnk_1E |= 0x1;
}

ActorUnkCRFT::ActorUnkCRFT() {}

bool ActorUnkCRFT::Init(unk32 param1) {}
void ActorUnkCRFT::vfunc_58(ActorState param1) {}
void ActorUnkCRFT::vfunc_54(unk32 param1) {}
void ActorUnkCRFT::Setup() {}
void ActorUnkCRFT::Update() {}
void ActorUnkCRFT::vfunc_5C() {}
void ActorUnkCRFT::vfunc_0BC() {}
void ActorUnkCRFT::vfunc_0CC() {}
void ActorUnkCRFT::vfunc_0D0() {}
void ActorUnkCRFT::vfunc_114() {}
void ActorUnkCRFT::vfunc_118() {}
void ActorUnkCRFT::vfunc_11C() {}
void ActorUnkCRFT::vfunc_120() {}
void ActorUnkCRFT::func_ov058_02148710() {}
void ActorUnkCRFT::vfunc_124() {}
void ActorUnkCRFT::vfunc_128() {}
void ActorUnkCRFT::func_ov058_021487c8() {}
unk32 ActorUnkCRFT::vfunc_7C(unk32 param1) {}
void ActorUnkCRFT::vfunc_9C() {}
unk32 ActorUnkCRFT::vfunc_A0() {}
void ActorUnkCRFT::func_ov058_0214885c() {}
void ActorUnkCRFT::func_ov058_021488d8() {}
unk32 ActorUnkCRFT::vfunc_80(unk32 param1, unk32 param2) {}
bool ActorUnkCRFT::vfunc_48(unk32 param1) {}
void ActorUnkCRFT::vfunc_A4() {}
void ActorUnkCRFT::vfunc_2C(unk32 param1) {}
void ActorUnkCRFT::func_ov058_02148b04() {}

ActorUnkCRFT::~ActorUnkCRFT() {}
ActorProfileUnkCRFT::~ActorProfileUnkCRFT() {}
