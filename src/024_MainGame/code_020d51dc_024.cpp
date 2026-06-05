#include "MainGame/AdventureMode.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "math.hpp"
#include "types.h"
#include "versions.h"

typedef struct UnkStruct_ov024_020d774c {
    /* 00 */ s16 unk_00;
    /* 02 */ s16 flagValue;
    /* 04 */ s16 unk_04;
    /* 06 */ bool unk_06;
    /* 06 */ bool unk_07;
    /* 08 */ s16 unk_08;
    /* 0A */ s16 unk_0A;
    /* 0C */ s16 unk_0C;
    /* 0E */ s16 unk_0E;
} UnkStruct_ov024_020d774c; // size = 0x10

typedef struct UnkStruct_ov024_020d76c0 {
    s16 itemId : 12;
    s16 flagPos : 4;
    u16 flagValue;
} UnkStruct_ov024_020d76c0; // size = 0x04

static const u8 data_ov024_020d767c[] = {0x0A, 0x09, 0x06, 0x05, 0x0A};

// clang-format off
const u16 data_ov024_020d7684[5][6] = {
#if IS_JP
    {0x00, 0x00, 0x40, 0x00, 0x01, 0x00}, {0x00, 0x00, 0x40, 0x00, 0x02, 0x00},
#else
    {0x00, 0x00, 0x3F, 0x00, 0x01, 0x00}, {0x00, 0x00, 0x3F, 0x00, 0x02, 0x00},
#endif
    {0x87, 0x00, 0x05, 0x00, 0x03, 0x00},
    {0x87, 0x00, 0x06, 0x00, 0x04, 0x00},
    {0x80, 0x00, 0x05, 0x00, 0x00, 0x00},
};
// clang-format on

static const UnkStruct_ov024_020d774c data_ov024_020d774c[] = {
    {SceneIndex_e3_train, 0x001D, 0x0000, true, false, 0x0000, 0x0000, 0x09A5, 0x0000},
    {SceneIndex_e3_smount, 0x001D, 0x0000, false, false, 0x00FF, 0x0000, 0x0800, 0x0000},
    {SceneIndex_test_trn, 0x001D, 0x0000, true, true, 0x0000, 0x0000, 0x09A5, 0x0000},
    {SceneIndex_test_trn2, 0x001D, 0x0000, true, true, 0x0000, 0x0000, 0x09A5, 0x0000},
    {SceneIndex_t_area0, 0x001D, 0x0014, true, true, 0x0000, 0x0000, 0x09A5, 0x0000},
    {SceneIndex_t_area1, 0x001D, 0x0014, true, true, 0x0000, 0x0000, 0x09C5, 0x0000},
    {SceneIndex_t_area2, 0x001D, 0x0014, true, true, 0x0000, 0x0000, 0x09A5, 0x0000},
    {SceneIndex_t_area3, 0x001D, 0x0014, true, true, 0x0000, 0x0000, 0x08B5, 0x0000},
    {SceneIndex_t_tutorial, 0x001D, 0x0014, false, false, 0x0000, 0x0000, 0x09A5, 0x0000},
    {SceneIndex_t_forest, 0x001D, 0x0000, false, false, 0x0000, 0x0000, 0x0881, 0x0000},
#if IS_JP
    {SceneIndex_t_smarine, 0x0000, 0x0000, true, true, 0x0001, 0x0000, 0x000A, 0x0000},
#else
    {SceneIndex_t_smarine, 0x0000, 0x0000, true, false, 0x0001, 0x0000, 0x000A, 0x0000},
#endif
    {SceneIndex_t_smount, 0x001D, 0x0000, false, false, 0x00FF, 0x0000, 0x0800, 0x0000},
    {SceneIndex_t_smount2, 0x001D, 0x0000, false, false, 0x00FF, 0x0000, 0x0830, 0x0000},
    {SceneIndex_t_smount3, 0x001D, 0x0000, false, false, 0x00FF, 0x0000, 0x0830, 0x0000},
    {SceneIndex_test_hiratsu, 0x001D, 0x0000, true, true, 0x0000, 0x0000, 0x09A5, 0x0000},
    {SceneIndex_test_kato, 0x001D, 0x0000, true, true, 0x0000, 0x0000, 0x09A5, 0x0000},
    {SceneIndex_t_minigame, 0x0029, 0x0000, false, false, 0x0000, 0x0000, 0x0885, 0x0000},
    {SceneIndex_test_slope, 0x001D, 0x0000, false, false, 0x0000, 0x0000, 0x09A5, 0x0000},
    {SceneIndex_t_dark, 0x0000, 0x0000, true, false, 0x0002, 0x0000, 0x0E00, 0x0000},
    {SceneIndex_t_eviltrain, 0x0000, 0x0000, false, false, 0x00FF, 0x0000, 0x0800, 0x0000},
    {SceneIndex_t_eviltrain2, 0x0000, 0x0000, false, false, 0x00FF, 0x0000, 0x0800, 0x0000},
    {SceneIndex_t_eviltrain3, 0x0000, 0x0000, false, false, 0x00FF, 0x0000, 0x0800, 0x0000},
};

