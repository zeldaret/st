#include "Game/Game.hpp"
#include "Game/GameModeAdventure.hpp"
#include "MainGame/AdventureMode.hpp"
#include "Save/SaveManager.hpp"
#include "System/OverlayManager.hpp"
#include "Unknown/UICounterManager.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_027e0998.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e0cf8.hpp"
#include "Unknown/UnkStruct_ov000_020b4f70.hpp"
#include "Unknown/UnkStruct_ov024_020d8694.hpp"
#include "Unknown/UnkStruct_ov024_020d86a0.hpp"
#include "Unknown/UnkStruct_ov088_02177218.hpp"

#include <dsprot.h>

extern "C" {
void *func_ov024_020d1658();
void *func_ov000_02066294();
}

extern int data_ov001_020c27a8;
extern int data_ov001_020c276c;

THUMB_BEGIN

AdventureModeManager *AdventureModeManager::Create(unk32 param1) {
    return new(HeapIndex_1) AdventureModeManager(param1);
}

AdventureModeManager::AdventureModeManager(unk32 param1) {
    this->mUnk_154       = 0;
    this->mUnk_158       = &this->mUnk_104;
    this->mUnk_15C       = new(HeapIndex_1) AdventureModeManager_15C();
    this->mUnk_160       = NULL;
    this->mUnk_164       = NULL;
    this->mUnk_168       = NULL;
    this->mUnk_16C       = NULL;
    this->mUnk_174       = NULL;
    this->mUnk_178       = NULL;
    this->mUnk_17C       = NULL;
    this->mUnk_180       = NULL;
    this->mUnk_184       = NULL;
    this->mUnk_188       = NULL;
    this->mUnk_18C       = NULL;
    this->mUnk_190       = NULL;
    this->mUnk_194       = NULL;
    this->mUnk_198       = NULL;
    this->mUnk_19C       = NULL;
    this->mUnk_1A0       = NULL;
    this->mUnk_1A4       = NULL;
    this->mUnk_1A8       = NULL;
    this->mUnk_1AC       = new(HeapIndex_1) AdventureModeManager_1AC();
    this->mUnk_1B0       = NULL;
    this->mUnk_1B4       = false;
    this->mUnk_1B5       = false;
    this->mUnk_1B8       = NULL;
    this->mUnk_1BC       = NULL;
    this->mUnk_1C0       = 0;
    this->mAllowMapPaint = false;

    UnkStruct_027e0998::Create();
    func_ov024_020d1658();

    this->mUnk_170 = new(HeapIndex_1) AdventureModeManager_170(&this->mUnk_104);

    GX_SetGraphicsMode(1, 0, 1);
    GXS_SetGraphicsMode(5);

    this->mUnk_1C4.sceneIndex = SceneIndex_None;
    this->mUnk_1C4.unk_04     = 0;
    this->mUnk_1C4.unk_06     = -1;
}

void AdventureModeManager::vfunc_10(unk32 param1, unk32 param2, unk32 param3) {
    data_027e0998->func_ov000_02061760();
}

void AdventureModeManager::func_ov001_020c00d4() {
    GetAdventureModeManager()->mUnk_16C = new(HeapIndex_1) AdventureModeManager_16C(&GetAdventureModeManager()->mUnk_104);
}

void AdventureModeManager::func_ov001_020c0104() {
    GetAdventureModeManager()->mUnk_1B8          = new(HeapIndex_1) AdventureModeManager_1B8(2, 1, 1);
    GetAdventureModeManager()->mUnk_1B8->mUnk_08 = 1;
    GetAdventureModeManager()->mUnk_164 =
        new(HeapIndex_1) AdventureModeManager_164(&GetAdventureModeManager()->mUnk_104, &GetAdventureModeManager()->mUnk_004);
    GetAdventureModeManager()->mUnk_19C = new(HeapIndex_1) AdventureModeManager_19C(&GetAdventureModeManager()->mUnk_104);

    if (DSProt_DetectNotDummy(NULL) != 0) {
        DSProt_DetectNotFlashcart(AdventureModeManager::func_ov001_020c00d4);
    }
}

void AdventureModeManager::func_ov001_020c0194() {
    GetAdventureModeManager()->mUnk_1B8          = new(HeapIndex_1) AdventureModeManager_1B8(2, 1, 1);
    GetAdventureModeManager()->mUnk_1B8->mUnk_08 = 1;
    GetAdventureModeManager()->mUnk_164 =
        new(HeapIndex_1) AdventureModeManager_164(&GetAdventureModeManager()->mUnk_104, &GetAdventureModeManager()->mUnk_004);
    GetAdventureModeManager()->mUnk_19C = new(HeapIndex_1) AdventureModeManager_19C(&GetAdventureModeManager()->mUnk_104);
}

