#include "Actor/ActorManager.hpp"
#include "Cutscene/Cutscene.hpp"
#include "Game/GameModeManager.hpp"
#include "MainGame/AdventureMode.hpp"
#include "MainGame/MiscAdvManager.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "System/OverlayManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_027e0954.hpp"
#include "Unknown/UnkStruct_027e0958.hpp"
#include "Unknown/UnkStruct_027e095c.hpp"
#include "Unknown/UnkStruct_027e0960.hpp"
#include "Unknown/UnkStruct_027e09a0.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09ac.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0cf8.hpp"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"
#include "versions.h"

#include <nitro/mi.h>
#include <string.h>

extern "C" void func_ov001_020bed34();
extern "C" void func_01fff17c(unk16 *, UnkStruct_027e0ce0 *, unk32);
extern "C" u16 func_ov026_02106564(void *);

extern const OverlayIndex data_ov000_020b21c4[];
extern const OverlayIndex data_ov000_020b21e0[];

struct UnkStruct_ov000_020aa88c {
    /* 00 */ bool mUnk_00;
    /* 01 */ bool mUnk_01;
    /* 02 */ bool mUnk_02;
    /* 03 */ bool mUnk_03;
    /* 04 */ unk16 mUnk_04;
    /* 06 */ u16 mUnk_06;
    /* 08 */
};
extern UnkStruct_ov000_020aa88c data_ov000_020aa88c[];

static const SceneIndex_Halfs data_ov001_020c25c0[10] = {
    SceneIndex_t_area1, SceneIndex_t_area0, SceneIndex_t_area0, SceneIndex_t_area0, SceneIndex_t_area0,
    SceneIndex_t_area1, SceneIndex_t_area2, SceneIndex_t_area3, SceneIndex_t_area1, SceneIndex_t_area2,
};

static const u32 data_ov001_020c25fc[10] = {
    0x11, 0x12, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x10, 0x1D,
};

static const SceneIndex data_ov001_020c25d4[10] = {
    SceneIndex_f_bridge, SceneIndex_f_bridge2, SceneIndex_f_htown,  SceneIndex_f_first,  SceneIndex_f_forest1,
    SceneIndex_f_snow,   SceneIndex_f_water,   SceneIndex_f_flame5, SceneIndex_f_tetsuo, SceneIndex_f_ajito,
};

UnkStruct_027e09a4 *UnkStruct_027e09a4::Create(unk32 param1) {
    return new(HeapIndex_1) UnkStruct_027e09a4(param1);
}

UnkStruct_027e09a4::UnkStruct_027e09a4(SceneMode mode) :
    mUnk_00(false),
    mUnk_14(false) {
    this->mUnk_28    = 0;
    this->mUnk_54    = NULL;
    this->mpWarpUnk1 = NULL;
    this->mUnk_5C    = 0;
    this->mSceneMode = mode;
    this->mUnk_64    = 0;

    UnkStruct_027e09a0::Create();
    UnkStruct_027e09c0::Create();
    UnkStruct_027e09bc::Create();
    UnkStruct_027e0cd8::Create();
    UnkStruct_027e0ce0::Create();
    ActorManager::Create();
    MapObjectManager::Create();
    UnkStruct_027e0960::Create();
    UnkStruct_027e09b8::Create();
    UnkStruct_027e09ac::Create();
    UnkStruct_027e0954::Create();
    UnkStruct_027e0958::Create();

    if (this->IsSceneModeAdventure()) {
        MiscAdvManager::Create();
    }

    TreasureManager::Create();

    this->mUnk_2C.mSceneIndex = SceneIndex_t_area0;
    this->mUnk_2C.mUnk_02     = 0x00;
    this->mUnk_2C.mUnk_04.x   = FLOAT_TO_FX32(0.0f);
    this->mUnk_2C.mUnk_04.y   = FLOAT_TO_FX32(0.0f);
    this->mUnk_2C.mUnk_04.z   = FLOAT_TO_FX32(0.0f);
    this->mUnk_2C.mUnk_10     = 0x00;
    this->mUnk_40             = this->mUnk_2C;
    this->mpWarpUnk1          = new(HeapIndex_1) UnkStruct_WarpUnk1();
}

