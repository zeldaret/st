#include "Actor/ActorUnkRMSF.hpp"
#include "nns/g3d/g3d.h"
#include "profile.hpp"

static const char data_ov063_021625c8[16] = "RMSF";
static const char data_ov063_021625b8[16] = "RMSF_wall";

DECL_PROFILE(ActorProfileUnkRMSF);

Actor *ActorProfileUnkRMSF::Create() {
    return new(HeapIndex_2) ActorUnkRMSF();
}

ActorProfileUnkRMSF::ActorProfileUnkRMSF() :
    ActorProfile_Derived1(ActorId_RMSF) {}

ActorUnkRMSF::ActorUnkRMSF() {}

G3d_Model *ActorUnkRMSF::vfunc_54(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSF)->mUnk_3C, data_ov063_021625c8);
}

G3d_Model *ActorUnkRMSF::vfunc_58(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSF)->mUnk_3C, data_ov063_021625b8);
}

ActorUnkRMSF::~ActorUnkRMSF() {}
ActorProfileUnkRMSF::~ActorProfileUnkRMSF() {}
