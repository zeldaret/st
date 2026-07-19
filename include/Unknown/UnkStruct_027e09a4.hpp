#pragma once

#include "Course/Course.hpp"
#include "Cutscene/Cutscene.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_0204a060.hpp"
#include "Unknown/UnkStruct_027e09a0.hpp"
#include "files.h"
#include "global.h"
#include "iterator.hpp"
#include "types.h"

#include <nitro/mi.h>

struct GameSaveSlot;
class UnkStruct_027e09a4;

#define ROOM_INDEX_NONE 0xFF

struct EntranceInfo {
    /* 00 */ s32 sceneIndex;
    /* 04 */ unk32 unk_04;
    /* 08 */ unk16 unk_08;
    /* 0A */ u8 roomIndex;
    /* 0B */ u8 spawnIndex;
    /* 0C */ bool isCS;
    /* 0D */ u8 unk_0D;
    /* 0E */ u8 csIndex;
    /* 0F */ u8 unk_0F;
    /* 10 */ u8 unk_10;
    /* 11 */ u8 unk_11;
    /* 12 */ u16 unk_12;
    /* 14 */

    EntranceInfo() {}

    EntranceInfo(bool isCS) {
        this->sceneIndex = SceneIndex_Max;
        this->unk_04     = 0;
        this->unk_08     = 0;
        this->roomIndex  = ROOM_INDEX_NONE;
        this->spawnIndex = 0;
        this->isCS       = isCS;
        this->unk_0D     = 0;
        this->csIndex    = CutsceneIndex_None;
        this->unk_0F     = 0;
        this->unk_10     = 0;
    }

    EntranceInfo(CutsceneParamsEntry *pEntry, bool isCS) {
        u8 sceneIndex    = pEntry->mSceneIndex;
        u8 cutsceneIndex = pEntry->mCutsceneIndex;
        u8 spawnIndex    = pEntry->mSpawnIndex;
        u8 roomIndex     = pEntry->mRoomIndex;

        this->sceneIndex = sceneIndex;
        this->unk_04     = 0;
        this->unk_08     = 0;
        this->roomIndex  = roomIndex;
        this->spawnIndex = spawnIndex;
        this->isCS       = isCS;
        this->unk_0D     = 0;
        this->csIndex    = cutsceneIndex;
        this->unk_0F     = 0;
        this->unk_10     = 0;
    }

    EntranceInfo(const ZMBEntryWARP *pEntry) {
        SceneIndex sceneIndex = data_027e09a0->GetSceneIndexFromName(pEntry->destName);
        u8 unk_04             = pEntry->unk_01;
        s32 cutsceneIndex     = CutsceneIndex_None;

        if (pEntry->unk_14 != 0 || pEntry->unk_15 != 0) {
            cutsceneIndex = func_ov000_020a7840(pEntry->unk_14, pEntry->unk_15);
        }

        u8 unk_10     = pEntry->unk_17;
        u8 unk_00     = pEntry->unk_00;
        u8 spawnIndex = pEntry->spawnIndex;
        u8 roomIndex  = pEntry->roomIndex;

        this->sceneIndex = sceneIndex;
        this->unk_04     = unk_04;
        this->unk_08     = 0;
        this->roomIndex  = roomIndex;
        this->spawnIndex = spawnIndex;
        this->isCS       = false;
        this->unk_0D     = unk_00;
        this->csIndex    = cutsceneIndex;
        this->unk_0F     = 0;
        this->unk_10     = unk_10;
    }

    EntranceInfo(const EntranceInfo *pSource) {
        MI_CpuCopy32((void *) pSource, this, sizeof(EntranceInfo));
    }

    EntranceInfo(const EntranceInfo &refSource) {
        MI_CpuCopy32((void *) &refSource, this, sizeof(EntranceInfo));
    }
};

class UnkStruct_WarpUnk1_24 : public UnkStruct_0204a060_Base3 {
public:
    /* 00 (base) */
    /* 14 */ STRUCT_PAD(0x14, 0x2A);
    /* 2A */ bool mUnk_2A;
    /* 2C */

    UnkStruct_WarpUnk1_24();
    void func_ov000_02070f58(unk32 param1);
};

class UnkStruct_WarpUnk1_50 : public UnkStruct_0204a060_Base3 {
public:
    /* 00 (base) */
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */

    UnkStruct_WarpUnk1_50();
    void func_ov000_02065f68(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5);
};

class UnkStruct_WarpUnk1_A0 {
public:
    /* 00 */ SceneIndex_Halfs mSceneIndex;
    /* 02 */ unk16 mRoomIndex;
    /* 04 */ VecFx32 mUnk_04;
    /* 10 */ s16 mUnk_10;
    /* 12 */ u16 mUnk_12;
    /* 14 */
};

