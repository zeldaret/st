#include "Unknown/UnkStruct_027e0d34.hpp"
#include "Player/PlayerLink.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "global.h"
#include "types.h"

THUMB_BEGIN

UnkStruct_027e0d34 *UnkStruct_027e0d34::Create(PlayerLinkActor *pPlayer, PlayerLinkActor_A0 *param2,
                                               UnkStruct_027e0ce0_40 *param3) {
    return new(HeapIndex_1) UnkStruct_027e0d34(pPlayer, param2, param3);
}

UnkStruct_027e0d34::UnkStruct_027e0d34(PlayerLinkActor *pPlayer, PlayerLinkActor_A0 *param2, UnkStruct_027e0ce0_40 *param3) {
    this->mpPlayer = pPlayer;
    this->mUnk_04  = param2;
    this->mUnk_08  = param3;
}

bool UnkStruct_027e0d34::func_ov031_020d96e0() {
    return false;
}

THUMB_END

void UnkStruct_027e0d34::func_ov031_020d96e4(const VecFx32 *param1, VecFx32 *param2) {
    this->mpPlayer->func_ov000_0208d8f0(param1, param2);
}

void UnkStruct_027e0d34::func_ov031_020d96f4() {
    this->mpPlayer->func_ov000_0208d928();
}

void UnkStruct_027e0d34::func_ov031_020d9704() {
    this->mpPlayer->func_ov058_021529c4();
}

bool UnkStruct_027e0d34::func_ov031_020d9714() {
    bool var_r0;

    var_r0 = true;

    if ((this->mUnk_04->mUnk_68 != 0x28) && (this->mUnk_04->mUnk_68 != 0x29)) {
        var_r0 = false;
    }

    return var_r0;
}

bool UnkStruct_027e0d34::func_ov031_020d9730() {
    if (this->mUnk_04->mUnk_68 == 0x32) {
        return true;
    }

    return false;
}

bool UnkStruct_027e0d34::func_ov031_020d9748(bool param1) {
    return this->mUnk_04->func_ov000_020930b8(param1);
}

bool UnkStruct_027e0d34::func_ov031_020d9758() {
    if (this->mUnk_04->mUnk_68 == 0x47) {
        return true;
    }

    return false;
}

bool UnkStruct_027e0d34::func_ov031_020d9770() {
    if (this->mUnk_04->mUnk_68 == 0x1B) {
        return true;
    }

    return false;
}

bool UnkStruct_027e0d34::func_ov031_020d9788() {
    if (this->mUnk_04->mUnk_68 - 0x0B <= 0x02) {
        return true;
    }

    return false;
}

void UnkStruct_027e0d34::func_ov031_020d97a4() {
    this->mpPlayer->mInvincibilityTimer = 0;
}

bool UnkStruct_027e0d34::func_ov031_020d97b4() {
    return this->mUnk_04->func_ov031_020dda94();
}

unk32 UnkStruct_027e0d34::func_ov031_020d97c4() {
    return this->mUnk_04->func_ov000_0209316c();
}

unk32 UnkStruct_027e0d34::func_ov031_020d97d4(bool param1) {
    return this->mUnk_04->func_ov000_02093250(param1);
}

bool UnkStruct_027e0d34::func_ov031_020d97e4() {
    return this->mUnk_04->func_ov000_02093340();
}

bool UnkStruct_027e0d34::func_ov031_020d97f4() {
    return this->mUnk_04->func_ov000_02093438();
}

unk32 UnkStruct_027e0d34::func_ov031_020d9804() {
    return this->mUnk_04->func_ov000_020938a4();
}

unk32 UnkStruct_027e0d34::func_ov031_020d9814() {
    return this->mUnk_04->func_ov000_020938d0();
}

void UnkStruct_027e0d34::func_ov031_020d9824(unk32 param1, unk32 param2) {
    this->mUnk_04->func_ov031_020ddaf0(param1, param2);
}

bool UnkStruct_027e0d34::TryItemGive(ItemId itemId) {
    return this->mUnk_04->func_ov000_02093bc8(itemId);
}

void UnkStruct_027e0d34::func_ov031_020d9844() {
    this->mUnk_04->func_ov000_02093d0c();
}

void UnkStruct_027e0d34::func_ov031_020d9854(VecFx32 *param1, fx32 param2) {
    this->mUnk_04->func_ov031_020ddbe4(param1, param2, UnkAngleStruct(0), 0);
}

void UnkStruct_027e0d34::func_ov031_020d9888(VecFx32 *param1, fx32 param2, UnkAngleStruct param3) {
    this->mUnk_04->func_ov031_020ddbe4(param1, param2, param3, 1);
}

void UnkStruct_027e0d34::func_ov031_020d98bc(unk32 param1, unk32 param2) {
    this->mUnk_04->func_ov031_020ddc5c(param1, param2, 0x40, 0x41);
}

void UnkStruct_027e0d34::func_ov031_020d98d8(unk32 param1, unk32 param2) {
    this->mUnk_04->func_ov031_020ddc5c(param1, param2, 0x42, 0x43);
}

