#include "Actor/ActorManager.hpp"
#include "Save/SaveManager.hpp"
#include "System/OverlayManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_02049bac.hpp"
#include "Unknown/UnkStruct_027e09a0.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_ov000_020b504c.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"
#include "Unknown/UnkStruct_ov024_020d8660.hpp"
#include "Unknown/UnkStruct_ov024_020d8694.hpp"
#include "Unknown/UnkStruct_ov026_02138d10.hpp"
#include "files.h"
#include "versions.h"

#include <dsprot.h>
#include <printf.h>

extern "C" void func_ov026_020e9208();
extern "C" void func_ov000_02081520(void *, void *, u8);
extern "C" void func_ov000_020814ec(void *, void *);
extern "C" void func_ov084_0216122c();
extern "C" void func_ov084_021612ac();
extern void *data_ov084_02164690;

struct UnkStruct7 {
    /* 00 */ u16 unk_00;
    /* 02 */ Vec2s unk_02;
    /* 04 */
};

UnkStruct_027e0cd8 *UnkStruct_027e0cd8::Create() {
    return new(HeapIndex_1) UnkStruct_027e0cd8();
}

UnkStruct_027e0cd8::UnkStruct_027e0cd8() :
    mUnk_04(NULL),
    mUnk_08(NULL),
    mUnk_0C(NULL),
    mUnk_10(NULL),
    mUnk_16(true),
    mUnk_17(true),
    mUnk_30(-1),
    mUnk_34(-1) {

    UnkStruct_027e09bc *ptr = data_027e09bc;
    UnkSystem8 *pList       = GetLinkListRef(this->mUnk_18);
    ptr->mUnk_48.Prepend(pList);

    VecFx32_Init(0, 0, 0, &this->mUnk_24);

    for (int i = 0; i < ARRAY_LEN(this->mUnk_38); i++) {
        this->mUnk_38[i] = 0;
        this->mUnk_48[i] = false;
    }
}

UnkStruct_027e0cd8::~UnkStruct_027e0cd8() {
    DELETE(this->mUnk_04);
    DELETE(this->mUnk_08);
}