void UnkStruct_027e09a4::func_ov001_020b662c() {
    UnkStruct_WarpUnk1 *ptr = this->mpWarpUnk1;
    ptr->mCurEntrance       = this->mUnk_00;
    this->mUnk_14           = this->mUnk_00;
    this->func_ov001_020b6758(&this->mUnk_00, false);
}

void UnkStruct_027e09a4::func_ov001_020b66dc() {
    data_02049ba0.Unload(OverlaySlot_10);
    data_02049ba0.Unload(OverlaySlot_9);

    //! TODO: ???
    UnkStruct_WarpUnk1 *ptr = this->mpWarpUnk1;
    if (ptr != NULL) {
        ptr->UnkStruct_WarpUnk1::~UnkStruct_WarpUnk1();
        ::operator delete(ptr);
    }

    TreasureManager::Destroy();

    if (this->IsSceneModeAdventure()) {
        MiscAdvManager::Destroy();
    }

    UnkStruct_027e0958::Destroy();
    UnkStruct_027e0954::Destroy();
    UnkStruct_027e09ac::Destroy();
    UnkStruct_027e09b8::Destroy();
    UnkStruct_027e0960::Destroy();
    MapObjectManager::Destroy();
    ActorManager::Destroy();
    UnkStruct_027e0ce0::Destroy();
    UnkStruct_027e0cd8::Destroy();
    UnkStruct_027e09bc::Destroy();
    UnkStruct_027e09c0::Destroy();
    UnkStruct_027e09a0::Destroy();
}

void UnkStruct_027e09a4::func_ov001_020b6758(const EntranceInfo *param1, bool param2) {
    OverlayIndex index;
    unk32 unk_10;

    this->mUnk_00 = *param1;

    unk_10 = this->GetCurrentCourseEntry()->unk_10;
    UnkStruct_027e095c::Create();

    index = data_ov000_020b21c4[unk_10];
    if (index != OverlayIndex_None) {
        data_02049ba0.func_02014918(index);
    }

    index = data_ov000_020b21e0[unk_10];
    if (index != OverlayIndex_None) {
        data_02049ba0.LoadIfNotLoaded(OverlaySlot_7, index);
    }

    switch (unk_10) {
        case 0:
            this->mUnk_54 = new(HeapIndex_1) UnkStruct_027e09a4_54_Type1(this);
            break;
        case 1:
        case 3:
            this->mUnk_54 = new(HeapIndex_1) UnkStruct_027e09a4_54_Type5(this);
            break;
        case 6:
            this->mUnk_54 = new(HeapIndex_1) UnkStruct_027e09a4_54_Type4(this);
            break;
        case 2:
        case 4:
            this->mUnk_54         = new(HeapIndex_1) UnkStruct_027e09a4_54_Type2(this);
            data_0204999c.mUnk_60 = 0xFFDC;
            break;
        case 5:
            this->mUnk_54 = new(HeapIndex_1) UnkStruct_027e09a4_54_Type3(this);
            break;
        default:
            break;
    }

    if (param2) {
        this->mUnk_54->mUnk_32 = true;
    }

    if (this->IsCutscene()) {
        data_027e09b8->func_ov001_020b76c0(param1->csIndex);
    }

    this->mUnk_54->func_ov001_020b6fa0(this->GetCurrentCourseEntry());
}

void UnkStruct_027e09a4::func_ov001_020b68a4(bool param1, bool param2, bool param3) {
    this->mUnk_54->func_ov001_020b7048();
    DELETE(this->mUnk_54);

    if (param3) {
        data_02049ba0.Unload(OverlaySlot_8);
        data_02049ba0.Unload(OverlaySlot_11);
    }

    if (param2) {
        data_02049ba0.Unload(OverlaySlot_7);
    }

    if (param1) {
        if (gOverlayManager.mLoadedOverlays[9] != OverlayIndex_Land2) {
            data_02049ba0.Unload(OverlaySlot_10);
            data_02049ba0.Unload(OverlaySlot_9);
        }

        data_02049ba0.Unload(OverlaySlot_6);
        data_02049ba0.Unload(OverlaySlot_3);
    }

    UnkStruct_027e095c::Destroy();
}

