#include "Unknown/UnkStruct_0204a060.hpp"
#include "System/OverlayManager.hpp"
#include "Unknown/UnkStruct_02049a2c.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"

extern "C" void func_ov001_020be078();

THUMB bool UnkStruct_0204a060::vfunc_0C(void) {
    return data_02049a2c.func_02013724(this->callback);
}

THUMB void UnkStruct_0204a060::func_020183b8(void) {
    func_ov001_020be078();
}

THUMB void UnkStruct_0204a060::func_020183c0(void) {
    this->func_020183d4(false, func_ov001_020be078, 1);
}

THUMB bool UnkStruct_0204a060::func_020183d4(bool param1, void *param2, unk32 param3) {
    if (this->mUnk_0C) {
        return false;
    }

    this->mUnk_14  = param1 ? 0x00010000 : 0xFFFF0000;
    this->callback = param2;
    this->func_0201bb84(0x20, 4, 0x20);

    if (param3 != 0) {
        data_ov000_020b51b8.func_ov000_0206d0bc(this->mUnk_1A);
    }

    data_0204e5f8.func_0201b9a8(this);
    return true;
}

THUMB void UnkStruct_0204a060::func_02018424(void) {
    data_02049ba0.func_020148d0(0x18)->func_ov018_020c4840();
}

ARM UnkStruct_0204a060::~UnkStruct_0204a060() {}
