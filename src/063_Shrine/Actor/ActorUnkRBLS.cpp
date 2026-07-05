//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRBLS.hpp"
#include "MapObject/MapObjectTreasureSpawned.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"

extern UnkStruct_data_ov063_02163740 data_ov063_02163740; // = {0, 0x534C4252, 0, 0, 0, 0};

extern "C" void func_ov000_02099f64(unk32 *param1, UnkStruct_data_ov063_02163740 param2, unk32 param3);

DECL_PROFILE(ActorProfileUnkRBLS);

Actor *ActorProfileUnkRBLS::Create() {
    return new(HeapIndex_2) ActorUnkRBLS();
}

ActorProfileUnkRBLS::ActorProfileUnkRBLS() :
    ActorProfile_Derived1(ActorId_RBLS) {}

ActorUnkRBLS::ActorUnkRBLS() :
    mUnk_94(NULL),
    mUnk_110(&mUnk_130, NULL) {}

unk32 ActorUnkRBLS::vfunc_18(void) {
    this->mPos.x -= FLOAT_TO_FX32(0.5f);
    this->mPos.z -= FLOAT_TO_FX32(0.5f);
    this->mPos.y = 0;
    func_ov000_02099f64(&this->mUnk_F4, data_ov063_02163740, 0x1000);
    (*(MapObjectTreasureSpawned *) &this->mUnk_F4).vfunc_3C();

    data_027e0cd8->mUnk_0C->mUnk_12A = 0;
    return 1; //! INFO: bool?
}

void ActorUnkRBLS::vfunc_20(void) {
    (*(Actor *) &this->mUnk_F4).vfunc_34(); //! WARN: NOT an Actor
}

void ActorUnkRBLS::vfunc_24(void) {
    this->vfunc_20();
}

void ActorUnkRBLS::vfunc_2C(void) {
    ModelRender *param1 = &this->mUnk_94;
    VecFx32 *param2     = &this->mPos;
    param1->vfunc_18(param2);
}

void ActorUnkRBLS::func_ov063_0215f3d4(void) {}
void ActorUnkRBLS::func_ov063_0215f500(void) {}

ActorUnkRBLS::~ActorUnkRBLS() {}
ActorProfileUnkRBLS::~ActorProfileUnkRBLS() {}