class UnkStruct_WarpUnk1 : public UnkStruct_0204a060_Base {
public:
    /* 00 (base) */
    /* 24 */ UnkStruct_WarpUnk1_24 mUnk_24;
    /* 50 */ UnkStruct_WarpUnk1_50 mUnk_50;
    /* 78 */ EntranceInfo mCurEntrance;
    /* 8C */ EntranceInfo mNextEntrance;
    /* A0 */ UnkStruct_WarpUnk1_A0 mUnk_A0;
    /* B4 */ unk32 mSpawnTransitionType; // the behavior of Link when entering a new scene
    /* B8 */

    UnkStruct_WarpUnk1();
    ~UnkStruct_WarpUnk1() {}

    bool func_ov001_020b7144();
};

struct UnkStruct_027e09a4_2C {
    /* 00 */ SceneIndex_Halfs mSceneIndex;
    /* 02 */ unk16 mUnk_02;
    /* 04 */ VecFx32 mUnk_04;
    /* 10 */ u16 mUnk_10;
    /* 14 */
};

class UnkStruct_027e09a4_54_04 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x10);
    /* 10 */

    ~UnkStruct_027e09a4_54_04() {}
};

class UnkStruct_027e09a4_54_Base {
public:
    /* 00 (vtable) */
    /* 04 */ Iterator<UnkStruct_027e09a4_54_04> mUnk_04;
    /* 0C */ wchar_t mUnk_0C[8];
    /* 1C */ EntranceInfo mUnk_1C;
    /* 30 */ u16 mUnk_30;
    /* 32 */ bool mUnk_32;
    /* 33 */ unk8 mUnk_33;
    /* 34 */

    UnkStruct_027e09a4_54_Base(unk32 *param1);

    /* 00 */ virtual bool vfunc_00(void *param1);
    /* 04 */ virtual ~UnkStruct_027e09a4_54_Base();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */

    void func_ov001_020b6fa0(CourseListEntry *pCourseEntry);
    void func_ov001_020b7048();
};

class UnkStruct_027e09a4_54_Type1 : public UnkStruct_027e09a4_54_Base {
public:
    UnkStruct_027e09a4_54_Type1(UnkStruct_027e09a4 *param1);
};

class UnkStruct_027e09a4_54_Type2 : public UnkStruct_027e09a4_54_Base {
public:
    UnkStruct_027e09a4_54_Type2(UnkStruct_027e09a4 *param1);
};

class UnkStruct_027e09a4_54_Type3 : public UnkStruct_027e09a4_54_Base {
public:
    UnkStruct_027e09a4_54_Type3(UnkStruct_027e09a4 *param1);
};

class UnkStruct_027e09a4_54_Type4 : public UnkStruct_027e09a4_54_Base {
public:
    UnkStruct_027e09a4_54_Type4(UnkStruct_027e09a4 *param1);
};

class UnkStruct_027e09a4_54_Type5 : public UnkStruct_027e09a4_54_Base {
public:
    UnkStruct_027e09a4_54_Type5(UnkStruct_027e09a4 *param1);
};

// loaded scene's game mode
typedef s32 SceneMode;
enum SceneMode_ {
    SceneMode_AdventureMode = 0,
    SceneMode_BattleMode    = 1,
    SceneMode_TitleScreen   = 2,
};

class UnkStruct_027e09a4 : public AutoInstance<UnkStruct_027e09a4> {
public:
    /* 00 */ EntranceInfo mUnk_00; // the infos of the current area, this isn't saved when you save the game
    /* 14 */ EntranceInfo mUnk_14;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ UnkStruct_027e09a4_2C mUnk_2C;
    /* 40 */ UnkStruct_027e09a4_2C mUnk_40;
    /* 54 */ UnkStruct_027e09a4_54_Base *mUnk_54;
    /* 58 */ UnkStruct_WarpUnk1 *mpWarpUnk1;
    /* 5C */ unk16 mUnk_5C;
    /* 5E */ unk16 mUnk_5E;
    /* 60 */ SceneMode mSceneMode;
    /* 64 */ unk32 mUnk_64;
    /* 68 */

    // clang-format off
    const bool IsCutscene() const { return this->mUnk_00.isCS == true; }
    const bool IsNotCutscene() const { return this->mUnk_00.isCS != true; }
    const u8 CurrentCSIndex() const { return this->mUnk_00.csIndex; }
    const SceneIndex CurrentSceneIndex() const { return this->mUnk_00.sceneIndex; }

