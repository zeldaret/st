//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSD.hpp"

#include "Render/ModelRender.hpp"
#include "nns/g3d/g3d.h"
#include "profile.hpp"

extern "C" void func_ov073_0215bb34(ActorUnkRMSD *);

DECL_PROFILE(ActorProfileUnkRMSD);

char data_ov063_021625d8[0x10]; // = "RMSD_wall";
char data_ov063_021625e8[0x10]; // = "RMSD";

Actor *ActorProfileUnkRMSD::Create() {
    return new(HeapIndex_2) ActorUnkRMSD();
}

ActorProfileUnkRMSD::ActorProfileUnkRMSD() :
    ActorProfile_Derived1(ActorId_RMSD) {}

ActorUnkRMSD_Base::ActorUnkRMSD_Base() :
    mUnk_94(0), // Placeholder
    mUnk_F4(0)  // Placeholder
{}

ActorUnkRMSD::ActorUnkRMSD() {
    ActorProfileUnkRMSD *r0 = GET_PROFILE(ActorProfileUnkRMSD);
    r0->vfunc_04();
}

void ActorUnkRMSD::func_ov063_0215c408(void) {}

void ActorUnkRMSD::func_ov063_0215c45c(void) {
    (*(Actor *) &this->mUnk_158).vfunc_34(); // Not an Actor
}
void ActorUnkRMSD::func_ov063_0215c474(void) {
    this->vfunc_20();
}

G3d_Model *ActorUnkRMSD::func_ov063_0215c488(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSD)->mUnk_3C, data_ov063_021625e8);
}

G3d_Model *ActorUnkRMSD::func_ov063_0215c4c8(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSD)->mUnk_3C, data_ov063_021625d8);
}

ActorUnkRMSD::~ActorUnkRMSD() {}
ActorProfileUnkRMSD::~ActorProfileUnkRMSD() {}
