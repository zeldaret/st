#include "System/OverlayManager.hpp"
#include "Unknown/Common.hpp"
#include "global.h"

#include <nitro/fs.h>

extern OverlayId data_0203e0e8[OverlayIndex_COUNT];

bool OverlayManager::func_020147a8() {
    return gOverlayManager.mLoadedOverlays[OverlaySlot_Second] == OverlayIndex_Second;
}

bool OverlayManager::func_020147c4() {
    return gOverlayManager.mLoadedOverlays[OverlaySlot_Second] == OverlayIndex_Second;
}

THUMB_BEGIN

bool OverlayManager::func_020147e0(OverlayIndex index) {
    bool var_r2 = true;

#define UNK(x) (1 << (x - 1))

    u32 unk = 0;
    unk |= UNK(OverlayIndex_Factory);
    unk |= UNK(OverlayIndex_SoftKeyboard);
    unk |= UNK(OverlayIndex_Collect);
    unk |= UNK(OverlayIndex_SceneInit);
    // unk == 0x2007

    if (index - 1 <= OverlayIndex_Stamp && UNK(index) & unk) {
        var_r2 = false;
    }

#undef UNK

    return var_r2;
}

void OverlayManager::LoadIfNotLoaded(OverlaySlot slot, OverlayIndex index) {
    if (index != gOverlayManager.mLoadedOverlays[slot]) {
        this->Unload(slot);
        this->Load(slot, index);
    }
}

void OverlayManager::Load(OverlaySlot slot, OverlayIndex index) {
    if (index != OverlayIndex_None) {
        FS_LoadOverlay(NULL, data_0203e0e8[index]);
    }

    gOverlayManager.mLoadedOverlays[slot] = index;
}

void OverlayManager::Unload(OverlaySlot slot) {
    OverlayManager *pOverlayManager = &gOverlayManager;

    if (pOverlayManager->mLoadedOverlays[slot] != OverlayIndex_None) {
        FS_UnloadOverlay(NULL, data_0203e0e8[pOverlayManager->mLoadedOverlays[slot]]);
        pOverlayManager->mLoadedOverlays[slot] = OverlayIndex_None;
    }
}

OverlaySlot OverlayManager::func_02014878(void *addr) {
    for (int var_r4 = OverlaySlot_Second; var_r4 < OverlaySlot_COUNT; var_r4++) {
        OverlayIndex temp_r2 = gOverlayManager.mLoadedOverlays[var_r4];
        FSOverlayInfo sp0;

        if (temp_r2 != OverlayIndex_None && FS_LoadOverlayInfo(&sp0, 0, data_0203e0e8[temp_r2]) && addr >= sp0.overlay.addr &&
            (uintptr_t) addr < (uintptr_t) sp0.overlay.addr + (sp0.overlay.textSize + sp0.overlay.bssSize)) {
            return var_r4;
        }
    }

    return OverlaySlot_None;
}

void OverlayManager::func_020148d0(OverlayIndex index) {
    this->Unload(OverlaySlot_6);
    this->Unload(OverlaySlot_3);

    if ((s32) index >= OverlayIndex_StartUp && (s32) index < OverlayIndex_BattleGame) {
        this->Unload(OverlaySlot_5);
        this->LoadIfNotLoaded(OverlaySlot_4, index);
    } else {
        this->LoadIfNotLoaded(OverlaySlot_4, OverlayIndex_WirelessCommon);
        this->LoadIfNotLoaded(OverlaySlot_5, index);
    }
}

void OverlayManager::func_02014918(OverlayIndex index) {
    this->LoadIfNotLoaded(OverlaySlot_6, index);

    if (index == OverlayIndex_Land && gOverlayManager.mLoadedOverlays[OverlaySlot_1] == OverlayIndex_SceneInit) {
        this->LoadIfNotLoaded(OverlaySlot_3, OverlayIndex_SceneInitLand);
    }
}

void OverlayManager::func_02014944(OverlayIndex index) {
    switch (index - OverlayIndex_BossForest) {
        case DungeonType_BossForest:
        case DungeonType_DgnForest:
            this->LoadIfNotLoaded(OverlaySlot_11, OverlayIndex_DgnLv1);
            break;
        case DungeonType_BossWater:
        case DungeonType_DgnWater:
            this->LoadIfNotLoaded(OverlaySlot_11, OverlayIndex_DgnLv3);
            break;
        case DungeonType_BossDesert:
        case DungeonType_DgnDesert:
            this->LoadIfNotLoaded(OverlaySlot_11, OverlayIndex_DgnLv5);
            break;
        default:
            break;
    }

    this->LoadIfNotLoaded(OverlaySlot_8, index);
}

void OverlayManager::func_02014994(OverlayIndex index) {
    if (index != gOverlayManager.mLoadedOverlays[OverlaySlot_1]) {
        this->Unload(OverlaySlot_1);

        if (this->func_020147e0(index)) {
            this->LoadIfNotLoaded(OverlaySlot_2, OverlayIndex_CourseExec);

            if (gOverlayManager.mLoadedOverlays[OverlaySlot_6] == OverlayIndex_Land && index != OverlayIndex_Paint &&
                index != OverlayIndex_WorldMap && index != OverlayIndex_Stamp) {
                this->LoadIfNotLoaded(OverlaySlot_3, OverlayIndex_CourseExecLand);
            }
        } else {
            this->Unload(OverlaySlot_3);
            this->Unload(OverlaySlot_2);
        }

        this->LoadIfNotLoaded(OverlaySlot_1, index);

        if (index == OverlayIndex_SceneInit && gOverlayManager.mLoadedOverlays[OverlaySlot_6] == OverlayIndex_Land) {
            this->LoadIfNotLoaded(OverlaySlot_3, OverlayIndex_SceneInitLand);
        }
    }
}

THUMB_END
