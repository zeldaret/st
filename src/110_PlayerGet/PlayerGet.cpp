#include <string.h>

#include "Actor/ActorId.hpp"
#include "Actor/ActorManager.hpp"
#include "Player/PlayerGet.hpp"
#include "System/OverlayManager.hpp"
#include "Unknown/UnkStruct_020d8698.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "Unknown/UnkStruct_ov000_020b34c4.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov000_020b51c0.hpp"
#include "nitro/math.h"
#include "versions.h"

struct UnkStruct_02186240 {
    /* 0000 */ unk8 mUnk_0000[0x3F68];
    /* 3f68 */
};
UnkStruct_02186240 data_ov110_02186240;

extern "C" void func_ov000_0205ca74(unk32);
extern "C" void func_01ffb6e4(unk32, const void *, void *);
extern "C" void func_01ffc5a0(UnkStruct_PlayerGet_8c *, unk32, u16, void *, unk32);
extern "C" void func_ov000_0208f820();
extern "C" unk32 func_ov024_020d5354(unk32 *, u16 *);
extern "C" void func_ov000_02058fc4(unk32 *, UnkStruct_PlayerGet_74 *, Vec3p *);
extern unk32 *data_027e0958;
extern "C" void func_ov024_020d6370(unk32 *, ItemId);
extern unk32 *data_ov024_020d86b0;
extern "C" unk32 func_01fff584();
extern "C" ActorId func_01fff458(void *);
extern "C" void func_ov000_0208ba10(char *, void *, unk32);
extern "C" unk32 func_ov000_020a4c00(ItemId itemId);
extern "C" void func_02015ea8(unk32, unk16 *);
extern "C" void func_02015628(char *, char *, unk32, void *, size_t);
extern "C" void func_02015664(char *, unk32);
extern "C" void func_020156c8(char *, char *, unk32);
extern "C" void func_020156f4(char *);
extern "C" void func_02015644(char *);
struct func_ov000_0205abcc_ret {
    unk32 mUnk_00;
    unk32 mUnk_04;
    unk8 mUnk_08;
    unk8 mUnk_09;
    unk8 mUnk_0a;
    unk8 mUnk_0b;
    unk8 mUnk_0c;
    unk8 mUnk_0d;
    unk8 mUnk_0e;
};
extern "C" func_ov000_0205abcc_ret *func_ov000_0205abcc(char *, char *, unk32, unk32, unk32);
extern "C" unk32 func_ov000_02077590(unk32);

static const unk32 data_ov110_02185dc4[1] = {8};

static const UnkStruct_ov110_02185dc8 data_ov110_02185dc8[] = {
    {ItemId_NormalSword, ItemFlag_Sword},           {ItemId_NormalShield, ItemFlag_Shield},
    {ItemId_LokomoSword, ItemFlag_LokomoSword},     {ItemId_RecruitUniform, ItemFlag_RecruitUniform},
    {ItemId_ScrollBeam, ItemFlag_ScrollBeam},       {ItemId_ScrollSpinAttack, ItemFlag_ScrollSpinAttack},
    {ItemId_AncientShield, ItemFlag_AncientShield}, {ItemId_PanFlute, ItemFlag_PanFlute},
};

