#include "Actor/ActorItemTornado.hpp"
#include "Actor/ActorManager.hpp"
#include "CommonFuncs.hpp"
#include "Item/Item.hpp"
#include "Item/ItemManager.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"

void UnkStruct_ItemManager_20_00::func_ov031_020dba40() {
    this->mUnk_00 = RefStruct(0).Copy(); // dumb but whatever lol
    this->mUnk_04.Reset();
    this->mUnk_08.func_ov031_020e0fa8();
    this->mUnk_1C = 0;
    this->mUnk_20.func_ov031_020e096c();
}

void UnkStruct_ItemManager_20_00::func_ov031_020dba74(ItemFlag itemFlag) {
    if (itemFlag != ItemFlag_Whirlwind) {
        this->mUnk_20.func_ov031_020e096c();
    }
}

bool UnkStruct_ItemManager_20_00::func_ov031_020dba8c(bool param1, VecFx32 *param2) {
    if (!this->mUnk_00.IsEmpty()) {
        Actor *pActor = gpActorManager->func_01fff3b4(this->mUnk_00.Copy());

        if (pActor != NULL && pActor->GetActorId() == ActorId_ItemTornado) {
            VecFx32_Copy(&pActor->mPos, param2);

            if (param1) {
                VecFx32 vel = pActor->mVel;
                func_01ff93c0(&vel, FX_F32_TO_FX32(2.0f));
                VEC_Add(param2, &vel, param2);
            }

            return true;
        }
    }

    return false;
}

bool UnkStruct_ItemManager_20_00::func_ov031_020dbb38(bool param1, VecFx32 *param2) {
#pragma unused(param1, param2)
    VecFx32 pos;
    return this->func_ov031_020dba8c(false, &pos);
}

bool UnkStruct_ItemManager_20_00::func_ov031_020dbb54(const VecFx32 *pInitialPos, UnkAngleStruct initialAngle, RefStruct ref) {
    ActorParams sp10;
    RefStruct spC;

    sp10.mUnk_28.Reset();
    sp10.func_ov000_020975f8();
    VecFx32_Copy(pInitialPos, &sp10.mInitialPos);
    sp10.mInitialAngle = initialAngle.angle_s;
    sp10.mUnk_28       = ref.Copy();
    Actor::func_ov000_020973f4(&spC, &data_ov000_020b539c_eur, ActorId_ItemTornado, &sp10, 0x00);
    this->mUnk_00 = spC;

    if (!this->mUnk_00.IsEmpty()) {
        data_027e09a8->func_ov000_02071700(0x8CA5, (VecFx32 *) pInitialPos);
        this->mUnk_08.func_ov031_020e14a8();

        return true;
    }

    return false;
}

bool UnkStruct_ItemManager_20_00::func_ov031_020dbc18(u16 param1) {
    if (!this->mUnk_00.Copy().IsEmpty()) {
        ActorItemTornado *pActor = (ActorItemTornado *) gpActorManager->func_01fff3b4(this->mUnk_00);

        if (pActor != NULL && pActor->GetActorId() == ActorId_ItemTornado) {
            return pActor->func_ov031_020e6314(param1);
        }
    }

    return false;
}

void UnkStruct_ItemManager_20_00::func_ov031_020dbc80(bool param1, bool param2) {
    if (this->mUnk_04.common.type == 1 && gpActorManager->func_01fff3b4(this->mUnk_04.Copy()) == NULL) {
        this->func_ov031_020dbc18(0x04);
        this->mUnk_08.func_ov031_020e14a8();
        this->mUnk_04 = 0x00;
    }

    if (this->mUnk_1C != 0) {
        this->mUnk_1C--;

        if (this->mUnk_1C == 0) {
            data_027e0ce0->func_ov000_0208bf88(0x00);
        }
    }

    this->mUnk_20.func_ov031_020e09ec(param1, param2);
}

bool UnkStruct_ItemManager_20_00::func_ov031_020dbd24(unk32 param1, unk32 param2, bool param3) {
    bool value = this->mUnk_08.func_ov031_020e10ac(this->mUnk_00, param1, param2);

    if (value && param3) {
        VecFx32 vec;

        this->mUnk_1C = 16;

        if (this->func_ov031_020dba8c(true, &vec)) {
            this->mUnk_20.func_ov031_020e0ad4(&vec);
        }
    }

    return value;
}

bool UnkStruct_ItemManager_20_00::func_ov031_020dbd98(RefStruct ref, VecFx32 *param2, VecFx32 *param3) {
    this->mUnk_04 = ref;

    if (this->mUnk_1C != 0 && this->mUnk_1C < 4) {
        this->mUnk_1C = 4;
    }

    unk32 value = this->mUnk_08.func_ov031_020e1154(this->mUnk_00);
    VecFx32 vec;

    switch (value) {
        case 0x00:
            break;
        case 0x01:
            if (this->func_ov031_020dba8c(true, &vec)) {
                this->mUnk_20.func_ov031_020e0b08(&vec);
            }
            break;
        case 0x02:
            this->mUnk_20.func_ov031_020e0b38(ref, 0x00);
            break;
        case 0x03:
            this->mUnk_20.func_ov031_020e0b38(ref, 0x01);
            break;
        default:
            break;
    }

    return value == 0x01;
}
