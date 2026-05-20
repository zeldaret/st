#include "Message/BMG.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_ov024_020d8694.hpp"

static const u32 sBMGSceneMap[] = {
    BMG_ID(BMGGroup_maingame, MsgIndex_ForestLand),         // TC_SceneMsgIdx_ForestLand
    BMG_ID(BMGGroup_maingame, MsgIndex_SnowLand),           // TC_SceneMsgIdx_SnowLand
    BMG_ID(BMGGroup_maingame, MsgIndex_OceanLand),          // TC_SceneMsgIdx_OceanLand
    BMG_ID(BMGGroup_maingame, MsgIndex_FireLand),           // TC_SceneMsgIdx_FireLand
    BMG_ID(BMGGroup_maingame, MsgIndex_TowerOfSpirits),     // TC_SceneMsgIdx_TowerOfSpirits
    BMG_ID(BMGGroup_maingame, MsgIndex_TunnelToTheTower),   // TC_SceneMsgIdx_TunnelToTheTower
    BMG_ID(BMGGroup_maingame, MsgIndex_WoodedTemple),       // TC_SceneMsgIdx_WoodedTemple
    BMG_ID(BMGGroup_maingame, MsgIndex_BlizzardTemple),     // TC_SceneMsgIdx_BlizzardTemple
    BMG_ID(BMGGroup_maingame, MsgIndex_MarineTemple),       // TC_SceneMsgIdx_MarineTemple
    BMG_ID(BMGGroup_maingame, MsgIndex_MountainTemple),     // TC_SceneMsgIdx_MountainTemple
    BMG_ID(BMGGroup_maingame, MsgIndex_DesertTemple),       // TC_SceneMsgIdx_DesertTemple
    BMG_ID(BMGGroup_maingame, MsgIndex_PirateHideout),      // TC_SceneMsgIdx_PirateHideout
    BMG_ID(BMGGroup_maingame, MsgIndex_HyruleCastle),       // TC_SceneMsgIdx_HyruleCastle
    BMG_ID(BMGGroup_maingame, MsgIndex_CastleTown),         // TC_SceneMsgIdx_CastleTown
    BMG_ID(BMGGroup_maingame, MsgIndex_Mayscore),           // TC_SceneMsgIdx_Mayscore
    BMG_ID(BMGGroup_maingame, MsgIndex_AnoukiVillage),      // TC_SceneMsgIdx_AnoukiVillage
    BMG_ID(BMGGroup_maingame, MsgIndex_PapuziaVillage),     // TC_SceneMsgIdx_PapuziaVillage
    BMG_ID(BMGGroup_maingame, MsgIndex_GoronVillage),       // TC_SceneMsgIdx_GoronVillage
    BMG_ID(BMGGroup_maingame, MsgIndex_TradingPost),        // TC_SceneMsgIdx_TradingPost
    BMG_ID(BMGGroup_maingame, MsgIndex_IcySpring),          // TC_SceneMsgIdx_IcySpring
    BMG_ID(BMGGroup_maingame, MsgIndex_OutsetVillage),      // TC_SceneMsgIdx_OutsetVillage
    BMG_ID(BMGGroup_maingame, MsgIndex_WoodlandSanctuary),  // TC_SceneMsgIdx_WoodlandSanctuary
    BMG_ID(BMGGroup_maingame, MsgIndex_SnowfallSanctuary),  // TC_SceneMsgIdx_SnowfallSanctuary
    BMG_ID(BMGGroup_maingame, MsgIndex_IslandSanctuary),    // TC_SceneMsgIdx_IslandSanctuary
    BMG_ID(BMGGroup_maingame, MsgIndex_ValleySanctuary),    // TC_SceneMsgIdx_ValleySanctuary
    BMG_ID(BMGGroup_maingame, MsgIndex_DuneSanctuary),      // TC_SceneMsgIdx_DuneSanctuary
    BMG_ID(BMGGroup_maingame, MsgIndex_BridgeWorkersHouse), // TC_SceneMsgIdx_BridgeWorkersHouse

#if IS_JP
    BMG_ID(BMGGroup_dungeon, MsgIndex_BossStagnox),        // TC_SceneMsgIdx_BossStagnox
    BMG_ID(BMGGroup_dungeon, MsgIndex_BossFraaz),          // TC_SceneMsgIdx_BossFraaz
    BMG_ID(BMGGroup_dungeon, MsgIndex_BossCactops),        // TC_SceneMsgIdx_BossCactops
    BMG_ID(BMGGroup_dungeon, MsgIndex_BossVulcano),        // TC_SceneMsgIdx_BossVulcano
    BMG_ID(BMGGroup_dungeon, MsgIndex_BossCapbone),        // TC_SceneMsgIdx_BossCapbone
    BMG_ID(BMGGroup_train_extra, MsgIndex_BossGhostTrain), // TC_SceneMsgIdx_BossGhostTrain
    BMG_ID(BMGGroup_dungeon, MsgIndex_BossStaven),         // TC_SceneMsgIdx_BossStaven
    BMG_ID(BMGGroup_dungeon, MsgIndex_BossMalladus1),      // TC_SceneMsgIdx_BossMalladus1
    BMG_ID(BMGGroup_dungeon, MsgIndex_BossMalladus2),      // TC_SceneMsgIdx_BossMalladus2
#else
    BMG_ID(BMGGroup_maingame, MsgIndex_BossStagnox),    // TC_SceneMsgIdx_BossStagnox
    BMG_ID(BMGGroup_maingame, MsgIndex_BossFraaz),      // TC_SceneMsgIdx_BossFraaz
    BMG_ID(BMGGroup_maingame, MsgIndex_BossCactops),    // TC_SceneMsgIdx_BossCactops
    BMG_ID(BMGGroup_maingame, MsgIndex_BossVulcano),    // TC_SceneMsgIdx_BossVulcano
    BMG_ID(BMGGroup_maingame, MsgIndex_BossCapbone),    // TC_SceneMsgIdx_BossCapbone
    BMG_ID(BMGGroup_maingame, MsgIndex_BossGhostTrain), // TC_SceneMsgIdx_BossGhostTrain
    BMG_ID(BMGGroup_maingame, MsgIndex_BossStaven),     // TC_SceneMsgIdx_BossStaven
    BMG_ID(BMGGroup_maingame, MsgIndex_BossMalladus1),  // TC_SceneMsgIdx_BossMalladus1
    BMG_ID(BMGGroup_maingame, MsgIndex_BossMalladus2),  // TC_SceneMsgIdx_BossMalladus2
#endif

    BMG_ID(BMGGroup_maingame, MsgIndex_GoronTargetRange),      // TC_SceneMsgIdx_GoronTargetRange
    BMG_ID(BMGGroup_maingame, MsgIndex_SnowdriftStation),      // TC_SceneMsgIdx_SnowdriftStation
    BMG_ID(BMGGroup_maingame, MsgIndex_LostAtSeaStation),      // TC_SceneMsgIdx_LostAtSeaStation
    BMG_ID(BMGGroup_maingame, MsgIndex_DisorientationStation), // TC_SceneMsgIdx_DisorientationStation
    BMG_ID(BMGGroup_maingame, MsgIndex_EndsOfTheEarthStation), // TC_SceneMsgIdx_EndsOfTheEarthStation
    BMG_ID(BMGGroup_maingame, MsgIndex_DarkOreMine),           // TC_SceneMsgIdx_DarkOreMine
    BMG_ID(BMGGroup_maingame, MsgIndex_RabbitHaven),           // TC_SceneMsgIdx_RabbitHaven
    BMG_ID(BMGGroup_maingame, MsgIndex_SlipperyStation),       // TC_SceneMsgIdx_SlipperyStation
};