void UnkStruct_027e09a4::func_ov001_020b6924(const EntranceInfo *param1, bool param2) {
    unk32 iVar5;
    unk32 iVar6;
    u8 cVar1;
    u8 cVar2;

    iVar6 = this->GetCurrentCourseEntry()->unk_10;
    iVar5 = data_027e09a0->GetCourseEntry(param1->sceneIndex)->unk_10;
    cVar1 = data_027e09a0->GetCourseEntry(this->CurrentSceneIndex())->unk_1C;
    cVar2 = data_027e09a0->GetCourseEntry(param1->sceneIndex)->unk_1C;

    this->func_ov001_020b69b4(param1, param2);
    this->func_ov001_020b68a4(data_ov000_020b21c4[iVar5] != data_ov000_020b21c4[iVar6],
                              data_ov000_020b21e0[iVar5] != data_ov000_020b21e0[iVar6], cVar1 != cVar2);
    this->func_ov001_020b6758(param1, param2);
}

void UnkStruct_027e09a4::func_ov001_020b69b4(const EntranceInfo *param1, bool param2) {
    VecFx32 vec1;
    VecFx32 vec2;
    unk32 local_34;
    unk32 index;
    bool bVar1;

    bVar1 = false;
    index = -1;

    for (int i = 0; i < ARRAY_LEN(data_ov001_020c25d4); i++) {
        SceneIndex sceneIndex = data_ov001_020c25d4[i];

        if (sceneIndex == param1->sceneIndex) {
            bVar1 = true;
            index = i;
        }
    }

    if (param2) {
        this->mUnk_2C = this->mUnk_40;
    } else if (bVar1) {
        this->mUnk_2C.mSceneIndex = data_ov001_020c25c0[index];

        GetAdventureModeManager()->func_ov024_020c6840(this->mUnk_2C.mSceneIndex);
        vec1.x = 0;
        vec1.y = 0;
        vec1.z = 0;
        data_027e0cf8->func_ov024_020c77c0(&vec1.x, &vec1.z, data_ov001_020c25fc[index]);
        this->mUnk_2C.mUnk_04.x = vec1.x;
        this->mUnk_2C.mUnk_04.y = vec1.y;
        this->mUnk_2C.mUnk_04.z = vec1.z;
        this->mUnk_2C.mUnk_02   = this->func_ov000_02070538()->mUnk_10;
        this->mUnk_2C.mUnk_10   = this->func_ov000_02070538()->mUnk_12;
    } else if (this->GetCurrentCourseEntry()->unk_10 == 2) {
        this->mUnk_2C.mSceneIndex = this->func_ov000_02070538()->mSceneIndex;
        this->mUnk_2C.mUnk_02     = this->func_ov000_02070538()->mUnk_10;

        VecFx32 *psVar4         = &this->func_ov000_02070538()->mUnk_04;
        this->mUnk_2C.mUnk_04.x = psVar4->x;
        this->mUnk_2C.mUnk_04.y = psVar4->y;
        this->mUnk_2C.mUnk_04.z = psVar4->z;
        this->mUnk_2C.mUnk_10   = this->func_ov000_02070538()->mUnk_12;
    } else {
        if (this->GetCurrentCourseEntry()->unk_10 == 4) {
            switch (param1->sceneIndex) {
                case SceneIndex_d_water27:
                case SceneIndex_f_forest2:
                case SceneIndex_f_snow2:
                    switch (param1->sceneIndex) {
                        case SceneIndex_d_water27:
                            this->mUnk_2C.mSceneIndex = SceneIndex_t_area2;
                            local_34                  = 0x0D;
                            break;
                        case SceneIndex_f_forest2:
                            this->mUnk_2C.mSceneIndex = SceneIndex_t_area0;
                            local_34                  = 0x07;
                            break;
                        case SceneIndex_f_snow2:
                            this->mUnk_2C.mSceneIndex = SceneIndex_t_area1;
                            local_34                  = 0x08;
                            break;
                        default:
                            break;
                    }

                    GetAdventureModeManager()->func_ov024_020c6840(this->mUnk_2C.mSceneIndex);
                    vec2.x = 0;
                    vec2.y = 0;
                    vec2.z = 0;
                    data_027e0cf8->func_ov024_020c77c0(&vec2.x, &vec2.z, local_34);
                    this->mUnk_2C.mUnk_04.x = vec2.x;
                    this->mUnk_2C.mUnk_04.y = vec2.y;
                    this->mUnk_2C.mUnk_04.z = vec2.z;
                    this->mUnk_2C.mUnk_02   = this->func_ov000_02070538()->mUnk_10;
                    this->mUnk_2C.mUnk_10   = this->func_ov000_02070538()->mUnk_12;
                    break;
                default:
                    break;
            }
        }
    }
}

