#include "RefStruct.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "global.h"
#include "math.hpp"
#include "nitro/math.h"
#include "nitro/types.h"

void UnkStruct_027e0ce0_40::func_ov031_020dbe5c(PlayerType playerType, VecFx32 *param2) {
    if (playerType == PlayerType_Link) {
        this->mPlayer.func_ov000_0208d940(param2);
    } else {
        this->mpZelda->func_ov093_0216f86c(param2);
    }
}

VecFx32 *UnkStruct_027e0ce0_40::func_ov031_020dbe88(PlayerType playerType) {
    return &this->mPlayerActors[playerType]->mUnk_90->mUnk_034.mUnk_04;
}

bool UnkStruct_027e0ce0_40::func_ov031_020dbe9c(PlayerType playerType) {
    return this->mPlayerActors[playerType]->mUnk_90->mUnk_0DE >= 0;
}

bool UnkStruct_027e0ce0_40::func_ov031_020dbebc(PlayerType playerType) {
    return this->mPlayerActors[playerType]->mUnk_90->mUnk_093;
}

s16 UnkStruct_027e0ce0_40::func_ov031_020dbed0(PlayerType playerType) {
    return this->mPlayerActors[playerType]->mUnk_90->mUnk_090;
}

bool UnkStruct_027e0ce0_40::func_ov031_020dbee4(PlayerType playerType) {
    if (playerType == PlayerType_Link) {
        return this->mPlayer.func_ov000_0208dc04();
    } else {
        return this->mpZelda->func_ov093_0216e31c();
    }
}

void UnkStruct_027e0ce0_40::func_ov031_020dbf08(unk32 *param1, UnkStruct_027e0ce0_40 *thisx, PlayerType playerType) {
    if (playerType == PlayerType_Link) {
        PlayerActorBase::func_ov000_0208dc58(param1, &thisx->mPlayer);
    } else {
        PlayerActorBase::func_ov093_0216e758(param1, thisx->mpZelda);
    }
}

void UnkStruct_027e0ce0_40::func_ov031_020dbf2c(PlayerType playerType, bool param2) {
    if (playerType == PlayerType_Link) {
        this->mPlayer.func_ov000_0208dc68(param2);
    } else {
        this->mpZelda->func_ov093_0216e768(param2);
    }
}

bool UnkStruct_027e0ce0_40::func_ov031_020dbf58(PlayerType playerType) {
    if (playerType == PlayerType_Link) {
        return this->mPlayer.func_ov000_0208dc78();
    } else {
        return this->mpZelda->func_ov093_0216e778();
    }
}

void UnkStruct_027e0ce0_40::func_ov031_020dbf7c(PlayerType playerType) {
    if (playerType == PlayerType_Link) {
        this->mPlayer.func_ov000_0208dc88();
    } else {
        this->mpZelda->func_ov093_0216e788();
    }
}

void UnkStruct_027e0ce0_40::func_ov031_020dbfa0(PlayerType playerType, VecFx32 *param2) {
    STACK_PAD(4);

    bool var_r1 = false;

    if (this->mUnk_078 != NULL && this->mUnk_078->UnkCheck1()) {
        var_r1 = true;
    }

    if (!var_r1) {
        if (playerType == PlayerType_Link) {
            bool var_r1_2 = false;

            if (this->mUnk_078 != NULL && this->mUnk_078->HasValue()) {
                var_r1_2 = true;
            }

            if (!var_r1_2) {
                goto end;
            }
        } else {
            goto end;
        }
    }

    this->func_ov000_02087ee8();

end:
    this->mPlayerActors[playerType]->func_ov000_0208c8f8(param2);
}

void UnkStruct_027e0ce0_40::func_ov031_020dc058(PlayerType playerType, VecFx32 *param2, UnkAngleStruct param3) {
    STACK_PAD(4);

    bool var_r1 = false;

    if (this->mUnk_078 != NULL && this->mUnk_078->UnkCheck1()) {
        var_r1 = true;
    }

    if (!var_r1) {
        if (playerType == PlayerType_Link) {
            bool var_r1_2 = false;

            if (this->mUnk_078 != NULL && this->mUnk_078->HasValue()) {
                var_r1_2 = true;
            }

            if (!var_r1_2) {
                goto end;
            }
        } else {
            goto end;
        }
    }

    this->func_ov000_02087ee8();

end:
    this->mPlayerActors[playerType]->func_ov000_0208c99c(param2, param3);
}

