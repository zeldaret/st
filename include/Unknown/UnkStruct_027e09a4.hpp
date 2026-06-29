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

struct SaveFile;
class UnkStruct_027e09a4;

#define ROOM_INDEX_NONE 0xFF

struct UnkStruct_SceneChange1 {
    /* 00 */ SceneIndex mSceneIndex;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk16 mUnk_08;
    /* 0A */ u8 mRoomIndex;
    /* 0B */ u8 mSpawnIndex;
    /* 0C */ bool mIsCS;
    /* 0D */ u8 mUnk_0D;
    /* 0E */ u8 mCutsceneIndex;
    /* 0F */ u8 mUnk_0F;
    /* 10 */ u8 mUnk_10;
    /* 11 */ u8 mUnk_11;
    /* 12 */ u16 mUnk_12;
    /* 14 */

    UnkStruct_SceneChange1() {
        this->mSceneIndex    = SceneIndex_Max;
        this->mUnk_04        = 0;
        this->mUnk_08        = 0;
        this->mRoomIndex     = ROOM_INDEX_NONE;
        this->mSpawnIndex    = 0;
        this->mIsCS          = false;
        this->mUnk_0D        = 0;
        this->mCutsceneIndex = CutsceneIndex_None;
        this->mUnk_0F        = 0;
        this->mUnk_10        = 0;
    }

    UnkStruct_SceneChange1(CutsceneParamsEntry *pEntry, bool nextIsCS) {
        u8 sceneIndex    = pEntry->mSceneIndex;
        u8 cutsceneIndex = pEntry->mCutsceneIndex;
        u8 spawnIndex    = pEntry->mSpawnIndex;
        u8 roomIndex     = pEntry->mRoomIndex;

        this->mSceneIndex    = sceneIndex;
        this->mUnk_04        = 0;
        this->mUnk_08        = 0;
        this->mRoomIndex     = roomIndex;
        this->mSpawnIndex    = spawnIndex;
        this->mIsCS          = nextIsCS;
        this->mUnk_0D        = 0;
        this->mCutsceneIndex = cutsceneIndex;
        this->mUnk_0F        = 0;
        this->mUnk_10        = 0;
    }

    UnkStruct_SceneChange1(const ZMBEntryWARP *pEntry) {
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

        this->mSceneIndex    = sceneIndex;
        this->mUnk_04        = unk_04;
        this->mUnk_08        = 0;
        this->mRoomIndex     = roomIndex;
        this->mSpawnIndex    = spawnIndex;
        this->mIsCS          = false;
        this->mUnk_0D        = unk_00;
        this->mCutsceneIndex = cutsceneIndex;
        this->mUnk_0F        = 0;
        this->mUnk_10        = unk_10;
    }

    UnkStruct_SceneChange1(const UnkStruct_SceneChange1 *pSource) {
        MI_CpuCopy32((void *) pSource, this, sizeof(UnkStruct_SceneChange1));
    }

    UnkStruct_SceneChange1(const UnkStruct_SceneChange1 &refSource) {
        MI_CpuCopy32((void *) &refSource, this, sizeof(UnkStruct_SceneChange1));
    }

    UnkStruct_SceneChange1(s32) {}
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
    /* 78 */ UnkStruct_SceneChange1 mUnk_78; // current scene?
    /* 8C */ UnkStruct_SceneChange1 mUnk_8C; // next scene
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
    /* 1C */ UnkStruct_SceneChange1 mUnk_1C;
    /* 30 */ unk16 mUnk_30;
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

class UnkStruct_027e09a4 : public AutoInstance<UnkStruct_027e09a4> {
public:
    /* 00 */ UnkStruct_SceneChange1 mUnk_00; // the infos of the current area, this isn't saved when you save the game
    /* 14 */ UnkStruct_SceneChange1 mUnk_14;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ UnkStruct_027e09a4_2C mUnk_2C;
    /* 40 */ UnkStruct_027e09a4_2C mUnk_40;
    /* 54 */ UnkStruct_027e09a4_54_Base *mUnk_54;
    /* 58 */ UnkStruct_WarpUnk1 *mpWarpUnk1;
    /* 5C */ unk16 mUnk_5C;
    /* 5E */ unk16 mUnk_5E;
    /* 60 */ unk32 mUnk_60; // related to ds download?
    /* 64 */ unk32 mUnk_64;
    /* 68 */

    bool IsCutscene() {
        return this->mUnk_00.mIsCS == true;
    }

    bool IsNotCutscene() {
        return this->mUnk_00.mIsCS != true;
    }

    u8 CurrentCSIndex() {
        return this->mUnk_00.mCutsceneIndex;
    }

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

    SceneIndex CurrentSceneIndex() {
        return this->mUnk_00.mSceneIndex;
    }

    bool IsDarkRealm() {
        return this->mUnk_00.mSceneIndex <= SceneIndex_t_eviltrain3 && this->mUnk_00.mSceneIndex >= SceneIndex_t_eviltrain;
    }

    bool IsDungeonTower() {
        return this->mUnk_00.mSceneIndex == SceneIndex_d_main;
    }

    bool IsPirate() {
        return this->mUnk_00.mSceneIndex == SceneIndex_f_pirate;
    }

    bool IsWater3() {
        return this->mUnk_00.mSceneIndex == SceneIndex_f_water3;
    }

    bool IsSnowdriftStation() {
        return this->mUnk_00.mSceneIndex == SceneIndex_f_kakushi1;
    }

    bool IsPassenger() {
        return this->mUnk_00.mSceneIndex == SceneIndex_f_passenger;
    }

    UnkStruct_027e09a4(unk32 param1);
    ~UnkStruct_027e09a4();

    // itcm
    bool IsLand();
    bool IsTrain();
    CourseListEntry *GetCurrentCourseEntry() const;

    // overlay 0
    unk8 func_ov000_02070bd0(unk32 csIndex, unk32 param2);
    UnkStruct_SceneChange1 *func_ov000_02070560();
    void func_ov000_020707a8(void *param1);
    void func_ov000_02070834(void *param1);
    void func_ov000_0207087c(unk32 param1);
    void func_ov000_020708d8(unk32 param1);
    void func_ov000_02070938(unk32 param1);
    void func_ov000_02070a4c(unk32 param1);
    unk32 func_ov000_02070554();
    UnkStruct_WarpUnk1_A0 *func_ov000_02070538();
    bool func_ov000_02070a9c(UnkStruct_SceneChange1 *param1);
    bool func_ov000_02072154(UnkStruct_SceneChange1 *param1, unk32 param2);
    bool func_ov000_0207056c();
    void func_ov000_020705e8(SaveFile *param1, unk32 param2);

    // overlay 1
    void func_ov001_020b662c();
    void func_ov001_020b66dc();
    void func_ov001_020b6758(const UnkStruct_SceneChange1 *param1, bool param2);
    void func_ov001_020b68a4(bool param1, bool param2, bool param3);
    void func_ov001_020b6924(const UnkStruct_SceneChange1 *param1, bool param2);
    void func_ov001_020b69b4(const UnkStruct_SceneChange1 *param1, bool param2);

    static UnkStruct_027e09a4 *Create(unk32 param1);

    // overlay 17
    void func_ov017_020bb994(void *param1);
    void func_ov017_020bb994(unk32 param1);
    void func_ov017_020bb994(void *, void *);

    static void func_ov025_020c4a60();
    static void Destroy();
};

extern UnkStruct_027e09a4 *data_027e09a4;
