#include "Actor/ActorUnkEFSB.hpp"
#include "System/SysNew.hpp"

extern "C" unk32 func_01ffb428(unk32, unk32);
extern "C" void func_01ffc634(ModelRender *, VecFx32 *, UnkAngleStruct, VecFx32 *);

static ActorUnkZLSL_AnimationTag data_ov031_02114ed0[0x2] = {
    {.index = 0x0, .name = "statue_beam"},
    {.index = 0x1, .name = "statue_beam"},
};

DECL_PROFILE(ActorProfileUnkEFSB);

Actor *ActorProfileUnkEFSB::Create() {
    return new(HeapIndex_2) ActorUnkEFSB();
}

ActorProfileUnkEFSB::ActorProfileUnkEFSB() :
    ActorProfile_Derived1(ActorId_EFSB) {}

ActorUnkEFSB::ActorUnkEFSB() :
    mUnk_098(G3d_GetModelPtr(GET_PROFILE(ActorProfileUnkEFSB)->mUnk_3C.mUnk_50)),
    mUnk_0F8(&this->mUnk_0F8.mUnk_1C, &this->mUnk_098, GET_PROFILE(ActorProfileUnkEFSB)->vfunc_04()),
    mUnk_154(&this->mUnk_154.mUnk_1C, &this->mUnk_098, GET_PROFILE(ActorProfileUnkEFSB)->vfunc_04()) {}

bool ActorUnkEFSB::vfunc_18(unk32 param1) {
    this->mUnk_0F8.vfunc_1C(data_ov031_02114ed0[0], 0x1000, 0x11F, 0x0);
    this->mUnk_154.func_ov000_02099ff8(data_ov031_02114ed0[0], 0x1000);

    this->mUnk_1B0 = this->mUnk_5C.mParams[0] << 0xC;
    if (this->mUnk_1B0 == 0) {
        this->mUnk_1B0 = 0x1000;
    }

    this->vfunc_54(0x0);
    return true;
}

void ActorUnkEFSB::vfunc_20() {
    if (this->mUnk_094 != 0x0) {
        return;
    }
    this->mUnk_0F8.vfunc_34();
    this->mUnk_154.vfunc_34();
}

void ActorUnkEFSB::vfunc_24() {
    this->vfunc_20();
}

void ActorUnkEFSB::vfunc_54(unk32 param1) {
    this->mUnk_094 = param1;
}

void ActorUnkEFSB::vfunc_2C(unk32 param1) {
    VecFx32 vec;

    VecFx32_Init(FLOAT_TO_FX32(1.0f), FLOAT_TO_FX32(1.0f), FLOAT_TO_FX32(1.0f), &vec);
    vec.z = func_01ffb428(this->mUnk_1B0, 0x8000);

    VecFx32 sp0 = this->mPos;
    sp0.y += FLOAT_TO_FX32(0.85f);

    func_01ffc634(&this->mUnk_098, &vec, this->mAngleStruct, &sp0);
}
