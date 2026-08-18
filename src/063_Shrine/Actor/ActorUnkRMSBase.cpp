#include "Actor/ActorUnkRMSBase.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_ov031_02114870.hpp"

ActorUnkRMSBase::ActorUnkRMSBase() :
    mUnk_F4(NULL),
    mUnk_154(0),
    mUnk_155(0) {}

bool ActorUnkRMSBase::vfunc_18(unk32 param1) {
    bool res = UnkStruct_ov031_02114870::vfunc_18(param1);
    mUnk_F4.vfunc_08(this->vfunc_58());
    data_027e0cd8->mUnk_0C->mUnk_12A = 1;
    return res;
}

// Matched
void ActorUnkRMSBase::vfunc_1C() {}

// Matched
void ActorUnkRMSBase::vfunc_20() {}

void ActorUnkRMSBase::vfunc_24() {
    this->vfunc_20();
}

void ActorUnkRMSBase::vfunc_2C(unk32 param1) {
    UnkStruct_ov031_02114870::vfunc_2C(param1);

    if (mUnk_154) {
        mUnk_F4.vfunc_18(&mPos);
    }
}
