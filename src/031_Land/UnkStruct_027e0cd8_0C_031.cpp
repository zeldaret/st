#include "CommonFuncs.hpp"
#include "Course/CourseManager.hpp"
#include "Game/GameModeManager.hpp"
#include "MainGame/AdventureMode.hpp"
#include "System/SysNew.hpp"
#include "global.h"
#include "nitro/types.h"
#include "nns/g3d/g3d.h"
#include "profile.hpp"

#include <nitro/os.h>
#include <nitro/std.h>

struct UnkStruct_ov031_02110650 {
    /* 00 */ unk8 unk_00;
    /* 01 */ bool unk_01[8][5];
    /* 06 */ unk16 unk_06;
};

static const char *data_ov031_02112948[] = {"MA0", "MA1", "MA2", "MA3"};

static const char *data_ov031_0211298c[] = {
    "",
    "Map/anm/sanctuary.bin",
    "Map/anm/seat_kiwa.bin",
    "Map/anm/lava_kiwa.bin",
    "Map/anm/d0.bin",
    "Map/anm/d2i.bin",
    "Map/anm/d2i.bin",
    "Map/anm/f1.bin",
};

static const char *data_ov031_0211296c[] = {
    "", "sanctuary", "seat_kiwa", "lava_kiwa", "d0_wt", "di_wtf_sp1", "di_wtf", "f1_wt",
};

static const char *data_ov031_02112958[] = {"nsbca", "nsbva", "nsbma", "nsbtp", "nsbta"};

static const UnkStruct_ov031_02110650 data_ov031_02110650 = {
    .unk_00 = 0x00,
    .unk_01 =
        {
            {false, false, false, false, false},
            {false, false, false, false, true},
            {false, false, false, false, true},
            {false, false, true, false, true},
            {false, false, false, false, true},
            {false, false, true, false, true},
            {false, false, true, false, true},
            {false, false, false, false, true},
        },
};

static const char data_ov031_02110640[16] = "node_cover";

MapManagerLand::~MapManagerLand() {}

void MapManagerLand::func_ov031_020d8720(s32 param1) {
    this->mUnk_1C0[this->mUnk_1D4++] = param1;
}

void MapManagerLand::func_ov031_020d8738() {
    switch ((s32) data_027e09a4->CurrentSceneIndex()) {
        case SceneIndex_d_main:
        case SceneIndex_f_kakushi4:
            this->func_ov031_020d8720(1);
            this->func_ov031_020d8720(3);
            break;
        case SceneIndex_f_first:
        case SceneIndex_f_water:
        case SceneIndex_f_water2:
        case SceneIndex_f_water3:
        case SceneIndex_f_ajito:
            this->func_ov031_020d8720(2);
            break;
        case SceneIndex_d_tutorial:
        case SceneIndex_d_water27:
        case SceneIndex_f_hyral:
        case SceneIndex_f_kakushi3:
            this->func_ov031_020d8720(4);
            break;
        case SceneIndex_f_bridge2:
            this->func_ov031_020d8720(2);
            this->func_ov031_020d8720(4);
            break;
        case SceneIndex_d_flame:
        case SceneIndex_f_flame:
        case SceneIndex_f_flame5:
        case SceneIndex_e3_dungeon:
            this->func_ov031_020d8720(3);
            break;
        case SceneIndex_d_snow26:
        case SceneIndex_f_snow:
        case SceneIndex_f_tetsuo:
        case SceneIndex_f_kakushi1:
        case SceneIndex_tekiya01:
            this->func_ov031_020d8720(5);
            this->func_ov031_020d8720(6);
            break;
        case SceneIndex_f_sand:
        case SceneIndex_f_rabbit:
            this->func_ov031_020d8720(7);
            break;
        default:
            break;
    }
}

