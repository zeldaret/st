#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "Unknown/UnkSystem1.hpp"

ARM UnkSystem1_ov000_Base::UnkSystem1_ov000_Base(unk32 param1) {
    this->mUnk_04 = 0;
    this->mUnk_06 = -1;
    this->mUnk_08 = param1;
}

ARM void UnkSystem1_ov000_Base::vfunc_00(unk32 param1) {
    this->mUnk_08 = param1;
    this->mUnk_04 = 0;
    this->mUnk_06 = -1;
}

ARM void UnkSystem1_ov000_Base::vfunc_04() {}

ARM bool UnkSystem1_ov000_Base::func_ov000_020669b4(u8 *param1) {
    u16 unk_06 = this->mUnk_06;

    if (unk_06 <= 0xFF) {
        *param1 = unk_06;
        return true;
    }

    return false;
}

ARM void UnkSystem1_ov000_Base::vfunc_08(unk32 param1) {}

ARM unk32 UnkSystem1_ov000_Base::vfunc_0C() {
    return 0;
}

ARM void UnkSystem1_ov000_Base::vfunc_18() {}

ARM void UnkSystem1_ov000_Base::func_ov000_020669dc() {
    this->vfunc_18();
    this->mUnk_06 = -1;
    this->mUnk_08 = -1;
}

ARM unk32 UnkSystem1_ov000_Base::func_ov000_02066a08(UnkStruct5 *param1) {
    if (this->mUnk_04 == 0) {
        this->vfunc_08((param1->mUnk_01 << 16) | param1->mUnk_02);
        this->mUnk_04++;
    } else {
        return this->vfunc_0C();
    }

    return 0;
}

ARM unk32 UnkSystem1_ov000_Base::vfunc_10(u16 *param1) {
    return -1;
}

ARM unk32 UnkSystem1_ov000_Base::vfunc_14(void *param1) {
    return 1;
}

ARM unk32 UnkSystem1_ov000_Base::vfunc_1C(u32 param1, unk32 param2, unk32 param3) {
    return 1;
}

ARM unk32 UnkSystem1_ov000_Base::vfunc_20(unk32 param1, unk32 param2, unk32 param3) {
    return -1;
}