void UnkStruct_027e0d34::func_ov031_020d98f4(VecFx32 *param1, UnkAngleStruct param2) {
    this->mUnk_04->func_ov031_020ddcd8(param1, param2);
}

void UnkStruct_027e0d34::func_ov031_020d9920(VecFx32 *param1, UnkAngleStruct param2) {
    this->mUnk_04->func_ov031_020ddda8(param1, param2);
}

void UnkStruct_027e0d34::func_ov031_020d994c() {
    this->mUnk_04->func_ov031_020dddf8();
}

void UnkStruct_027e0d34::func_ov031_020d995c(unk32 param1, unk32 param2, unk32 param3) {
    this->mUnk_04->func_ov031_020dde30(param1, param2, param3);
}

void UnkStruct_027e0d34::func_ov031_020d996c() {
    this->mUnk_04->func_ov031_020dde6c();
}

void UnkStruct_027e0d34::func_ov031_020d997c(unk32 param1) {
    switch (param1) {
        case 0x7F:
        case 0x80:
        case 0x81:
            if (param1 != this->mUnk_04->mUnk_68) {
                this->mUnk_04->func_ov000_020921e4(param1);
            }
            break;
        default:
            break;
    }
}

void UnkStruct_027e0d34::func_ov031_020d99ac(unk8 param1) {
    this->mUnk_04->func_ov031_020ddf20(param1);
}

void UnkStruct_027e0d34::func_ov031_020d99bc() {
    this->mUnk_04->func_ov031_020ddf44();
}

unk32 UnkStruct_027e0d34::func_ov031_020d99cc() {
    return this->mUnk_04->func_ov000_02093ad8();
}

bool UnkStruct_027e0d34::func_ov031_020d99dc(unk32 param1) {
    return this->mUnk_04->func_ov031_020ddf6c(param1);
}

bool UnkStruct_027e0d34::func_ov031_020d99ec(unk32 param1) {
    return this->mUnk_04->func_ov031_020ddfac(param1);
}

void UnkStruct_027e0d34::func_ov031_020d99fc(unk32 param1, RefStruct ref) {
    this->mUnk_04->func_ov031_020ddfec(param1, ref);
}

void UnkStruct_027e0d34::func_ov031_020d9a1c(unk32 param1) {
    this->mUnk_04->mUnk_34.mUnk_00 &= ~param1;
}

bool UnkStruct_027e0d34::func_ov031_020d9a34(unk32 param1) {
    if (this->mUnk_04->mUnk_34.mUnk_00 & param1) {
        return true;
    }

    return false;
}

bool UnkStruct_027e0d34::func_ov031_020d9a4c(bool param1) {
    return this->mUnk_04->func_ov000_02093da0(param1);
}

void UnkStruct_027e0d34::func_ov031_020d9a5c(const VecFx32 *param1) {
    PlayerLinkActor_9C *temp_r2 = this->mpPlayer->mUnk_90;
    VEC_Add(&temp_r2->mUnk_104, param1, &temp_r2->mUnk_104);
}

bool UnkStruct_027e0d34::func_ov031_020d9a78(RefStruct ref) {
    return this->mUnk_04->func_ov000_02093f74(ref);
}

void UnkStruct_027e0d34::func_ov031_020d9a98() {
    this->mUnk_04->func_ov000_02093fd0();
}

void UnkStruct_027e0d34::func_ov031_020d9aa8() {
    this->mUnk_04->func_ov082_02158654();
}

bool UnkStruct_027e0d34::func_ov031_020d9ab8() {
    bool var_r0 = false;

    if (this->mUnk_08->IsUnk78()) {
        //! TODO: fake match?
        u32 value2 = 0;
        u32 var_r2 = *(u32 *) &value2;

        if (this->mUnk_08->GetUnk78()->HasValue() && !this->mUnk_08->GetUnk78()->UnkCheck1()) {
            var_r2 = true;
        }

        if (var_r2) {
            var_r0 = true;
        }
    }

    return var_r0;
}

void UnkStruct_027e0d34::func_ov031_020d9b40(RefStruct ref) {
    this->mpPlayer->func_ov000_0208d48c(ref);
}

void UnkStruct_027e0d34::func_ov031_020d9b60() {
    this->mpPlayer->func_ov000_0208d5a0();
}

void UnkStruct_027e0d34::func_ov031_020d9b70() {
    this->mpPlayer->func_ov000_0208dcf0();
}

void UnkStruct_027e0d34::func_ov031_020d9b80() {
    this->mUnk_08->mUnk_104 |= 0x04;
}

void UnkStruct_027e0d34::func_ov031_020d9b98() {
    this->mUnk_04->func_ov000_020936ec();
}

THUMB_BEGIN

void UnkStruct_027e0d34::func_ov031_020d9ba8() {
    this->mpPlayer->func_ov034_021223f0(true);
}

void UnkStruct_027e0d34::func_ov031_020d9bb4() {
    this->mpPlayer->func_ov058_02152a24();
}

THUMB_END

DECL_INSTANCE_CTOR(UnkStruct_027e0d34, data_027e0d34);