bool UnkStruct_027e0ce0_40::func_ov031_020dc12c(PlayerType playerType, unk32 param2, unk32 param3, Sphere *param4,
                                                void *param5, unk32 param6) {
    if (playerType == PlayerType_Link) {
        return this->mPlayer.func_ov000_0208dd70(param2, param3, param4, param5, param6);
    }

    if (this->mpZelda == NULL || !GET_FLAG2(this->mUnk_104, UnkFlags3_4)) {
        return false;
    }

    return this->mpZelda->func_ov093_0216eac4(param2, param3, param4, param5, param6);
}

bool UnkStruct_027e0ce0_40::func_ov031_020dc1bc(PlayerType playerType, unk32 param2, fx32 param3) {
    if (playerType == PlayerType_Link) {
        return this->mPlayer.func_ov000_0208e558(param2, param3);
    } else {
        return this->mpZelda->func_ov093_0216f548(param2, param3);
    }
}

bool UnkStruct_027e0ce0_40::func_ov031_020dc1f0(PlayerType playerType, unk32 param2, unk32 param3, VecFx32 *param4) {
    if (playerType == PlayerType_Link) {
        return this->mPlayer.func_ov000_0208e568(param2, param3, param4);
    } else {
        return false;
    }
}

THUMB_BEGIN

void UnkStruct_027e0ce0_40::func_ov031_020dc218(RefStruct ref, unk32 param2) {
    for (u32 var_r4 = 0; var_r4 < ARRAY_LEN(this->mPlayerActors); var_r4++) {
        if (var_r4 != PlayerType_Zelda || this->mpZelda != NULL) {
            this->mPlayerActors[var_r4]->mUnk_5C.func_ov000_02089dec(ref, param2);
        }
    }
}

bool UnkStruct_027e0ce0_40::func_ov031_020dc258(PlayerType playerType) {
    this->mPlayerActors[playerType]->mUnk_5C.func_ov000_02089dc4();

    if (playerType == PlayerType_Link) {
        return this->mPlayer.func_ov000_0208e538();
    } else {
        return this->mpZelda->func_ov093_0216f2a4();
    }
}

bool UnkStruct_027e0ce0_40::func_ov031_020dc288(PlayerType playerType, bool param2) {
    if (playerType == PlayerType_Link && !param2) {
        this->mPlayer.func_ov039_0211c9ac();
    }

    return true;
}

bool UnkStruct_027e0ce0_40::func_ov031_020dc2a0(PlayerType playerType, VecFx32 *param2, BOOL param3, BOOL param4) {
    if (playerType == PlayerType_Link) {
        return this->mPlayer.func_ov000_0208e548(param2, param3, param4);
    } else {
        this->mpZelda->func_ov000_0208cb08(param2, !param3);
        return true;
    }
}

THUMB_END

void UnkStruct_027e0ce0_40::func_ov031_020dc2d4(PlayerType playerType, const VecFx32 *param2) {
    VecFx32_Copy(param2, &this->mPlayerActors[playerType]->mUnk_90->mUnk_0A4);
}

void UnkStruct_027e0ce0_40::func_ov031_020dc2fc(PlayerType playerType, unk32 param2, unk32 param3, unk32 param4) {
    if (playerType == PlayerType_Link) {
        if (this->mPlayer.func_ov000_0208dc48()) {
            return;
        }
    } else {
        if (this->mpZelda->func_ov093_0216e334()) {
            return;
        }
    }

    PlayerActorBase *pPlayer = this->mPlayerActors[playerType];
    UnkAngleStruct angle     = pPlayer->mAngle.angle_s;
    pPlayer->mUnk_70->func_ov000_02082c58(param2, angle, param3, param4);
}

void UnkStruct_027e0ce0_40::func_ov031_020dc384(PlayerType playerType, bool param2) {
    PlayerActorBase *pPlayer = this->mPlayerActors[playerType];

    if (pPlayer != NULL) {
        if (param2) {
            pPlayer->mUnk_38.mUnk_00.mUnk_08 &= ~0x20;

            if (pPlayer->mUnk_38.mUnk_00.mUnk_08 == 0x00) {
                pPlayer->mUnk_38.Destroy();
            }
        } else {
            pPlayer->mUnk_38.mUnk_00.mUnk_08 |= 0x20;
            pPlayer->mUnk_38.mUnk_00.func_ov000_0208a100();
        }
    }
}

bool UnkStruct_027e0ce0_40::func_ov031_020dc3e0(RefStruct ref) {
    return this->mpZelda->func_ov093_0216e6c0(ref);
}

bool UnkStruct_027e0ce0_40::func_ov031_020dc400() {
    return this->mUnk_14C != NULL ? this->mUnk_14C->mUnk_06 : false;
}
