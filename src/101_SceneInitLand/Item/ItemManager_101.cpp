#include "Item/ItemManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e0d2c.hpp"
#include "Unknown/UnkStruct_027e0d30.hpp"
#include "Unknown/UnkStruct_027e0d38.hpp"

UnkStruct_ItemManager_20_04::UnkStruct_ItemManager_20_04() :
    mUnk_000(0),
    mUnk_004(false) {}

UnkStruct_ItemManager_20_04::~UnkStruct_ItemManager_20_04() {}

UnkStruct_ItemManager_20::UnkStruct_ItemManager_20() :
    mUnk_00(new(HeapIndex_1) UnkStruct_ItemManager_20_00()),
    mUnk_04(new(HeapIndex_1) UnkStruct_ItemManager_20_04()),
    mUnk_08(new(HeapIndex_1) UnkStruct_ItemManager_20_08()),
    mUnk_0C(new(HeapIndex_1) UnkStruct_ItemManager_20_0C()),
    mUnk_10(new(HeapIndex_1) UnkStruct_ItemManager_20_10()) {
    this->mUnk_00->func_ov031_020d9bd0();
    this->mUnk_04->func_ov031_020d9598();
    this->mUnk_08->func_ov031_020d9658();
}

UnkStruct_ItemManager_20::~UnkStruct_ItemManager_20() {
    UnkStruct_027e0d30::Destroy();
    UnkStruct_027e0d2c::Destroy();
    UnkStruct_027e0d38::Destroy();
    delete this->mUnk_10;
    delete this->mUnk_0C;
    delete this->mUnk_08;
    delete this->mUnk_04;
    delete this->mUnk_00;
}

void UnkStruct_ItemManager_20::func_ov101_02182d5c() {
    this->mUnk_00->func_ov031_020dba40();
    this->mUnk_04->func_ov031_020db338();

    UnkStruct_ItemManager_20_08 *pUnk_08 = this->mUnk_08;
    pUnk_08->mUnk_00                     = 0;
    pUnk_08->mUnk_02                     = 1;
    pUnk_08->func_ov031_020db5b4();

    this->mUnk_0C->func_ov031_020db954();
    this->mUnk_10->func_ov031_020db2b0();
}

void UnkStruct_027e0d30::Destroy() {
    if (data_027e0d30 != NULL) {
        delete data_027e0d30;
    }
}

void UnkStruct_027e0d2c::Destroy() {
    if (data_027e0d2c != NULL) {
        delete data_027e0d2c;
    }
}

void UnkStruct_027e0d38::Destroy() {
    if (data_027e0d38 != NULL) {
        delete data_027e0d38;
    }
}

DECL_INSTANCE_DTOR(UnkStruct_027e0d30, data_027e0d30);
DECL_INSTANCE_DTOR(UnkStruct_027e0d2c, data_027e0d2c);
DECL_INSTANCE_DTOR(UnkStruct_027e0d38, data_027e0d38);
