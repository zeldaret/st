#include "Unknown/UnkStruct_ov000_020b504c.hpp"
#include "Unknown/UnkSystem1.hpp"

UnkSystem1_ov000_Base::UnkSystem1_ov000_Base(unk32 param1) {
    this->mUnk_04 = 0;
    this->mUnk_06 = -1;
    this->mUnk_08 = param1;
}

void UnkSystem1_ov000_Base::vfunc_00(unk32 param1) {
    this->mUnk_08 = param1;
    this->mUnk_04 = 0;
    this->mUnk_06 = -1;
}

void UnkSystem1_ov000_Base::vfunc_04() {}

bool UnkSystem1_ov000_Base::func_ov000_020669b4(u8 *param1) {
    u16 unk_06 = this->mUnk_06;

    if (unk_06 <= 0xFF) {
        *param1 = unk_06;
        return true;
    }

    return false;
}

void UnkSystem1_ov000_Base::vfunc_08(unk32 param1) {}

unk32 UnkSystem1_ov000_Base::vfunc_0C() {
    return 0;
}

void UnkSystem1_ov000_Base::vfunc_18() {}

void UnkSystem1_ov000_Base::func_ov000_020669dc() {
    this->vfunc_18();
    this->mUnk_06 = -1;
    this->mUnk_08 = -1;
}

unk32 UnkSystem1_ov000_Base::func_ov000_02066a08(UnkStruct5 *param1) {
    if (this->mUnk_04 == 0) {
        this->vfunc_08((param1->mUnk_01 << 16) | param1->mUnk_02);
        this->mUnk_04++;
    } else {
        return this->vfunc_0C();
    }

    return 0;
}

unk32 UnkSystem1_ov000_Base::vfunc_10(u16 *param1) {
    return -1;
}

bool UnkSystem1_ov000_Base::vfunc_14(FLW1Instr *param1) {
    return true;
}

unk32 UnkSystem1_ov000_Base::vfunc_1C(u32 param1, unk32 param2, unk32 param3) {
    return 1;
}

unk32 UnkSystem1_ov000_Base::vfunc_20(unk32 param1, unk32 param2, unk32 param3) {
    return -1;
}
