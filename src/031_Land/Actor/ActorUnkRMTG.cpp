#include "Actor/ActorUnkRMTG.hpp"
#include "CommonFuncs.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"

extern const char data_ov031_02110ad0;

DECL_PROFILE(ActorProfileUnkRMTG);

Actor *ActorProfileUnkRMTG::Create() {
    return new(HeapIndex_2) ActorUnkRMTG();
}

ActorProfileUnkRMTG::ActorProfileUnkRMTG() :
    ActorProfile_Derived1(ActorId_RMTG) {}

ActorUnkRMTG::ActorUnkRMTG() :
    mUnk_94(NULL) {}

bool ActorUnkRMTG::Init(unk32 param1) {
    this->mPos.x -= FX_F32_TO_FX32(0.5f);
    this->mPos.z -= FX_F32_TO_FX32(0.5f);

    UnkStruct_027e0cd8_0C_Base *data = data_027e0cd8->mUnk_0C;

    Vec2bCpp sp0;
    func_01ffedac(&sp0, &this->mPos);

    this->mPos.y   = data->func_01ffedf4(&sp0);
    data->mUnk_12D = true;

    u16 var_6C = this->mUnk_5C.mParams[0];
    this->mUnk_94.vfunc_08(
        GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMTG)->mUnk_3C, &data_ov031_02110ad0 + (var_6C << 4)));

    return true;
}

void ActorUnkRMTG::Setup() {
    UnkStruct_027e09bc_0C *data = data_027e09bc->mUnk_04[2];
    data->func_ov000_0207834c(&this->mPos, func_ov000_02077590(0x7), 0x0);
}

void ActorUnkRMTG::vfunc_2C(Actor_vfunc_30 *param1) {
    this->mUnk_94.vfunc_18(&this->mPos);
}