void TreasureManager::Destroy() {
    if (gpTreasureManager != NULL) {
        delete gpTreasureManager;
    }
}

void MiscAdvManager::Destroy() {
    if (gpMiscAdvManager != NULL) {
        delete gpMiscAdvManager;
    }
}

void UnkStruct_027e0960::Destroy() {
    if (data_027e0960 != NULL) {
        delete data_027e0960;
    }
}

void UnkStruct_027e09a0::Destroy() {
    if (data_027e09a0 != NULL) {
        delete data_027e09a0;
    }
}

void UnkStruct_027e095c::Destroy() {
    if (data_027e095c != NULL) {
        delete data_027e095c;
    }
}

void UnkStruct_027e0958::Destroy() {
    if (data_027e0958 != NULL) {
        delete data_027e0958;
    }
}

void UnkStruct_027e0954::Destroy() {
    if (data_027e0954 != NULL) {
        delete data_027e0954;
    }
}

void UnkStruct_027e09ac::Destroy() {
    if (data_027e09ac != NULL) {
        delete data_027e09ac;
    }
}

void UnkStruct_027e09b8::Destroy() {
    if (data_027e09b8 != NULL) {
        delete data_027e09b8;
    }
}

void UnkStruct_027e09bc::Destroy() {
    if (data_027e09bc != NULL) {
        delete data_027e09bc;
    }
}

void UnkStruct_027e0ce0::Destroy() {
    if (data_027e0ce0 != NULL) {
        delete data_027e0ce0;
    }
}

void MapObjectManager::Destroy() {
    if (gpMapObjManager != NULL) {
        delete gpMapObjManager;
    }
}

void ActorManager::Destroy() {
    if (gpActorManager != NULL) {
        delete gpActorManager;
    }
}

void UnkStruct_027e0cd8::Destroy() {
    if (data_027e0cd8 != NULL) {
        delete data_027e0cd8;
    }
}

DECL_INSTANCE_CTOR(UnkStruct_027e09a4, data_027e09a4);
UnkStruct_027e0954_00::~UnkStruct_027e0954_00() {}
DECL_INSTANCE_DTOR(UnkStruct_027e095c, data_027e095c);
DECL_INSTANCE_DTOR(UnkStruct_027e0958, data_027e0958);
DECL_INSTANCE_DTOR(UnkStruct_027e0954, data_027e0954);

UnkStruct_027e09a4_54_Base::UnkStruct_027e09a4_54_Base(unk32 *param1) {
    this->mUnk_04.Clear();
    this->mUnk_0C[0] = L'\0';
    this->mUnk_0C[7] = L'\0';
    MI_CpuCopy32(param1, &this->mUnk_1C, sizeof(this->mUnk_1C));
    this->mUnk_32 = false;
}

