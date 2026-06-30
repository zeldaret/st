//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSW.hpp"
#include "nns/g3d/g3d.h"
#include "types.h"

char data_ov063_02162598[0x10]; // = "RMSW_wall";
char data_ov063_021625a8[0x10]; // = "RMSW";

struct UnkStruct_data_ov063_02163388 data_ov063_02163388 = {0, 0x57534D52, 0, 0, 0, 0};

extern "C" void func_ov000_02099ff8(unk32 *param1, struct UnkStruct_data_ov063_02163388 param2, unk32 param8);
extern "C" unk32 func_ov063_0215bb34(ActorUnkRMSW *);

DECL_PROFILE(ActorProfileUnkRMSW);

Actor *ActorProfileUnkRMSW::Create() {
    return new(HeapIndex_2) ActorUnkRMSW();
}

ActorProfileUnkRMSW::ActorProfileUnkRMSW() :
    ActorProfile_Derived1(ActorId_RMSW) {}

ActorUnkRMSW::ActorUnkRMSW() {}

unk32 ActorUnkRMSW::vfunc_18(void) {
    unk32 res = func_ov063_0215bb34(this);
    func_ov000_02099ff8(&this->mUnk_158, data_ov063_02163388, 0x1000);
    return res;
}

void ActorUnkRMSW::vfunc_20(void) {
    (*(Actor *) &this->mUnk_158).vfunc_34(); // Not an Actor
}

void ActorUnkRMSW::vfunc_24(void) {
    this->vfunc_20();
}

G3d_Model *ActorUnkRMSW::vfunc_54(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSW)->mUnk_3C, data_ov063_021625a8);
}

G3d_Model *ActorUnkRMSW::vfunc_58(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSW)->mUnk_3C, data_ov063_02162598);
}

ActorUnkRMSW::~ActorUnkRMSW() {}
ActorProfileUnkRMSW::~ActorProfileUnkRMSW() {}