// non-matching
ARM bool ItemManager::func_ov110_02184a40(ItemId itemId) {
    s16 itemFlag_s16;
    ItemFlag itemFlag;
    ItemFlag temp_r0_5;
    u32 temp_r2;
    u32 i;

    switch (itemId) {
        case ItemId_NormalKey:
            this->func_ov000_020a87c8(1);
            break;
        case ItemId_GreenRupee:
            this->GiveRupees(1, true, true);
            break;
        case ItemId_BlueRupee:
            this->GiveRupees(5, true, true);
            break;
        case ItemId_RedRupee:
            this->GiveRupees(20, true, true);
            break;
        case ItemId_BigGreenRupee:
            this->GiveRupees(100, true, true);
            break;
        case ItemId_BigRedRupee:
            this->GiveRupees(200, true, true);
            break;
        case ItemId_BigGoldRupee:
            this->GiveRupees(300, true, true);
            break;
        case ItemId_HeartContainer:
            data_027e0ce0->func_ov000_0208a318(4, 1, 1);
            break;
        case ItemId_QuiverMedium:
        case ItemId_QuiverLarge:
            if (this->mQuiverCapacity < UpgradeCapacity_Tier3) {
                this->mQuiverCapacity++;
            }

            this->mArrowAmount = this->func_ov000_020a8728();
            break;
        case ItemId_BombBagMedium:
        case ItemId_BombBagLarge:
            if (this->mBombBagCapacity < UpgradeCapacity_Tier3) {
                this->mBombBagCapacity++;
            }

            this->mBombAmount = this->func_ov000_020a8748();
            break;
        case ItemId_RedPotion:
            this->func_ov000_020a888c(PotionType_Red);
            break;
        case ItemId_PurplePotion:
            this->func_ov000_020a888c(PotionType_Purple);
            break;
        case ItemId_YellowPotion:
            this->func_ov000_020a888c(PotionType_Yellow);
            break;
        case ItemId_ArrowsRefill:
            this->func_ov000_020a87ec(10);
            break;
        case ItemId_BombsRefill:
            this->func_ov000_020a8820(10);
            break;
        case ItemId_TearLight:
            if (this->mTearsAmount >= 3) {
                this->mTearsAmount = 3;
            } else {
                this->mTearsAmount++;
            }
            break;
        default:
            itemFlag = ItemManager::func_ov000_020a8984(itemId);

            if (itemFlag != ItemFlag_None) {
                this->func_ov000_020a863c(itemFlag);

                switch (itemFlag) {
                    case ItemFlag_Bombs:
                        this->mBombBagCapacity = UpgradeCapacity_Tier1;
                        this->mBombAmount      = gBombBagCapacities[UpgradeCapacity_Tier1];
                        break;
                    case ItemFlag_Bow:
                        this->mQuiverCapacity = UpgradeCapacity_Tier1;
                        this->mArrowAmount    = gQuiverCapacities[UpgradeCapacity_Tier1];
                        break;
                    default:
                        break;
                }

                if (this->mEquippedItem == ItemFlag_None) {
                    this->mEquippedItem = itemFlag;
                    data_ov024_020d8698->func_ov024_020cd458(itemFlag, 0);
                }
            } else {
                itemFlag_s16 = ItemFlag_None;

                for (i = 0; i < ARRAY_LEN(data_ov110_02185dc8); i++) {
                    if (itemId == data_ov110_02185dc8[i].mItemId) {
                        itemFlag_s16 = data_ov110_02185dc8[i].mItemFlag;
                        break;
                    }
                }

                if (itemFlag_s16 != ItemFlag_None) {
                    this->func_ov000_020a863c(itemFlag_s16);
                }
            }
            break;
    }

    temp_r0_5 = ItemManager::func_ov110_02185db4(itemId);

    if (temp_r0_5 != 0) {
        temp_r0_5 &= 0xFFFF;
        SET_FLAG(data_027e09b8->mUnk_14, temp_r0_5);
    }

    data_027e0ce0->mUnk_34->func_ov110_02185d3c(itemId);
    data_ov000_020b6510->func_ov000_020aa0ac(itemId);
    func_ov024_020d6370(data_ov024_020d86b0, itemId);

    if (!GET_FLAG(this->mUnk_08, ItemFlag_LokomoSword) && itemId == ItemId_TearLight &&
        this->mTearsAmount == MAX_TEARS_OF_LIGHT && (gOverlayManager.mLoadedOverlays[OverlaySlot_8] == OverlayIndex_Tower)) {
        return true;
    }

    return false;
}