void UnkStruct_027e0cd8::func_ov001_020b7830(const EntranceInfo *param1) {
    CourseListEntry *pEntry;
    UnkStruct_func_ov000_020702a8 *pUnk1;

    pEntry = data_027e09a0->GetCourseEntry(param1->sceneIndex);
    pUnk1  = data_027e09a0->func_ov000_020702a8(param1->sceneIndex);

    wchar_t sp80[16];
    sp80[0]                   = L'\0';
    sp80[ARRAY_LEN(sp80) - 1] = L'\0';
    snprintf((char *) sp80, sizeof(sp80), "Map/%s/course.bin", pEntry->name);

    UnkStruct2 sp70((char *) sp80, 0x01);
    sp70.func_020154ec("MCS");

    bool isCS = true;
    if (param1->isCS != true) {
        isCS = false;
    }

    UnkFileSystem3 sp60(isCS ? "MCS:objlist/npctype_1.zob" : "MCS:objlist/npctype.zob");
    gpActorManager->func_ov001_020bb018((ZOBHeader *) sp60.vfunc_08(sizeof(ZOBHeader)));

    UnkFileSystem3 sp50(isCS ? "MCS:objlist/motype_1.zob" : "MCS:objlist/motype.zob");
    gpMapObjManager->func_ov001_020bacd8((ZOBHeader *) sp50.vfunc_08(sizeof(ZOBHeader)));

    UnkStruct7 sp4;
    Vec2s_Copy(&pUnk1->mUnk_10, &sp4.unk_02);
    Vec2s_Copy(&sp4.unk_02, &this->mUnk_00);

    this->mUnk_14 = pEntry->unk_10;
    this->mUnk_04 = new(HeapIndex_1) UnkStruct_027e0cd8_04();

    if (pEntry->unk_21 != -1) {
        this->mUnk_08 = new(HeapIndex_1) UnkStruct_027e0cd8_04();
    }

    if (DSProt_DetectEmulator(NULL) == 0) {
        this->mUnk_30 = 0x1C;
    }

    if (this->mUnk_14 == 0x02 || this->mUnk_14 == 0x04) {
        this->mUnk_10 = new(HeapIndex_1) UnkStruct_027e0cd8_10();
        func_ov026_020e9208();
    } else if (data_027e09a4->IsSceneModeAdventure() && data_ov024_020d8694 != NULL) {
        if (data_027e09a4->CurrentSceneIndex() == SceneIndex_d_main) {
            data_ov024_020d8694->func_ov024_020cb000(20);
        } else {
            data_ov024_020d8694->func_ov024_020cafb8(20);
        }
    }

    this->func_ov001_020b8120(param1->sceneIndex);

    if (pEntry->unk_21 != -1) {
        wchar_t sp30[16];
        sp30[0]                   = L'\0';
        sp30[ARRAY_LEN(sp30) - 1] = L'\0';

        snprintf((char *) sp30, sizeof(sp30), "Map/%s/course.bin", data_027e09a0->GetCourseEntry(pEntry->unk_21)->name);

        UnkStruct2 sp20((const char *) sp30, 0x01);
        sp20.func_020154ec("MCT");
        this->func_ov001_020b7b38(pEntry, pUnk1);
    } else {
        this->func_ov001_020b7b38(pEntry, pUnk1);
    }

    EntranceInfo sceneChange(param1);
    if (sceneChange.roomIndex != 0xFF) {
        func_ov000_02081520(&sp4, this->mUnk_04, sceneChange.roomIndex);
        func_ov000_020814ec(this->mUnk_04, &sp4);
    } else {
        sceneChange.roomIndex = this->mUnk_04->mUnk_40[this->mUnk_04->mUnk_10][this->mUnk_04->mUnk_11];
    }

    this->func_ov001_020b7d64(&sceneChange);
    this->func_ov001_020b7e68(&sceneChange, 0x01);
}

void UnkStruct_027e0cd8::func_ov001_020b7a7c() {
    this->func_ov001_020b818c();
    this->func_ov001_020b803c();

    data_02049ba0.Unload(OverlaySlot_12);
    data_02049ba0.Unload(OverlaySlot_16);
    data_02049ba0.Unload(OverlaySlot_15);
    data_02049ba0.Unload(OverlaySlot_14);
    data_02049ba0.Unload(OverlaySlot_13);

    this->func_ov001_020b7e50();
    this->mUnk_30 = -1;

    if (data_027e09a4->IsSceneModeAdventure()) {
        this->func_ov000_02081ca0();
    }

    DELETE(this->mUnk_04);
    DELETE(this->mUnk_08);

    if (this->mUnk_10 != NULL) {
        DELETE(this->mUnk_10);
    }

    gpMapObjManager->func_ov001_020bad80();
    gpActorManager->func_ov001_020bb414();
}

void UnkStruct_027e0cd8::func_ov001_020b7b38(const CourseListEntry *pEntry, const UnkStruct_func_ov000_020702a8 *pUnk1) {
    if (pEntry->saveCourseIndex < SaveCourseIndex_Max) {
        SaveManager_00 *ptr = gSaveManager.mUnk_000;
        this->mUnk_04->func_ov000_02081354(pEntry, pUnk1, &ptr->unk_030[pEntry->saveCourseIndex], false);
        SET_FLAG(ptr->unk_004.unk_00, pEntry->saveCourseIndex);
    } else {
        SaveFile_00000_0000_Data_184 local_1c;
        MI_CpuFill32(0, &local_1c, sizeof(local_1c));
        this->mUnk_04->func_ov000_02081354(pEntry, pUnk1, &local_1c, false);
    }

    this->mUnk_34 = pEntry->unk_21;

    if (this->mUnk_34 != SceneIndex_None) {
        CourseListEntry *pOtherEntry              = data_027e09a0->GetCourseEntry(this->mUnk_34);
        UnkStruct_func_ov000_020702a8 *pOtherUnk1 = data_027e09a0->func_ov000_020702a8(this->mUnk_34);

        if (pOtherEntry->saveCourseIndex < SaveCourseIndex_Max) {
            this->mUnk_08->func_ov000_02081354(pOtherEntry, pOtherUnk1,
                                               &gSaveManager.mUnk_000->unk_030[pOtherEntry->saveCourseIndex], true);
        } else {
            SaveFile_00000_0000_Data_184 local_1c;
            MI_CpuFill32(0, &local_1c, sizeof(local_1c));
            this->mUnk_08->func_ov000_02081354(pOtherEntry, pOtherUnk1, &local_1c, true);
        }
    }
}

