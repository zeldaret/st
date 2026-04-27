#include "Item/ItemManager.hpp"
#include "Save/SaveManager.hpp"
#include "System/Random.hpp"
#include "Unknown/UnkMemFuncs.h"
#include "global.h"

static const unk32 data_ov000_020afda8[] = {
    0x0015007E, 0x0015007F, 0x00150080, 0x00150081, 0x00150082, 0x00150083, 0x00150084, 0x00150085,
    0x00150086, 0x00150087, 0x00150088, 0x00150089, 0x0015008A, 0x0015008B, 0x0015008C, 0x0015008D,
};

static const unk32 data_ov000_020afd68[] = {
    0x0015006C, 0x0015006D, 0x0015006E, 0x0015006F, 0x00150070, 0x00150071, 0x00150072, 0x00150073,
    0x00150074, 0x00150075, 0x00150076, 0x00150077, 0x00150078, 0x00150079, 0x0015007A, 0x0015007B,
};

static const ItemId data_ov000_020afde8[] = {
    ItemId_DemonFossil, ItemId_StalfosSkull,   ItemId_StarFragment,   ItemId_BeeLarvae,
    ItemId_WoodHeart,   ItemId_DarkPearlLoop,  ItemId_WhitePearlLoop, ItemId_RutoCrown,
    ItemId_DragonScale, ItemId_PirateNecklace, ItemId_PalaceDish,     ItemId_GoronAmber,
    ItemId_MysticJade,  ItemId_AncientCoin,    ItemId_PricelessStone, ItemId_RegalRing,
};

// static const u8 data_ov000_020afe28 = 5;
// static const u8 data_ov000_020afe2c = 2;
// static const u8 data_ov000_020afe30 = 4;
// static const u8 data_ov000_020afe34 = 5;
extern u8 data_ov000_020afe28;
extern u8 data_ov000_020afe2c;
extern u8 data_ov000_020afe30;
extern u8 data_ov000_020afe34;

static const u8 data_ov000_020afe38[] = {0x32, 0x32};
static const u8 data_ov000_020afe3a[] = {0x32, 0x32};
static const u8 data_ov000_020afe3c[] = {0x32, 0x32};
static const u8 data_ov000_020afe3e[] = {0x32, 0x32};
static const u8 data_ov000_020afe40[] = {0x32, 0x32};
static const u8 data_ov000_020afe42[] = {0x14, 0x1E, 0x14, 0x1E};
static const u8 data_ov000_020afe46[] = {0x28, 0x0A, 0x05, 0x2D};
static const u8 data_ov000_020afe4a[] = {0x05, 0x1E, 0x19, 0x28};
static const u8 data_ov000_020afe4e[] = {0x1E, 0x1E, 0x0F, 0x19};
static const u8 data_ov000_020afe52[] = {0x0A, 0x1E, 0x28, 0x14};
static const u8 data_ov000_020afe56[] = {0x05, 0x1E, 0x14, 0x05, 0x28};
static const u8 data_ov000_020afe5b[] = {0x0A, 0x1E, 0x14, 0x0A, 0x1E};
static const u8 data_ov000_020afe60[] = {0x05, 0x1E, 0x05, 0x1E, 0x1E};
static const u8 data_ov000_020afe65[] = {0x14, 0x14, 0x0A, 0x0A, 0x28};
static const u8 data_ov000_020afe6a[] = {0x14, 0x28, 0x0F, 0x0F, 0x0A};
static const u8 data_ov000_020afe6f[] = {0x05, 0x1E, 0x14, 0x05, 0x28};
static const u8 data_ov000_020afe74[] = {0x1E, 0x0A, 0x14, 0x0A, 0x1E};
static const u8 data_ov000_020afe79[] = {0x05, 0x1E, 0x05, 0x1E, 0x1E};
static const u8 data_ov000_020afe7e[] = {0x28, 0x0A, 0x0A, 0x0A, 0x1E};
static const u8 data_ov000_020afe83[] = {0x0A, 0x28, 0x0F, 0x0F, 0x14};

static u8 *data_ov000_020b4e88[] = {
    (u8 *) data_ov000_020afe42, (u8 *) data_ov000_020afe46, (u8 *) data_ov000_020afe4a,
    (u8 *) data_ov000_020afe4e, (u8 *) data_ov000_020afe52,
};

static u8 *data_ov000_020b4e74[] = {
    (u8 *) data_ov000_020afe5b, (u8 *) data_ov000_020afe60, (u8 *) data_ov000_020afe65,
    (u8 *) data_ov000_020afe6a, (u8 *) data_ov000_020afe6f,
};

static u8 *data_ov000_020b4e9c[] = {
    (u8 *) data_ov000_020afe3e, (u8 *) data_ov000_020afe3c, (u8 *) data_ov000_020afe3a,
    (u8 *) data_ov000_020afe40, (u8 *) data_ov000_020afe38,
};

static u8 *data_ov000_020b4e60[] = {
    (u8 *) data_ov000_020afe74, (u8 *) data_ov000_020afe79, (u8 *) data_ov000_020afe7e,
    (u8 *) data_ov000_020afe83, (u8 *) data_ov000_020afe56,
};

