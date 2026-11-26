#include "CommonFuncs.hpp"
#include "Item/ItemManager.hpp"

THUMB_BEGIN

UnkStruct_ItemManager_20_14::UnkStruct_ItemManager_20_14() :
    mUnk_00(0x00, NULL),
    mUnk_14(-1) {}

void UnkStruct_ItemManager_20_14::func_ov031_020db7d8() {
    this->mUnk_00.func_ov000_0206738c();

    if (this->mUnk_14 >= 0) {
        func_ov000_0205ca74(this->mUnk_14);
        this->mUnk_14 = -1;
    }
}

THUMB_END

void UnkStruct_ItemManager_20_14::func_ov031_020db7f4() {
    if ((this->mUnk_00.mUnk_08 & 0xFFFF) != 0xFFFF) {
        this->mUnk_00.vfunc_04();
    } else if (this->mUnk_14 >= 0) {
        func_ov000_0205ca74(this->mUnk_14);
        this->mUnk_14 = -1;
    }
}
