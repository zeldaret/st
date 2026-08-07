//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFSB.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkEFSB);

Actor *ActorProfileUnkEFSB::Create() {
    return new(HeapIndex_2) ActorUnkEFSB();
}

ActorProfileUnkEFSB::ActorProfileUnkEFSB() :
    ActorProfile_Derived1(ActorId_EFSB) {}

ActorUnkEFSB::ActorUnkEFSB() :
    mUnk_098(NULL) {}

void ActorUnkEFSB::func_ov031_020fb614(void) {}

void ActorUnkEFSB::func_ov031_020fb6cc(void) {
    if (this->mUnk_094 != 0x0) {
        return;
    }
    this->mUnk_0F8.vfunc_34();
    this->mUnk_154.vfunc_34();
}

void ActorUnkEFSB::func_ov031_020fb704(void) {
    this->vfunc_20();
}

void ActorUnkEFSB::func_ov031_020fb718(unk32 param1) {
    this->mUnk_094 = param1;
}

extern "C" unk32 func_01ffb428(unk32, unk32);
extern "C" void func_01ffc634(ModelRender *, VecFx32 *, UnkAngleStruct, VecFx32 *);

void ActorUnkEFSB::func_ov031_020fb720(void) {
    VecFx32 vec;

    VecFx32_Init(FLOAT_TO_FX32(1.0f), FLOAT_TO_FX32(1.0f), FLOAT_TO_FX32(1.0f), &vec);
    vec.z = func_01ffb428(this->mUnk_1B0, 0x8000);

    VecFx32 sp0 = this->mPos;
    sp0.y += 0xD9A;

    func_01ffc634(&this->mUnk_098, &vec, this->mAngleStruct, &sp0);
}

ActorUnkEFSB::~ActorUnkEFSB() {}
ActorProfileUnkEFSB::~ActorProfileUnkEFSB() {}
