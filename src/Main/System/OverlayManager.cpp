#include "System/OverlayManager.hpp"
#include "global.h"
#include <nitro/Overlay.h>

struct UnkStruct_020ee698 {
    /* 00 */ unk8 mUnk_00[0x2C];
    /* 2c */ unk32 mUnk_2c;
    /* 30 */
};
extern UnkStruct_020ee698 data_ov000_020ee698;

struct OverlaySetup {
    /* 00 */ unk8 mUnk_00;
    /* 01 */ unk8 mUnk_01;
    /* 02 */ unk8 mUnk_02;
    /* 03 */ unk8 mUnk_03;
    /* 04 */ OverlayId slot1Overlay;
    /* 08 */ OverlayId slot2Overlay;
    /* 0c */ OverlayId slot3Overlay;
    /* 10 */ OverlayId slot12Overlay;
    /* 14 */ void *mUnk_14;
    /* 18 */ void *mUnk_18;
    /* 1c */
};
extern OverlaySetup gOverlaySetups[];

extern u32 *data_027e0ce0[];
extern "C" void func_ov007_02102850(u32 **);
extern "C" void func_ov007_021028a0(u32 **);

THUMB void OverlayManager::LoadIfNotLoaded(OverlaySlot slot, OverlayIndex index) {
    OverlayIndex loadedIndex = gOverlayManager.mLoadedOverlays[slot];

    if (index != loadedIndex) {
        this->Unload(slot);
        this->Load(slot, index);
    }
}

THUMB void OverlayManager::Load(OverlaySlot slot, OverlayIndex index) {
    if (index != OverlayIndex_None) {
        FS_LoadOverlay(NULL, data_0203e0e8[index]);
    }

    gOverlayManager.mLoadedOverlays[slot] = index;
}

THUMB void OverlayManager::Unload(OverlaySlot slot) {
    OverlayManager *pOverlayManager = &gOverlayManager;

    if (pOverlayManager->mLoadedOverlays[slot] != OverlayIndex_None) {
        FS_UnloadOverlay(NULL, data_0203e0e8[pOverlayManager->mLoadedOverlays[slot]]);
        pOverlayManager->mLoadedOverlays[slot] = OverlayIndex_None;
    }
}

THUMB void OverlayManager::LoadOverlaySetup(s32 index) {
    OverlayId overlayId;
    OverlaySetup *pSetup;

    pSetup = &gOverlaySetups[index];

    this->LoadIfNotLoaded(OverlaySlot_1, pSetup->slot1Overlay);
    this->LoadIfNotLoaded(OverlaySlot_2, pSetup->slot2Overlay);

    if (index == 5) {
        func_ov007_02102850(data_027e0ce0);
    } else {
        overlayId = pSetup->slot12Overlay;

        if (index == 6 && data_ov000_020ee698.mUnk_2c == 2) {
            overlayId = OverlayId_CastleTown;
        }

        this->Load(OverlaySlot_3, pSetup->slot3Overlay);
        this->Load(OverlaySlot_12, overlayId);
    }
}

THUMB void OverlayManager::UnloadOverlaySetup() {
    this->Unload(OverlaySlot_12);
    this->Unload(OverlaySlot_3);

    if (this->mLoadedOverlays[2] == OverlayId_RailEdit) {
        func_ov007_021028a0(data_027e0ce0);
        this->Unload(OverlaySlot_2);
    }
}