    const bool IsDarkRealm() {
        return this->mUnk_00.sceneIndex <= SceneIndex_t_eviltrain3 && this->mUnk_00.sceneIndex >= SceneIndex_t_eviltrain;
    }

    const bool IsBossByrne() const { return this->mUnk_00.sceneIndex == SceneIndex_b_deago; }
    const bool IsDungeonTower() const { return this->mUnk_00.sceneIndex == SceneIndex_d_main; }
    const bool IsTowerOutsideStairs() const { return this->mUnk_00.sceneIndex == SceneIndex_d_main_s; }
    const bool IsTowerInsideStairs() const { return this->mUnk_00.sceneIndex == SceneIndex_d_main_w; }
    const bool IsWater3() const { return this->mUnk_00.sceneIndex == SceneIndex_f_water3; }
    const bool IsSnowdriftStation() const { return this->mUnk_00.sceneIndex == SceneIndex_f_kakushi1; }
    const bool IsPirate() const { return this->mUnk_00.sceneIndex == SceneIndex_f_pirate; }
    const bool IsPassenger() const { return this->mUnk_00.sceneIndex == SceneIndex_f_passenger; }
    const bool IsHyruleCastle() const { return this->mUnk_00.sceneIndex == SceneIndex_f_hyral; }
    const bool IsCastleTown() const { return this->mUnk_00.sceneIndex == SceneIndex_f_htown; }
    const BOOL IsCastleOrTown() const { return this->IsHyruleCastle() || this->IsCastleTown(); }

    const bool IsSceneModeAdventure() const { return this->mSceneMode == SceneMode_AdventureMode; }
    const bool IsSceneModeBattle() const { return this->mSceneMode == SceneMode_BattleMode; }
    const bool IsSceneModeTitleScreen() const { return this->mSceneMode == SceneMode_TitleScreen; }
    const bool IsSceneAdvOrTitle() const { return this->IsSceneModeAdventure() || this->IsSceneModeTitleScreen(); }
    // clang-format on

    bool UnkCheck(unk32 sceneIndex) {
        switch (sceneIndex) {
            case SceneIndex_test_iwa:
            case SceneIndex_d_main:
            case SceneIndex_f_kakushi4:
            case SceneIndex_test_mri:
            case SceneIndex_test_morita:
            case SceneIndex_test_sako:
            case SceneIndex_test_hosaka:
                return true;
            case SceneIndex_test_yamaz:
            case SceneIndex_test_kita:
            case SceneIndex_test_take:
            case SceneIndex_test_suzuki:
            case SceneIndex_test_okane:
            case SceneIndex_test_dera:
            default:
                break;
        }

        return false;
    }

    bool UnkCheck2() const {
        bool result = true;

        if (this->GetCurrentCourseEntry()->unk_10 != 1 && this->GetCurrentCourseEntry()->unk_10 != 3) {
            result = false;
        }

        return result;
    }

    UnkStruct_027e09a4(SceneMode mode);
    ~UnkStruct_027e09a4();

    // itcm
    bool IsLand();
    bool IsTrain();
    CourseListEntry *GetCurrentCourseEntry() const;

    // overlay 0
    unk8 func_ov000_02070bd0(unk32 csIndex, unk32 param2);
    EntranceInfo *func_ov000_02070560();
    void func_ov000_020707a8(void *param1);
    void func_ov000_02070834(void *param1);
    void func_ov000_0207087c(unk32 param1);
    void func_ov000_020708d8(unk32 param1);
    void func_ov000_02070938(unk32 param1);
    void func_ov000_02070a4c(unk32 param1);
    unk32 func_ov000_02070554();
    UnkStruct_WarpUnk1_A0 *func_ov000_02070538();
    bool func_ov000_02070a9c(EntranceInfo *param1);
    bool func_ov000_02072154(EntranceInfo *param1, unk32 param2);
    bool func_ov000_0207056c();
    bool func_ov000_0207059c();
    void func_ov000_020705e8(GameSaveSlot *param1, unk32 param2);

    // overlay 1
    void func_ov001_020b662c();
    void func_ov001_020b66dc();
    void func_ov001_020b6758(const EntranceInfo *param1, bool param2);
    void func_ov001_020b68a4(bool param1, bool param2, bool param3);
    void func_ov001_020b6924(const EntranceInfo *param1, bool param2);
    void func_ov001_020b69b4(const EntranceInfo *param1, bool param2);

    static UnkStruct_027e09a4 *Create(unk32 param1);

    // overlay 17
    void func_ov017_020bb994(void *param1);
    void func_ov017_020bb994(unk32 param1);
    void func_ov017_020bb994(void *, void *);

    static void func_ov025_020c4a60();
    static void Destroy();
};

extern UnkStruct_027e09a4 *data_027e09a4;
