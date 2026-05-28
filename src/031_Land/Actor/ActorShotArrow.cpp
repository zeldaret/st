#include "Actor/ActorShotArrow.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"

extern "C" void func_ov000_0207b6c0();

extern UnkStruct_027e0ce0 *data_027e0ce0;

ARM DECL_PROFILE(ActorProfileShotArrow);

ARM Actor *ActorProfileShotArrow::Create() {
    return new(HeapIndex_2) ActorShotArrow();
}

ARM ActorProfileShotArrow::ActorProfileShotArrow() :
    ActorProfile(ActorId_AROW) {
    this->mUnk_04.Init(FLOAT_TO_Q20(0.2));
}

// non-matching
ARM ActorShotArrow::ActorShotArrow() {}

ARM unk32 ActorShotArrow::func_ov031_020f1404() {
    return data_027e0ce0->mUnk_1C->mUnk_0C;
}

// non-matching ?
ARM ActorShotArrow *ActorShotArrow::func_ov031_020f1608() {
    func_ov000_0207b6c0();
    return this;
}

// non-matching
ARM void ActorShotArrow::func_ov031_020f173c() {}

ARM void ActorShotArrow::func_ov031_020f1868() {
    this->mUnk_2C = 0;
}

ARM void ActorShotArrow::func_ov031_020f1874() {}

static PTMF<ActorShotArrow> data_ov031_021142c0[] = {ActorShotArrow::func_ov031_020f1a64, ActorShotArrow::func_ov031_020f1c24,
                                                     ActorShotArrow::func_ov031_020f1dd4, ActorShotArrow::func_ov031_020f1f54,
                                                     ActorShotArrow::func_ov031_020f206c, ActorShotArrow::func_ov031_020f2134,
                                                     ActorShotArrow::func_ov031_020f21dc, ActorShotArrow::func_ov031_020f1874};

ARM void ActorShotArrow::func_ov031_020f1878(s16 param_1) {
    this->mUnk_4C = param_1;
    this->func_ov031_020f1868();

    CALL_PTMF(PTMF<ActorShotArrow>, data_ov031_021142c0[this->mUnk_4C]);
}

// non-matching
ARM void ActorShotArrow::func_ov031_020f18bc() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f1958() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f195c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f1a64() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f1b04() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f1c24() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f1c7c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f1dd4() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f1e3c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f1f54() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2010() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f206c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f20bc() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2134() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2160() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f21dc() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2214() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2270() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2280() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f229c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f22d4() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2310() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2654() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2794() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f28ac() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2b8c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2bbc() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2bec() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2c08() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2cac() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2ef0() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2f5c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2f9c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f3000() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f311c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f3210() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f3258() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f3288() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f32c4() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f32e0() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f3304() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f3310() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f33bc() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f370c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f374c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f38b0() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f3c38() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f3d04() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f3d4c() {}

ARM ActorShotArrow::~ActorShotArrow() {}
ARM ActorProfileShotArrow::~ActorProfileShotArrow() {}