void UnkStruct_027e0cd8::func_ov001_020b7c08(const EntranceInfo *param1, const UnkStruct_WarpUnk1_A0 *param2) {
    EntranceInfo sceneChange(param1);
    Vec2s sp4;

    if (this->mUnk_30 == param1->sceneIndex && DSProt_DetectNotFlashcart(NULL) != 0) {
        data_ov084_02164690 = &sceneChange;
    }

    if (!this->func_ov000_02082124() &&
        (param1->sceneIndex < SceneIndex_tekiya00 || param1->sceneIndex > SceneIndex_tekiya09)) {
#if IS_JP
        VecFx32_Copy(&param2->mUnk_04, &this->mUnk_24);
#endif

        if (param1->sceneIndex == SceneIndex_f_water) {
            switch (param1->roomIndex) {
                case 1:
                    this->mUnk_24.x = 0x16000;
                    this->mUnk_24.z = 0xFFFF6000;
                    break;
                case 2:
                    this->mUnk_24.x = 0xFFFE8000;
                    this->mUnk_24.z = 0x8000;
                    break;
                case 3:
                    this->mUnk_24.x = 0xFFFFD000;
                    this->mUnk_24.z = 0x8800;
                    break;
                case 4:
                    this->mUnk_24.x = 0x8000;
                    this->mUnk_24.z = 0xFFFFE800;
                    break;
                default:
                    break;
            }
        } else {
#if IS_JP
            if (param1->sceneIndex == SceneIndex_f_snow2 && param1->roomIndex == 2) {
                this->mUnk_24.x = 0xFFFFF000;
                this->mUnk_24.z = 0xFFFF0000;
            }
#else
            VecFx32_Copy(&param2->mUnk_04, &this->mUnk_24);
#endif
        }
    }

    this->func_ov001_020b803c();
    this->func_ov001_020b7e50();

    if (sceneChange.roomIndex != ROOM_INDEX_NONE) {
        if (this->mUnk_30 == sceneChange.sceneIndex && DSProt_DetectNotEmulator((void *) func_ov084_0216122c) == 0) {
            func_ov084_021612ac();
        }

        func_ov000_02081520(&sp4, this->mUnk_04, sceneChange.roomIndex);
        func_ov000_020814ec(this->mUnk_04, &sp4);
    } else {
        sceneChange.roomIndex = this->mUnk_04->mUnk_40[this->mUnk_04->mUnk_10][this->mUnk_04->mUnk_11];
    }

    this->func_ov001_020b7d64(&sceneChange);
    this->func_ov001_020b7e68(&sceneChange, 0x00);

    if (data_027e09a4->IsSceneModeAdventure() && data_ov024_020d8694 != NULL) {
        if (data_027e09a4->CurrentSceneIndex() == SceneIndex_f_first && this->func_ov000_02081d5c() == 0) {
            data_ov024_020d8694->func_ov024_020cafd8(20);
        } else {
            data_ov024_020d8694->func_ov024_020cb000(20);
        }
    }
}

