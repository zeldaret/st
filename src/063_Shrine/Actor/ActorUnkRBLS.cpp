#include "Actor/ActorUnkRBLS.hpp"
#include "Actor/Actor_Derived1.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"

ActorUnkZLSL_AnimationTag data_ov063_02163740 = {0, "RBLS"};

extern "C" void func_ov000_02099f64(UnkStruct_ov063_02163784 *param1, ActorUnkZLSL_AnimationTag param2, unk32 param3);

DECL_PROFILE(ActorProfileUnkRBLS);

Actor *ActorProfileUnkRBLS::Create() {
    return new(HeapIndex_2) ActorUnkRBLS();
}

ActorProfileUnkRBLS::ActorProfileUnkRBLS() :
    ActorProfile_Derived1(ActorId_RBLS) {}

ActorUnkRBLS::ActorUnkRBLS() :
    mUnk_94(G3d_GetModelPtr(GET_PROFILE(ActorProfileUnkRBLS)->mUnk_3C.mUnk_50)),
    mUnk_F4(&mUnk_94, GET_PROFILE(ActorProfileUnkRBLS)->vfunc_04()) {}

bool ActorUnkRBLS::vfunc_18(unk32 param1) {
    this->mPos.x -= FLOAT_TO_FX32(0.5f);
    this->mPos.z -= FLOAT_TO_FX32(0.5f);
    this->mPos.y = 0;
    func_ov000_02099f64(&this->mUnk_F4, data_ov063_02163740, 0x1000);
    this->mUnk_F4.vfunc_3C();

    data_027e0cd8->mUnk_0C->mUnk_12A = 0;
    return true;
}

void ActorUnkRBLS::vfunc_20(void) {
    this->mUnk_F4.vfunc_34();
}

void ActorUnkRBLS::vfunc_24(void) {
    this->vfunc_20();
}

void ActorUnkRBLS::vfunc_2C(unk32 param1) {
    ModelRender *var1 = &this->mUnk_94;
    VecFx32 *var2     = &this->mPos;
    var1->vfunc_18(var2);
}
