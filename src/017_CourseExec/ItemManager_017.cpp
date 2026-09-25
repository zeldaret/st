#include "Item/ItemManager.hpp"

void ItemManager::func_ov017_020bd2a0(bool param1, bool param2) {
    bool itemEquipSuccessful = this->mInventory.TryEquipForcedItem();

    if (this->mUnk_20 != NULL) {
        if (itemEquipSuccessful) {
            this->mUnk_20->func_ov031_020db844(this->mInventory.GetCurrentItem());
        }

        this->mUnk_20->func_ov102_02182fa8(param1, param2);
    }
}

void ItemManager::func_ov017_020bd2e8(void *param1) {
    if (this->mUnk_20 != NULL) {
        this->mUnk_20->func_ov102_02182ffc(param1);
    }
}
