#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"

UnkActorSystem2::UnkActorSystem2(bool param1) :
    mUnk_01B(true),
    mUnk_10C(false),
    mUnk_10D(false) {
    if (param1) {
        this->func_ov024_020c4ec0();
    }
}

void UnkActorSystem2::func_ov024_020c4ec0() {
    this->func_ov024_020c4ed8();
    this->mUnk_18 = true;
}

void UnkActorSystem2::func_ov024_020c4ed8() {
    this->mUnk_01C.func_ov000_0206082c(0x4D, 0);
}

void UnkActorSystem2::func_ov024_020c4ef0() {
    this->mUnk_094.func_ov000_0206082c(0x53, 0);
}

void UnkActorSystem2::func_ov024_020c4f08() {
    this->mUnk_10C         = true;
    this->mUnk_01C.mUnk_6E = true;
}

void UnkActorSystem2::func_ov024_020c4f18() {
    this->mUnk_10C         = false;
    this->mUnk_01C.mUnk_6E = false;
}

void UnkActorSystem2::func_ov024_020c4f28() {
    this->mUnk_10D         = true;
    this->mUnk_094.mUnk_6E = true;
    data_ov000_020b5214.func_ov000_0206db44(0xA8);
}

void UnkActorSystem2::func_ov024_020c4f4c() {
    this->mUnk_10D         = false;
    this->mUnk_094.mUnk_6E = false;
}

void UnkActorSystem2::func_ov024_020c4f5c() {
    this->mUnk_01C.func_ov000_02060af8();
}

void UnkActorSystem2::func_ov024_020c4f6c() {
    this->mUnk_094.func_ov000_02060af8();
}

bool UnkActorSystem2::func_ov024_020c4f7c() {
    return this->mUnk_094.mUnk_6E;
}

void UnkActorSystem2::vfunc_08(Input *pButtons, TouchControl *pTouchControl) {
    this->mUnk_01C.func_ov000_020609c4();
    this->mUnk_094.func_ov000_020609c4();

    if (this->mUnk_01C.func_ov000_02060a98(0x04000) || this->mUnk_01C.func_ov000_02060a98(0x40000) ||
        this->mUnk_01C.func_ov000_02060a98(0x7C000)) {
        data_ov000_020b5214.func_ov000_0206db44(0xA6);
    } else if (this->mUnk_01C.func_ov000_02060a98(0xB8000)) {
        data_ov000_020b5214.func_ov000_0206db44(0xA7);
    }
}

void UnkActorSystem2::vfunc_10(unk8 *param1) {
    Vec2us vec;

    if (this->func_ov024_020c510c()) {
        return;
    }

    if (this->mUnk_10C) {
        UnkStruct_ov019_020d24c8_28_258 UStack_30(0x4D, 0);
        vec.x = UStack_30.mPosU.x;
        vec.y = UStack_30.mPosU.y;
        data_0204af1c.func_0201aad0(&this->mUnk_01C, &vec, 0, NULL);
    }

    if (this->mUnk_10D) {
        UnkStruct_ov019_020d24c8_28_258 UStack_30(0x4D, 0);
        vec.x = UStack_30.mPosU.x;
        vec.y = UStack_30.mPosU.y;
        data_0204af1c.func_0201aad0(&this->mUnk_094, &vec, 0, NULL);
    }
}

bool UnkActorSystem2::func_ov024_020c510c() {
    if (!this->mUnk_01B) {
        return true;
    }

    return false;
}

void UnkActorSystem2::func_ov024_020c5120(bool param1) {
    this->mUnk_01B = param1;
}

UnkActorSystem2::~UnkActorSystem2() {}
