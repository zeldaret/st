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
    mUnk_02(false),
    mUnk_03(false),
    mUnk_04(NULL),
    mUnk_08(false),
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

void UnkStruct_027e0ce0::func_ov001_020bc4d8(InvImportData *pInvData, SaveFile_00000_0000_Data_D8 *param2, unk32 param3) {
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

void UnkStruct_027e0ce0::func_ov001_020bc524(bool param1) {
    this->mUnk_02 = false;

    this->mUnk_1C->func_ov001_020bccec();

    if (this->mUnk_28 != NULL) {
        this->mUnk_28->func_ov001_020bc24c();
    }

    if (this->mUnk_34 != NULL) {
        this->mUnk_34->func_ov001_020bf2b8(param1);
    }

    UnkStruct_027e0ce0_40 *uVar3 = NULL;

    if (this->mUnk_24 != NULL) {
        this->mUnk_24->func_ov021_020eaa08(this->mUnk_20);
    } else {
        if (data_027e09a4->IsTrain()) {
            this->mUnk_03 = false;
            this->mUnk_04 = NULL;
            this->mUnk_38 = &data_027e0478.train;
            new(this->mUnk_38) UnkStruct_027e0ce0_38(0);
            this->mUnk_38->func_ov026_020dc8f0();
        } else {
            if (param1) {
                if (this->mHealth == 0) {
                    this->func_ov000_0208a2c4(0x0C, 0);
                }

                this->mUnk_04 = NULL;
            } else if (this->mHealth == 0) {
                this->func_ov000_0208a2c4(0x01, 0);
            }

            if (data_027e09a4->IsCutscene()) {
                this->mUnk_3C = new(HeapIndex_1) UnkStruct_027e0ce0_3C();
            } else {
                this->mUnk_40 = &data_027e0478.land;
                new(this->mUnk_40) UnkStruct_027e0ce0_40(param1, this->mUnk_20, &this->mUnk_04, this->mUnk_28);
                uVar3 = this->mUnk_40;
            }
        }
    }

    data_027e0cdc->mUnk_04 = uVar3;
}

void UnkStruct_027e0ce0::func_ov001_020bc5f8() {
    if (this->mUnk_24 != NULL) {
        this->mUnk_24->func_ov021_020eaac4();
    } else {
        if (this->mUnk_38 != NULL) {
            this->mUnk_38->~UnkStruct_027e0ce0_38();
            this->mUnk_38 = NULL;
        } else {
            if (this->mUnk_3C != NULL) {
                DELETE(this->mUnk_3C);
            } else {
                this->mUnk_40->~UnkStruct_027e0ce0_40();
                this->mUnk_40 = NULL;
            }
        }
    }

    if (this->mUnk_34 != NULL) {
        this->mUnk_34->func_ov001_020bf378();
    }

    if (this->mUnk_28 != NULL) {
        this->mUnk_28->func_ov001_020bc27c();
    }

    this->mUnk_1C->func_ov001_020bcfec();
}

void UnkStruct_027e0ce0::func_ov001_020bc65c() {
    this->mUnk_02 = false;

    if (this->mUnk_28 != NULL) {
        this->mUnk_28->func_ov001_020bc29c();
    }

    if (this->mUnk_34 != NULL) {
        this->mUnk_34->func_ov001_020bf3bc();
    }

    if (this->mUnk_24 == NULL) {
        if (this->mUnk_38 != NULL) {
            this->mUnk_38->func_ov026_020dc918();
        } else if (this->mUnk_3C == NULL) {
            this->mUnk_03 = this->mUnk_40->func_ov101_02182fb4(this->mUnk_03);
        }
    }
}

void UnkStruct_027e0ce0::func_ov001_020bc69c() {
    this->mUnk_30->func_ov001_020bbfcc();

    if (this->mUnk_38 != NULL) {
        this->mUnk_38->func_ov026_020dc9b0();
    } else if (this->mUnk_40 != NULL) {
        this->mUnk_40->func_ov101_02183004();
    }

    if (this->mUnk_34 != NULL) {
        this->mUnk_34->func_ov001_020bf3cc();
    }

    if (this->mUnk_28 != NULL) {
        this->mUnk_28->func_ov001_020bc2b8();
    }

    this->mUnk_1C->func_ov001_020bd1ec();
}

void UnkStruct_027e0ce0::func_ov001_020bc6d8(unk32 param1, const UnkStruct_ov001_020c40f4 *param2) {
    this->mUnk_24->func_ov021_020eab14(param1, param2, this->mUnk_30);
}

void UnkStruct_027e0ce0::func_ov001_020bc6e8(const UnkStruct_ov001_020c40f4 *param1) {
    this->mUnk_38->func_ov026_020dc9bc(param1);
    this->mUnk_30->func_ov001_020bbf24(this->mUnk_38);
}

void UnkStruct_027e0ce0::func_ov001_020bc6fc(const UnkStruct_ov001_020c40f4 *param1, const UnkStruct_ov001_020c40f4 *param2,
                                             unk32 param3, unk32 param4) {
    if (this->mUnk_3C != NULL) {
        this->mUnk_3C->func_ov088_0216fbc4(0x00, param1);
        this->mUnk_3C->func_ov088_0216fbc4(param3, param2);
        this->mUnk_30->func_ov001_020bbf50(this->mUnk_3C);
    } else {
        int dummy;
        this->mUnk_40->func_ov101_02183024(param1, param2, param3, param4, this->mUnk_28, this->mUnk_30, this->mUnk_03,
                                           this->mUnk_08);
        this->mUnk_08 = false;
    }
}

DECL_INSTANCE(UnkStruct_027e0ce0, data_027e0ce0);