extern u32 data_ov000_020afec4[];
extern u32 data_ov000_020afeb0[];
extern u32 data_ov000_020afea0[];
extern u32 data_ov000_020afe98[];

// static const u16 data_ov000_020afe88 = 0x01F4;
// static const u16 data_ov000_020afe8c = 0x0032;
// static const u16 data_ov000_020afe90 = 0x09C4;
// static const u16 data_ov000_020afe94 = 0x0096;
extern u16 data_ov000_020afe88;
extern u16 data_ov000_020afe8c;
extern u16 data_ov000_020afe90;
extern u16 data_ov000_020afe94;

ARM void TreasureManager::func_ov000_020a9b10(void *param1) {
    _MI_CpuCopy(param1, this, sizeof(TreasureManager));
}

ARM unk32 TreasureManager::func_ov000_020a9b2c(unk32 param1) {
    return data_ov000_020afda8[param1];
}

ARM unk32 TreasureManager::func_ov000_020a9b3c(unk32 param1) {
    return data_ov000_020afd68[param1];
}

ARM unk32 TreasureManager::func_ov000_020a9b4c(unk32 param1) {
    for (int i = 0; i < data_ov000_020afe34; i++) {
        if (data_ov000_020afec4[i] == param1) {
            return data_ov000_020afe8c;
        }
    }

    for (int i = 0; i < data_ov000_020afe34; i++) {
        if (data_ov000_020afeb0[i] == param1) {
            return data_ov000_020afe94;
        }
    }

    for (int i = 0; i < data_ov000_020afe34; i++) {
        if (data_ov000_020afea0[i] == param1) {
            return data_ov000_020afe88;
        }
    }

    for (int i = 0; i < data_ov000_020afe2c; i++) {
        if (data_ov000_020afe98[i] == param1) {
            return data_ov000_020afe90;
        }
    }

    return 0;
}

ARM bool TreasureManager::func_ov000_020a9c4c(TreasureType type) {
    return this->mUnk_3C[type] >= 0;
}

// hasAnyTreasure
ARM bool TreasureManager::func_ov000_020a9c64() {
    for (s32 i = 0; i < ARRAY_LEN(this->mUnk_3C); i++) {
        if (this->mUnk_3C[i] >= 0) {
            return true;
        }
    }

    return false;
}

// getTreasureAmount
ARM unk32 TreasureManager::func_ov000_020a9c90(TreasureType type) {
    if (this->mUnk_3C[type] >= 0) {
        return this->mUnk_3C[type];
    }

    return 0;
}

// isTreasureAmountMaxed
ARM bool TreasureManager::func_ov000_020a9ca4(TreasureType type) {
    return this->func_ov000_020a9c90(type) >= MAX_TREASURE;
}

// gainTreasure
ARM void TreasureManager::func_ov000_020a9cbc(TreasureType type, s32 amount) {
    s32 newAmount;

    if (this->mUnk_3C[type] < 0) {
        this->mUnk_3C[type] = 0;
    }

    newAmount = this->mUnk_3C[type] + amount;

    if (newAmount > MAX_TREASURE) {
        newAmount = MAX_TREASURE;
    } else if (newAmount < 0) {
        newAmount = 0;
    }

    this->mUnk_3C[type] = newAmount;
}

ARM u32 TreasureManager::func_ov000_020a9cfc(u8 *param1, u8 param2) {
    s32 uVar2 = gRandom.Next32(0, 100);
    s32 iVar1 = 0;

    for (int i = 0; i < param2; i++) {
        iVar1 += param1[i];

        if (uVar2 < (s32) iVar1) {
            return i;
        }
    }

    return param2;
}

ARM unk32 TreasureManager::func_ov000_020a9d78(unk32 param1) {
    unk32 var_r0;
    if (param1 < 0) {
        var_r0 = gSaveManager.mUnk_21C.func_ov000_020a1000();
    } else {
        var_r0 = (u16) param1;
    }

    u8 temp_r4  = data_ov000_020afe34;
    s32 temp_r0 = func_ov000_020a9cfc(data_ov000_020b4e74[var_r0], temp_r4);
    if (temp_r0 < temp_r4) {
        return data_ov000_020afec4[temp_r0];
    }

    u32 var_r3;
    var_r3 = gRandom.ConditionalNext32(temp_r4);
    return data_ov000_020afec4[var_r3];
}

ARM unk32 TreasureManager::func_ov000_020a9e14(unk32 param1) {
    unk32 var_r0;
    if (param1 < 0) {
        var_r0 = gSaveManager.mUnk_21C.func_ov000_020a1000();
    } else {
        var_r0 = (u16) param1;
    }

    u8 temp_r4  = data_ov000_020afe28;
    s32 temp_r0 = func_ov000_020a9cfc(data_ov000_020b4e60[var_r0], temp_r4);
    if (temp_r0 < temp_r4) {
        return data_ov000_020afeb0[temp_r0];
    }

    u32 var_r3;
    var_r3 = gRandom.ConditionalNext32(temp_r4);
    return data_ov000_020afeb0[var_r3];
}