void UnkStruct_027e0cd8::func_ov001_020b7d64(const EntranceInfo *param1) {
    UnkStruct_027e0cd8_04_0C *iVar7;
    u32 temp_r1;
    u16 uVar5;
    u16 uVar6;
    u16 uVar4;
    u16 uVar3;

    iVar7 = this->mUnk_04->mUnk_0C;

    switch (data_027e09a0->GetCourseEntry(param1->sceneIndex)->unk_10) {
        case 0:
        case 1:
        case 3:
        case 6:
            this->mUnk_0C = new(HeapIndex_1) UnkStruct_027e0cd8_0C(this);

            uVar3   = iVar7->mUnk_0C & 0x0F;
            temp_r1 = iVar7->mUnk_0C;
            uVar5   = (temp_r1 >> 4) & 0x0F;
            uVar6   = (temp_r1 >> 8) & 0x0F;
            uVar4   = (temp_r1 >> 12) & 0x0F;

            if (uVar3 != 0) {
                data_02049ba0.LoadIfNotLoaded(OverlaySlot_13, uVar3 - 1 + OverlayIndex_MapA1);
            }

            if (uVar5 != 0) {
                data_02049ba0.LoadIfNotLoaded(OverlaySlot_14, uVar5 - 1 + OverlayIndex_MapB1);
            }

            if (uVar6 != 0) {
                data_02049ba0.LoadIfNotLoaded(OverlaySlot_15, uVar6 - 1 + OverlayIndex_MapC1);
            }

            if (uVar4 != 0) {
                data_02049ba0.LoadIfNotLoaded(OverlaySlot_16, uVar4 - 1 + OverlayIndex_MapD1);
            }
            break;
        case 2:
        case 4:
            this->mUnk_0C = new(HeapIndex_1) UnkStruct_027e0cd8_0C_Derived2(this);
            break;
        case 5:
            this->mUnk_0C = new(HeapIndex_1) UnkStruct_027e0cd8_0C_Derived3(this);
            break;
        default:
            break;
    }
}

void UnkStruct_027e0cd8::func_ov001_020b7e50() {
    DELETE(this->mUnk_0C);
}

void UnkStruct_027e0cd8::func_ov001_020b7e68(const EntranceInfo *param1, bool param2) {
    if (this->mUnk_10 != NULL) {
        this->mUnk_10->func_ov024_020d2520((EntranceInfo *) param1);
    }

    data_ov000_020b504c.func_ov001_020be92c(this->mUnk_04->mUnk_0C);
    this->mUnk_0C->func_ov001_020b85d0(param1);
    this->mUnk_0C->vfunc_1C(param1, this->mUnk_04->mUnk_01, param2);

    data_ov000_020b50c0.func_ov001_020bde4c(param1);
    data_027e0ce0->func_ov001_020bc65c();
    data_027e09bc->func_ov001_020babe8();
    data_027e0960->func_ov000_0205a11c();
    gpActorManager->func_ov001_020bb488();
    gpMapObjManager->func_ov001_020bada0();
    data_0204a110.func_ov001_020bd678();

    if (data_027e09a4->IsSceneModeAdventure()) {
        data_ov024_020d8660->func_ov024_020c4ba0();
    }

    unk32 unk_10 = data_027e09a0->GetCourseEntry(param1->sceneIndex)->unk_10;

    if (data_027e09a4->IsSceneModeBattle()) {
        for (int i = 0; i < 4; i++) {
            UnkStruct_027e0ce0 *ptr             = data_027e0ce0;
            const UnkStruct_ov001_020c40f4 *arg = this->mUnk_0C->func_ov001_020b8a5c(i, 0x00);
            ptr->func_ov001_020bc6d8(i, arg);
        }
    } else if (unk_10 == 2 || unk_10 == 4) {
        UnkStruct_027e0ce0 *ptr             = data_027e0ce0;
        const UnkStruct_ov001_020c40f4 *arg = this->mUnk_0C->func_ov001_020b8a5c(param1->spawnIndex, 0x00);
        ptr->func_ov001_020bc6e8(arg);
    } else {
        UnkStruct_027e0cd8_0C_Base *temp_pUnkC = this->mUnk_0C;
        u32 temp_unk118                        = temp_pUnkC->mUnk_118;
        u8 temp_spawn                          = param1->spawnIndex;
        UnkStruct_027e0ce0 *ptr                = data_027e0ce0;

        const UnkStruct_ov001_020c40f4 *spC = temp_pUnkC->func_ov001_020b8a5c(param1->spawnIndex, 0);

        ptr->func_ov001_020bc6fc(spC, temp_pUnkC->func_ov001_020b8a5c(temp_spawn, 1), temp_pUnkC->mUnk_11C, temp_unk118);
    }

    data_027e09bc->func_ov000_020771c8();
    unk32 iVar7 = data_027e09a0->GetCourseEntry(param1->sceneIndex)->unk_10;
    data_027e09c0->func_ov000_0207da40();
    this->mUnk_0C->vfunc_08();

    if (iVar7 == 2 || iVar7 == 4) {
        data_ov026_02138d10->func_ov026_020dca14();
    }

    gpMapObjManager->func_ov001_020bac9c();
    gpActorManager->func_ov001_020bafdc();

    if (data_027e09a4->IsSceneModeAdventure()) {
        SaveManager_00 *ptr = gSaveManager.mUnk_000;
        u16 auStack_18[2];
        data_027e09a0->func_ov000_02070310(param1->sceneIndex, param1->roomIndex, &auStack_18);

        if (auStack_18[1] < 0x100) {
            SET_FLAG(ptr->unk_004.unk_0C, auStack_18[1]);
        }
    }
}

