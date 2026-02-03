#include "FileSelect/FileSelect.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "regs.h"

extern "C" GameModeManagerBase_104 *func_ov003_020b6520(void *param1, void *param2);

ARM FileSelectManager_160::FileSelectManager_160(GameModeManagerBase_104 *param1, FileSelectMain *param2) {
    this->mUnk_10 = param2;
    this->mUnk_14 = NULL;
    this->mUnk_18 = param1;
    this->mUnk_1C = param1;
    data_0204a088->func_ov000_020611dc(this, 0x0F);
}

ARM FileSelectManager_160::~FileSelectManager_160() {}

ARM void FileSelectManager_160::vfunc_08(unk32 param1) {
    if (param1 == 0) {
        this->mUnk_0C = 0;
        this->mUnk_10->func_ov019_020cb6e8();
        data_0204a110.func_0201967c(0, -0x100, 1, 0, 3);
    }
}

ARM void FileSelectManager_160::vfunc_0C(unk32 param1) {
    if (param1 == 0) {
        switch (this->mUnk_0C) {
            case 0:
                if (this->mUnk_10->func_ov019_020cb748()) {
                    data_0204a088->func_ov000_02061224();
                    this->mUnk_0C = 1;
                }
                break;
            case 1:
                data_0204a088->func_ov000_02061230();
                break;
            default:
                break;
        }
    }
}

ARM void FileSelectManager_160::vfunc_14() {}

ARM void FileSelectManager_160::vfunc_10() {
    data_0204999c.func_02013014();
    data_0204999c.mUnk_60 = 0xD6D8;
    data_0204a088->func_ov000_02061248();
    data_0204a110.func_02019538(0x27, 1);
    GameModeLinkListNode::func_020166ac(&this->mUnk_10->mList);
    this->mUnk_10->func_ov019_020cb664();
    this->mUnk_14 = func_ov003_020b6520(&this->mUnk_18, this->mUnk_1C);
    REG_DISPCNT &= 0xFFFFE0FF;
    REG_DISPCNT |= 0x1F00;
    data_0204999c.func_02013070();
}

ARM void FileSelectManager_160::vfunc_18(unk32 param1) {
    if (param1 == 0) {
        this->mUnk_0C = 1;
    }
}

ARM void FileSelectManager_160::vfunc_1C(unk32 param1) {
    if (param1 == 0) {
        switch (this->mUnk_0C) {
            case 0:
                if (this->mUnk_10->func_ov019_020cb748()) {
                    data_0204a088->func_ov000_02061230();
                }
                break;
            case 1:
                data_0204a088->func_ov000_02061224();
                this->mUnk_0C = 0;
                break;
            default:
                break;
        }
    }
}

ARM void FileSelectManager_160::vfunc_20() {
    data_0204999c.func_02013014();
    data_0204999c.mUnk_60 = 0xD6D8;
    this->mUnk_14         = NULL;
    data_0204a088->func_ov000_02061248();
    data_0204a110.func_02019538(0x25, 1);

    FileSelectMain *temp_r4 = this->mUnk_10;
    this->mUnk_18->mList.func_020166cc(temp_r4->GetNode());
    temp_r4->vfunc_18();

    this->mUnk_10->func_ov019_020cb5dc();
    this->mUnk_10->func_ov019_020cb718();

    REG_DISPCNT &= 0xFFFFE0FF;
    REG_DISPCNT |= 0x1C00;

    data_0204999c.func_02013070();
}

ARM void FileSelectManager_160::vfunc_24() {
    data_0204a110.func_0201967c(0, 0, 1, 0, 3);
}
