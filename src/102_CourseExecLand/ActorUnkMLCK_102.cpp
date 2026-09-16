#include "Actor/ActorId.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkMLCK.hpp"
#include "MainGame/MiscAdvManager.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cf0.hpp"
#include "Unknown/UnkStruct_ov000_020b3000.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov000_020b51c0.hpp"
#include "nitro/types.h"
#include "types.h"

#include <nitro/math.h>

struct UnkStruct_ov102_02184a10 {
    /* 00 */ u32 mUnk_00;
    /* 04 */ u32 mUnk_04;
    /* 08 */ u32 mUnk_08;

    UnkStruct_ov102_02184a10() {
        this->mUnk_08 = 0x10002;
        this->mUnk_04 = 0x10006;
        this->mUnk_00 = 0x10009;
    }
};
static const UnkStruct_ov102_02184a10 data_ov102_02184a10;

void ActorUnkMLCK::vfunc_20() {
    this->vfunc_70();

    this->mUnk_F2 = gpMiscAdvManager->mSongs & (1 << this->mUnk_B8) ? 1 : 0;

    if (!this->mUnk_F3) {
        return;
    }

    switch (this->mUnk_BC) {
        case 1:
            if (data_027e0cf0 != NULL && this->mUnk_C4.func_ov102_021847e8(data_027e0cf0->mUnk_0B, data_027e0cf0->mUnk_10)) {
                UnkStruct_ov102_02184a24 sp0(ActorId_MLCK);

                if (gpActorManager->mUnk_08 == gpActorManager->func_01fff350(&sp0, gpActorManager->mActorTable)) {
                    this->vfunc_68();
                    this->mUnk_C4.func_ov031_020fb184();
                }
            }
            break;
        case 2:
            this->func_ov031_020faf24();
            break;
    }

    if (data_ov000_020b51b8.IsUnk08_2()) {
        data_ov000_020b51c8.func_02002f04();
    }

    if (this->mUnk_F4 != -1) {
        if (!data_ov000_020b51b8.IsUnk08_2() && data_027e09b8->func_ov000_020732fc(this->mUnk_F4) != 0) {
            this->mUnk_F4 = -1;
        }
    }

    if (this->mUnk_C0 < this->mUnk_C2) {
        (*(volatile u16 *) &this->mUnk_C0)++;
    }
}

void ActorUnkMLCK::vfunc_24() {
    this->vfunc_20();
}

bool ActorUnkMLCK_C4::func_ov102_021847e8(unk32 param1, unk32 param2) {
    if (param1 != 0) {
        if (this->mUnk_04 > 0 && param2 == this->mUnk_00->unk_14[this->mUnk_04 - 1]) {
            return false;
        }

        if (param2 == this->mUnk_00->unk_14[this->mUnk_04]) {
            this->mUnk_04++;
        } else {
            this->func_ov031_020fb184();
        }
    } else if (this->mUnk_04 == this->mUnk_00->unk_02) {
        return true;
    }

    return false;
}

bool UnkStruct_ov102_02184a24::vfunc_00(Actor *pActor) {
    if (pActor != NULL && pActor->GetActorId() == this->mActorId) {
        BOOL var_r1 = ((ActorUnkMLCK *) pActor)->mUnk_BC == 0 || ((ActorUnkMLCK *) pActor)->mUnk_BC == 1;
        return !var_r1;
    }

    return false;
}
