#include "FileSelect/FileSelect.hpp"
#include "Unknown/UnkStruct_02049bd4.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"

extern u8 data_ov000_020b64b0[8]; // bool?

ARM UnkSystem1_ov019_Derived1::UnkSystem1_ov019_Derived1() :
    UnkSystem1_ov019_1(0, 0) {
    this->mUnk_14 = 0;
    this->mUnk_18 = -1;
    this->mUnk_1B = 0;
}

ARM void UnkSystem1_ov019_Derived1::vfunc_08(unk32 param1) {
    UnkStruct_ov000_02067bc4::UnkStruct1 stack;
    this->mUnk_06 = data_ov000_020b504c.func_ov000_02067cf8(param1, this->mUnk_10, &stack);
}

ARM unk32 UnkSystem1_ov019_Derived1::vfunc_1C(u32 param1, unk32 param2, unk32 param3) {
    if (param1 < 4) {
        if (this->mUnk_04 <= 0) {
            this->func_ov019_020c5590(0x0002001B, param2, param3);
            this->mUnk_04++;
        } else if (data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10)->vfunc_08() != 0) {
            switch (this->mUnk_04) {
                case 0x1E:
                    switch (param1) {
                        case 0:
                            gSaveManager.func_ov019_020d08fc(2, SaveFile::func_ov019_020d0d50);
                            gSaveManager.mUnk_20A = 0;
                            break;
                        case 1:
                            gSaveManager.func_ov019_020d08fc(2, SaveFile::func_ov019_020d0ea8);
                            break;
                        case 2:
                            gSaveManager.func_ov019_020d08fc(2, SaveFile::func_ov019_020d1108);
                            break;
                        case 3:
                            gSaveManager.func_ov019_020d08fc(2, SaveFile::func_ov019_020d127c);
                            break;
                        default:
                            break;
                    }

                    this->mUnk_18 = -1;
                    break;
                default:
                    if (this->mUnk_04 > 0x3C) {
                        if (gSaveManager.mUnk_210 != 0 ? 0 : 1) {
                            if (this->mUnk_1B != 0) {
                                if (data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10)->mUnk_160.func_02022128() != 0) {
                                    data_ov000_020b5214.func_ov000_0206db44(0x1F);
                                    data_ov000_020b504c.func_ov000_02067e60(this->mUnk_1A, this->mUnk_10);
                                    this->mUnk_1B = 0;
                                    data_02049bd4.mUnk_04--;
                                    return 1;
                                }
                            } else {
                                this->mUnk_1B = 1;
                                data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10)->func_02021c2c();
                            }
                        }

                        return 0;
                    }
            }

            this->mUnk_04++;
        }

        return 0;
    }

    return 1;
}

ARM unk32 UnkSystem1_ov019_Derived1::vfunc_20(unk32 param1, unk32 param2, unk32 param3) {
    bool isParam3 = false;

    if (param3 != 0) {
        isParam3 = true;
    }

    switch (param1) {
        case 0:
            return gSaveManager.mUnk_20A;
        case 1:
            if (!gSaveManager.IsUnk210()) {
                return -1;
            }

            return this->func_ov019_020c5540(isParam3, this->mUnk_14->func_ov019_020d0c90(param3));
        case 2:
            if (!gSaveManager.IsUnk210()) {
                return -1;
            }

            return this->func_ov019_020c5540(isParam3, this->mUnk_14->func_ov019_020d0c4c(2, isParam3));
        case 3:
            if (!gSaveManager.IsUnk210()) {
                return -1;
            }

            return this->func_ov019_020c5540(isParam3, this->mUnk_14->func_ov019_020d0c4c(4, isParam3));
        default:
            break;
    }

    return -1;
}

ARM unk32 UnkSystem1_ov019_Derived1::func_ov019_020c5540(bool param1, unk16 param2) {
    if (param2 >= 0) {
        if (param1 != 1 || this->mUnk_18 != 0) {
            this->mUnk_18                   = param2;
            unk32 sVar1                     = this->mUnk_18 + 1;
            UnkStruct_ov000_02067bc4 *pTest = data_ov000_020b504c.func_ov000_02067bc4(0);
            pTest->mUnk_008->mUnk_54        = sVar1;
        }

        return 1;
    }

    return 0;
}

ARM void UnkSystem1_ov019_Derived1::func_ov019_020c5590(unk32 param1, unk32 param2, unk32 param3) {
    data_02049bd4.mUnk_04++;
    UnkStruct_ov000_02067bc4::UnkStruct1 auStack_20(param3);
    this->mUnk_1A = data_ov000_020b504c.func_ov000_02067cf8(param1, this->mUnk_10, &auStack_20);
    data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10)->func_02021bec(1);
    data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10)->func_02021c08();
}
