#include "CommonFuncs.hpp"
#include "Player/PlayerLink.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"

void PlayerLinkActor_134::func_ov031_020db0fc() {
    if (data_027e0cec != NULL) {
        data_027e0cec->func_ov000_020a0110(&this->mUnk_00.mUnk_00);
    }
}

void PlayerLinkActor_134::func_ov031_020db120(VecFx32 *param1) {
    data_027e0cec->func_ov000_0209ff8c(&this->mUnk_00.mUnk_00, 0x88F, param1, 0x01);
    this->mUnk_04 = 0x1E;
}

void PlayerLinkActor_134::func_ov031_020db160(bool param1) {
    if (this->mUnk_04 <= 0) {
        return;
    }

    if (param1) {
        this->mUnk_04 = 0;
    } else {
        this->mUnk_04--;
    }

    if (this->mUnk_04 == 0) {
        this->mUnk_00.mUnk_00.func_ov000_020a0334();
    }
}

void PlayerActorBase_74::func_ov001_020db190() {
    MI_CpuFill32(0, this, sizeof(PlayerActorBase_74));
    this->mUnk_00 = 0x03;
}

const Vec2s data_ov031_02112b54(32, 32);

void UnkStruct_027e0ce0_40_108::vfunc_00() {
    struct {
        u16 unk_00;
        u8 unk_02;
    } sp18;

    struct {
        u16 unk_00;
        u8 unk_02;
    } sp14;

    uintptr_t temp_r4 = this->GetCount();

    func_ov000_0205be34(&sp18, 0x2E);
    func_ov000_0205be34(&sp14, 0x2F);

    for (u32 var_r5 = 0; var_r5 < temp_r4; var_r5++) {
        UnkStruct_027e0ce0_40_108_10 *temp_ip = &this->mUnk_10[var_r5];

        if (temp_ip->mUnk_04 != 0) {
            Vec2s sp10;
            Vec2s spC;

            spC  = data_ov031_02112b54;
            sp10 = temp_ip->mUnk_00;

            func_ov000_0205be44(&sp14, &sp10, &spC, false, false);
        } else {
            Vec2s sp8;
            Vec2s sp4;

            sp4 = data_ov031_02112b54;
            sp8 = temp_ip->mUnk_00;

            func_ov000_0205be44(&sp18, &sp8, &sp4, false, false);
        }
    }
}