UnkStruct_ov024_020d8694 *UnkStruct_ov024_020d8694::Create(GameModeManagerBase_004 *param1) {
    return new(HeapIndex_1) UnkStruct_ov024_020d8694(param1);
}

UnkStruct_ov024_020d8694::UnkStruct_ov024_020d8694(GameModeManagerBase_004 *param1) :
    mUnk_01C(param1),
    mUnk_188(param1),
    mUnk_2FC(param1),
    mUnk_434(NULL),
    mUnk_438(NULL),
    mUnk_43C(param1) {
    this->mUnk_434 = new(HeapIndex_1) UnkSystem2_UnkSubSystem11_Derived2();
    this->mUnk_438 = new(HeapIndex_1) UnkSystem2_UnkSubSystem5_Base_10();
    this->mUnk_438->vfunc_10(this->mUnk_434);
    this->mUnk_01C.func_ov024_020cb274(this->mUnk_434, this->mUnk_438);
    this->mUnk_188.func_ov024_020cb274(this->mUnk_434, this->mUnk_438);
    this->mUnk_2FC.func_ov024_020cb274(this->mUnk_434, this->mUnk_438);
}

UnkStruct_ov024_020d8694::~UnkStruct_ov024_020d8694() {
    if (this->mUnk_434 != NULL) {
        delete this->mUnk_434;
    }

    if (this->mUnk_438 != NULL) {
        delete this->mUnk_438;
    }

    this->mUnk_2FC.func_ov024_020cb280();
    this->mUnk_188.func_ov024_020cb280();
    this->mUnk_01C.func_ov024_020cb280();
}