static const UnkStruct_ov024_020d76c0 data_ov024_020d76c0[] = {
    {
        .itemId    = ItemId_RestoredForestGlyph,
        .flagPos   = 0,
        .flagValue = 0x01,
    },
    {
        .itemId    = ItemId_RestoredSnowGlyph,
        .flagPos   = 0,
        .flagValue = 0x02,
    },
    {
        .itemId    = ItemId_RestoredOceanGlyph,
        .flagPos   = 0,
        .flagValue = 0x03,
    },
    {
        .itemId    = ItemId_RestoredFireGlyph,
        .flagPos   = 0,
        .flagValue = 0x04,
    },
    {
        .itemId    = ItemId_RestoredDesertOceanGlyph,
        .flagPos   = 0,
        .flagValue = 0x05,
    },
    {
        .itemId    = ItemId_FinalTrack,
        .flagPos   = 0,
        .flagValue = 0x06,
    },
    {
        .itemId    = ItemId_ForceGem_43,
        .flagPos   = 1,
        .flagValue = 0x01,
    },
    {
        .itemId    = ItemId_ForceGem_44,
        .flagPos   = 1,
        .flagValue = 0x02,
    },
    {
        .itemId    = ItemId_ForceGem_45,
        .flagPos   = 1,
        .flagValue = 0x03,
    },
    {
        .itemId    = ItemId_ForceGem_46,
        .flagPos   = 1,
        .flagValue = 0x04,
    },
    {
        .itemId    = ItemId_ForceGem_47,
        .flagPos   = 1,
        .flagValue = 0x05,
    },
    {
        .itemId    = ItemId_ForceGem_48,
        .flagPos   = 1,
        .flagValue = 0x06,
    },
    {
        .itemId    = ItemId_ForceGem_49,
        .flagPos   = 1,
        .flagValue = 0x07,
    },
    {
        .itemId    = ItemId_ForceGem_50,
        .flagPos   = 1,
        .flagValue = 0x08,
    },
    {
        .itemId    = ItemId_ForceGem_51,
        .flagPos   = 1,
        .flagValue = 0x09,
    },
    {
        .itemId    = ItemId_ForceGem_52,
        .flagPos   = 1,
        .flagValue = 0x0A,
    },
    {
        .itemId    = ItemId_ForceGem_53,
        .flagPos   = 1,
        .flagValue = 0x0B,
    },
    {
        .itemId    = ItemId_ForceGem_54,
        .flagPos   = 1,
        .flagValue = 0x0C,
    },
    {
        .itemId    = ItemId_ForceGem_55,
        .flagPos   = 1,
        .flagValue = 0x0D,
    },
    {
        .itemId    = ItemId_ForceGem_56,
        .flagPos   = 1,
        .flagValue = 0x0E,
    },
    {
        .itemId    = ItemId_ForceGem_18,
        .flagPos   = 1,
        .flagValue = 0x0F,
    },
    {
        .itemId    = ItemId_ForceGem_19,
        .flagPos   = 1,
        .flagValue = 0x10,
    },
    {
        .itemId    = ItemId_ForceGem_20,
        .flagPos   = 1,
        .flagValue = 0x11,
    },
    {
        .itemId    = ItemId_ForceGem_35,
        .flagPos   = 1,
        .flagValue = 0x12,
    },
    {
        .itemId    = ItemId_ForceGem_36,
        .flagPos   = 1,
        .flagValue = 0x13,
    },
    {
        .itemId    = ItemId_ForceGem_37,
        .flagPos   = 1,
        .flagValue = 0x14,
    },
    {
        .itemId    = ItemId_ForceGem_57,
        .flagPos   = 1,
        .flagValue = 0x15,
    },
    {
        .itemId    = ItemId_ForceGem_58,
        .flagPos   = 1,
        .flagValue = 0x16,
    },
    {
        .itemId    = ItemId_ForceGem_59,
        .flagPos   = 1,
        .flagValue = 0x17,
    },
    {
        .itemId    = ItemId_ForceGem_60,
        .flagPos   = 1,
        .flagValue = 0x18,
    },
    {
        .itemId    = ItemId_ForceGem_61,
        .flagPos   = 1,
        .flagValue = 0x19,
    },
    {
        .itemId    = ItemId_ForestGlyph,
        .flagPos   = 3,
        .flagValue = 0x0F,
    },
    {
        .itemId    = ItemId_SnowGlyph,
        .flagPos   = 3,
        .flagValue = 0x10,
    },
    {
        .itemId    = ItemId_OceanGlyph,
        .flagPos   = 3,
        .flagValue = 0x11,
    },
    {
        .itemId    = ItemId_FireGlyph,
        .flagPos   = 3,
        .flagValue = 0x12,
    },
};

