#include "Player/PlayerZelda.hpp"
#include "System/OverlayManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"

#include <nitro/math.h>

UnkStruct_027e0ce0_40::UnkStruct_027e0ce0_40(bool param1, UnkStruct_027e0ce0_20 *param2, ItemFlag *pEquippedItem,
                                             ItemManager *pItemMgr) :
    UnkStruct_027e0ce0_40_Base(-1, param2, pItemMgr),
    mUnk_14C(gOverlayManager.IsPlayerSub() ? new(HeapIndex_1) UnkStruct_027e0ce0_40_14C() : NULL),
    mUnk_150(data_027e09a4->IsCastleOrTown() ? new(HeapIndex_1) UnkStruct_027e0ce0_40_150() : NULL),
    mPlayer(-1, pItemMgr, this, this->mUnk_150),
    mpZelda(gOverlayManager.IsPlayerSub() ? new(HeapIndex_1) PlayerZeldaActor(pItemMgr, this, this->mUnk_150, pEquippedItem)
                                          : NULL),
    mEquippedItem(*pEquippedItem),
    mIsSceneTowerInsideStairs(data_027e09a4->IsTowerInsideStairs()),
    mIsSceneTowerOutsideStairs(data_027e09a4->IsTowerOutsideStairs()),
    mIsSceneBossByrne(data_027e09a4->IsBossByrne()),
    mUnk_33B(param1) {
    this->mpPlayer = &this->mPlayer;
    this->mUnk_330 = this->mpZelda;
    this->mPlayer.func_ov001_020bcb60(this->mpZelda);

    if (this->mpZelda != NULL) {
        this->mpZelda->mpPlayer = &this->mPlayer;
    }
}

UnkStruct_027e0ce0_40::~UnkStruct_027e0ce0_40() {
    delete this->mpZelda;
    delete this->mUnk_150;
    delete this->mUnk_14C;
}

bool UnkStruct_027e0ce0_40::func_ov101_02182fb4(bool param1) {
    this->func_ov001_020bc0e0(true);

    if (this->mUnk_14C != NULL) {
        this->mUnk_14C->func_ov093_02168850();
    }

    if (this->mUnk_150 != NULL) {
        param1 = this->mUnk_150->func_ov096_02179c54(param1, this->mUnk_33B);
    }

    this->mPlayer.func_ov001_020bcb70();

    if (this->mpZelda != NULL) {
        this->mpZelda->func_ov093_0216d0d4();
    }

    return param1;
}

void UnkStruct_027e0ce0_40::func_ov101_02183004() {
    if (this->mpZelda != NULL) {
        this->mpZelda->func_ov093_0216d160();
    }

    this->mPlayer.func_ov001_020bcba8();
}

void UnkStruct_027e0ce0_40::func_ov101_02183024(const UnkStruct_ov001_020c40f4 *param1, const UnkStruct_ov001_020c40f4 *param2,
                                                unk32 param3, unk32 param4, ItemManager *pItemMgr,
                                                UnkStruct_027e0ce0_30 *param6, bool param7, bool param8) {
    bool var_r7 = false;

    if (this->mpZelda != NULL) {
        if (GET_FLAG2(this->mUnk_104, UnkFlags3_4)) {
            var_r7 = true;
        }

        switch (param4) {
            case 0x00:
                if (this->mIsSceneTowerInsideStairs || this->mIsSceneTowerOutsideStairs || this->mIsSceneBossByrne) {
                    var_r7 = true;

                    if (this->mEquippedItem == ItemFlag_Nothing) {
                        var_r7 = false;
                    }

                    if (this->mIsSceneTowerInsideStairs && pItemMgr != NULL) {
                        if (pItemMgr->GetTearsAmount() != 0 && pItemMgr->GetTearsAmount() != MAX_TEARS_OF_LIGHT) {
                            pItemMgr->SetTearsAmount(0);
                        }
                    }
                }
                break;
            case 0x01:
                var_r7 = true;
                break;
            case 0x02:
                var_r7 = false;
                break;
            default:
                break;
        }

        if (this->mUnk_150 != NULL && this->mUnk_150->mUnk_01) {
            var_r7 = false;
        } else if (param7 || param8) {
            var_r7 = true;
        }
    }

    bool sp8 = var_r7;
    if (var_r7) {
        if (!VecFx32_IsEqual(&param1->mUnk_00, &param2->mUnk_00)) {
            sp8 = false;
        }
    }

    this->func_ov000_02088060(var_r7);

    if (this->mUnk_33B && !var_r7 && pItemMgr != NULL) {
        pItemMgr->SetTearsAmount(0);
    }

    UnkStruct_ov001_020c40f4 sp40 = *param1;

    if (sp8) {
        VecFx32 sp34 = sp40.mUnk_00;

        //! TODO: fake match?
        switch ((u32) ((sp40.mUnk_0C + 0x2000) << 0x10) >> 0x1E) {
            case 0x03:
                sp34.z += FX_F32_TO_FX32(0.5f);
                break;
            case 0x01:
                sp34.z -= FX_F32_TO_FX32(0.5f);
                break;
            case 0x02:
                sp34.x -= FX_F32_TO_FX32(0.5f);
                break;
            case 0x00:
                sp34.x += FX_F32_TO_FX32(0.5f);
                break;
            default:
                break;
        }

        VecFx32_Copy(&sp34, &sp40.mUnk_00);
    }

    this->mPlayer.func_ov001_020bcbd0(&sp40.mUnk_00);

    if (this->mpZelda != NULL) {
        UnkStruct_ov001_020c40f4 sp1C = *param2;

        if (sp8) {
            VecFx32 sp10 = sp1C.mUnk_00;

            //! TODO: fake match?
            switch ((u32) ((sp1C.mUnk_0C + 0x2000) << 0x10) >> 0x1E) {
                case 0x03:
                    sp10.z -= FX_F32_TO_FX32(0.5f);
                    break;
                case 0x01:
                    sp10.z += FX_F32_TO_FX32(0.5f);
                    break;
                case 0x02:
                    sp10.x += FX_F32_TO_FX32(0.5f);
                    break;
                case 0x00:
                    sp10.x -= FX_F32_TO_FX32(0.5f);
                    break;
                default:
                    break;
            }

            VecFx32_Copy(&sp10, &sp1C.mUnk_00);
        }

        this->mpZelda->func_ov093_0216d1cc(param3, &sp1C, var_r7, param8);
    }

    param6->func_ov001_020bbf7c(this, &this->mPlayer, this->mpZelda);
    this->mUnk_33B = false;
}
