#pragma once

#include "Player/TouchControl.hpp"
#include "TitleScreen/TitleScreen.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "global.h"
#include "types.h"

#include <nitro/button.h>

// Title Card Scene Message Index (see sBMGSceneMap)
typedef s32 TC_SceneMsgIdx;
enum TC_SceneMsgIdx_ {
    /* -1 */ TC_SceneMsgIdx_None = -1,
    /*  0 */ TC_SceneMsgIdx_ForestLand,
    /*  1 */ TC_SceneMsgIdx_SnowLand,
    /*  2 */ TC_SceneMsgIdx_OceanLand,
    /*  3 */ TC_SceneMsgIdx_FireLand,
    /*  4 */ TC_SceneMsgIdx_TowerOfSpirits,
    /*  5 */ TC_SceneMsgIdx_TunnelToTheTower,
    /*  6 */ TC_SceneMsgIdx_WoodedTemple,
    /*  7 */ TC_SceneMsgIdx_BlizzardTemple,
    /*  8 */ TC_SceneMsgIdx_MarineTemple,
    /*  9 */ TC_SceneMsgIdx_MountainTemple,
    /* 10 */ TC_SceneMsgIdx_DesertTemple,
    /* 11 */ TC_SceneMsgIdx_PirateHideout,
    /* 12 */ TC_SceneMsgIdx_HyruleCastle,
    /* 13 */ TC_SceneMsgIdx_CastleTown,
    /* 14 */ TC_SceneMsgIdx_Mayscore,
    /* 15 */ TC_SceneMsgIdx_AnoukiVillage,
    /* 16 */ TC_SceneMsgIdx_PapuziaVillage,
    /* 17 */ TC_SceneMsgIdx_GoronVillage,
    /* 18 */ TC_SceneMsgIdx_TradingPost,
    /* 19 */ TC_SceneMsgIdx_IcySpring,
    /* 20 */ TC_SceneMsgIdx_OutsetVillage,
    /* 21 */ TC_SceneMsgIdx_WoodlandSanctuary,
    /* 22 */ TC_SceneMsgIdx_SnowfallSanctuary,
    /* 23 */ TC_SceneMsgIdx_IslandSanctuary,
    /* 24 */ TC_SceneMsgIdx_ValleySanctuary,
    /* 25 */ TC_SceneMsgIdx_DuneSanctuary,
    /* 26 */ TC_SceneMsgIdx_BridgeWorkersHouse,
    /* 27 */ TC_SceneMsgIdx_BossStagnox,
    /* 28 */ TC_SceneMsgIdx_BossFraaz,
    /* 29 */ TC_SceneMsgIdx_BossCactops,
    /* 30 */ TC_SceneMsgIdx_BossVulcano,
    /* 31 */ TC_SceneMsgIdx_BossCapbone,
    /* 32 */ TC_SceneMsgIdx_BossGhostTrain,
    /* 33 */ TC_SceneMsgIdx_BossStaven,
    /* 34 */ TC_SceneMsgIdx_BossMalladus1,
    /* 35 */ TC_SceneMsgIdx_BossMalladus2,
    /* 36 */ TC_SceneMsgIdx_GoronTargetRange,
    /* 37 */ TC_SceneMsgIdx_SnowdriftStation,
    /* 38 */ TC_SceneMsgIdx_LostAtSeaStation,
    /* 39 */ TC_SceneMsgIdx_DisorientationStation,
    /* 40 */ TC_SceneMsgIdx_EndsOfTheEarthStation,
    /* 41 */ TC_SceneMsgIdx_DarkOreMine,
    /* 42 */ TC_SceneMsgIdx_RabbitHaven,
    /* 43 */ TC_SceneMsgIdx_SlipperyStation,
};

class UnkTitleCardSystem1 {
public:
    /* 000 (vtable) */
    /* 004 */ unk16 mUnk_004;
    /* 006 */ unk16 mUnk_006; // pad?
    /* 008 */ UnkSystem2_UnkSubSystem11_Derived2 *mUnk_008;
    /* 00C */ UnkSystem2_UnkSubSystem5_Base_10 *mUnk_00C;
    /* 010 */ unk32 mUnk_010;
    /* 014 */ GameModeManagerBase_004 *mUnk_014;
    /* 018 */ UnkStruct_ov019_020d24c8_28_258 mUnk_018;
    /* 030 */ UnkStruct_ov019_020d24c8_28_258 mUnk_030;
    /* 048 */ UnkStruct_ov019_020d24c8_28_258 mUnk_048;
    /* 060 */ Vec2s mUnk_060;
    /* 064 */ UnkSystem2_UnkSubSystem9 mUnk_064;
    /* 0A8 */ UnkSystem2_UnkSubSystem9 mUnk_0A8;
    /* 0EC */ UnkSystem2_UnkSubSystem9 mUnk_0EC;
    /* 130 */ unk32 mUnk_130;
    /* 134 */ bool mUnk_134;
    /* 135 */ unk8 mUnk_135; // pad?
    /* 136 */ unk8 mUnk_136; // pad?
    /* 137 */ unk8 mUnk_137; // pad?
    /* 138 */

    UnkTitleCardSystem1(GameModeManagerBase_004 *param1);

    // data_ov024_020d7fd0
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04(unk8 *param1);
    /* 08 */ virtual unk32 vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual bool vfunc_14();
    /* 18 */ virtual unk32 vfunc_18();
    /* 1C */