ARM unk32 TreasureManager::func_ov000_020a9eb0(unk32 param1) {
    unk32 var_r0;
    if (param1 < 0) {
        var_r0 = gSaveManager.mUnk_21C.func_ov000_020a1000();
    } else {
        var_r0 = (u16) param1;
    }

    u8 temp_r4  = data_ov000_020afe30;
    s32 temp_r0 = func_ov000_020a9cfc(data_ov000_020b4e88[var_r0], temp_r4);
    if (temp_r0 < temp_r4) {
        return data_ov000_020afea0[temp_r0];
    }

    u32 var_r3;
    var_r3 = gRandom.ConditionalNext32(temp_r4);
    return data_ov000_020afea0[var_r3];
}

ARM unk32 TreasureManager::func_ov000_020a9f4c(unk32 param1) {
    if ((s32) gRandom.Next32(0, 100) < 80) {
        return TreasureManager::func_ov000_020a9eb0(param1);
    }

    unk32 var_r0;
    if (param1 < 0) {
        var_r0 = gSaveManager.mUnk_21C.func_ov000_020a1000();
    } else {
        var_r0 = (u16) param1;
    }

    u8 temp_r4  = data_ov000_020afe2c;
    s32 temp_r0 = TreasureManager::func_ov000_020a9cfc(data_ov000_020b4e9c[var_r0], temp_r4);
    if (temp_r0 < temp_r4) {
        return data_ov000_020afe98[temp_r0];
    }

    u32 var_r3;
    var_r3 = gRandom.ConditionalNext32(temp_r4);
    return data_ov000_020afe98[var_r3];
}

ARM ItemId TreasureManager::func_ov000_020aa02c(ItemId itemId) {
    switch (itemId) {
        case ItemId_RandCommonTreasure:
            return data_ov000_020afde8[TreasureManager::func_ov000_020a9d78(-1)];
        case ItemId_RandUncommonTreasure:
            return data_ov000_020afde8[TreasureManager::func_ov000_020a9e14(-1)];
        case ItemId_RandRareTreasure:
            return data_ov000_020afde8[TreasureManager::func_ov000_020a9eb0(-1)];
        case ItemId_RandLegendaryTreasure:
            return data_ov000_020afde8[TreasureManager::func_ov000_020a9f4c(-1)];
        default:
            break;
    }

    return itemId;
}

// gainTreasureFromItem
ARM void TreasureManager::func_ov000_020aa0ac(ItemId itemId) {
    switch (itemId) {
        case ItemId_DemonFossil:
            this->func_ov000_020a9cbc(TreasureType_DemonFossil, 1);
            break;
        case ItemId_StalfosSkull:
            this->func_ov000_020a9cbc(TreasureType_StalfosSkull, 1);
            break;
        case ItemId_StarFragment:
            this->func_ov000_020a9cbc(TreasureType_StarFragment, 1);
            break;
        case ItemId_BeeLarvae:
            this->func_ov000_020a9cbc(TreasureType_BeeLarvae, 1);
            break;
        case ItemId_WoodHeart:
            this->func_ov000_020a9cbc(TreasureType_WoodHeart, 1);
            break;
        case ItemId_DarkPearlLoop:
            this->func_ov000_020a9cbc(TreasureType_DarkPearlLoop, 1);
            break;
        case ItemId_WhitePearlLoop:
            this->func_ov000_020a9cbc(TreasureType_WhitePearlLoop, 1);
            break;
        case ItemId_RutoCrown:
            this->func_ov000_020a9cbc(TreasureType_RutoCrown, 1);
            break;
        case ItemId_DragonScale:
            this->func_ov000_020a9cbc(TreasureType_DragonScale, 1);
            break;
        case ItemId_PirateNecklace:
            this->func_ov000_020a9cbc(TreasureType_PirateNecklace, 1);
            break;
        case ItemId_PalaceDish:
            this->func_ov000_020a9cbc(TreasureType_PalaceDish, 1);
            break;
        case ItemId_GoronAmber:
            this->func_ov000_020a9cbc(TreasureType_GoronAmber, 1);
            break;
        case ItemId_MysticJade:
            this->func_ov000_020a9cbc(TreasureType_MysticJade, 1);
            break;
        case ItemId_AncientCoin:
            this->func_ov000_020a9cbc(TreasureType_AncientCoin, 1);
            break;
        case ItemId_PricelessStone:
            this->func_ov000_020a9cbc(TreasureType_PricelessStone, 1);
            break;
        case ItemId_RegalRing:
            this->func_ov000_020a9cbc(TreasureType_RegalRing, 1);
            break;
        default:
            break;
    }
}

void TreasureManager::func_ov000_020aa200() {
    data_ov000_020b6510 = this;
}

bool TreasureManager::func_ov000_020aa210() {
    data_ov000_020b6510 = NULL;
    //! @bug: no return value
}
