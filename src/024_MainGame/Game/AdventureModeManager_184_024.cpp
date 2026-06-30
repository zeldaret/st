#include "MainGame/AdventureMode.hpp"
#include "Unknown/UICounterManager.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "Unknown/UnkStruct_ov000_020b4f70.hpp"
#include "Unknown/UnkStruct_ov024_020d8660.hpp"

extern "C" AdventureModeManager_184_10 *func_ov010_020b65fc(void *);
extern "C" AdventureModeManager_184_10 *func_ov010_020b6520(void *);
extern "C" AdventureModeManager_184_14 *func_ov010_020b88c4(void *);

THUMB_BEGIN

AdventureModeManager_184::AdventureModeManager_184(GameModeManagerBase_104 *param1) {
    this->mUnk_0C = param1;
    this->mUnk_10 = NULL;
    this->mUnk_14 = NULL;
    this->mUnk_18 = false;
    data_0204a088->func_ov000_020611dc(this, 6);
}

AdventureModeManager_184::~AdventureModeManager_184() {}

void AdventureModeManager_184::vfunc_08(unk32 param1) {
    if (!data_027e09a4->IsTrain()) {
        this->func_ov024_020c979c(param1);
    }
}

void AdventureModeManager_184::vfunc_0C(unk32 param1) {
    if (this->mUnk_10 == NULL && this->mUnk_18 && data_0204a110.func_02019548()) {
        this->mUnk_18 = false;

        if (data_ov024_020d8660->mUnk_1C == 5) {
            gpCurrentGameModeMgr->mUnk_004.func_0201c0c4(0x25);
        }

        data_0204a088->func_ov000_02061248();
        MapObjectId mapObjId = data_027e09b8->GetUnk0C()->mMapObjId;

        if (data_027e09a4->IsTrain() || (data_027e09b8->func_ov000_020732dc(2) &&
                                         (mapObjId != MapObjectId_WDST ||
                                          (mapObjId == MapObjectId_WDST && !data_ov000_020b504c.func_ov000_02067f88(0, 0))))) {
            this->mUnk_10 = func_ov010_020b65fc(&this->mUnk_0C);
        } else {
            this->mUnk_10 = func_ov010_020b6520(&this->mUnk_0C);
        }

        if (data_ov024_020d8660 != NULL && data_ov024_020d8660->mUnk_1C == 5) {
            this->mUnk_14 = func_ov010_020b88c4(&this->mUnk_0C);
        }

        this->mUnk_10->func_ov010_020b7008();
        gpUICounterManager->func_ov024_020cd368(false, false);
        gpUICounterManager->func_ov024_020cd3f0(false);
    }

    if (this->mUnk_10 != NULL && this->mUnk_10->vfunc_20()) {
        data_0204a088->func_ov000_02061230();
    }
}

void AdventureModeManager_184::vfunc_10(unk32 param1, unk32 param2) {
    this->func_ov024_020c979c(param1);
}

void AdventureModeManager_184::vfunc_14(unk32 param1) {}

void AdventureModeManager_184::func_ov024_020c979c(unk32 param1) {
    this->mUnk_18 = true;

    if (param1 != 1) {
        return;
    }

    MapObjectId mapObjId = data_027e09b8->GetUnk0C()->mMapObjId;

    if (data_027e09a4->IsTrain()) {
        if (data_027e09a4->IsDarkRealm()) {
            data_0204a110.func_02019538(7, 0);
        } else {
            data_0204a110.func_02019538(5, 0);
        }
    } else if (data_027e09b8->func_ov000_020732dc(2) &&
               (mapObjId != MapObjectId_WDST ||
                (mapObjId == MapObjectId_WDST && !data_ov000_020b504c.func_ov000_02067f88(0, 0)))) {
        data_0204a110.func_02019538(2, 0);
    } else {
        data_0204a110.func_02019538(1, 0);
    }
}

void AdventureModeManager_184::vfunc_18(unk32 param1) {
    switch (param1) {
        case 1:
            this->mUnk_10->func_ov010_020b7054();

            if (data_ov000_020b504c.func_ov000_02067f88(0, 0)) {
                gpUICounterManager->func_ov024_020cd3a4();
                gpUICounterManager->func_ov024_020cd400();
            }
            break;
        case 2:
            gpUICounterManager->func_ov024_020cd3a4();
            gpUICounterManager->func_ov024_020cd400();
            GetAdventureModeManager()->func_ov024_020c6c60();
            data_ov000_020b504c.func_ov000_02067f5c(0);
            break;
        default:
            break;
    }

    if (GetAdventureModeManager()->mUnk_1BC != NULL && param1 != 1 && param1 != 2) {
        GetAdventureModeManager()->mUnk_1BC->mUnk_34 = 0;
    }
}

void AdventureModeManager_184::vfunc_1C(unk32 param1) {
    switch (param1) {
        case 1:
            if (this->mUnk_10 != NULL && this->mUnk_10->vfunc_20()) {
                if (data_027e09a4->IsTrain()) {
                    data_0204a088->func_ov000_02061224();
                } else {
                    data_0204a088->func_ov000_02061230();
                }
            }
            break;
        case 5:
        case 8:
        case 9:
            break;
        default:
            break;
    }
}

void AdventureModeManager_184::vfunc_20(unk32 param1, unk32 param2) {
    switch (param1) {
        case 1:
            this->mUnk_10 = NULL;
            this->mUnk_14 = NULL;
            break;
        case 5:
        case 8:
        case 9:
            gpUICounterManager->func_ov024_020cd3a4();
            gpUICounterManager->func_ov024_020cd400();
            GetAdventureModeManager()->func_ov024_020c6c60();
            data_ov000_020b504c.func_ov000_02067f5c(0);
            break;
        default:
            break;
    }
}

void AdventureModeManager_184::vfunc_24() {
    this->mUnk_10 = NULL;
    this->mUnk_14 = NULL;
}

THUMB_END