void UnkStruct_027e0cd8::func_ov001_020b803c() {
    this->mUnk_0C->vfunc_20();

    if (data_027e09a4->IsSceneModeAdventure() && data_ov024_020d8660 != NULL) {
        data_ov024_020d8660->func_ov024_020c4cc8();
    }

    data_0204a110.func_ov001_020bd68c();
    gpMapObjManager->func_ov001_020badb4();
    gpActorManager->func_ov001_020bb548();
    data_027e0ce0->func_ov001_020bc69c();
    data_027e09bc->func_ov001_020bac08();
    data_027e0cec->func_ov001_020bf028();
    data_027e0960->func_ov000_0205a120();
    data_027e09b8->func_ov001_020b7728();
    DELETE_ARRAY(gSaveManager.mUnk_244);
    data_ov000_020b50c0.func_ov001_020bde5c();
    data_ov000_020b504c.func_ov001_020be94c();
    this->mUnk_0C->func_ov001_020b88ec();

    if (this->mUnk_10 != NULL) {
        this->mUnk_10->func_ov024_020d2564();
    }
}

bool UnkStruct_027e0cd8::func_ov001_020b80fc(SceneIndex sceneIndex) {
    int index;

    switch (sceneIndex) {
        case SceneIndex_t_area0:
            index = 0;
            break;
        case SceneIndex_t_area1:
            index = 1;
            break;
        default:
            index = 2;
            break;
    }

    if (index == 2) {
        return 0;
    }

    return this->mUnk_48[index];
}

void UnkStruct_027e0cd8::func_ov001_020b8120(SceneIndex sceneIndex) {
    int index;

    switch (sceneIndex) {
        case SceneIndex_t_area0:
            index = 0;
            break;
        case SceneIndex_t_area1:
            index = 1;
            break;
        default:
            index = 2;
            break;
    }

    if (index != 2) {
        s64 value = data_02049bac.func_02014b00();

        if (value > (this->mUnk_38[index] + 600) || value < this->mUnk_38[index]) {
            this->mUnk_48[index] = ((u32) value / 300) & 1;
        }
    }
}

void UnkStruct_027e0cd8::func_ov001_020b818c() {
    int index;

    switch (data_027e09a4->CurrentSceneIndex()) {
        case SceneIndex_t_area0:
            index = 0;
            break;
        case SceneIndex_t_area1:
            index = 1;
            break;
        default:
            index = 2;
            break;
    }

    if (index != 2) {
        this->mUnk_38[index] = data_02049bac.func_02014b00();
    }
}

DECL_INSTANCE(UnkStruct_027e0cd8, data_027e0cd8);
