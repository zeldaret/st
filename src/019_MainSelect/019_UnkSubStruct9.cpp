#include "FileSelect/FileSelect.hpp"
#include "FileSelect/UnkSubStruct9.hpp"
#include "Save/AdventureFlags.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"

extern "C" {
void func_ov000_02062e44(void *param1, void *param2);
};

// non-matching
UnkSubStruct9::UnkSubStruct9(stack_struct1 param1) :
    mSaveSlotIndex(param1.arg2),
    mUnk_064(0x89, 0x01),
    // ROM indexes the pair starting at data_ov019_020d1e4c+0x6, i.e. from mUnk_04[1].
    mUnk_29C(0x89, (&UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_04[1])[param1.arg2]),
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
        UnkStruct_ov019_020d24c8_28_258 local_40(0x89, 0x02); // sp28
        UnkStruct_ov019_020d24c8_28_258 local_58(0x89, 0x01); // sp10

        Vec2s stackDelta;
        stackDelta.x = local_58.mPos.x - local_40.mPos.x;
        stackDelta.y = local_58.mPos.y - local_40.mPos.y;

        this->mUnk_77C.coords = stackDelta.coords;
    }

    ((LinkListImpl *) ((u8 *) param1.param1 + 4))->Append((LinkListNode *) &this->mUnk_004);
    this->mUnk_004.mUnk_2C = 1;
}

void UnkSubStruct9::func_ov019_020cbaec() {
    this->mUnk_064.func_0201f730(0x00020026);
    this->func_ov019_020cbb40();
}

bool UnkSubStruct9::IsPlayerNameSet() {
    return gSaveManager.GetSaveSlot(this->mSaveSlotIndex)->IsPlayerNameSet();
}

void UnkSubStruct9::func_ov019_020cbb40() {
    SaveSlot *pSlotArray = gSaveManager.GetSaveSlots();

    if (this->IsPlayerNameSet()) {
        this->mUnk_064.func_0201fb78(pSlotArray[this->mSaveSlotIndex].GetPlayerName());
    } else {
        this->mUnk_064.func_0201fa70(BMG_ID(BMGGroup_select, 0x26));
    }
}

