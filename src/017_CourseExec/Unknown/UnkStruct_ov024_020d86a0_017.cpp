#include "Game/GameModeManager.hpp"
#include "MainGame/AdventureMode.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_027e0998.hpp"
#include "Unknown/UnkStruct_027e09a0.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_ov024_020d86a0.hpp"

void UnkStruct_ov024_020d86a0::func_ov017_020c30e4() {
    this->mUnk_0F = false;
    GetAdventureModeManager()->func_02018ac4(0x64);
    data_0204a110.mUnk_010.func_0201ca28(0x01);
}

void UnkStruct_ov024_020d86a0::func_ov017_020c3118(bool param1) {
    this->mUnk_0E = true;

    if (param1) {
        this->func_ov017_020c3180();
        return;
    }

    this->func_ov017_020c313c();
}

void UnkStruct_ov024_020d86a0::func_ov017_020c313c() {
    this->mUnk_0C          = false;
    this->mUnk_00->mUnk_14 = -0x10000;
    this->mUnk_00->func_0201bb84(0x14, 2, 0x14);
    data_0204e5f8.func_0201b9a8(this->mUnk_00);
}

void UnkStruct_ov024_020d86a0::func_ov017_020c3180() {
    this->mUnk_11 = true;

    if (this->mUnk_0E) {
        if (this->mUnk_10) {
            this->mUnk_10          = false;
            data_0204a110.mUnk_DFE = true;
        }
    } else if (data_0204a110.mUnk_008 == 0x01) {
        this->mUnk_10          = true;
        data_0204a110.mUnk_DFE = true;
    }
}

void UnkStruct_ov024_020d86a0::func_ov017_020c31cc() {
    this->mUnk_11 = false;

    if (this->mUnk_0E) {
        gpCurrentGameModeMgr->func_02018ac4(0x64);

        data_0204a110.mUnk_010.func_0201ca28(0x01);
        this->mUnk_0D = false;

        if (!data_027e0998->func_ov024_020c7354()) {
            gpCurrentGameModeMgr->mUnk_004.func_0201c0c4(0x68);
        }

        SceneIndex sceneIndex = GetAdventureModeManager()->mUnk_1C4.sceneIndex;

        if (data_027e09a4->IsTrain()) {
            GetAdventureModeManager()->func_ov024_020c555c(0x01);
        } else if (data_027e09a0->func_ov000_02070378(sceneIndex)) {
            GetAdventureModeManager()->func_ov024_020c555c(0x04);
        } else {
            GetAdventureModeManager()->func_ov024_020c555c(0x00);
        }

        GetAdventureModeManager()->func_ov024_020c53e8();

        if (data_027e09a0->func_ov000_02070378(sceneIndex)) {
            GetAdventureModeManager()->func_ov024_020c671c();
        } else {
            GetAdventureModeManager()->func_ov024_020c66c0();
        }

        this->mUnk_0E = false;
        this->mUnk_0F = false;
    } else {
        gpCurrentGameModeMgr->func_02018aac(0x64, true);

        if (this->mUnk_0D) {
            gpCurrentGameModeMgr->mUnk_004.func_0201c0c4(0x65);
            GetAdventureModeManager()->func_ov024_020c555c(0x04);
            GetAdventureModeManager()->func_ov024_020c53e8();
            GetAdventureModeManager()->func_ov024_020c6770(this->mSceneInfos.sceneIndex, this->mSceneInfos.roomIndex, 0x00,
                                                           this->mSceneInfos.unk_06);
        } else {
            gpCurrentGameModeMgr->vfunc_38(this->mSceneInfos.sceneIndex, this->mSceneInfos.roomIndex, 0,
                                           this->mSceneInfos.unk_06);
        }
    }

    this->mUnk_0C = true;
}

void UnkStruct_ov024_020d86a0::func_ov017_020c3374(unk32 param1) {
    SceneIndex sceneIndex;

    this->mUnk_0F = true;

    switch (param1) {
        case 0x00:
            sceneIndex = SceneIndex_t_area0;
            break;
        case 0x01:
            sceneIndex = SceneIndex_t_area1;
            break;
        case 0x02:
            sceneIndex = SceneIndex_t_area2;
            break;
        case 0x03:
            sceneIndex = SceneIndex_t_area3;
            break;
        case 0x04:
            sceneIndex = SceneIndex_t_tutorial;
            break;
        case 0x05:
            sceneIndex = SceneIndex_e3_train;
            break;
        default:
            //! @bug: sceneIndex can be used uninitialized
            break;
    }

    data_027e09a0->GetRoomEntry(sceneIndex, 0);
    this->mSceneInfos.sceneIndex = sceneIndex;
    this->mSceneInfos.roomIndex  = 0;
    this->mUnk_0D                = true;
    this->mSceneInfos.unk_06     = 0x04;
    this->func_ov017_020c313c();
}
