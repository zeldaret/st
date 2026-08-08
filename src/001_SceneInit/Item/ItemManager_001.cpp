#include "Item/ItemManager.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"

ItemManager::ItemManager() :
    mUnk_20(NULL),
    mUnk_24(0) {}

void ItemManager::func_ov001_020bc24c() {
    this->mInventory.func_ov001_020bb9f8();

    if (!data_027e09a4->IsTrain()) {
        this->mUnk_20 = new(HeapIndex_1) UnkStruct_ItemManager_20();
    }
}

void ItemManager::func_ov001_020bc27c() {
    if (this->mUnk_20 != NULL) {
        DELETE(this->mUnk_20);
    }
}

void ItemManager::func_ov001_020bc29c() {
    this->mInventory.func_ov001_020bba54();

    if (this->mUnk_20 != NULL) {
        this->mUnk_20->func_ov101_02182d5c();
    }

    this->mUnk_24 = 0;
}

void ItemManager::func_ov001_020bc2b8() {
    if (this->mUnk_20 != NULL) {
        this->mUnk_20->mUnk_14.func_ov031_020db7d8();
    }
}