static const unk32 data_ov110_02185de8[] = {
    0x30001,  0x30002,  0xB00D6,  0x8007A,  0x30003, 0x8007B, 0x8007C, 0x8007D, 0x8007E, 0x30004,  0x30005, 0x30006,  0x30007,
    0x30008,  0x30009,  0x3000A,  0x3000B,  0x3000C, 0x3000D, 0x3000E, 0x3000F, 0xD0000, 0xD0001,  0xD0002, 0xD0003,  0xF00EB,
    0x100000, 0x110000, 0x1C008E, 0x1E0048, 0x30010, 0x30011, 0x30012, 0x30013, 0x30014, 0x30015,  0x30016, 0x30017,  0xB00D7,
    0x30018,  0x30019,  0x3001A,  0x3001B,  0x3001C, 0x3001D, 0x3001E, 0x3001F, 0x30020, 0x30021,  0x30022, 0x30023,  0x30024,
    0x30025,  0x30026,  0x30027,  0x30028,  0x30029, 0x3002A, 0x3002B, 0x3002C, 0x3002D, 0x3002E,  0x3002F, 0x1400F7, 0x8007F,
    0x30030,  0x30031,  0x30032,  0x30033,  0x30034, 0x30035, 0x30036, 0x30037, 0x30038, 0x30039,  0x3003A, 0x3003B,  0x3003C,
    0x3003D,  0x3003E,  0x3003F,  0x30040,  0x30041, 0x30042, 0x30043, 0x30044, 0x30045, 0x30046,  0x30047, 0x1400F8, 0x30048,
    0x30049,  0x3004A,  0x3004B,  0x3004C,  0x3004D, 0xD0004, 0xD0005, 0x3004E, 0x3004F, 0x1400F9, 0xF00EC, 0x80080,  0x110001,
    0x1400FA, 0x100001, 0x30050,  0x30051,  0x30052, 0x30053, 0x30054, 0x30055, 0x30056, 0x30057,  0x30058, 0x030059, 0x3005A,
};

static const unk32 data_ov110_02185fbc[] = {
    0x000, 0x000, 0x003, 0x000, 0x000, 0x1A3, 0x000, 0x27B, 0x0CB, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000,
    0x000, 0x076, 0x077, 0x078, 0x00F, 0x010, 0x011, 0x012, 0x008, 0x009, 0x00A, 0x00B, 0x00C, 0x00D, 0x002, 0x01F, 0x020,
    0x021, 0x079, 0x07A, 0x07B, 0x000, 0x000, 0x000, 0x000, 0x000, 0x068, 0x069, 0x06A, 0x06B, 0x06C, 0x06D, 0x06E, 0x06F,
    0x070, 0x071, 0x072, 0x073, 0x074, 0x075, 0x0A6, 0x0A7, 0x0A8, 0x0A9, 0x0AA, 0x000, 0x000, 0x0B0, 0x0B1,
};

static const unk32 data_ov110_021860c4[] = {
    0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000,
    0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x12D, 0x000, 0x000,
    0x03C, 0x000, 0x000, 0x000, 0x000, 0x000, 0x0D6, 0x194, 0x18E, 0x18F, 0x190, 0x191, 0x192, 0x193, 0x046, 0x000, 0x000,
};

// non-matching
ARM void UnkStruct_PlayerGet_74::vfunc_00(unk32 param1, unk32 param2, unk32 param3) {
    PlayerGet *unk_14 = (PlayerGet *) this->mUnk_14;

    func_01ffc5a0(&unk_14->mUnk_8c, unk_14->mUnk_6c, unk_14->mUnk_70, &this->mUnk_04, param3);
}

ARM PlayerGet::PlayerGet() :
    mUnk_54(0, 0, -1, ItemId_None),
    mUnk_64(mUnk_44, -1),
    mUnk_6c(0x1000),
    mUnk_70(0),
    mUnk_72(0),
    mUnk_73(0),
    mUnk_74(this),
    mUnk_8c(0) {}

ARM PlayerGet::~PlayerGet() {
    func_ov000_0205ca74(this->mUnk_54.mUnk_08);

    UnkStruct_027e0cec *pData_027e0cec = data_027e0cec;
    if (pData_027e0cec != NULL) {
        UnkStruct_PlayerGet_ec *pUnk_ec = &this->mUnk_ec[0];

        while (pUnk_ec != (UnkStruct_PlayerGet_ec *) &this->mUnk_fc) {
            pData_027e0cec->func_ov000_020a0110(pUnk_ec);
            pUnk_ec++;
        }
    }

    UnkStruct_ov000_0208f820_28_98 *pUnk_28_98 = this->mUnk_28->mUnk_98;
    if (pUnk_28_98 != 0) {
        pUnk_28_98->mUnk_40 &= ~0x10;

        if (pUnk_28_98->mUnk_40 == 0) {
            // real?
            pUnk_28_98->mUnk_38.~UnkStruct_PlayerGet_64();
        }
    }
}

