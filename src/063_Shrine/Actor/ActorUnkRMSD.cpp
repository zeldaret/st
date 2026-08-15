//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSD.hpp"
#include "Actor/ActorUnkZLSL_ZSRS.hpp"
#include "Actor/Actor_Derived1.hpp"
#include "Render/ModelRender.hpp"
#include "nns/g3d/g3d.h"
#include "profile.hpp"
#include "types.h"

char data_ov063_021625d8[0x10]; // = "RMSD_wall";
char data_ov063_021625e8[0x10]; // = "RMSD";

ActorUnkZLSL_AnimationTag data_ov063_021634b0 = {0, "RMSD"};

extern "C" void func_ov000_02099ff8(unk32 *param1, ActorUnkZLSL_AnimationTag param2, unk32 param8);
extern "C" bool func_ov063_0215bb34(ActorUnkRMSD *);

DECL_PROFILE(ActorProfileUnkRMSD);

Actor *ActorProfileUnkRMSD::Create() {
    return new(HeapIndex_2) ActorUnkRMSD();
}

ActorProfileUnkRMSD::ActorProfileUnkRMSD() :
    ActorProfile_Derived1(ActorId_RMSD) {}

ActorUnkRMSBase::ActorUnkRMSBase() :
    mUnk_94(NULL),
    mUnk_F4(NULL) {}

ActorUnkRMSD::ActorUnkRMSD() :
    mUnk_158(&mUnk_174, &mUnk_94, GET_PROFILE(ActorProfileUnkRMSD)->vfunc_04()),
    mUnk_174(&mUnk_194, NULL) {
    // Must reuse the (same) value computed above
    if (GET_PROFILE(ActorProfileUnkRMSD)->vfunc_04() != NULL) {
        mUnk_174.mpModel = mUnk_158.mUnk_10;
    }
}

bool ActorUnkRMSD::vfunc_18(unk32 param1) {
    bool res = func_ov063_0215bb34(this);
    this->mUnk_158.func_ov000_02099ff8(data_ov063_021634b0, 0x1000);
    return res;
}

void ActorUnkRMSD::vfunc_20(void) {
    (*(Actor *) &this->mUnk_158).vfunc_34(); // Not an Actor
}
void ActorUnkRMSD::vfunc_24(void) {
    this->vfunc_20();
}

G3d_Model *ActorUnkRMSD::vfunc_54(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSD)->mUnk_3C, data_ov063_021625e8);
}

G3d_Model *ActorUnkRMSD::vfunc_58(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSD)->mUnk_3C, data_ov063_021625d8);
}

ActorUnkRMSD::~ActorUnkRMSD() {}
ActorProfileUnkRMSD::~ActorProfileUnkRMSD() {}
