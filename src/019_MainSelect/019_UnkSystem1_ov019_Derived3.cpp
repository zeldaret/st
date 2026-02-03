#include "FileSelect/FileSelect.hpp"
#include "Unknown/UnkStruct_02049bd4.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"

ARM UnkSystem1_ov019_Derived3::UnkSystem1_ov019_Derived3() :
    UnkSystem1_ov019_3(0, 0) {
    this->mUnk_12 = -1;
    this->mUnk_13 = 0;
    this->mUnk_14 = 0;
    this->mUnk_18 = -1;
    this->mUnk_1C = 0;
    this->mUnk_20 = 0;
    this->mUnk_21 = 0;
}

ARM void UnkSystem1_ov019_Derived3::vfunc_04() {
    this->mUnk_21 = 0;
    this->UnkSystem1_ov000_Base::vfunc_04();
}

ARM void UnkSystem1_ov019_Derived3::vfunc_08(unk32 param1) {
    UnkStruct_ov000_02067bc4::UnkStruct1 stack;
    this->mUnk_06 = data_ov000_020b504c.func_ov000_02067cf8(param1, this->mUnk_10, &stack);
}

//! TODO: fake match?
ARM unk32 UnkSystem1_ov019_Derived3::vfunc_1C(u32 param1, unk32 param2, unk32 param3) {
    unk32 ret = 0;

    if (param1 != 0) {
        if (param1 == 1) {
            this->mUnk_14 = 1;
            ret           = 1;
        }
    } else {
        this->mUnk_14 = 0;

        if (this->mUnk_04 <= 0) {
            data_02049bd4.mUnk_04++;
            UnkStruct_ov000_02067bc4::UnkStruct1 stack1;

            if (this->mUnk_18 == 0) {
                this->mUnk_13 = data_ov000_020b504c.func_ov000_02067cf8(0x0002001E, 0, &stack1);
            } else {
                this->mUnk_13 = data_ov000_020b504c.func_ov000_02067cf8(0x00020028, 0, &stack1);
            }

            data_ov000_020b504c.func_ov000_02067bc4(0)->func_02021bec(1);
            data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10)->func_02021c08();
            this->mUnk_04++;
        } else if (data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10)->vfunc_08() != 0) {
            if (this->mUnk_04 == 0x1E) {
                if (this->mUnk_18 == 0) {
                    gSaveManager.func_ov019_020d0ae0(this->mUnk_12);
                } else {
                    gSaveManager.mpSaveFile->func_ov019_020d1b14(this->mUnk_12);
                    gSaveManager.func_ov019_020d0a04(this->mUnk_12);
                }

                goto increment;
            } else if (this->mUnk_04 > 0x3C) {
                if (gSaveManager.mUnk_210 != 0 ? 0 : 1) {
                    if (this->mUnk_20 != 0) {
                        if (data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10)->mUnk_160.func_02022128() != 0) {
                            data_ov000_020b5214.func_ov000_0206db44(0x1F);
                            data_ov000_020b504c.func_ov000_02067e60(this->mUnk_13, this->mUnk_10);
                            this->mUnk_20 = 0;
                            data_02049bd4.mUnk_04--;
                            ret = 1;
                            goto cond;
                        }
                    } else {
                        this->mUnk_20 = 1;
                        data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10)->func_02021c2c();
                    }
                }

                ret = 0;
            } else {
                goto increment;
            }

        cond:
            if (ret != 0) {
                this->mUnk_21 = 1;
            }

        increment:
            this->mUnk_04++;
        }
    }

end:
    return ret;
}