void AdventureModeManager::vfunc_14() {
    data_027e09a4->func_ov000_0207056c();
    UnkStruct_027e0cf8::Create();

    if (data_027e09a4->IsTrain()) {
        this->mUnk_004.func_ov001_020bd734(&data_ov001_020c276c);

        if (data_027e09a4->IsNotCutscene()) {
            if (data_027e09a4->IsDarkRealm()) {
                this->mUnk_004.func_0201c00c(6, 1);
            } else {
                this->mUnk_004.func_0201c00c(4, 1);
            }
        }
    } else {
        this->mUnk_004.func_ov001_020bd734(&data_ov001_020c27a8);
        if (data_027e09a4->IsNotCutscene()) {
            this->mUnk_004.func_0201c00c(0, 1);
        }
    }

    if (data_027e09a4->IsTrain()) {
        if (DSProt_DetectEmulator(AdventureModeManager::func_ov001_020c0194) == 0) {
            AdventureModeManager::func_ov001_020c0104();
        }
    } else {
        if (gOverlayManager.mLoadedOverlays[OverlaySlot_9] == OverlayIndex_PlayerSub) {
            this->mUnk_1BC = new(HeapIndex_1) AdventureModeManager_1BC();
        }

        this->mUnk_1B8 = new(HeapIndex_1) AdventureModeManager_1B8(2, 1, 0);

        if (data_027e09a4->IsNotCutscene()) {
            this->mUnk_168 = new(HeapIndex_1) AdventureModeManager_168(&this->mUnk_104);
        }

        this->mUnk_188 = new(HeapIndex_1) AdventureModeManager_188(&this->mUnk_104);

        if (gOverlayManager.mLoadedOverlays[OverlaySlot_6] == OverlayIndex_Land) {
            this->mUnk_194 = new(HeapIndex_1) AdventureModeManager_194(&this->mUnk_104);
        }

        if (gOverlayManager.mLoadedOverlays[OverlaySlot_7] == OverlayIndex_Field) {
            this->mUnk_198 = new(HeapIndex_1) AdventureModeManager_198(&this->mUnk_104);
        }

        if (gOverlayManager.mLoadedOverlays[OverlaySlot_8] == OverlayIndex_Village) {
            this->mUnk_17C = new(HeapIndex_1) AdventureModeManager_17C(&this->mUnk_104);
            this->mUnk_1A0 = new(HeapIndex_1) AdventureModeManager_1A0(&this->mUnk_104);
            this->mUnk_1A4 = new(HeapIndex_1) AdventureModeManager_1A4(&this->mUnk_104);
        }

        if (data_027e09a4->IsCutscene()) {
            this->mUnk_1A8 = new(HeapIndex_1) AdventureModeManager_1A8(&this->mUnk_104);
        }

        AdventureModeManager_1B0 *var_r5 = new(HeapIndex_1) AdventureModeManager_1B0();
        this->mUnk_1B0                   = var_r5;

        if (data_027e09a4->IsNotCutscene()) {
            GameModeManagerBase_104 *pList = GetLinkListRef(this->mUnk_104);
            pList->Append(var_r5);
            var_r5->vfunc_18();

            this->mUnk_1B5 = true;
        }

        if (data_027e09a4->IsCutscene()) {
            this->mUnk_104.func_ov088_0217230c();
        }

        func_ov000_02066294();
    }

    UICounterManager::Create();

    if (data_027e09a4->IsNotCutscene()) {
        GameModeManagerBase_104 *pList = GetLinkListRef(this->mUnk_104);
        UICounterManager *ptr          = gpUICounterManager;
        pList->Append(ptr);
        ptr->vfunc_18();

        this->mUnk_1B4 = true;
    }

    this->mUnk_160 = new(HeapIndex_1) AdventureModeManager_160(&this->mUnk_104, this->mUnk_1B8);
    this->mUnk_184 = new(HeapIndex_1) AdventureModeManager_184(&this->mUnk_104);
    this->mUnk_174 = new(HeapIndex_1) AdventureModeManager_174(&this->mUnk_104);
    this->mUnk_178 = new(HeapIndex_1) AdventureModeManager_178(&this->mUnk_104);
    this->mUnk_180 = new(HeapIndex_1) AdventureModeManager_180(&this->mUnk_104);
    this->mUnk_18C = new(HeapIndex_1) AdventureModeManager_18C(&this->mUnk_104);
    this->mUnk_190 = new(HeapIndex_1) AdventureModeManager_190(&this->mUnk_104);

    UnkStruct_ov024_020d8694::Create(&this->mUnk_004);
    data_ov024_020d86a0->func_ov001_020bd818();
}