UnkStruct_027e09a4_54_Base::~UnkStruct_027e09a4_54_Base() {
    data_ov000_020b504c.func_ov001_020be8e0();
    data_027e09b8->func_ov001_020b7700();
    data_027e0960->func_ov000_0205a164();
    data_027e09ac->func_ov001_020bec8c();
    data_027e09bc->func_ov001_020babc8();
    data_027e0ce0->func_ov001_020bc5f8();
    data_027e09c0->func_ov001_020be3c4();
    data_0204a110.func_ov001_020bd638();
    data_ov000_020b50c0.func_ov001_020bde04(&this->mUnk_1C);
    func_ov001_020bed34();
}

void UnkStruct_027e09a4_54_Base::vfunc_0C() {
    UnkStruct_027e0cec::Create();
    data_ov000_020b50c0.func_ov001_020bd970(&this->mUnk_1C);
    data_0204a110.func_ov001_020bd5b0();
    data_027e09c0->func_ov001_020be394();
    data_027e0ce0->func_ov001_020bc524(this->mUnk_32);
    data_027e09bc->func_ov001_020bab5c();
    data_027e09ac->func_ov001_020bebb8();
    data_027e0960->func_ov000_0205a160();
}

void UnkStruct_027e09a4_54_Base::func_ov001_020b6fa0(CourseListEntry *pCourseEntry) {
    if (this->mUnk_1C.isCS == true) {
        data_0204a110.func_02018d78(Cutscene_GetParamEntry(this->mUnk_1C.csIndex)->mUnk_14);
    } else {
        if (data_027e09a4->IsSceneModeAdventure()) {
            if (data_027e09a4->IsDarkRealm()) {
                GetAdventureModeManager()->func_ov024_020c555c(2);
            } else {
                if (data_027e09a4->IsTrain()) {
                    GetAdventureModeManager()->func_ov024_020c555c(1);
                } else {
                    GetAdventureModeManager()->func_ov024_020c555c(0);
                }
            }
        }

        switch (pCourseEntry->unk_18) {
            case 0:
                data_0204a110.func_02018d78(0);
                break;
            case 1:
                data_0204a110.func_02018d78(1);
                break;
            default:
                break;
        }
    }

    strncpy((char *) this->mUnk_0C, pCourseEntry->name, sizeof(this->mUnk_0C) - 1);
    this->mUnk_30 = pCourseEntry->unk_1A;
    this->vfunc_0C();
    data_027e0cd8->func_ov001_020b7830(&this->mUnk_1C);
}

void UnkStruct_027e09a4_54_Base::func_ov001_020b7048() {
    data_027e0cd8->func_ov001_020b7a7c();
}

UnkStruct_WarpUnk1_24::UnkStruct_WarpUnk1_24() {
    this->mUnk_2A = false;
}

UnkStruct_WarpUnk1::UnkStruct_WarpUnk1() :
    mCurEntrance(false),
    mNextEntrance(false) {
    this->mSpawnTransitionType = 0;
    this->mUnk_A0.mUnk_04.x    = 0;
    this->mUnk_A0.mUnk_04.y    = 0;
    this->mUnk_A0.mUnk_04.z    = 0;
    this->mUnk_A0.mUnk_10      = 0;
    this->mUnk_A0.mSceneIndex  = SceneIndex_None;
    this->mUnk_A0.mRoomIndex   = (s8) ROOM_INDEX_NONE;
    this->mUnk_A0.mUnk_12      = 0;
}