void func_ov024_020d51dc(Vec2s *param1, SceneIndex sceneIndex) {
    static const Vec2s data_ov024_020d851c(-8, -6);

    Vec2s local_10;
    Vec2s *ptr = (Vec2s *) &local_10;
    func_ov024_020d524c(ptr, sceneIndex);

    Vec2s temp;
    temp.x = ptr->x + data_ov024_020d851c.x;
    temp.y = ptr->y + data_ov024_020d851c.y;

    param1->x = temp.x;
    param1->y = temp.y;
}

void func_ov024_020d524c(Vec2s *param1, SceneIndex sceneIndex) {
    switch ((s32) sceneIndex) {
        case SceneIndex_t_area0:
        case SceneIndex_t_tutorial:
        case SceneIndex_t_forest:
        case SceneIndex_e3_train:
        case SceneIndex_e3_smount:
            param1->x = 0x10;
            param1->y = 0x00;
            break;
        case SceneIndex_t_area1:
        case SceneIndex_t_smount:
            param1->x = 0x10;
            param1->y = 0x0C;
            break;
        case SceneIndex_t_area2:
        case SceneIndex_t_smount2:
            param1->x = 0x00;
            param1->y = 0x00;
            break;
        case SceneIndex_t_area3:
        case SceneIndex_t_smount3:
            param1->x = 0x00;
            param1->y = 0x0C;
            break;
        default:
            param1->x = 0x08;
            param1->y = 0x06;
            break;
    }
}

bool func_ov024_020d5304(SceneIndex sceneIndex) {
    for (u32 i = 0; i < ARRAY_LEN(data_ov024_020d774c); i++) {
        if (data_ov024_020d774c[i].unk_00 == sceneIndex) {
            return data_ov024_020d774c[i].unk_06;
        }
    }

    return false;
}

bool func_ov024_020d5340(SceneIndex sceneIndex) {
    return sceneIndex - SceneIndex_t_area0 <= SceneIndex_t_area3 - SceneIndex_t_area0;
}

bool func_ov024_020d5354(s32 *pFlagPos, s16 *pFlagValue, ItemId itemId) {
    for (int i = 0; i < ARRAY_LEN(data_ov024_020d76c0); i++) {
        if (data_ov024_020d76c0[i].itemId == itemId) {
            *pFlagPos   = data_ov024_020d76c0[i].flagPos;
            *pFlagValue = data_ov024_020d76c0[i].flagValue;
            return true;
        }
    }

    return false;
}

static s32 func_ov024_020d53b0(SceneIndex sceneIndex) {
    switch (sceneIndex) {
        case SceneIndex_t_area0:
            return 0x00;
        case SceneIndex_t_area1:
            return 0x01;
        case SceneIndex_t_area2:
            return 0x02;
        case SceneIndex_t_area3:
            return 0x03;
        case SceneIndex_t_tutorial:
            return 0x04;
        default:
            break;
    }

    return -1;
}

bool func_ov024_020d5410(SceneIndex sceneIndex) {
    return data_ov024_020d767c[func_ov024_020d53b0(sceneIndex)] & 0x01;
}

bool func_ov024_020d5434(SceneIndex sceneIndex) {
    return data_ov024_020d767c[func_ov024_020d53b0(sceneIndex)] & 0x02;
}

bool func_ov024_020d5458(SceneIndex sceneIndex) {
    return data_ov024_020d767c[func_ov024_020d53b0(sceneIndex)] & 0x04;
}

bool func_ov024_020d547c(SceneIndex sceneIndex) {
    return data_ov024_020d767c[func_ov024_020d53b0(sceneIndex)] & 0x08;
}