#if IS_JP
ARM bool PlayerGet::func_ov110_02186b8c() {
    switch (this->mUnk_54.mItemId) {
        case ItemId_NormalShield:
            if (this->mUnk_28->pItemManager->mUnk_12 & 2) {
                return true;
            }
            break;
        case ItemId_AncientShield:
            if (!(this->mUnk_28->pItemManager->mUnk_12 & 2)) {
                return true;
            }
            break;
        default:
            break;
    }

    return false;
}
#endif

ARM void PlayerGet::vfunc_0c(UnkStruct_PlayerGet_vfunc_0c_param1 *param1) {
    ItemManager *pItemManager;
    ItemId itemId;
    ActorUnk_ov000_020a8bb0 *iVar10;
    UnkStruct_ov000_0208f820_38 *pUnk_38;
    UnkStruct_ov000_0208f820_3c *pUnk_3c;
    char auStack_108[12];
    Vec3p VStack_fc;
    unk32 uStack_f0[4];
    unk32 auStack_30[5];

    switch (param1->mUnk_04) {
        case 0x39:
            *(u32 *) this->mUnk_54.mUnk_00 = param1->mUnk_10;
            *(u32 *) this->mUnk_54.mUnk_04 = param1->mUnk_14;
            this->mUnk_54.mUnk_08          = param1->mUnk_18;
            pItemManager                   = this->mUnk_28->pItemManager;
            itemId                         = param1->mUnk_1c;

            switch (itemId) {
                case ItemId_BombBag:
                case ItemId_BombBagMedium:
                case ItemId_BombBagLarge:
                    if (GET_FLAG(pItemManager->mUnk_08, ItemFlag_Bombs) == 0) {
                        itemId = ItemId_BombBag;
                    } else if (pItemManager->mBombBagCapacity == UpgradeCapacity_Tier1) {
                        itemId = ItemId_BombBagMedium;
                    } else if (pItemManager->mBombBagCapacity == UpgradeCapacity_Tier2) {
                        itemId = ItemId_BombBagLarge;
                    }
                    break;
                case ItemId_NormalBow:
                case ItemId_QuiverMedium:
                case ItemId_QuiverLarge:
                    if (GET_FLAG(pItemManager->mUnk_08, ItemFlag_Bow) == 0) {
                        itemId = ItemId_NormalBow;
                    } else if (pItemManager->mQuiverCapacity == UpgradeCapacity_Tier1) {
                        itemId = ItemId_QuiverMedium;
                    } else if (pItemManager->mQuiverCapacity == UpgradeCapacity_Tier2) {
                        itemId = ItemId_QuiverLarge;
                    }
                    break;
                default:
                    itemId = data_ov000_020b6510->func_ov000_020aa02c(itemId);
                    break;
            }

            this->mUnk_54.mItemId  = itemId;
            this->mUnk_70          = 0;
            this->mUnk_2c->mUnk_58 = 0;
            func_ov000_0208ba10(auStack_108, &this->mUnk_24->mUnk_25, 0);
            this->mUnk_40->mUnk_00 = 0x8000;

            pUnk_38          = this->mUnk_38;
            pUnk_38->mUnk_00 = 0;
            pUnk_38->mUnk_08 = 0;

            pUnk_3c          = this->mUnk_3c;
            pUnk_3c->mUnk_00 = 0;
            pUnk_3c->mUnk_04 = 0;
            pUnk_3c->mUnk_08 = 0;

            if (((*(u16 *) this->mUnk_54.mUnk_00 << 0x10) >> 0x1E) != 1) {
                return;
            }

            iVar10 = gActorManager->func_01fff3b4(*(u32 *) this->mUnk_54.mUnk_00);

            if (iVar10 == NULL) {
                return;
            }

            if (iVar10->func_01fff458() == ActorId_NormalShield) {
                UNSET_FLAG(iVar10->mFlags, ActorFlag_Visible);
                iVar10->mUnk_4a = 0;
            }
            break;
        case 0x3A:
            if (this->mUnk_54.mItemId != ItemId_Nothing) {
                if (func_ov000_020a4c00(this->mUnk_54.mItemId) == 0) {
                    this->mUnk_8c.vfunc_08(0);
                } else {
                    unk32 niVar10;

                    if (this->mUnk_54.mItemId == ItemId_LokomoSword) {
                        niVar10 = func_ov000_020a4c00(ItemId_NormalSword);
                    }

                    unk16 auStack_110[2];
                    unk16 acStack_a6[2];
                    unk16 auStack_48[2];
                    unk16 auStack_64[2];
                    unk16 acStack_e0[2];
                    size_t len;

                    auStack_110[0] = 0;
                    auStack_110[1] = 0;
                    func_02015ea8(niVar10, auStack_110);
                    acStack_a6[1] = 0;
                    strncpy((char *) acStack_e0, "Player/get/", 0x39);
                    len = strlen((char *) acStack_e0);
                    strncpy((char *) acStack_e0 + len, (char *) auStack_110, 0x39 - len);
                    auStack_64[1] = 0;
                    strncpy((char *) acStack_a6, (char *) acStack_e0, 0x3f);
                    len = strlen((char *) acStack_a6);
                    // strncpy((char *) acStack_a6 + len, ".nsbmd", 0x3f - len);
                    func_02015628((char *) auStack_64, (char *) acStack_a6, 0, &data_ov110_02186240,
                                  sizeof(UnkStruct_02186240));
                    func_02015664((char *) auStack_64, 0x10);
                    strncpy((char *) acStack_a6, (char *) acStack_e0, 0x3f);
                    len = strlen((char *) acStack_a6);
                    // strncpy((char *) acStack_a6 + len, ".nsbtx", 0x3f - len);
                    func_020156c8((char *) auStack_48, (char *) acStack_a6, 0);

                    void *var_r1_3;
                    unk32 var_r1_2;
                    func_ov000_0205abcc_ret *ret =
                        func_ov000_0205abcc((char *) auStack_64, (char *) auStack_48, 0, 1, this->mUnk_30->mUnk_24);
                    if (ret != NULL) {
                        if (ret->mUnk_08 != 0 && ret->mUnk_09 > 0) {
                            var_r1_2 = ret->mUnk_08 + ret->mUnk_0e + 4;
                        } else {
                            var_r1_2 = 0;
                        }

                        if (var_r1_2 != 0) {
                            var_r1_3 = ret + var_r1_2;
                        } else {
                            var_r1_3 = NULL;
                        }
                    } else {
                        var_r1_3 = NULL;
                    }

                    this->mUnk_8c.vfunc_08((unk32) var_r1_3);
                    func_020156f4((char *) auStack_48);
                    func_02015644((char *) auStack_64);
                }

                switch (this->mUnk_54.mItemId) {
                    case ItemId_BigGreenRupee:
                    case ItemId_BigRedRupee:
                    case ItemId_BigGoldRupee:
                        this->mUnk_6c = 0x1666;
                        break;
                    default:
                        this->mUnk_6c = 0x1000;
                        break;
                }
            }

            UnkStruct_027e09bc_0c *uVar11 = data_027e09bc->mUnk_0c;
            unk32 uVar6                   = func_ov000_02077590(4);
            uVar11->func_ov000_0207834c(this->mUnk_34, uVar6, 0);

            UnkStruct_PlayerGet_48 *pUnk_48 = this->mUnk_48;
            pUnk_48->mUnk_42                = 0x1000;
            pUnk_48->mUnk_47                = 0;
            pUnk_48->mUnk_5e                = 0x1000;
            pUnk_48->mUnk_63                = 0;

            if (this->mUnk_44 != NULL) {
                this->mUnk_64.func_ov000_0208a100();
            }

            // pUnk24 = this->mUnk_24;
            bool bVar8;

            // ...

            UnkStruct_ov000_0208f820_28_98 *pUnk28_98 = this->mUnk_28->mUnk_98;
            if (!bVar8 && pUnk28_98 != NULL) {
                pUnk28_98->mUnk_40 |= 0x10;
                this->mUnk_64.func_ov000_0208a100();
            }

            this->mUnk_73 = 0;

            switch (this->mUnk_54.mItemId) {
                case ItemId_25:
                case ItemId_26:
                case ItemId_27:
                case ItemId_28:
                case ItemId_29:
                    break;
                default:
                    return;
            }

            data_ov000_020b51b8.func_ov000_0206c96c(data_027e0cd8->mUnk_0c->func_ov000_02080a44());
            this->mUnk_73 = 1;
            break;
        case 0x3B:
            this->mUnk_72 = 0;

            if (this->mUnk_54.mItemId != ItemId_Nothing) {
                Vec3p_Add(this->mUnk_34, &data_ov110_021861ec.mUnk_00, &VStack_fc);
                uStack_f0[1] = 0x871;
                uStack_f0[2] = 0x872;
                uStack_f0[0] = 0x870;
                uStack_f0[3] = 0x873;
                data_027e0cec->func_ov000_020a0000(this->mUnk_ec, this->mUnk_fc, uStack_f0, &VStack_fc, 1);
            }

            UnkStruct_ov000_02067bc4::UnkStruct1 auStack_30;
            data_ov000_020b504c.func_ov000_02067cf8(ItemManager::func_ov110_02185da4(this->mUnk_54.mItemId), 0, &auStack_30);
            break;
        default:
            break;
    }
}

