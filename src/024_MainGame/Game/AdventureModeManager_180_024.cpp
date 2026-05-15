#include "MainGame/AdventureMode.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "MapObject/MapObjectUnkSPTB.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_ov000_020b4f70.hpp"

extern "C" unk32 func_ov014_020b6520(void *, int, int);

THUMB_BEGIN

bool AdventureModeManager_180_18::vfunc_0C(void) {
    data_0204a088->func_ov000_02061224();
}

AdventureModeManager_180::AdventureModeManager_180(GameModeManagerBase_104 *param1) :
    mUnk_0C(0),
    mUnk_10(0),
    mUnk_14(param1),
    mUnk_40(0x14),
    mUnk_44(false),
    mUnk_45(false) {
    data_0204a088->func_ov000_020611dc(this, 0x0C);
}

AdventureModeManager_180::~AdventureModeManager_180() {}

void AdventureModeManager_180::vfunc_08(unk32 param1) {
    this->mUnk_0C = 1;

    switch (param1) {
        case 5:
            this->mUnk_18.mUnk_18 = true;
            this->mUnk_18.mUnk_19 = true;
            this->mUnk_18.func_0201bb84(0x10, 2, 0x10);
            data_0204e5f8.func_0201b9a8(&this->mUnk_18);
            break;
        case 1:
            this->mUnk_18.mUnk_18 = false;
            this->mUnk_18.mUnk_19 = true;
            this->mUnk_18.func_0201bb84(0x14, 2, 0x14);
            data_0204e5f8.func_0201b9a8(&this->mUnk_18);
            break;
        default:
            break;
    }
}

void AdventureModeManager_180::vfunc_0C(unk32 param1) {
    switch (param1) {
        case 5:
            if (this->mUnk_18.mUnk_0D == this->mUnk_18.mUnk_10) {
                this->mUnk_0C = 0;
                data_0204a088->func_ov000_02061230();
            }
            break;
        case 1:
            switch (this->mUnk_0C) {
                case 1:
                    if (data_0204a110.mUnk_008 != 1 && this->mUnk_44) {
                        this->mUnk_44 = false;
                        this->func_ov024_020c9430(1, this->mUnk_40);
                    }

                    if (this->mUnk_18.mUnk_0D == this->mUnk_18.mUnk_10) {
                        this->mUnk_0C = 2;
                        this->func_ov024_020c957c();
                    }
                    break;
                case 2:
                    if (data_0204a110.mUnk_DA8.mUnk_0C < 0) {
                        this->mUnk_0C = 0;
                        data_0204a088->func_ov000_02061230();
                    }
                    break;
                default:
                    break;
            }
            break;
        default:
            break;
    }
}

#pragma opt_dead_assignments off
void AdventureModeManager_180::vfunc_10(unk32 param1, unk32 param2) {
    if (param2 != 1) {
        return;
    }

    unk32 r6 = 0;

    switch (param1) {
        case 5:
            data_0204a110.func_02019538(0x0D, 1);
            this->func_ov024_020c9430(0, -1);
            break;
        case 1:
            this->mUnk_44 = true;
            data_0204a110.func_02019538(0x0E, 1);

            if (data_ov000_020b4f70 != NULL) {
                data_ov000_020b4f70->func_ov000_0206654c();
            }

            if (data_0204a110.mUnk_008 == 1) {
                this->mUnk_45          = true;
                data_0204a110.mUnk_DFE = true;
            }
            break;
        default:
            break;
    }
}
#pragma opt_dead_assignments reset

void AdventureModeManager_180::func_ov024_020c9430(unk32 param1, unk32 param2) {
    data_0204a088->func_ov000_02061248();
    this->mUnk_10 = func_ov014_020b6520(&this->mUnk_14, param1, param2);
}

void AdventureModeManager_180::vfunc_18(unk32 param1) {
    switch (param1) {
        case 5:
            this->mUnk_18.func_0201bb84(0x10, 2, 0x10);
            data_0204e5f8.func_0201b9a8(&this->mUnk_18);
            break;
        case 1:
            this->func_ov024_020c95c4();
            break;
        default:
            break;
    }
}

void AdventureModeManager_180::vfunc_1C(unk32 param1) {
    switch (param1) {
        case 5:
            if (this->mUnk_18.mUnk_0D == this->mUnk_18.mUnk_10) {
                data_0204a088->func_ov000_02061230();
            }
            break;
        case 1:
            switch (this->mUnk_0C) {
                case 3:
                    if (data_0204a110.mUnk_DA8.mUnk_0C < 0) {
                        this->mUnk_0C = 1;
                        this->mUnk_18.func_0201bb84(0x14, 2, 0x14);
                        data_0204e5f8.func_0201b9a8(&this->mUnk_18);
                    }
                    break;
                case 1:
                    if (this->mUnk_18.mUnk_0D == this->mUnk_18.mUnk_10) {
                        data_0204a088->func_ov000_02061230();
                    }
                    break;
                default:
                    break;
            }
            break;
        default:
            break;
    }
}

void AdventureModeManager_180::vfunc_20(unk32 param1, unk32 param2) {
    if (param2 != 1) {
        return;
    }

    this->mUnk_10 = 0;
    data_0204a088->func_ov000_02061248();

    switch (param1) {
        case 5:
            break;
        case 1:
            if (this->mUnk_45) {
                this->mUnk_45          = false;
                data_0204a110.mUnk_DFE = true;
            }

            GetAdventureModeManager()->func_ov024_020c555c(0);
            GetAdventureModeManager()->func_ov024_020c53e8();

            if (data_027e09a4->func_01ffd3d8()) {
                GetAdventureModeManager()->func_ov024_020c671c();
            } else {
                GetAdventureModeManager()->func_ov024_020c66c0();
            }

            if (data_ov000_020b4f70 != NULL) {
                data_ov000_020b4f70->func_ov000_020665b8();
            }
            break;
        default:
            break;
    }
}

void AdventureModeManager_180::vfunc_24() {}

void AdventureModeManager_180::func_ov024_020c957c() {
    data_0204a110.mUnk_DA8.func_0201ced8();
    this->mUnk_0C = 2;

    struct {
        void *ptr;
        unk32 actorId;
    } local_10;
    local_10.ptr     = &data_ov000_020b34c4;
    local_10.actorId = MapObjectId_SPTB;

    MapObject **ppMapObj =
        gpMapObjManager->func_01fff520((UnkStruct_ov000_020b34c4 *) &local_10, gpMapObjManager->mMapObjTable);
    if (gpMapObjManager->mUnk_08 != ppMapObj) {
        MapObjectUnkSPTB *pStampStation = (MapObjectUnkSPTB *) *ppMapObj;
        pStampStation->func_ov031_0210b9c4();
    }
}

void AdventureModeManager_180::func_ov024_020c95c4() {
    data_0204a110.mUnk_DA8.func_0201cf30();
    this->mUnk_0C = 3;

    struct {
        void *ptr;
        unk32 actorId;
    } local_10;
    local_10.ptr     = &data_ov000_020b34c4;
    local_10.actorId = MapObjectId_SPTB;

    MapObject **ppMapObj =
        gpMapObjManager->func_01fff520((UnkStruct_ov000_020b34c4 *) &local_10, gpMapObjManager->mMapObjTable);
    if (gpMapObjManager->mUnk_08 != ppMapObj) {
        MapObjectUnkSPTB *pStampStation = (MapObjectUnkSPTB *) *ppMapObj;
        pStampStation->func_ov031_0210b9e0();
    }
}

THUMB_END
