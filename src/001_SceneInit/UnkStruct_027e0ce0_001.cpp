#include "System/OverlayManager.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e0cdc.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"

UnkStruct_027e0ce0_40_Base_94::UnkStruct_027e0ce0_40_Base_94(unk32 param1) :
    UnkStruct_027e0ce0_40_Base_94_Base(param1) {
    bool var_r0;

    if (param1 == -1) {
        var_r0 = true;
    } else {
        var_r0 = false;
    }

    if (var_r0) {
        if (gOverlayManager.IsPlayerSub()) {
            var_r0 = true;
        } else {
            var_r0 = false;
        }
    }

    this->mUnk_50 = var_r0 ? new(HeapIndex_1) UnkStruct_027e0ce0_40_Base_94_50(param1) : NULL;
    this->mUnk_54 = this;
    this->mUnk_58 = this->mUnk_50;
}

UnkStruct_027e0ce0_40_Base_94::~UnkStruct_027e0ce0_40_Base_94() {
    delete this->mUnk_50;
}

UnkStruct_027e0ce0 *UnkStruct_027e0ce0::Create() {
    return new(HeapIndex_1) UnkStruct_027e0ce0();
}

UnkStruct_027e0ce0::UnkStruct_027e0ce0() :
    mUnk_02(0),
    mUnk_03(0),
    mUnk_04(NULL),
    mUnk_08(0),
    mUnk_0C(this),
    mUnk_1C(new(HeapIndex_1) UnkStruct_027e0ce0_1C()),
    mUnk_20(new(HeapIndex_1) UnkStruct_027e0ce0_20()),
    mUnk_24(data_027e09a4->IsSceneModeBattle() ? new(HeapIndex_1) UnkStruct_027e0ce0_24() : NULL),
    mUnk_28(data_027e09a4->IsSceneAdvOrTitle() ? new(HeapIndex_1) ItemManager() : NULL),
    mUnk_2C(this->mUnk_28),
    mUnk_30(new(HeapIndex_1) UnkStruct_027e0ce0_30()),
    mUnk_34(data_027e09a4->IsSceneModeAdventure() ? new(HeapIndex_1) UnkStruct_027e0ce0_34() : NULL),
    mUnk_38(NULL),
    mUnk_3C(NULL),
    mUnk_40(NULL) {
    UnkStruct_027e0cdc::Create(this->mUnk_30);
}

UnkStruct_027e0ce0::~UnkStruct_027e0ce0() {
    UnkStruct_027e0cdc::Destroy();
    delete this->mUnk_34;
    delete this->mUnk_30;
    delete this->mUnk_28;
    delete this->mUnk_24;
    delete this->mUnk_20;
    delete this->mUnk_1C;
}

void UnkStruct_027e0ce0::func_ov001_020bc4d8(InvImportData *pInvData, unk32 param2, unk32 param3) {
    UnkStruct_027e09bc *ptr      = data_027e09bc;
    UnkStruct_027e0ce0_0C *pList = GetLinkListRef(this->mUnk_0C);
    ptr->mUnk_48.Prepend(pList);

    if (this->mUnk_28 != NULL) {
        this->mUnk_28->GetInventory()->func_ov001_020bb8bc(pInvData);
    }

    if (this->mUnk_34 != NULL) {
        this->mUnk_34->func_ov001_020bf22c(param2, param3);
    }

    if (this->mUnk_24 == NULL) {
        this->func_ov000_0208a218(pInvData);
    }
}

void UnkStruct_027e0ce0::func_ov001_020bc524(bool param1) {}

void UnkStruct_027e0ce0::func_ov001_020bc5f8() {}

void UnkStruct_027e0ce0::func_ov001_020bc65c() {}

void UnkStruct_027e0ce0::func_ov001_020bc69c() {}

void UnkStruct_027e0ce0::func_ov001_020bc6d8(unk32 param1, const UnkStruct_ov001_020c40f4 *param2) {}

void UnkStruct_027e0ce0::func_ov001_020bc6e8(const UnkStruct_ov001_020c40f4 *param1) {}

void UnkStruct_027e0ce0::func_ov001_020bc6fc(const UnkStruct_ov001_020c40f4 *param1, const UnkStruct_ov001_020c40f4 *param2,
                                             unk32 param3, unk32 param4) {}

DECL_INSTANCE(UnkStruct_027e0ce0, data_027e0ce0);