const UnkStruct_ov110_021861ec data_ov110_021861ec = UnkStruct_ov110_021861ec(0x5E3, 0x152D, 0xCD);

ARM void PlayerGet::vfunc_10(unk32 param1) {
    unk32 var_r1;
    UnkStruct_func_01fff520_ret **temp_r0_6;
    s32 temp_r5;
    bool temp_r6;
    s32 var_r0;
    s32 var_r0_2;
    bool var_r1_2;
    u32 var_r5_2;
    ActorUnk_ov000_020a8bb0 *temp_r0_3;

    switch (param1) {
        case 0x39:
            if (data_027e09b8->func_ov000_020732ec(this->mUnk_54.mUnk_08) == 0) {
                break;
            }

            if (this->mUnk_30->mUnk_70 < 0xF) {
                break;
            }

            this->mUnk_30->func_ov000_020921e4(0x3A);
            break;
        case 0x3A:
            if (this->mUnk_50->func_01ff8fa8() != 0) {
                this->mUnk_30->func_ov000_020921e4(0x3B);
                break;
            }
            if (this->mUnk_50->func_02015080(0x1C000) == 0) {
                break;
            }

            var_r1 = 0x64;
            switch (this->mUnk_54.mItemId) {
                case ItemId_Nothing:
                case ItemId_NormalShield:
                case ItemId_NormalSword:
                case ItemId_Whirlwind:
                    break;
                case ItemId_NormalKey:
                case ItemId_GreenRupee:
                case ItemId_BlueRupee:
                case ItemId_RedRupee:
                case ItemId_DemonFossil:
                case ItemId_StalfosSkull:
                case ItemId_StarFragment:
                case ItemId_BeeLarvae:
                case ItemId_WoodHeart:
                    var_r1 = 0x65;
                    break;
                case ItemId_HeartContainer:
                    var_r1 = 0x67;
                    break;
                case ItemId_ForestGlyph:
                case ItemId_SnowGlyph:
                case ItemId_OceanGlyph:
                case ItemId_FireGlyph:
                    var_r1 = 0x68;
                    break;
                case ItemId_25:
                case ItemId_26:
                case ItemId_27:
                case ItemId_28:
                case ItemId_29:
                case ItemId_PanFluteSong_101:
                case ItemId_PanFluteSong_102:
                case ItemId_PanFluteSong_103:
                case ItemId_PanFluteSong_104:
                case ItemId_PanFluteSong_105:
                    var_r1 = 0x66;
                    break;
                case ItemId_ForceGem_18:
                case ItemId_ForceGem_19:
                case ItemId_ForceGem_20:
                case ItemId_ForceGem_35:
                case ItemId_ForceGem_36:
                case ItemId_ForceGem_37:
                case ItemId_ForceGem_43:
                case ItemId_ForceGem_44:
                case ItemId_ForceGem_45:
                case ItemId_ForceGem_46:
                case ItemId_ForceGem_47:
                case ItemId_ForceGem_48:
                case ItemId_ForceGem_49:
                case ItemId_ForceGem_50:
                case ItemId_ForceGem_51:
                case ItemId_ForceGem_52:
                case ItemId_ForceGem_53:
                case ItemId_ForceGem_54:
                case ItemId_ForceGem_55:
                case ItemId_ForceGem_56:
                case ItemId_ForceGem_57:
                case ItemId_ForceGem_58:
                case ItemId_ForceGem_59:
                case ItemId_ForceGem_60:
                case ItemId_ForceGem_61:
                    var_r1 = 0x6A;
                    break;
                default:
                    break;
            }
            data_ov000_020b51b8.func_ov000_0206d274(var_r1);
            break;
        case 0x3B:
            var_r1_2 = false;

            if (data_ov000_020b504c.func_ov000_02067bc4(0)->vfunc_08() == 0) {
                var_r1_2 = true;
            }

            if (var_r1_2) {
                if (this->mUnk_54.mItemId == ItemId_Nothing) {
                    var_r1_2 = true;
                } else {
                    if (this->mUnk_30->mUnk_70 >= 0x1E) {
                        var_r1_2 = true;
                    } else {
                        goto todo_remove_me;
                    }
                }
            } else {
            todo_remove_me:
                var_r1_2 = false;
            }

            if (this->mUnk_72 == 0 && var_r1_2) {
                temp_r6 = this->mUnk_28->pItemManager->func_ov110_02184a40(this->mUnk_54.mItemId);

                switch (this->mUnk_54.mItemId) {
                    case ItemId_NormalShield:
                    case ItemId_AncientShield:
                        this->mUnk_30->func_ov000_020936ec();

                        if (((*(u16 *) this->mUnk_54.mUnk_00 << 0x10) >> 0x1E) == 1) {
                            temp_r0_3 = gActorManager->func_01fff3b4(*(u32 *) this->mUnk_54.mUnk_00);
                            if ((temp_r0_3 != NULL) && (temp_r0_3->func_01fff458() == ActorId_NormalShield)) {
                                if (this->func_ov110_02186b8c()) {
                                    this->mUnk_28->pItemManager->mUnk_12 ^= 2;
                                }

                                temp_r0_3->func_ov062_02158ce8();
                            }
                        } else {
                            if (this->mUnk_54.mItemId == ItemId_AncientShield) {
                                if (this->func_ov110_02186b8c()) {
                                    this->mUnk_28->pItemManager->mUnk_12 ^= 2;
                                }
                            } else if (this->mUnk_54.mItemId == ItemId_NormalShield) {
                                if (this->func_ov110_02186b8c()) {
                                    this->mUnk_28->pItemManager->mUnk_12 ^= 2;
                                }
                            }
                        }

                        this->mUnk_30->func_ov000_02093a04();
                        break;
                    case ItemId_NormalSword:
                    case ItemId_LokomoSword:
                        this->mUnk_30->func_ov000_020936ec();
                        this->mUnk_30->mUnk_10->func_ov031_020e076c();
                        break;
                    case ItemId_RecruitUniform2:
                    case ItemId_EngineerUniform:
                        if (data_027e09a4->mSceneIndex == SceneIndex_f_first) {
                            this->mUnk_28->func_ov058_02152a24();
                        }
                        break;
                    default:
                        break;
                }

                if (*(u16 *) this->mUnk_54.mUnk_00 == 0x1000) {
                    UnkStruct_ov000_0208f820_04 structure;
                    structure.mUnk_00[0] = this->mUnk_54.mUnk_00[0];
                    structure.mUnk_00[1] = this->mUnk_54.mUnk_00[1];
                    // structure.mUnk_08 = this->mUnk_54.mUnk_08;
                    // structure.mItemId = this->mUnk_54.mItemId;

                    if (data_027e0ce8->func_01fff498(structure) != 0) {
                        var_r5_2 = '\0';

                        switch (func_01fff584()) {
                            case 'TRLN':
                                var_r5_2 = 'TREN';
                                break;
                            case 'TREN':
                                var_r5_2 = 'TRLN';
                                break;
                            default:
                                break;
                        }

                        if (var_r5_2 != 0) {
                            // data_ov000_020b34c4.mUnk_04 = var_r5_2;
                            temp_r0_6 = data_027e0ce8->func_01fff520(&data_ov000_020b34c4, data_027e0ce8->mUnk_00);
                            if (temp_r0_6 == data_027e0ce8->mUnk_08) {
                                (*temp_r0_6)->func_ov031_02103878();
                            }
                        }
                    }
                }

                if (this->mUnk_54.mItemId == ItemId_ForestGlyph) {
                    this->mUnk_72 = data_027e09a4->func_ov000_02070bd0(0x29, 0);
                } else if (this->mUnk_54.mItemId == ItemId_FireGlyph) {
                    this->mUnk_72 = data_027e09a4->func_ov000_02070bd0(0x14, 0);
                }

                if (this->mUnk_72 != 0) {
                    break;
                }

                if (!temp_r6) {
                    data_027e09bc->mUnk_0c->func_ov000_02078230(0);
                }

                if (data_027e09b8->func_ov000_020732fc(this->mUnk_54.mUnk_08) != 0) {
                    this->mUnk_54.mUnk_08 = -1;
                }

                this->mUnk_40->mUnk_00 = 0;

                if (temp_r6) {
                    this->mUnk_30->func_ov000_020921e4(0x49);
                    break;
                }

                if ((((u32) (*(u16 *) this->mUnk_54.mUnk_04 << 0x10) >> 0x1E) == 1) &&
                    (data_027e09b8->func_ov000_020732dc(2) != 0)) {
                    *(u32 *) this->mUnk_04.mUnk_00 = *(u32 *) this->mUnk_54.mUnk_04;
                    this->mUnk_30->func_ov000_020921e4(0x57);
                    break;
                }

                this->mUnk_30->func_ov000_020921e4(0);
                break;
            }

            this->mUnk_70 += 0x10E;

            if (this->mUnk_73 == 0) {
                break;
            }

            temp_r5 = data_027e0cd8->mUnk_0c->func_ov000_02080a44();

            if (data_ov000_020b51b8.mUnk_08[2] != NULL) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }

            if (var_r0 != 0) {
                var_r0_2 = 1;
            } else {
                var_r0_2 = 0;
            }

            if (var_r0_2 != 0) {
                break;
            }

            if (temp_r5 == data_ov000_020b51c0.func_02002f04()) {
                break;
            }

            data_ov000_020b51b8.func_ov000_0206c9a8(temp_r5, 0x3C, 0x7F, 0);
            this->mUnk_73 = 0;
            break;
        default:
            break;
    }
}

