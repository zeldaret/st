#include "Item/ItemManager.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"

void UnkStruct_ItemManager_20::func_ov031_020db844(ItemFlag itemFlag) {
    this->mUnk_00->func_ov031_020dba74(itemFlag);
    this->mUnk_04->func_ov031_020db350(itemFlag);
    this->mUnk_08->func_ov031_020db5d4(itemFlag);
}

bool UnkStruct_ItemManager_20::func_ov031_020db874(ItemFlag itemFlag) {
    switch (itemFlag) {
        case ItemFlag_Boomerang:
            if (this->mUnk_04->func_ov031_020db3e8()) {
                return false;
            }

            break;
        case ItemFlag_Bombs:
            if (this->mUnk_10->func_ov031_020db2dc() >= 0 ? false : true) {
                return false;
            }
            break;
        default:
            break;
    }

    return true;
}

void UnkStruct_ItemManager_20::func_ov031_020db8cc() {
    this->mUnk_00->mUnk_20.func_ov031_020e096c();
    this->mUnk_04->mUnk_004 = false;
    this->mUnk_08->func_ov031_020db5b4();
}

bool UnkStruct_ItemManager_20::func_ov031_020db8f8(UnkStruct_027e0ce0_30_00 *param1) {
    unk32 value = this->mUnk_08->func_ov031_020db6a4(&param1->mUnk_00[PlayerType_Link]);

    if (value == 0x00) {
        value = this->mUnk_00->mUnk_20.func_ov031_020e098c(&param1->mUnk_00[PlayerType_Link]);
    }

    if (value == 0x00) {
        this->mUnk_04->func_ov031_020db498(&param1->mUnk_00[PlayerType_Link]);
    }
}