// non-matching
bool UnkStruct_WarpUnk1::func_ov001_020b7144() {
    bool iVar9;
    u16 uVar1;
    UnkStruct_027e0ce0_38 *pTrainPlayer;
    unk16 local_18;
    unk32 uVar8;
    bool bVar2;

    iVar9        = false;
    uVar1        = data_ov000_020aa88c[this->mSpawnTransitionType].mUnk_06;
    pTrainPlayer = data_027e0ce0->mUnk_38;

    if (pTrainPlayer == NULL) {
        VecFx32 *pPos = data_027e0ce0->func_01fff148(0);
        VecFx32_Copy(pPos, &this->mUnk_A0.mUnk_04);
        func_01fff17c(&local_18, data_027e0ce0, 0);
        this->mUnk_A0.mUnk_10 = local_18;
    } else {
        VecFx32 *pPos = &pTrainPlayer->mPos;
        VecFx32_Copy(pPos, &this->mUnk_A0.mUnk_04);
        this->mUnk_A0.mUnk_10 = pTrainPlayer->mUnk_056;
        this->mUnk_A0.mUnk_12 = func_ov026_02106564(NULL);
    }

    this->mUnk_A0.mSceneIndex = this->mCurEntrance.sceneIndex;
    this->mUnk_A0.mRoomIndex  = this->mCurEntrance.roomIndex;

    switch (this->mSpawnTransitionType) {
        case 0x04:
        case 0x05:
            break;
        case 0x02:
        case 0x1D:
#if IS_JP
        case 0x29:
#endif
            iVar9 = true;
            break;
        default:
            if (((this->mCurEntrance.sceneIndex != this->mNextEntrance.sceneIndex) || (this->mNextEntrance.isCS == true) ||
                 (this->mCurEntrance.isCS == true))) {
                iVar9 = true;
            } else {
                iVar9 = false;
            }
            break;
    }

    data_ov000_020b50c0.func_ov000_0206a014();
    this->mCurEntrance = this->mNextEntrance;

    if (iVar9) {
        data_027e09a4->func_ov001_020b6924(&this->mNextEntrance, this->mSpawnTransitionType == 2);
    } else {
        data_027e0cd8->func_ov001_020b7c08(&this->mNextEntrance, &this->mUnk_A0);
    }

    uVar8 = 0;
    bVar2 = false;

    data_027e0cd8->mUnk_0C->func_ov001_020b8a5c(this->mNextEntrance.spawnIndex, 0);

    this->Detach();
    this->mUnk_0C = false;

    //! TODO: find out why we need this
    LinkListImpl::Detach((LinkListNode *) ((u8 *) &this->mUnk_24 + 4));
    this->mUnk_24.mUnk_0C = false;

    LinkListImpl::Detach((LinkListNode *) ((u8 *) &this->mUnk_50 + 4));
    this->mUnk_50.mUnk_0C = false;

    if (this->mNextEntrance.isCS == true) {
        this->Detach();
        this->mUnk_0C = false;
    } else {
        if (data_ov000_020aa88c[this->mSpawnTransitionType].mUnk_00) {
            if (data_027e09a4->GetCurrentCourseEntry()->unk_18 == 1) {
                this->mUnk_50.mUnk_18 = 0x00130000;
                this->mUnk_50.mUnk_1C = 0x00050000;
                this->mUnk_50.mUnk_24 = 0x00004000;
                this->mUnk_50.func_ov000_02065f68(0x02, 0x00, -0xE0, uVar1, 0x02);
                data_0204e5f8.func_0201b9a8(&this->mUnk_50);
                this->mUnk_1E = 0x02;
                this->func_0201bba4(0x00, 0x02);
                data_0204e5f8.func_0201b9a8(this);
                bVar2 = true;
            } else {
                this->mUnk_24.func_ov000_02070f58(uVar1);
                data_0204e5f8.func_0201b9a8(&this->mUnk_24);
            }
        }

        if ((data_ov000_020aa88c[this->mSpawnTransitionType].mUnk_01 ||
             data_ov000_020aa88c[this->mSpawnTransitionType].mUnk_02) &&
            !bVar2) {
            if (data_ov000_020aa88c[this->mSpawnTransitionType].mUnk_03) {
                this->mUnk_14 = 0x00010000;
            } else {
                this->mUnk_14 = 0xFFFF0000;
            }

            this->func_0201bba4(0x02, uVar1);
            this->mUnk_18 = data_ov000_020aa88c[this->mSpawnTransitionType].mUnk_01;
            this->mUnk_19 = data_ov000_020aa88c[this->mSpawnTransitionType].mUnk_02;
            data_0204e5f8.func_0201b9a8(this);
        }
    }

    return iVar9;
}