ARM void PlayerGet::vfunc_18(unk32 param1, unk32 param2, unk32 param3) {
    Vec3p auStack_18;

    switch (param2) {
        case 0x39:
        case 0x3A:
            break;
        case 0x3B:
            if (param3 != 0 && this->mUnk_54.mItemId != ItemId_Nothing && this->mUnk_90 != 0) {
                Vec3p_Add(this->mUnk_34, (Vec3p *) &data_ov110_021861ec.mUnk_00, &auStack_18);
                func_ov000_02058fc4(data_027e0958, &this->mUnk_74, &auStack_18);
            }
            break;
        default:
            break;
    }
}

ARM UnkStruct_PlayerGet_ec::UnkStruct_PlayerGet_ec() {
    this->mUnk_00 = 0;
}

// non-matching
THUMB void UnkStruct_027e0ce0_34::func_ov110_02185d3c(ItemId itemId) {
    unk32 uStack_14;
    u16 auStack_18[2];

    switch (itemId) {
        case ItemId_31:
            this->func_ov024_020d3d98(0, 0);
            this->mUnk_2c = 1;
            this->mUnk_00 = 0;
            this->mUnk_10 = 0;
            break;
        case ItemId_33:
            this->func_ov024_020d3d98(2, 0);
            this->mUnk_2c = 2;
            this->mUnk_04 = 2;
            this->mUnk_14 = 0;
            break;
        default:
            uStack_14     = -1;
            auStack_18[0] = 0;

            if (func_ov024_020d5354(&uStack_14, auStack_18) != 0) {
                this->func_ov024_020d3ee8(uStack_14, auStack_18[0], 1);
            }
            break;
    }
}

ARM unk32 ItemManager::func_ov110_02185da4(unk32 param1) {
    return data_ov110_02185de8[param1];
}

ARM ItemFlag ItemManager::func_ov110_02185db4(ItemId itemId) {
    return data_ov110_02185fbc[itemId];
}