void UnkStruct_ov024_020d8694::func_ov024_020cafb8(unk32 param1) {
    this->func_ov024_020cb0c4();
    this->mUnk_01C.func_ov024_020cbe94(param1);
}

void UnkStruct_ov024_020d8694::func_ov024_020cafd8(unk32 param1) {
    this->func_ov024_020cb0c4();
    this->mUnk_01C.mUnk_168 = true;
    this->mUnk_01C.func_ov024_020cbe94(param1);
}

void UnkStruct_ov024_020d8694::func_ov024_020cb000(unk32 param1) {
    this->func_ov024_020cb0c4();
    this->mUnk_01C.func_ov024_020cbf74(param1);
}

void UnkStruct_ov024_020d8694::func_ov024_020cb020(unk32 param1) {
    this->func_ov024_020cb0c4();
    this->mUnk_01C.func_ov024_020cc05c(param1);
}

void UnkStruct_ov024_020d8694::func_ov024_020cb040() {
    this->mUnk_01C.func_ov024_020cc088(true);
}

void UnkStruct_ov024_020d8694::func_ov024_020cb054(unk32 param1, Vec2s *param2, Vec2s *param3) {
    this->func_ov024_020cb0c4();

    Vec2s local_20;
    Vec2s local_24;

    local_24.x = param3->x;
    local_24.y = param3->y;

    local_20.x = param2->x;
    local_20.y = param2->y;

    this->mUnk_2FC.func_ov024_020ccb10(param1, &local_20, &local_24);
}

u32 UnkStruct_ov024_020d8694::GetMessageID(int index) {
    if (index >= 0) {
        return sBMGSceneMap[index];
    }

    return BMG_ID_NONE;
}

void UnkStruct_ov024_020d8694::func_ov024_020cb0c4() {
    this->mUnk_01C.func_ov024_020cc088(false);
    this->mUnk_188.func_ov024_020cc088(false);
    this->mUnk_2FC.func_ov024_020cb5bc();
}

void UnkStruct_ov024_020d8694::vfunc_08(Input *pButtons, TouchControl *pTouchControl) {
    this->mUnk_01C.vfunc_00();
    this->mUnk_188.vfunc_00();
    this->mUnk_2FC.vfunc_00();
}

void UnkStruct_ov024_020d8694::vfunc_10(unk8 *param1) {
    this->mUnk_01C.vfunc_04(param1);
    this->mUnk_188.vfunc_04(param1);
    this->mUnk_2FC.vfunc_04(param1);
}

void UnkStruct_ov024_020d8694::func_ov024_020cb178(unk32 param1) {
    data_027e0994->func_02018aac(param1, true);
}

void UnkStruct_ov024_020d8694::func_ov024_020cb194(unk16 param1) {
    data_027e0994->func_02018ac4(param1);
    data_0204a110.mUnk_010.func_0201ca28(0);
    data_0204a110.mUnk_010.func_0201ca28(1);
}

DECL_INSTANCE(UnkStruct_ov024_020d8694, data_ov024_020d8694);