void UnkSubStruct9::func_ov019_020cbb94() {
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

// The ROM keeps three separate 4-byte Vec2s locals here, not one 12-byte
// object: MWCC allocates locals larger than 8 bytes in a separate, higher
// region of the frame, so a combined struct lands among the
// UnkStruct_ov019_020d24c8_28_258 objects instead of below them. Splitting it
// reproduces the ROM's frame exactly - the six uStack objects pack onto
// 0xb0..0x128, auStack_c0 onto 0xa8 (see the ROM's `add r1, sp, #0xa8`), and
// these onto 0x34..0x64. Only `pos` is passed on; `fetch` and `delta` are
// scratch, and func_0201aad0 reads just the 4-byte Vec2s.
inline void init_pos(Vec2s *pos, Vec2s *fetch, Vec2s *delta, UnkSubStruct9 *thisx,
                     UnkStruct_ov019_020d24c8_28_258 *pUnkSub258, Vec2s *pLocal_c4, s16 iVar12,
                     s16 iVar11) {
    func_ov000_02062e44(fetch, &thisx->mUnk_004);
    delta->y = pUnkSub258->mPos.x - fetch->y;
    delta->x = pUnkSub258->mPos.y - fetch->x;
    Vec2s d = *delta;
    pos->y = pLocal_c4->y + (s16) (thisx->mUnk_77C.y + (s16) (iVar12 + d.y));
    pos->x = pLocal_c4->x + (s16) (thisx->mUnk_77C.x + (s16) (iVar11 + d.x));
}


// non-matching
void UnkSubStruct9::func_ov019_020cbc0c() {
    struct_auStack_c0 auStack_c0;

    SaveSlot *pSlot    = gSaveManager.GetSaveSlot(this->mSaveSlotIndex);
    auStack_c0.mUnk_06 = 0;
    MI_CpuFill32(0, &auStack_c0, sizeof(auStack_c0));
    auStack_c0.mUnk_05 = -1;
    auStack_c0.mUnk_06 |= 0x04;

    // Ordered by their ROM frame offsets: local_c4 0xa4, test 0xa0, offs
    // 0x9c, local_d0 0x98, test_s 0x94, local_d8 0x90, local_dc 0x8c.
    Vec2s local_c4;
    Vec2s test;
    Vec2s offs;
    short local_d0[2];
    Vec2s test_s;
    short local_d8[2];
    short local_dc[2];

    local_c4.x = 0;
    local_c4.y = 0;

    if (this->mUnk_004.mUnk_28 != 0) {
        offs.x = this->mUnk_004.mPosOffset.x;
        offs.y = this->mUnk_004.mPosOffset.y;
        local_c4.coords = offs.coords;
    }

    // ROM reads these as signed halfwords (ldrsh); a whole-Vec2s copy would
    // emit unsigned ldrh instead.
    s16 posY = this->mUnk_004.mPos.y;
    s16 posX = this->mUnk_004.mPos.x;

    func_ov000_02062e44(local_d0, (void *) &this->mUnk_004);

    unk16 sVar4 = this->mUnk_77C.y;
    test_s.x = local_c4.x + (s16) (this->mUnk_77C.x + (s16) (posX + (s16) (this->mUnk_064.mUnk_144 - local_d0[0])));
    test_s.y = local_c4.y + (s16) (sVar4 + (s16) (posY + (s16) (this->mUnk_064.mUnk_146 - local_d0[1])));

    test.coords = test_s.coords;

    this->mUnk_064.mUnk_140 = test.x;
    this->mUnk_064.mUnk_142 = test.y;
    this->mUnk_064.func_0201f4b4(0);

    func_ov000_02062e44(local_d8, &this->mUnk_004);

    s16 baseX = local_c4.x + posX;
    s16 baseY = local_c4.y + posY;

    local_dc[0] = (s16) (baseX + this->mUnk_29C.mPos.x) - local_d8[0];
    local_dc[1] = (s16) (baseY + this->mUnk_29C.mPos.y) - local_d8[1];
    data_0204af1c.func_0201aa44(&this->mUnk_29C, local_dc, 0, &auStack_c0);

    if (!this->IsPlayerNameSet()) {
        return;
    }

    unk32 uVar10 = 0;
    u32 uVar6  = ((u32) pSlot->mInfoData[0].inventory.data.unk_00 << 4) >> 26;

    if (uVar6 == 0) {
        uVar6 = 0x40;
    }

    u32 uVar13 = ((u32) pSlot->mInfoData[0].inventory.data.unk_00 << 10) >> 26;
    if (uVar13 == 0) {
        uVar13 = uVar6;
    }

    u32 uVar1 = uVar13 >> 2;
    uVar13      = uVar13 & 3;

    if ((uVar6 >> 2) != 0) {
        u32 i = 0;
        do {
            s16 sStack_e0[2];
            // ROM's literal pool holds data_ov019_020d1e94+0x4, so the table base must be
            // the address of mUnk_04 itself rather than the struct with a folded offset.
            // The table is read signed; s16 measures better than u16 here.
            UnkStruct_ov019_020d24c8_28_258 uStack_40(0x89, ((s16 *) &UnkStruct_ov019_020d1e70::data_ov019_020d1e94.mUnk_04)[i]);
            func_ov000_02062e44(&sStack_e0, (void *) &this->mUnk_004);

            unk16 iVar5 = uStack_40.mPos.x - sStack_e0[0];
            unk16 iVar2 = uStack_40.mPos.y - sStack_e0[1];

            if (i < uVar1) {
                if (i == uVar1 - 1 && uVar13 == 0) {
                    s16 sStack_e4[2];

                    sStack_e4[1] = (s16) (local_c4.y + this->mUnk_77C.y) + (s16) (posY + iVar2);
                    sStack_e4[0] = local_c4.x + (this->mUnk_77C.x + (posX + iVar5));
                    data_0204af1c.func_0201aad0(&this->mUnk_2CC, sStack_e4, 0, &auStack_c0);
                } else {
                    s16 sStack_e8[2];

                    sStack_e8[0] = (s16) (local_c4.x + this->mUnk_77C.x) + (s16) (posX + iVar5);
                    sStack_e8[1] = (s16) (local_c4.y + this->mUnk_77C.y) + (s16) (posY + iVar2);
                    data_0204af1c.func_0201aa44(&this->mUnk_2B4, &sStack_e8, 0, &auStack_c0);
                }
            } else {
                if (i == uVar1 && uVar13 != 0) {
                    // ROM dispatches with a forward cmp/beq cascade, which is MWCC's switch
                    // shape; an if/else-if chain emits bne instead.
                    switch (uVar13) {
                        case 1: {
                        unk16 sStack_ec[2];

                        sStack_ec[0] = (s16) (local_c4.x + this->mUnk_77C.x) + (s16) (posX + iVar5);
                        sStack_ec[1] = (s16) (local_c4.y + this->mUnk_77C.y) + (s16) (posY + iVar2);
                        data_0204af1c.func_0201aad0(&this->mUnk_344, sStack_ec, 0, &auStack_c0);
                    break;
                        }
                        case 2: {
                        unk16 sStack_f0[2];

                        sStack_f0[0] = (s16) (local_c4.x + this->mUnk_77C.x) + (s16) (posX + iVar5);
                        sStack_f0[1] = local_c4.y + (this->mUnk_77C.y + (posY + iVar2));
                        data_0204af1c.func_0201aad0(&this->mUnk_3BC, sStack_f0, 0, &auStack_c0);
                    break;
                        }
                        case 3: {
                        unk16 sStack_f4[2];

                        sStack_f4[1] = (s16) (local_c4.y + this->mUnk_77C.y) + (s16) (posY + iVar2);
                        sStack_f4[0] = (local_c4.x + this->mUnk_77C.x) + (posX + iVar5);
                        data_0204af1c.func_0201aad0(&this->mUnk_434, sStack_f4, 0, &auStack_c0);
                    break;
                        }
                    }
                } else {
                    s16 sStack_f8[2];

                    sStack_f8[1] = (s16) (local_c4.y + this->mUnk_77C.y) + (s16) (posY + iVar2);
                    sStack_f8[0] = local_c4.x + (this->mUnk_77C.x + (posX + iVar5));
                    data_0204af1c.func_0201aad0(&this->mUnk_4AC, sStack_f8, 0, &auStack_c0);
                }
            }
            i++;
        } while (i < (uVar6 >> 2));
    }

    if (pSlot->GetAdventureFlag(AdventureFlag_ObtainedForestSource)) {
        UnkStruct_ov019_020d24c8_28_258 uStack_58(0x89, 0x1A);
        Vec2s delta_100;
        Vec2s fetch_100;
        Vec2s pos_100;
        init_pos(&pos_100, &fetch_100, &delta_100, this, &uStack_58, &local_c4, posY, posX);
        data_0204af1c.func_0201aad0(&this->mUnk_524, &pos_100, 0, &auStack_c0);
    }

    if (pSlot->GetAdventureFlag(AdventureFlag_ObtainedSnowSource)) {
        UnkStruct_ov019_020d24c8_28_258 uStack_70(0x89, 0x1B);
        Vec2s delta_10c;
        Vec2s fetch_10c;
        Vec2s pos_10c;
        init_pos(&pos_10c, &fetch_10c, &delta_10c, this, &uStack_70, &local_c4, posY, posX);
        data_0204af1c.func_0201aad0(&this->mUnk_59C, &pos_10c, 0, &auStack_c0);
    }

    if (pSlot->GetAdventureFlag(AdventureFlag_ObtainedOceanSource)) {
        UnkStruct_ov019_020d24c8_28_258 uStack_88(0x89, 0x1C);
        Vec2s delta_118;
        Vec2s fetch_118;
        Vec2s pos_118;
        init_pos(&pos_118, &fetch_118, &delta_118, this, &uStack_88, &local_c4, posY, posX);
        data_0204af1c.func_0201aad0(&this->mUnk_614, &pos_118, 0, &auStack_c0);
    }

    if (pSlot->GetAdventureFlag(AdventureFlag_ObtainedFireSource)) {
        UnkStruct_ov019_020d24c8_28_258 uStack_a0(0x89, 0x1D);
        Vec2s delta_124;
        Vec2s fetch_124;
        Vec2s pos_124;
        init_pos(&pos_124, &fetch_124, &delta_124, this, &uStack_a0, &local_c4, posY, posX);
        data_0204af1c.func_0201aad0(&this->mUnk_68C, &pos_124, 0, &auStack_c0);
    }

    if (pSlot->GetAdventureFlag(AdventureFlag_ObtainedDesertSource)) {
        UnkStruct_ov019_020d24c8_28_258 uStack_b8(0x89, 0x1E);
        Vec2s delta_130;
        Vec2s fetch_130;
        Vec2s pos_130;
        init_pos(&pos_130, &fetch_130, &delta_130, this, &uStack_b8, &local_c4, posY, posX);
        data_0204af1c.func_0201aad0(&this->mUnk_704, &pos_130, 0, &auStack_c0);
    }
}

void UnkSubStruct9::func_ov019_020cc5ac(Vec2us *param1) {
    s16 x = param1->x;
    s16 y = param1->y;

    this->mUnk_004.mPos.x = 0;
    this->mUnk_004.mPos.y = 0;

    this->mUnk_004.mPos.x = x;
    this->mUnk_004.mPos.y = y;
}
