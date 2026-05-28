#include "Actor/ActorShotArrow.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"

extern "C" void func_ov000_0207b6c0(void);

extern UnkStruct_027e0ce0 *data_027e0ce0;

ARM DECL_PROFILE(ActorProfileShotArrow);

ARM Actor *ActorProfileShotArrow::Create() {
    return new(HeapIndex_2) ActorShotArrow();
}

ARM ActorProfileShotArrow::ActorProfileShotArrow() :
    ActorProfile(ActorId_AROW) {
    this->mUnk_04.Init(FLOAT_TO_Q20(0.2));
}

ARM ActorShotArrow::ActorShotArrow() {}

ARM unk32 ActorShotArrow::func_ov031_020f1404() {
    return data_027e0ce0->mUnk_1C->mUnk_0C;
}

ARM ActorShotArrow *ActorShotArrow::func_ov031_020f1608() {
    func_ov000_0207b6c0();
    return this;
}

ARM void ActorShotArrow::func_ov031_020f173c(void) {}
ARM void ActorShotArrow::func_ov031_020f1868(void) {}
ARM void ActorShotArrow::func_ov031_020f1874(void) {}
ARM void ActorShotArrow::func_ov031_020f1878(void) {}
ARM void ActorShotArrow::func_ov031_020f18bc(void) {}
ARM void ActorShotArrow::func_ov031_020f1958(void) {}
ARM void ActorShotArrow::func_ov031_020f195c(void) {}
ARM void ActorShotArrow::func_ov031_020f1a64(void) {}
ARM void ActorShotArrow::func_ov031_020f1b04(void) {}
ARM void ActorShotArrow::func_ov031_020f1c24(void) {}
ARM void ActorShotArrow::func_ov031_020f1c7c(void) {}
ARM void ActorShotArrow::func_ov031_020f1dd4(void) {}
ARM void ActorShotArrow::func_ov031_020f1e3c(void) {}
ARM void ActorShotArrow::func_ov031_020f1f54(void) {}
ARM void ActorShotArrow::func_ov031_020f2010(void) {}
ARM void ActorShotArrow::func_ov031_020f206c(void) {}
ARM void ActorShotArrow::func_ov031_020f20bc(void) {}
ARM void ActorShotArrow::func_ov031_020f2134(void) {}
ARM void ActorShotArrow::func_ov031_020f2160(void) {}
ARM void ActorShotArrow::func_ov031_020f21dc(void) {}
ARM void ActorShotArrow::func_ov031_020f2214(void) {}
ARM void ActorShotArrow::func_ov031_020f2270(void) {}
ARM void ActorShotArrow::func_ov031_020f2280(void) {}
ARM void ActorShotArrow::func_ov031_020f229c(void) {}
ARM void ActorShotArrow::func_ov031_020f22d4(void) {}
ARM void ActorShotArrow::func_ov031_020f2310(void) {}
ARM void ActorShotArrow::func_ov031_020f2654(void) {}
ARM void ActorShotArrow::func_ov031_020f2794(void) {}
ARM void ActorShotArrow::func_ov031_020f28ac(void) {}
ARM void ActorShotArrow::func_ov031_020f2b8c(void) {}
ARM void ActorShotArrow::func_ov031_020f2bbc(void) {}
ARM void ActorShotArrow::func_ov031_020f2bec(void) {}
ARM void ActorShotArrow::func_ov031_020f2c08(void) {}
ARM void ActorShotArrow::func_ov031_020f2cac(void) {}
ARM void ActorShotArrow::func_ov031_020f2ef0(void) {}
ARM void ActorShotArrow::func_ov031_020f2f5c(void) {}
ARM void ActorShotArrow::func_ov031_020f2f9c(void) {}
ARM void ActorShotArrow::func_ov031_020f3000(void) {}
ARM void ActorShotArrow::func_ov031_020f311c(void) {}
ARM void ActorShotArrow::func_ov031_020f3210(void) {}
ARM void ActorShotArrow::func_ov031_020f3258(void) {}
ARM void ActorShotArrow::func_ov031_020f3288(void) {}
ARM void ActorShotArrow::func_ov031_020f32c4(void) {}
ARM void ActorShotArrow::func_ov031_020f32e0(void) {}
ARM void ActorShotArrow::func_ov031_020f3304(void) {}
ARM void ActorShotArrow::func_ov031_020f3310(void) {}
ARM void ActorShotArrow::func_ov031_020f33bc(void) {}
ARM void ActorShotArrow::func_ov031_020f370c(void) {}
ARM void ActorShotArrow::func_ov031_020f374c(void) {}
ARM void ActorShotArrow::func_ov031_020f38b0(void) {}
ARM void ActorShotArrow::func_ov031_020f3c38(void) {}
ARM void ActorShotArrow::func_ov031_020f3d04(void) {}
ARM void ActorShotArrow::func_ov031_020f3d4c(void) {}

ARM ActorShotArrow::~ActorShotArrow() {}
ARM ActorProfileShotArrow::~ActorProfileShotArrow() {}
