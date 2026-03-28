#include "FileSelect/FileSelect.hpp"
#include "FileSelect/UnkSubStruct9.hpp"
#include "Save/AdventureFlags.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"

extern "C" {
void func_020166cc(void *param1, void *param2, void *);
void func_ov000_02062e44(void *param1, void *param2);
};

// non-matching
ARM UnkSubStruct9::UnkSubStruct9(stack_struct1 param1) :
    mSaveSlotIndex(param1.param2),
    mUnk_064(0x89, 0x01),
    mUnk_29C(0x89, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_04[param1.param2]),
    mUnk_2B4(0x89, 0x15),
    mUnk_2CC(0x89, 0x00),
    mUnk_344(0x89, 0x03),
    mUnk_3BC(0x89, 0x02),
    mUnk_434(0x89, 0x01),
    mUnk_4AC(0x89, 0x04),
    mUnk_524(0x89, 0x05),
    mUnk_59C(0x89, 0x06),
    mUnk_614(0x89, 0x07),
    mUnk_68C(0x89, 0x08),
    mUnk_704(0x89, 0x09) {
        // Vec2s stack;
    void *stack;
    if (this->mSaveSlotIndex == 0) {
        this->mUnk_004.func_ov000_020633c0(0x40, 0x89, 0x02, 0x1F, 0x89, 0x00);
        this->mUnk_77C.x = 0;
        this->mUnk_77C.y = 0;
    } else if (this->mSaveSlotIndex == 1) {
        this->mUnk_004.func_ov000_020633c0(0x41, 0x89, 0x01, 0x1F, 0x89, 0x01);
        UnkStruct_ov019_020d24c8_28_258 local_40(0x89, 0x02);  // sp28
        UnkStruct_ov019_020d24c8_28_258 local_58(0x89, 0x01); // sp10

        s16 temp_r2   = local_58.mPos.x - local_40.mPos.x;
        s16 spE       = local_58.mPos.y - local_40.mPos.y;
        param1.param2 = temp_r2;

        this->mUnk_77C.x = param1.param2;
        this->mUnk_77C.y = spE;
    }

    stack = &this->mUnk_004;
    func_020166cc(&this->mUnk_004.mUnk_04, &stack, param1.param1);
    this->mUnk_004.mUnk_2C = 1;
}

ARM void UnkSubStruct9::func_ov019_020cbaec() {
    this->mUnk_064.func_0201f730(0x00020026);
    this->func_ov019_020cbb40();
}

ARM bool UnkSubStruct9::IsPlayerNameSet() {
    return gSaveManager.GetSaveSlot(this->mSaveSlotIndex)->IsPlayerNameSet();
}

ARM void UnkSubStruct9::func_ov019_020cbb40() {
    SaveSlot *pSlotArray = gSaveManager.GetSaveSlots();

    if (this->IsPlayerNameSet()) {
        this->mUnk_064.func_0201fb78(pSlotArray[this->mSaveSlotIndex].GetPlayerName());
    } else {
        this->mUnk_064.func_0201fa70(0x00020026);
    }
}

ARM void UnkSubStruct9::func_ov019_020cbb94() {
    this->mUnk_2CC.func_ov000_020609c4();
    this->mUnk_344.func_ov000_020609c4();
    this->mUnk_3BC.func_ov000_020609c4();
    this->mUnk_434.func_ov000_020609c4();
    this->mUnk_4AC.func_ov000_020609c4();
    this->mUnk_524.func_ov000_020609c4();
    this->mUnk_59C.func_ov000_020609c4();
    this->mUnk_614.func_ov000_020609c4();
    this->mUnk_68C.func_ov000_020609c4();
    this->mUnk_704.func_ov000_020609c4();
}

struct struct_auStack_c0 {
    /* 00 */ unk8 mUnk_00;
    /* 01 */ unk8 mUnk_01;
    /* 02 */ unk8 mUnk_02;
    /* 03 */ unk8 mUnk_03;
    /* 04 */ unk8 mUnk_04;
    /* 05 */ unk8 mUnk_05;
    /* 06 */ u16 mUnk_06;
    /* 08 */
};

struct struct_sStack_100 {
    /* 00 */ unk16 mUnk_00;
    /* 00 */ unk16 mUnk_02;
    /* 04 */ unk16 mUnk_04;
    /* 06 */ unk16 mUnk_06;
    /* 08 */ unk16 mUnk_08;
    /* 0A */ unk16 mUnk_0A;
    /* 0C */

