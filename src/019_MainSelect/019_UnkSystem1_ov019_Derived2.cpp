#include "FileSelect/FileSelect.hpp"
#include "Unknown/UnkStruct_02049bd4.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"
#include "Unknown/UnkStruct_ov003_020ba740.hpp"

ARM UnkSystem1_ov019_Derived2::UnkSystem1_ov019_Derived2() :
    UnkSystem1_ov019_2(0, 0) {
    this->mUnk_12 = -1;
    this->mUnk_13 = 0;
    this->mUnk_14 = 0;
    this->mUnk_15 = 0;
}

ARM void UnkSystem1_ov019_Derived2::vfunc_08(unk32 param1) {
    UnkStruct_ov000_02067bc4::UnkStruct1 stack;
    this->mUnk_06 = data_ov000_020b504c.func_ov000_02067cf8(param1, this->mUnk_10, &stack);
}

ARM unk32 UnkSystem1_ov019_Derived2::vfunc_1C(u32 param1, unk32 param2, unk32 param3) {
    unk32 ret = 0;

    if (param1 != 0 && param1 != 1) {
        if (param1 == 2) {
            this->mUnk_14 = 1;
            ret           = 1;
        }
    } else {
        this->mUnk_14 = 0;

        if (this->mUnk_04 <= 0) {
            data_02049bd4.mUnk_04++;
            UnkStruct_ov000_02067bc4::UnkStruct1 stack1;
            this->mUnk_13 = data_ov000_020b504c.func_ov000_02067cf8(0x00020032, 0, &stack1);
            data_ov000_020b504c.func_ov000_02067bc4(0)->func_02021bec(1);
            data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10)->func_02021c08();
            this->mUnk_04++;
        } else if (data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10)->vfunc_08() != 0) {
            if (this->mUnk_04 == 0x0F) {
                SaveFile *pSaveFile = gSaveManager.mpSaveFile;
                pSaveFile->func_ov019_020d1aac(this->mUnk_12, data_ov003_020ba740->mUnk_9D0);
                pSaveFile->mSlots[this->mUnk_12].mUnk_2600.mUnk_00[0].mUnk_02 = param1;
                gSaveManager.func_ov019_020d09dc(this->mUnk_12);
            } else if (this->mUnk_04 > 0x1E) {
                if (gSaveManager.mUnk_210 != 0 ? 0 : 1) {
                    if (this->mUnk_15 != 0) {
                        if (data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10)->mUnk_160.func_02022128() != 0) {
                            data_ov000_020b5214.func_ov000_0206db44(0x1F);
                            data_ov000_020b504c.func_ov000_02067e60(this->mUnk_13, this->mUnk_10);
                            this->mUnk_15 = 0;
                            data_02049bd4.mUnk_04--;
                            this->mUnk_04++;
                            ret = 1;
                            goto end;
                        }
                    } else {
                        this->mUnk_15 = 1;
                        data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10)->func_02021c2c();
                    }
                }

                ret = 0;
            }

            this->mUnk_04++;
        }
    }

end:
    return ret;
}