    void func_ov024_020cb274(UnkSystem2_UnkSubSystem11_Derived2 *param1, UnkSystem2_UnkSubSystem5_Base_10 *param2);
    void func_ov024_020cb280();
    void func_ov024_020cb284(unk32 param1, unk32 param2);
    void func_ov024_020cb490(UnkDataStruct2 *param1, unk32 *param2);
    void func_ov024_020cb490(UnkDataStruct2 *param1, unk32 *param2, void *);
    void func_ov024_020cb5bc();
    void func_ov024_020cb654(unk8 *param1, UnkDataStruct1 *param2);
};

class UnkTitleCardSystem1_Derived1 : public UnkTitleCardSystem1 {
public:
    /* 000 (base) */
    /* 138 */ unk32 mUnk_138;
    /* 13C */ u16 mUnk_13C;
    /* 13E */ u16 mUnk_13E;
    /* 140 */ bool mUnk_140;
    /* 141 */ unk8 mUnk_141; // pad?
    /* 142 */ unk8 mUnk_142; // pad?
    /* 143 */ unk8 mUnk_143; // pad?
    /* 144 */

    UnkTitleCardSystem1_Derived1(GameModeManagerBase_004 *param1);

    // data_ov024_020d8044
    /* 08 */ virtual unk32 vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 10 */ virtual void vfunc_10() override;
    /* 18 */ virtual unk32 vfunc_18() override;
    /* 1C */ virtual void vfunc_1C(u32 msgId, unk32 param2, bool param3);
    /* 20 */

    void func_ov024_020cbe94(unk32 param1);
    void func_ov024_020cbeb8();
    void func_ov024_020cbf74(unk32 param1);
    void func_ov024_020cbf98();
    void func_ov024_020cc05c(u32 msgId);
    void func_ov024_020cc088(bool param1);
    bool func_ov024_020cc0b4();
};

class UnkStruct_ov024_020d8694_01C : public UnkTitleCardSystem1_Derived1 {
public:
    /* 000 (base) */
    /* 144 */ TitleScreen_Sub3 mUnk_144;
    /* 168 */ bool mUnk_168;
    /* 169 */ unk8 mUnk_169; // pad?
    /* 16A */ unk8 mUnk_16A; // pad?
    /* 16B */ unk8 mUnk_16B; // pad?
    /* 16C */

    UnkStruct_ov024_020d8694_01C(GameModeManagerBase_004 *param1);

    // data_ov024_020d7ff4
    /* 00 */ virtual void vfunc_00() override;
    /* 1C */ virtual void vfunc_1C(u32 msgId, unk32 param2, bool param3) override;
};

class UnkStruct_ov024_020d8694_188 : public UnkTitleCardSystem1_Derived1 {
public:
    /* 000 (base) */
    /* 144 */ UnkStruct_0204a110_Sub7_08 mUnk_144;
    /* 174 */

    UnkStruct_ov024_020d8694_188(GameModeManagerBase_004 *param1);

    // data_ov024_020d801c
    /* 00 */ virtual void vfunc_00() override;
    /* 04 */ virtual void vfunc_04(unk8 *param1) override;
    /* 14 */ virtual bool vfunc_14() override;
    /* 1C */ virtual void vfunc_1C(u32 msgId, unk32 param2, bool param3) override;
};

class UnkStruct_ov024_020d8694_2FC : public UnkTitleCardSystem1 {
public:
    /* 000 (base) */
    /* 138 */

    UnkStruct_ov024_020d8694_2FC(GameModeManagerBase_004 *param1);

    // data_ov024_020d7fac
    /* 00 */ virtual void vfunc_00() override;
    /* 08 */ virtual unk32 vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 10 */ virtual void vfunc_10() override;

    void func_ov024_020ccb10(unk32 param1, Vec2s *param2, Vec2s *param3);
};

class UnkStruct_ov024_020d8694 : public GameModeManagerBase_104, public AutoInstance<UnkStruct_ov024_020d8694> {
public:
    /* 000 (vtable) */
    /* 01C */ UnkStruct_ov024_020d8694_01C mUnk_01C;
    /* 188 */ UnkStruct_ov024_020d8694_188 mUnk_188;
    /* 2FC */ UnkStruct_ov024_020d8694_2FC mUnk_2FC;
    /* 434 */ UnkSystem2_UnkSubSystem11_Derived2 *mUnk_434;
    /* 438 */ UnkSystem2_UnkSubSystem5_Base_10 *mUnk_438;
    /* 43C */ GameModeManagerBase_004 *mUnk_43C;
    /* 440 */

    UnkStruct_ov024_020d8694(GameModeManagerBase_004 *param1);

    // data_ov024_020d7f88
    /* 00 */ virtual ~UnkStruct_ov024_020d8694();
    /* 08 */ virtual void vfunc_08(Input *pButtons, TouchControl *pTouchControl);
    /* 10 */ virtual void vfunc_10(unk8 *param1);

    void func_ov024_020cafb8(unk32 param1);
    void func_ov024_020cafd8(unk32 param1);
    void func_ov024_020cb000(unk32 param1);
    void func_ov024_020cb020(unk32 param1);
    void func_ov024_020cb040();
    void func_ov024_020cb054(unk32 param1, Vec2s *param2, Vec2s *param3);
    u32 GetMessageID(int index);
    void func_ov024_020cb0c4();
    void func_ov024_020cb178(unk32 param1);
    void func_ov024_020cb194(unk16 param1);

    static UnkStruct_ov024_020d8694 *Create(GameModeManagerBase_004 *param1);
};

// related to title cards
extern UnkStruct_ov024_020d8694 *data_ov024_020d8694;
