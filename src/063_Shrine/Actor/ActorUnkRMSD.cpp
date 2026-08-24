#include "Actor/ActorUnkRMSD.hpp"
#include "Actor/ActorUnkRMSV.hpp"
#include "Actor/Actor_Derived1.hpp"
#include "nns/g3d/g3d.h"
#include "profile.hpp"
#include "types.h"

extern char data_ov063_021625d8[0x10]; // = "RMSD_wall";
extern char data_ov063_021625e8[0x10]; // = "RMSD";

ActorUnkZLSL_AnimationTag data_ov063_021634b0 = {0, "RMSD"};

extern "C" void func_ov000_02099ff8(unk32 *param1, ActorUnkZLSL_AnimationTag param2, unk32 param8);

DECL_PROFILE(ActorProfileUnkRMSD);

Actor *ActorProfileUnkRMSD::Create() {
    return new(HeapIndex_2) ActorUnkRMSD();
}

ActorProfileUnkRMSD::ActorProfileUnkRMSD() :
    ActorProfile_Derived1(ActorId_RMSD) {}

ActorUnkRMSD::ActorUnkRMSD() :
    mUnk_158(&mUnk_94, GET_PROFILE(ActorProfileUnkRMSD)->vfunc_04()) {}

bool ActorUnkRMSD::vfunc_18(unk32 param1) {
    bool res = ActorUnkRMSBase::vfunc_18(param1);
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