void AdventureModeManager::vfunc_18() {
    DELETE(this->mUnk_1B8);
    DELETE(this->mUnk_160);
    DELETE(this->mUnk_190);
    DELETE(this->mUnk_18C);
    DELETE(this->mUnk_180);
    DELETE(this->mUnk_17C);
    DELETE(this->mUnk_178);
    DELETE(this->mUnk_174);
    DELETE(this->mUnk_184);

    AdventureModeManager::func_ov001_020c083c();
    if (gpUICounterManager != NULL) {
        AdventureModeManager::func_ov001_020c0894();
        this->mUnk_1B4 = false;
    }

    if (data_027e09a4->IsTrain()) {
        DELETE(this->mUnk_16C);
        DELETE(this->mUnk_19C);
        DELETE(this->mUnk_164);
    } else {
        if (data_027e09a4->IsCutscene()) {
            AdventureModeManager::func_ov001_020c0824();
        }

        DELETE(this->mUnk_1B0);
        this->mUnk_1B5 = false;

        if (this->mUnk_168 != NULL) {
            DELETE(this->mUnk_168);
        }

        DELETE(this->mUnk_188);

        AdventureModeManager::func_ov001_020c0854();

        DELETE(this->mUnk_1BC);
        DELETE(this->mUnk_198);
        DELETE(this->mUnk_194);

        if (gOverlayManager.mLoadedOverlays[8] == OverlayIndex_Village) {
            DELETE(this->mUnk_1A0);
            DELETE(this->mUnk_1A4);
        }

        if (data_027e09a4->IsCutscene()) {
            DELETE(this->mUnk_1A8);
        }
    }

    AdventureModeManager::func_ov001_020c0874();
    this->mUnk_004.func_ov001_020bd784();
}

void AdventureModeManager::vfunc_1C() {
    if (this->mUnk_1BC != NULL) {
        this->mUnk_1BC->func_ov093_02175514();
    }

    gpUICounterManager->func_ov024_020cd094();
    gpUICounterManager->func_ov024_020cd150();

    if (!data_027e09a4->IsTrain()) {
        this->mUnk_1B0->func_ov031_0210fad0();
    }
}

void AdventureModeManager::vfunc_20() {
    if (data_ov000_020b4f70 != NULL) {
        data_ov000_020b4f70->func_ov000_020662e8();
    }

    this->func_ov024_020c699c();
    data_ov024_020d8694->func_ov024_020cb0c4();
}

void AdventureModeManager::func_ov001_020c0824() {
    if (data_ov088_02177218 != NULL) {
        delete data_ov088_02177218;
    }
}

void AdventureModeManager::func_ov001_020c083c() {
    if (data_ov024_020d8694 != NULL) {
        delete data_ov024_020d8694;
    }
}

void AdventureModeManager::func_ov001_020c0854() {
    if (data_ov000_020b4f70 != NULL) {
        delete data_ov000_020b4f70;
    }
}

void AdventureModeManager::func_ov001_020c0874() {
    if (data_027e0cf8 != NULL) {
        delete data_027e0cf8;
    }
}

void AdventureModeManager::func_ov001_020c0894() {
    if (gpUICounterManager != NULL) {
        delete gpUICounterManager;
    }
}

UnkStruct_ov000_020b4f70::~UnkStruct_ov000_020b4f70() {
    data_ov000_020b4f70 = NULL;
}

AdventureModeManager_15C::AdventureModeManager_15C() :
    mUnk_00(0),
    mUnk_20(&this->mUnk_04) {
    this->mUnk_44 = 0;
    this->mUnk_45 = 0;
    this->mUnk_46 = 0;
    this->mUnk_47 = 0;

    unk32 value           = data_0204999c.func_02013014();
    this->mUnk_20.mUnk_00 = new(HeapIndex_1) AdventureModeManager_15C_20_00(0);
    data_0204999c.func_020130d4(value);
}

AdventureModeManager_15C::~AdventureModeManager_15C() {
    delete this->mUnk_20.mUnk_00;
}

THUMB_END
