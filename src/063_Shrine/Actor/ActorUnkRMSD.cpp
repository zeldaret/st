#include "Actor/ActorUnkRMSD.hpp"
#include "Actor/ActorUnkRMSV.hpp"
#include "nns/g3d/g3d.h"
#include "profile.hpp"
#include "types.h"

static const char data_ov063_021625e8[16] = "RMSD";
static const char data_ov063_021625d8[16] = "RMSD_wall";

static ActorUnkZLSL_AnimationTag data_ov063_021634b0 = {0, "RMSD", 0x00};

DECL_PROFILE(ActorProfileUnkRMSD);

Actor *ActorProfileUnkRMSD::Create() {
    return new(HeapIndex_2) ActorUnkRMSD();
}

ActorProfileUnkRMSD::ActorProfileUnkRMSD() :
    ActorProfile_Derived1(ActorId_RMSD) {}

ActorUnkRMSD::ActorUnkRMSD() :
    mUnk_158(&mUnk_94, GET_PROFILE(ActorProfileUnkRMSD)->vfunc_04()) {}

bool ActorUnkRMSD::Init(unk32 param1) {
    bool res = ActorUnkRMSBase::Init(param1);
    this->mUnk_158.func_ov000_02099ff8(data_ov063_021634b0, 0x1000);
    return res;
}

void ActorUnkRMSD::Update(void) {
    this->mUnk_158.vfunc_34();
}
void ActorUnkRMSD::vfunc_24(void) {
    this->Update();
}

G3d_Model *ActorUnkRMSD::vfunc_54(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSD)->mUnk_3C, data_ov063_021625e8);
}

G3d_Model *ActorUnkRMSD::vfunc_58(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSD)->mUnk_3C, data_ov063_021625d8);
}
