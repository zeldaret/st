#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "Unknown/UnkSystem1.hpp"

ARM UnkSystem1_ov000_Derived1::UnkSystem1_ov000_Derived1(unk32 param1, UnkStruct_ov000_02067bc4::UnkStruct1 *param2) :
    UnkSystem1_ov000_Base(-1) {
    this->mUnk_0C = param2;
    this->mUnk_10 = param1;
}

ARM UnkSystem1_ov000_Derived1::~UnkSystem1_ov000_Derived1() {
    u8 local_10[4];

    if (this->func_ov000_020669b4(local_10)) {
        data_ov000_020b504c.func_ov000_02067e60(local_10[0], this->mUnk_10);
    }
}

ARM void UnkSystem1_ov000_Derived1::func_ov000_0206738c() {
    u8 local_10[4];

    if (this->func_ov000_020669b4(local_10)) {
        data_ov000_020b504c.func_ov000_02067e60(local_10[0], this->mUnk_10);
    }
}

ARM void UnkSystem1_ov000_Derived1::vfunc_08(unk32 param1) {
    if (this->mUnk_0C != 0) {
        this->mUnk_06 = data_ov000_020b504c.func_ov000_02067cf8(param1, this->mUnk_10, this->mUnk_0C);
    } else {
        UnkStruct_ov000_02067bc4::UnkStruct1 local_18(-1);
        this->mUnk_06 = data_ov000_020b504c.func_ov000_02067cf8(param1, this->mUnk_10, &local_18);
    }
}

ARM unk32 UnkSystem1_ov000_Derived1::vfunc_0C() {
    u8 local_10[4];

    if (this->func_ov000_020669b4(local_10)) {
        return data_ov000_020b504c.func_ov000_02067f88(local_10[0], this->mUnk_10);
    }

    return 0;
}

ARM unk32 UnkSystem1_ov000_Derived1::vfunc_10(u16 *param1) {
    switch (param1[1]) {
        case 1:
        case 2:
        case 3:
            return data_ov000_020b504c.func_ov000_020682c0(this->mUnk_10);
        default:
            break;
    }

    return this->UnkSystem1_ov000_Base::vfunc_10(param1);
}
