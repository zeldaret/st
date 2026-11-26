#include "Actor/Actor.hpp"
#include "Actor/ActorId.hpp"
#include "Actor/ActorItemBoomerang.hpp"
#include "Actor/ActorManager.hpp"
#include "Item/ItemManager.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_027e0cdc.hpp"
#include "nitro/math.h"

void UnkStruct_ItemManager_20_04::func_ov031_020db338() {
    this->mRef.Reset();
    this->mUnk_004 = false;
    this->mUnk_008.func_ov031_020dc480();

    //! TODO: this is necessary to generate the stmdb
    u8 var;
    if (var) {
        (void) ((f32) 0);
    }
}

void UnkStruct_ItemManager_20_04::func_ov031_020db350(ItemFlag itemFlag) {
    this->mUnk_008.func_ov031_020dc480();

    if (itemFlag != ItemFlag_Boomerang) {
        this->mUnk_004 = false;
    }
}

bool UnkStruct_ItemManager_20_04::func_ov031_020db374(VecFx32 *param1) {
    if (!this->mRef.IsEmpty()) {
        Actor *temp_r0 = gpActorManager->func_01fff3b4(this->mRef.Copy());

        if (temp_r0 != NULL && temp_r0->GetActorId() == ActorId_ItemBoomerang) {
            VecFx32_Copy(&temp_r0->mPos, param1);
            return true;
        }
    }

    return false;
}

bool UnkStruct_ItemManager_20_04::func_ov031_020db3e8() {
    VecFx32 sp0;
    return this->func_ov031_020db374(&sp0);
}

bool UnkStruct_ItemManager_20_04::func_ov031_020db400(const VecFx32 *pInitialPos, UnkAngleStruct initialAngle, RefStruct ref) {
    ActorParams sp10;
    RefStruct spC;

    sp10.mUnk_28.Reset();
    sp10.func_ov000_020975f8();
    VecFx32_Copy(pInitialPos, &sp10.mInitialPos);
    sp10.mInitialAngle = initialAngle.angle_s;
    sp10.mUnk_28       = ref.Copy();
    Actor::func_ov000_020973f4(&spC, &data_ov000_020b539c_eur, ActorId_ItemBoomerang, &sp10, 0x00);

    this->mRef     = spC;
    this->mUnk_004 = !this->mRef.IsEmpty();
    return this->mUnk_004;
}

unk32 UnkStruct_ItemManager_20_04::func_ov031_020db498(VecFx32 *param1) {
    if (this->mUnk_004 && !data_027e0cdc->func_ov000_02082a28(0x0E) && this->func_ov031_020db374(param1)) {
        return 0x0E;
    }

    return 0x00;
}

void UnkStruct_ItemManager_20_04::func_ov031_020db4f0(bool param1, bool param2) {
    if (this->mUnk_004 && (param1 || param2 || !this->func_ov031_020db3e8())) {
        this->mUnk_004 = false;
    }
}

void UnkStruct_ItemManager_20_04::func_ov031_020db528(void *param1) {
    if (!data_0204a110.func_02019514()) {
        bool var_r4 = false;
        u32 var_r5  = 0x00;

        if (!this->mRef.Copy().IsEmpty()) {
            ActorItemBoomerang *temp_r0 = (ActorItemBoomerang *) gpActorManager->func_01fff3b4(this->mRef);

            if (temp_r0 != NULL && temp_r0->GetActorId() == ActorId_ItemBoomerang) {
                var_r5 = temp_r0->mUnk_128;
                var_r4 = true;
            }
        }

        this->mUnk_008.func_ov031_020dc8a0(param1, var_r4, var_r5);
    }
}