    struct_sStack_100(UnkSubStruct9 *thisx, UnkStruct_ov019_020d24c8_28_258 *pUnkSub258, Vec2s *pLocal_c4, u16 iVar12,
                      u16 iVar11) {
        func_ov000_02062e44(this, &thisx->mUnk_004);
        this->mUnk_06 = pUnkSub258->mPos.x - this->mUnk_02;
        this->mUnk_04 = pUnkSub258->mPos.y - this->mUnk_00;
        this->mUnk_08 = pLocal_c4->x + thisx->mUnk_77C.x + iVar11 + this->mUnk_00;
        this->mUnk_0A = pLocal_c4->y + thisx->mUnk_77C.y + iVar12 + this->mUnk_02;
    }
};

extern unk16 data_ov019_020d1e98[];

// non-matching
ARM void UnkSubStruct9::func_ov019_020cbc0c() {
    struct_auStack_c0 auStack_c0;

    SaveSlot *pSlot    = gSaveManager.GetSaveSlot(this->mSaveSlotIndex);
    auStack_c0.mUnk_06 = 0;
    Fill32(0, &auStack_c0, sizeof(auStack_c0));
    auStack_c0.mUnk_05 = -1;
    auStack_c0.mUnk_06 |= 0x04;

    short local_dc[2];
    short local_d8[2];
    short local_d0[2];
    Vec2s local_c4;

    local_c4.x = 0;
    local_c4.y = 0;

    if (this->mUnk_004.mUnk_28 != 0) {
        local_c4.x = this->mUnk_004.mPosOffset.x;
        local_c4.y = this->mUnk_004.mPosOffset.y;
    }

    Vec2s pos = this->mUnk_004.mPos;

    func_ov000_02062e44(local_d0, (void *) &this->mUnk_004);

    unk16 test[2];
    unk16 sVar4 = this->mUnk_77C.y;
    test[0]     = local_c4.x + this->mUnk_77C.x + pos.x + this->mUnk_064.mUnk_144 - local_d0[0];
    test[1]     = local_c4.y + sVar4 + pos.y + this->mUnk_064.mUnk_146 - local_d0[1];

    this->mUnk_064.mUnk_140 = test[0];
    this->mUnk_064.mUnk_142 = test[1];
    this->mUnk_064.func_0201f4b4(0);

    func_ov000_02062e44(local_d8, &this->mUnk_004);

    local_dc[0] = local_c4.x + pos.x + this->mUnk_29C.mPos.x - local_d8[0];
    local_dc[1] = local_c4.y + pos.y + this->mUnk_29C.mPos.y - local_d8[1];
    data_0204af1c.func_0201aa44(&this->mUnk_29C, local_dc, 0, 0);

    if (!this->IsPlayerNameSet()) {
        return;
    }

    unk32 uVar10 = 0;
    unk32 uVar6  = (pSlot->mSaveInfo.mSaveInfoData[0].mInventory.mUnk_00 << 4) >> 26;

    if (uVar6 == 0) {
        uVar6 = 0x40;
    }

    unk32 uVar13 = (pSlot->mSaveInfo.mSaveInfoData[0].mInventory.mUnk_00 << 10) >> 26;
    if (uVar13 == 0) {
        uVar13 = uVar6;
    }

    unk32 uVar1 = uVar13 >> 2;
    uVar13      = uVar13 & 3;

    void *pUVar7;
    void *psVar8;

    if ((uVar6 >> 2) != 0) {
        for (int i = 0; i < (uVar6 >> 2); i++) {
            unk16 sStack_e0[2];
            unk16 uVar3 = data_ov019_020d1e98[i];
            UnkStruct_ov019_020d24c8_28_258 uStack_40(0x89, uVar3);
            func_ov000_02062e44(&sStack_e0, &this->mUnk_004.mPos);

            unk16 iVar5 = uStack_40.mPos.x - sStack_e0[0];
            unk16 iVar2 = uStack_40.mPos.y - sStack_e0[1];

            if (i < uVar1) {
                if (i == uVar1 - 1 && uVar13 == 0) {
                    unk16 sStack_e4[2];

                    sStack_e4[0] = local_c4.x + this->mUnk_77C.x + pos.x + iVar5;
                    sStack_e4[1] = local_c4.y + this->mUnk_77C.y + pos.y + iVar2;
                    pUVar7       = &this->mUnk_2CC;
                    psVar8       = sStack_e4;
                    data_0204af1c.func_0201aad0(&this->mUnk_2CC, sStack_e4, 0, 0);
                } else {
                    unk16 sStack_e8[2];

                    sStack_e8[0] = local_c4.x + this->mUnk_77C.x + pos.x + iVar5;
                    sStack_e8[1] = local_c4.y + this->mUnk_77C.y + pos.y + iVar2;
                    data_0204af1c.func_0201aa44(&this->mUnk_2B4, &sStack_e8, 0, 0);
                }
            } else {
                if (i == uVar1 && uVar13 != 0) {
                    if (uVar13 == 1) {
                        unk16 sStack_ec[2];

                        sStack_ec[0] = local_c4.x + this->mUnk_77C.x + pos.x + iVar5;
                        sStack_ec[1] = local_c4.y + this->mUnk_77C.y + pos.y + iVar2;
                        data_0204af1c.func_0201aad0(&this->mUnk_344, sStack_ec, 0, 0);
                    } else if (uVar13 == 2) {
                        unk16 sStack_f0[2];

                        sStack_f0[0] = local_c4.x + this->mUnk_77C.x + pos.x + iVar5;
                        sStack_e0[1] = local_c4.y + this->mUnk_77C.y + pos.y + iVar2;
                        data_0204af1c.func_0201aad0(&this->mUnk_3BC, sStack_f0, 0, 0);
                    } else if (uVar13 == 3) {
                        unk16 sStack_f4[2];

                        sStack_f4[0] = local_c4.x + this->mUnk_77C.x + pos.x + iVar5;
                        sStack_f4[1] = local_c4.y + this->mUnk_77C.y + pos.y + iVar2;
                        data_0204af1c.func_0201aad0(&this->mUnk_434, sStack_f4, 0, 0);
                    }
                } else {
                    unk16 sStack_f8[2];

                    sStack_f8[0] = local_c4.x + this->mUnk_77C.x + pos.x + iVar5;
                    sStack_f8[1] = local_c4.y + this->mUnk_77C.y + pos.y + iVar2;
                    data_0204af1c.func_0201aad0(&this->mUnk_4AC, sStack_f8, 0, 0);
                }
            }
        }
    }

    if (pSlot->GetAdventureFlag(AdventureFlag_ObtainedForestSource)) {
        UnkStruct_ov019_020d24c8_28_258 uStack_58(0x89, 0x1A);
        struct_sStack_100 sStack_100(this, &uStack_58, &local_c4, pos.y, pos.y);
        data_0204af1c.func_0201aad0(&this->mUnk_524, &sStack_100, 0, 0);
    }

    if (pSlot->GetAdventureFlag(AdventureFlag_ObtainedSnowSource)) {
        UnkStruct_ov019_020d24c8_28_258 uStack_70(0x89, 0x1B);
        struct_sStack_100 sStack_10c(this, &uStack_70, &local_c4, pos.y, pos.y);
        data_0204af1c.func_0201aad0(&this->mUnk_59C, &sStack_10c, 0, 0);
    }

    if (pSlot->GetAdventureFlag(AdventureFlag_ObtainedOceanSource)) {
        UnkStruct_ov019_020d24c8_28_258 uStack_88(0x89, 0x1C);
        struct_sStack_100 sStack_118(this, &uStack_88, &local_c4, pos.y, pos.y);
        data_0204af1c.func_0201aad0(&this->mUnk_614, &sStack_118, 0, 0);
    }

    if (pSlot->GetAdventureFlag(AdventureFlag_ObtainedFireSource)) {
        UnkStruct_ov019_020d24c8_28_258 uStack_a0(0x89, 0x1D);
        struct_sStack_100 sStack_124(this, &uStack_a0, &local_c4, pos.y, pos.y);
        data_0204af1c.func_0201aad0(&this->mUnk_68C, &sStack_124, 0, 0);
    }

    if (pSlot->GetAdventureFlag(AdventureFlag_ObtainedDesertSource)) {
        UnkStruct_ov019_020d24c8_28_258 uStack_b8(0x89, 0x1E);
        struct_sStack_100 sStack_130(this, &uStack_b8, &local_c4, pos.y, pos.y);
        data_0204af1c.func_0201aad0(&this->mUnk_704, &sStack_130, 0, 0);
    }
}

ARM void UnkSubStruct9::func_ov019_020cc5ac(Vec2us *param1) {
    s16 x = param1->x;
    s16 y = param1->y;

    this->mUnk_004.mPos.x = 0;
    this->mUnk_004.mPos.y = 0;

    this->mUnk_004.mPos.x = x;
    this->mUnk_004.mPos.y = y;
}