void MapManagerLand::func_ov031_020d88c0() {
    for (int var_r8 = 0; var_r8 < this->mUnk_1D4; var_r8++) {
        s32 sp10    = var_r8;
        s32 temp_r5 = this->mUnk_1C0[var_r8];

        for (int var_r6 = 0; var_r6 < var_r8; var_r6++) {
            if (this->mUnk_160[var_r6] != NULL &&
                STD_CompareString(data_ov031_0211298c[temp_r5], (const char *) this->mUnk_160[var_r6]->mUnk_00) == 0) {
                sp10 = var_r6;
                break;
            }
        }

        if (sp10 == var_r8) {
            this->mUnk_160[var_r8] = new(HeapIndex_1) UnkSystem3(0, 0x9B, 1, 1);
            this->mUnk_160[var_r8]->Reset((void *) data_ov031_0211298c[temp_r5]);
            this->mUnk_160[var_r8]->func_0201541c(data_ov031_02112948[var_r8], 0x10);
        }

        u8 *spC = (u8 *) data_ov031_02110650.unk_01[temp_r5];

        for (int var_r9 = 0; var_r9 < ARRAY_LEN(data_ov031_02110650.unk_01[temp_r5]); var_r9++) {
            if (spC[var_r9]) {
                wchar_t sp24[16];
                sp24[0]                   = '\0';
                sp24[ARRAY_LEN(sp24) - 1] = '\0';
                OS_SNPrintf((char *) &sp24, 0x20, "%s:/%s.%s", data_ov031_02112948[sp10], data_ov031_0211296c[temp_r5],
                            data_ov031_02112958[var_r9]);

                UnkFileSystem3 sp14((const char *) sp24);

                this->mUnk_170[var_r8][var_r9] = new(HeapIndex_1)
                    ModelRender_UnkSystem1_Derived2(func_ov000_0205ac34(&sp14, 0), this->mSceneRender.mpModel);
                this->mSceneRender.func_ov000_02057c98(&this->mUnk_170[var_r8][var_r9]->mUnk_00);
            }
        }
    }
}

void MapManagerLand::func_ov031_020d8ae4() {
    G3d_NameList *var_r0 = G3d_GetBoneList(this->mSceneRender.mpModel);
    this->mUnk_1D8       = var_r0 != NULL ? func_0200f218(var_r0, data_ov031_02110640) : -1;

    if (this->mUnk_1D8 != -1) {
        NNS_G3dRenderObjSetCallBack(&this->mSceneRender.mRenderObj, MapManagerLand::func_ov031_020d8cb8, 0x00, 0x02, 0x02);
        this->mSceneRender.mRenderObj.modelRender = this;
    }
}

void MapManagerLand::vfunc_1C(const EntranceInfo *param1, bool param2, bool param3) {
#pragma unused(param2)

    u8 roomIndex;
    s32 var_r5;
    s32 sceneIndex;

    var_r5         = 0;
    this->mUnk_1DD = false;

    if (data_027e09a0->GetCourseEntry(param1->sceneIndex)->unk_10 == 0x06) {
        if (param1->sceneIndex == SceneIndex_f_pirate) {
            var_r5 = 1;
        } else if (param1->sceneIndex != SceneIndex_f_passenger) {
            this->mUnk_1DD = true;
            var_r5         = 3;
        }
    }

    if (this->mUnk_1DD) {
        SceneIndex_Halfs sceneIndex = data_027e09a4->mUnk_2C.mSceneIndex;
        gpCurrentGameModeMgr->mUnk_004.func_0201c0c4(0x65);
        GetAdventureModeManager()->func_ov024_020c555c(4);
        GetAdventureModeManager()->func_ov024_020c53e8();
        GetAdventureModeManager()->func_ov024_020c6770(sceneIndex, 0, 1, var_r5);
        return;
    }

    sceneIndex                        = param1->sceneIndex;
    roomIndex                         = gpCourseManager->mUnk_04->mUnk_0C->mRoomIndex;
    AdventureModeManager *pAdvModeMgr = GetAdventureModeManager();

    if (sceneIndex == SceneIndex_f_passenger) {
        sceneIndex = SceneIndex_d_main_f;
        roomIndex  = 1;
    }

    if (param3 || sceneIndex != pAdvModeMgr->mUnk_1C4.sceneIndex || roomIndex != pAdvModeMgr->mUnk_1C4.roomIndex) {
        if (data_027e09a4->GetEntryTransitionType() != EntryTransitionType_4) {
            gpCurrentGameModeMgr->vfunc_38(sceneIndex, roomIndex, 1, var_r5);
        }
    }
}

void MapManagerLand::func_ov031_020d8cb8(G3d_RenderState *param1) {
    MapManagerLand::func_ov031_020d8cd0(param1->renderObj->modelRender, param1);
}

void MapManagerLand::func_ov031_020d8cd0(void *modelRender, G3d_RenderState *param1) {
    MapManagerLand *thisx = (MapManagerLand *) modelRender;

    int var_r3 = G3d_GetCurBoneId(param1);

    if (var_r3 == thisx->mUnk_1D8) {
        *param1->visibilityPtr = thisx->mUnk_1DC;
    }
}
