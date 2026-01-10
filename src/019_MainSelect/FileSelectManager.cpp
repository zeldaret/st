#include "FileSelect/FileSelect.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"
#include "Unknown/UnkStruct_ov003_020ba740.hpp"
#include "regs.h"

const unk16 data_ov019_020d1bb0[] = {0x01, 0x37, 0x38, 0x39, 0x3C, 0x00};

static const UnkStruct_ov019_020d1d80 data_ov019_020d1db4(0x00020002);

ARM GameModeManagerBase *FileSelectManager::Create(unk32 param1) {
    return new(HeapIndex_1) FileSelectManager(param1);
}

ARM FileSelectManager::~FileSelectManager() {
    this->func_ov019_020c51a8();
    data_0204a110.mUnk_DA4 = 1;
    this->mUnk_004.func_ov001_020bd784();

    delete this->mUnk_164;
    this->mUnk_164 = NULL;

    delete this->mUnk_160;
    this->mUnk_160 = NULL;

    delete this->mUnk_15C;
    this->mUnk_15C = NULL;

    delete this->mUnk_158;
    this->mUnk_158 = NULL;
}

ARM void FileSelectManager::vfunc_10(unk32 param1, unk32 param2, unk32 param3) {
    void *unkPtr;

    this->mUnk_004.func_0201c00c(0x25, 1, param3);

    FileSelectMain *newSub3 = new(HeapIndex_1) FileSelectMain();
    unkPtr                  = newSub3;
    if (newSub3 != NULL) {
        unkPtr = &newSub3->mUnk_04;
    }
    this->mUnk_158 = newSub3;
    this->mUnk_154->mUnk_04.func_020166cc(unkPtr);
    newSub3->vfunc_18();

    FileSelectSubScreen *newSub4 = new(HeapIndex_1) FileSelectSubScreen();
    unkPtr                       = newSub4;
    if (newSub4 != NULL) {
        unkPtr = &newSub4->mUnk_04;
    }
    this->mUnk_15C = newSub4;
    this->mUnk_154->mUnk_04.func_020166cc(unkPtr);
    newSub4->vfunc_18();

    this->mUnk_160 = new(HeapIndex_1) FileSelectManager_160(&this->mUnk_104, this->mUnk_158);
    this->mUnk_164 = new(HeapIndex_1) FileSelectManager_164(&this->mUnk_104, this->mUnk_158);

    data_0204a110.mUnk_DA4 = 0;
}

ARM void FileSelectManager::vfunc_24() {
    this->GameModeManagerBase::vfunc_24();
    this->func_0201875c();
    this->func_02018908();

    if (this->mUnk_132 == 0) {
        this->mUnk_148 = -1;
    }

    this->func_ov019_020c5038();
    this->func_ov019_020c503c();
}

ARM void FileSelectManager::func_ov019_020c5038() {}

class UnkStruct {
public:
    unk8 pad[0x3AC];
    unk8 mUnk_3AC;
};

// https://decomp.me/scratch/hJi8l
ARM void FileSelectManager::func_ov019_020c503c() {
    if (data_0204a088->mUnk_00 == 0x0F) {
        u32 input = data_0204a110.func_01ff9b50();

        switch (input) {
            case 0x58:
                data_ov003_020ba740->func_ov003_020b69d8(2);
                data_ov000_020b5214.func_ov000_0206db44(0x13);
                break;
            case 0x57:
                data_ov003_020ba740->func_ov003_020b69d8(3);

                UnkStruct_ov019_020d1d80 *uVar2 = (UnkStruct_ov019_020d1d80 *) &data_ov019_020d1db4;
                this->mUnk_168.mUnk_12          = this->mUnk_158->mSaveSlotIndex;
                data_ov000_020b504c.func_ov000_0206807c(uVar2->mUnk_00, &this->mUnk_168);

                ((UnkStruct *) data_ov000_020b504c.func_ov000_02067bb4(0))->mUnk_3AC = 1;
                data_ov000_020b5214.func_ov000_0206db44(0x12);
                break;
            default:
                break;
        }
    }

    if ((u16) this->mUnk_168.mUnk_08 != 0xFFFF) {
        this->mUnk_168.vfunc_04();

        if ((u16) this->mUnk_168.mUnk_08 == 0xFFFF) {
            if (this->mUnk_168.mUnk_14) {
                data_ov003_020ba740->func_ov003_020b69d8(4);
            } else {
                data_ov003_020ba740->func_ov003_020b69d8(6);
            }
        }
    }
}

ARM void FileSelectManager::vfunc_28(unk32 param1) {
    this->GameModeManagerBase::vfunc_28(param1);
    this->func_02018a14(param1);
}

ARM void FileSelectManager::vfunc_2C(unk32 param1) {
    this->func_02018984(param1);
    this->func_02018830(param1);
}

ARM void FileSelectManager::func_ov019_020c51a8() {
    delete data_0204a088;
}

ARM UnkStruct_0204a088_Base::~UnkStruct_0204a088_Base() {
    data_0204a088 = NULL;
}
