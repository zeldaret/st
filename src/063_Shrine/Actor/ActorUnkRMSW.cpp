#include "Actor/ActorUnkRMSW.hpp"
#include "Actor/ActorId.hpp"
#include "Actor/ActorUnkZLSL_ZSRS.hpp"
#include "Actor/Actor_Derived1.hpp"
#include "nns/g3d/g3d.h"
#include "profile.hpp"
#include "types.h"

extern char data_ov063_02162598[0x10]; // = "RMSW_wall";
extern char data_ov063_021625a8[0x10]; // = "RMSW";

struct ActorUnkZLSL_AnimationTag data_ov063_02163388 = {0, "RMSW"};

extern "C" void func_ov000_02099ff8(unk32 *param1, struct UnkStruct_data_ov063_02163388 param2, unk32 param8);

DECL_PROFILE(ActorProfileUnkRMSW);

Actor *ActorProfileUnkRMSW::Create() {
    return new(HeapIndex_2) ActorUnkRMSW();
}

ActorProfileUnkRMSW::ActorProfileUnkRMSW() :
    ActorProfile_Derived1(ActorId_RMSW) {}

ActorUnkRMSW::ActorUnkRMSW() :
    mUnk_158(&mUnk_94, GET_PROFILE(ActorProfileUnkRMSW)->vfunc_04()) {}

bool ActorUnkRMSW::vfunc_18(unk32 param1) {
    bool res = ActorUnkRMSBase::vfunc_18(param1);
    ((UnkStruct_ov000_020b31a8 *) &this->mUnk_158)->func_ov000_02099ff8(data_ov063_02163388, 0x1000);
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
