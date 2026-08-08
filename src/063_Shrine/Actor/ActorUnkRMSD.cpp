//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSD.hpp"

#include "Actor/ActorUnkRMSW.hpp"
#include "Render/ModelRender.hpp"
#include "nns/g3d/g3d.h"
#include "profile.hpp"
#include "types.h"

char data_ov063_021625d8[0x10]; // = "RMSD_wall";
char data_ov063_021625e8[0x10]; // = "RMSD";

extern struct UnkStruct_data_ov063_02163388 data_ov063_021634b0; // = {0, 0x44534D52, 0, 0, 0, 0};

extern "C" void func_ov000_02099ff8(unk32 *param1, struct UnkStruct_data_ov063_02163388 param2, unk32 param8);
extern "C" unk32 func_ov063_0215bb34(ActorUnkRMSD *);

DECL_PROFILE(ActorProfileUnkRMSD);

Actor *ActorProfileUnkRMSD::Create() {
    return new(HeapIndex_2) ActorUnkRMSD();
}

ActorProfileUnkRMSD::ActorProfileUnkRMSD() :
    ActorProfile_Derived1(ActorId_RMSD) {}

ActorUnkRMSBase::ActorUnkRMSBase() :
    mUnk_94(NULL),
    mUnk_F4(NULL) {}

ActorUnkRMSD::ActorUnkRMSD() {
    ActorProfileUnkRMSD *r0 = GET_PROFILE(ActorProfileUnkRMSD);
    r0->vfunc_04();
}

unk32 ActorUnkRMSD::vfunc_18(void) {
    unk32 res = func_ov063_0215bb34(this);
    func_ov000_02099ff8(&this->mUnk_158, data_ov063_021634b0, 0x1000);
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
