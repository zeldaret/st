#pragma once

#include "types.h"

#include <nitro/Overlay.h>
// #include "Item/Item.hpp"
typedef u32 ItemFlag;

EXTERN_OVERLAY_ID(0);
EXTERN_OVERLAY_ID(1);
EXTERN_OVERLAY_ID(2);
EXTERN_OVERLAY_ID(3);
EXTERN_OVERLAY_ID(4);
EXTERN_OVERLAY_ID(5);
EXTERN_OVERLAY_ID(6);
EXTERN_OVERLAY_ID(7);
EXTERN_OVERLAY_ID(8);
EXTERN_OVERLAY_ID(9);
EXTERN_OVERLAY_ID(10);
EXTERN_OVERLAY_ID(11);
EXTERN_OVERLAY_ID(12);
EXTERN_OVERLAY_ID(13);
EXTERN_OVERLAY_ID(14);
EXTERN_OVERLAY_ID(15);
EXTERN_OVERLAY_ID(16);
EXTERN_OVERLAY_ID(17);
EXTERN_OVERLAY_ID(18);
EXTERN_OVERLAY_ID(19);
EXTERN_OVERLAY_ID(20);
EXTERN_OVERLAY_ID(21);
EXTERN_OVERLAY_ID(22);
EXTERN_OVERLAY_ID(23);
EXTERN_OVERLAY_ID(24);
EXTERN_OVERLAY_ID(25);
EXTERN_OVERLAY_ID(26);
EXTERN_OVERLAY_ID(27);
EXTERN_OVERLAY_ID(28);
EXTERN_OVERLAY_ID(29);
EXTERN_OVERLAY_ID(30);
EXTERN_OVERLAY_ID(31);
EXTERN_OVERLAY_ID(32);
EXTERN_OVERLAY_ID(33);
EXTERN_OVERLAY_ID(34);
EXTERN_OVERLAY_ID(35);
EXTERN_OVERLAY_ID(36);
EXTERN_OVERLAY_ID(37);
EXTERN_OVERLAY_ID(38);
EXTERN_OVERLAY_ID(39);
EXTERN_OVERLAY_ID(40);
EXTERN_OVERLAY_ID(41);
EXTERN_OVERLAY_ID(42);
EXTERN_OVERLAY_ID(43);
EXTERN_OVERLAY_ID(44);
EXTERN_OVERLAY_ID(45);
EXTERN_OVERLAY_ID(46);
EXTERN_OVERLAY_ID(47);
EXTERN_OVERLAY_ID(48);
EXTERN_OVERLAY_ID(49);
EXTERN_OVERLAY_ID(50);
EXTERN_OVERLAY_ID(51);
EXTERN_OVERLAY_ID(52);
EXTERN_OVERLAY_ID(53);
EXTERN_OVERLAY_ID(54);
EXTERN_OVERLAY_ID(55);
EXTERN_OVERLAY_ID(56);
EXTERN_OVERLAY_ID(57);
EXTERN_OVERLAY_ID(58);
EXTERN_OVERLAY_ID(59);
EXTERN_OVERLAY_ID(60);
EXTERN_OVERLAY_ID(61);
EXTERN_OVERLAY_ID(62);
EXTERN_OVERLAY_ID(63);
EXTERN_OVERLAY_ID(64);
EXTERN_OVERLAY_ID(65);
EXTERN_OVERLAY_ID(66);
EXTERN_OVERLAY_ID(67);
EXTERN_OVERLAY_ID(68);
EXTERN_OVERLAY_ID(69);
EXTERN_OVERLAY_ID(70);
EXTERN_OVERLAY_ID(71);
EXTERN_OVERLAY_ID(72);
EXTERN_OVERLAY_ID(73);
EXTERN_OVERLAY_ID(74);
EXTERN_OVERLAY_ID(75);
EXTERN_OVERLAY_ID(76);
EXTERN_OVERLAY_ID(77);
EXTERN_OVERLAY_ID(78);
EXTERN_OVERLAY_ID(79);
EXTERN_OVERLAY_ID(80);
EXTERN_OVERLAY_ID(81);
EXTERN_OVERLAY_ID(82);
EXTERN_OVERLAY_ID(83);
EXTERN_OVERLAY_ID(84);
EXTERN_OVERLAY_ID(85);
EXTERN_OVERLAY_ID(86);
EXTERN_OVERLAY_ID(87);
EXTERN_OVERLAY_ID(88);
EXTERN_OVERLAY_ID(89);
EXTERN_OVERLAY_ID(90);
EXTERN_OVERLAY_ID(91);
EXTERN_OVERLAY_ID(92);
EXTERN_OVERLAY_ID(93);
EXTERN_OVERLAY_ID(94);
EXTERN_OVERLAY_ID(95);
EXTERN_OVERLAY_ID(96);
EXTERN_OVERLAY_ID(97);
EXTERN_OVERLAY_ID(98);
EXTERN_OVERLAY_ID(99);
EXTERN_OVERLAY_ID(100);
EXTERN_OVERLAY_ID(101);
EXTERN_OVERLAY_ID(102);
EXTERN_OVERLAY_ID(103);
EXTERN_OVERLAY_ID(104);
EXTERN_OVERLAY_ID(105);
EXTERN_OVERLAY_ID(106);
EXTERN_OVERLAY_ID(107);
EXTERN_OVERLAY_ID(108);
EXTERN_OVERLAY_ID(109);
EXTERN_OVERLAY_ID(110);
EXTERN_OVERLAY_ID(111);
EXTERN_OVERLAY_ID(112);
EXTERN_OVERLAY_ID(113);

typedef u32 OverlayId;
#define OverlayId_None -1
#define OverlayId_Second OVERLAY_ID(0)
#define OverlayId_SceneInit OVERLAY_ID(1)
#define OverlayId_Collect OVERLAY_ID(2)
#define OverlayId_SoftKeyboard OVERLAY_ID(3)
#define OverlayId_Factory OVERLAY_ID(4)
#define OverlayId_NormalScreen OVERLAY_ID(5)
#define OverlayId_Paint OVERLAY_ID(6)
#define OverlayId_RailEdit OVERLAY_ID(7)
#define OverlayId_GameOver OVERLAY_ID(8)
#define OverlayId_CloseUp OVERLAY_ID(9)
#define OverlayId_TabMenu OVERLAY_ID(10)
#define OverlayId_WorldMap OVERLAY_ID(11)
#define OverlayId_PanFlute OVERLAY_ID(12)
#define OverlayId_TetsuoMap OVERLAY_ID(13)
#define OverlayId_Stamp OVERLAY_ID(14)
#define OverlayId_Shop OVERLAY_ID(15)
#define OverlayId_RabbitCapture OVERLAY_ID(16)
#define OverlayId_CourseExec OVERLAY_ID(17)
#define OverlayId_StartUp OVERLAY_ID(18)
#define OverlayId_MainSelect OVERLAY_ID(19)
#define OverlayId_WirelessCommon OVERLAY_ID(20)
#define OverlayId_BattleGame OVERLAY_ID(21)
#define OverlayId_Download OVERLAY_ID(22)
#define OverlayId_Wxc OVERLAY_ID(23)
#define OverlayId_MainGame OVERLAY_ID(24)
#define OverlayId_Title OVERLAY_ID(25)
#define OverlayId_Train OVERLAY_ID(26)
#define OverlayId_TrainForest OVERLAY_ID(27)
#define OverlayId_TrainSnow OVERLAY_ID(28)
#define OverlayId_TrainWater OVERLAY_ID(29)
#define OverlayId_TrainFlame OVERLAY_ID(30)
#define OverlayId_Land OVERLAY_ID(31)
#define OverlayId_MapA1 OVERLAY_ID(32)
#define OverlayId_MapA2 OVERLAY_ID(33)
#define OverlayId_MapA3 OVERLAY_ID(34)
#define OverlayId_MapA4 OVERLAY_ID(35)
#define OverlayId_MapA5 OVERLAY_ID(36)
#define OverlayId_MapA6 OVERLAY_ID(37)
#define OverlayId_MapA7 OVERLAY_ID(38)
#define OverlayId_MapA8 OVERLAY_ID(39)
#define OverlayId_MapB1 OVERLAY_ID(40)
#define OverlayId_MapB2 OVERLAY_ID(41)
#define OverlayId_MapB3 OVERLAY_ID(42)
#define OverlayId_MapB4 OVERLAY_ID(43)
#define OverlayId_MapB5 OVERLAY_ID(44)
#define OverlayId_MapB6 OVERLAY_ID(45)
#define OverlayId_MapB7 OVERLAY_ID(46)
#define OverlayId_MapC1 OVERLAY_ID(47)
#define OverlayId_MapC2 OVERLAY_ID(48)
#define OverlayId_MapC3 OVERLAY_ID(49)
#define OverlayId_MapC4 OVERLAY_ID(50)
#define OverlayId_MapC5 OVERLAY_ID(51)
#define OverlayId_MapC6 OVERLAY_ID(52)
#define OverlayId_MapD1 OVERLAY_ID(53)
#define OverlayId_MapD2 OVERLAY_ID(54)
#define OverlayId_MapD3 OVERLAY_ID(55)
#define OverlayId_MapD4 OVERLAY_ID(56)
#define OverlayId_MapD5 OVERLAY_ID(57)
#define OverlayId_Field OVERLAY_ID(58)
#define OverlayId_InTrain OVERLAY_ID(59)
#define OverlayId_Castle OVERLAY_ID(60)
#define OverlayId_CastleTown OVERLAY_ID(61)
#define OverlayId_Village OVERLAY_ID(62)
#define OverlayId_Shrine OVERLAY_ID(63)
#define OverlayId_FldForest OVERLAY_ID(64)
#define OverlayId_FldSnow OVERLAY_ID(65)
#define OverlayId_FldWater OVERLAY_ID(66)
#define OverlayId_FldFlame OVERLAY_ID(67)
#define OverlayId_FldAjito OVERLAY_ID(68)
#define OverlayId_FldRabbit OVERLAY_ID(69)
#define OverlayId_Dungeon OVERLAY_ID(70)
#define OverlayId_Tower OVERLAY_ID(71)
#define OverlayId_TowerLobby OVERLAY_ID(72)
#define OverlayId_BossDeago OVERLAY_ID(73)
#define OverlayId_BossLast1 OVERLAY_ID(74)
#define OverlayId_BossLast2 OVERLAY_ID(75)
#define OverlayId_DgnLv1 OVERLAY_ID(76)
#define OverlayId_DgnForest OVERLAY_ID(77)
#define OverlayId_BossForest OVERLAY_ID(78)
#define OverlayId_DgnSnow OVERLAY_ID(79)
#define OverlayId_BossSnow OVERLAY_ID(80)
#define OverlayId_DgnLv3 OVERLAY_ID(81)
#define OverlayId_DgnWater OVERLAY_ID(82)
#define OverlayId_BossWater OVERLAY_ID(83)
#define OverlayId_BossFlame OVERLAY_ID(84)
#define OverlayId_DgnLv5 OVERLAY_ID(85)
#define OverlayId_DgnDesert OVERLAY_ID(86)
#define OverlayId_BossDesert OVERLAY_ID(87)
#define OverlayId_Stb OVERLAY_ID(88)
#define OverlayId_ASR OVERLAY_ID(89)
#define OverlayId_TrainNormal OVERLAY_ID(90)
#define OverlayId_TrainExtra OVERLAY_ID(91)
#define OverlayId_TrainDark OVERLAY_ID(92)
#define OverlayId_PlayerSub OVERLAY_ID(93)
#define OverlayId_Land2 OVERLAY_ID(94)
#define OverlayId_PlayerPhantom OVERLAY_ID(95)
#define OverlayId_PlayerZelda OVERLAY_ID(96)
#define OverlayId_TrainMsg OVERLAY_ID(97)
#define OverlayId_MapWater OVERLAY_ID(98)
#define OverlayId_MapLava OVERLAY_ID(99)
#define OverlayId_CollectMsg OVERLAY_ID(100)
#define OverlayId_SceneInitLand OVERLAY_ID(101)
#define OverlayId_CourseExecLand OVERLAY_ID(102)
#define OverlayId_PlayerTornado OVERLAY_ID(103)
#define OverlayId_PlayerBoomerang OVERLAY_ID(104)
#define OverlayId_PlayerWhip OVERLAY_ID(105)
#define OverlayId_PlayerBow OVERLAY_ID(106)
#define OverlayId_PlayerSandrock OVERLAY_ID(107)
#define OverlayId_PlayerPanFlute OVERLAY_ID(108)
#define OverlayId_PlayerBomb OVERLAY_ID(109)
#define OverlayId_PlayerGet OVERLAY_ID(110)
#define OverlayId_PlayerDown OVERLAY_ID(111)
#define OverlayId_PlayerSceneChange OVERLAY_ID(112)
#define OverlayId_PlayerDemo OVERLAY_ID(113)

typedef u32 OverlayIndex;
enum OverlayIndex_ {
    /*  -1 */ OverlayIndex_None = -1,
    /* 000 */ OverlayIndex_Second,
    /* 001 */ OverlayIndex_SceneInit,
    /* 002 */ OverlayIndex_Collect,
    /* 003 */ OverlayIndex_SoftKeyboard,
    /* 004 */ OverlayIndex_NormalScreen,
    /* 005 */ OverlayIndex_Paint,
    /* 006 */ OverlayIndex_RailEdit,
    /* 007 */ OverlayIndex_GameOver,
    /* 008 */ OverlayIndex_TabMenu,
    /* 009 */ OverlayIndex_CloseUp,
    /* 010 */ OverlayIndex_WorldMap,
    /* 011 */ OverlayIndex_PanFlute,
    /* 012 */ OverlayIndex_TetsuoMap,
    /* 013 */ OverlayIndex_Stamp,
    /* 014 */ OverlayIndex_Factory,
    /* 015 */ OverlayIndex_Shop,
    /* 016 */ OverlayIndex_RabbitCapture,
    /* 017 */ OverlayIndex_CourseExec,
    /* 018 */ OverlayIndex_SceneInitLand,
    /* 019 */ OverlayIndex_CourseExecLand,
    /* 020 */ OverlayIndex_CollectMsg,
    /* 021 */ OverlayIndex_StartUp,
    /* 022 */ OverlayIndex_MainGame,
    /* 023 */ OverlayIndex_Title,
    /* 024 */ OverlayIndex_MainSelect,
    /* 025 */ OverlayIndex_WirelessCommon,
    /* 026 */ OverlayIndex_BattleGame,
    /* 027 */ OverlayIndex_Download,
    /* 028 */ OverlayIndex_Wxc,
    /* 029 */ OverlayIndex_Land,
    /* 030 */ OverlayIndex_Train,
    /* 031 */ OverlayIndex_Dungeon,
    /* 032 */ OverlayIndex_Field,
    /* 033 */ OverlayIndex_Tower,
    /* 034 */ OverlayIndex_TowerLobby,
    /* 035 */ OverlayIndex_BossForest,
    /* 036 */ OverlayIndex_BossSnow,
    /* 037 */ OverlayIndex_BossWater,
    /* 038 */ OverlayIndex_BossFlame,
    /* 039 */ OverlayIndex_BossDesert,
    /* 040 */ OverlayIndex_BossDeago,
    /* 041 */ OverlayIndex_BossLast1,
    /* 042 */ OverlayIndex_BossLast2,
    /* 043 */ OverlayIndex_DgnForest,
    /* 044 */ OverlayIndex_DgnSnow,
    /* 045 */ OverlayIndex_DgnWater,
    /* 046 */ OverlayIndex_DgnDesert,
    /* 047 */ OverlayIndex_InTrain,
    /* 048 */ OverlayIndex_Castle,
    /* 049 */ OverlayIndex_CastleTown,
    /* 050 */ OverlayIndex_Village,
    /* 051 */ OverlayIndex_Shrine,
    /* 052 */ OverlayIndex_FldForest,
    /* 053 */ OverlayIndex_FldSnow,
    /* 054 */ OverlayIndex_FldWater,
    /* 055 */ OverlayIndex_FldFlame,
    /* 056 */ OverlayIndex_FldAjito,
    /* 057 */ OverlayIndex_FldRabbit,
    /* 058 */ OverlayIndex_TrainForest,
    /* 059 */ OverlayIndex_TrainSnow,
    /* 060 */ OverlayIndex_TrainWater,
    /* 061 */ OverlayIndex_TrainFlame,
    /* 062 */ OverlayIndex_Stb,
    /* 063 */ OverlayIndex_ASR,
    /* 064 */ OverlayIndex_PlayerSub,
    /* 065 */ OverlayIndex_Land2,
    /* 066 */ OverlayIndex_TrainNormal,
    /* 067 */ OverlayIndex_TrainExtra,
    /* 068 */ OverlayIndex_TrainDark,
    /* 069 */ OverlayIndex_PlayerPhantom,
    /* 070 */ OverlayIndex_PlayerZelda,
    /* 071 */ OverlayIndex_DgnLv1,
    /* 072 */ OverlayIndex_DgnLv3,
    /* 073 */ OverlayIndex_DgnLv5,
    /* 074 */ OverlayIndex_MapWater,
    /* 075 */ OverlayIndex_MapLava,
    /* 076 */ OverlayIndex_TrainMsg,
    /* 077 */ OverlayIndex_MapA1,
    /* 078 */ OverlayIndex_MapA2,
    /* 079 */ OverlayIndex_MapA3,
    /* 080 */ OverlayIndex_MapA4,
    /* 081 */ OverlayIndex_MapA5,
    /* 082 */ OverlayIndex_MapA6,
    /* 083 */ OverlayIndex_MapA7,
    /* 084 */ OverlayIndex_MapA8,
    /* 085 */ OverlayIndex_MapB1,
    /* 086 */ OverlayIndex_MapB2,
    /* 087 */ OverlayIndex_MapB3,
    /* 088 */ OverlayIndex_MapB4,
    /* 089 */ OverlayIndex_MapB5,
    /* 090 */ OverlayIndex_MapB6,
    /* 091 */ OverlayIndex_MapB7,
    /* 092 */ OverlayIndex_MapC1,
    /* 093 */ OverlayIndex_MapC2,
    /* 094 */ OverlayIndex_MapC3,
    /* 095 */ OverlayIndex_MapC4,
    /* 096 */ OverlayIndex_MapC5,
    /* 097 */ OverlayIndex_MapC6,
    /* 098 */ OverlayIndex_MapD1,
    /* 099 */ OverlayIndex_MapD2,
    /* 100 */ OverlayIndex_MapD3,
    /* 101 */ OverlayIndex_MapD4,
    /* 102 */ OverlayIndex_MapD5,
    /* 103 */ OverlayIndex_PlayerTornado,
    /* 104 */ OverlayIndex_PlayerBoomerang,
    /* 105 */ OverlayIndex_PlayerWhip,
    /* 106 */ OverlayIndex_PlayerBow,
    /* 107 */ OverlayIndex_PlayerSandrock,
    /* 108 */ OverlayIndex_PlayerBomb,
    /* 109 */ OverlayIndex_PlayerPanFlute,
    /* 110 */ OverlayIndex_PlayerGet,
    /* 111 */ OverlayIndex_PlayerDown,
    /* 112 */ OverlayIndex_PlayerSceneChange,
    /* 113 */ OverlayIndex_PlayerDemo,
    /* 114 */ OverlayIndex_COUNT,
};

typedef u32 OverlaySlot;
enum OverlaySlot_ {
    /* 00 */ OverlaySlot_Second,
    /* 01 */ OverlaySlot_1,
    /* 02 */ OverlaySlot_2,
    /* 03 */ OverlaySlot_3,
    /* 04 */ OverlaySlot_4,
    /* 05 */ OverlaySlot_5,
    /* 06 */ OverlaySlot_6,
    /* 07 */ OverlaySlot_7,
    /* 08 */ OverlaySlot_8,
    /* 09 */ OverlaySlot_9,
    /* 10 */ OverlaySlot_10,
    /* 11 */ OverlaySlot_11,
    /* 12 */ OverlaySlot_12,
    /* 13 */ OverlaySlot_13,
    /* 14 */ OverlaySlot_14,
    /* 15 */ OverlaySlot_15,
    /* 16 */ OverlaySlot_16,
    /* 17 */ OverlaySlot_17,
    /* 18 */ OverlaySlot_COUNT,
};

class OverlayManager {
public:
    /* 00 */ OverlayIndex mLoadedOverlays[OverlaySlot_COUNT];
    /* 48 */

    void Load(OverlaySlot slot, OverlayIndex index);
    void LoadIfNotLoaded(OverlaySlot slot, OverlayIndex index);
    void Unload(OverlaySlot slot);
    void LoadOverlaySetup(s32 index);
    void UnloadOverlaySetup();

    void LoadEquipItem(ItemFlag equipId);

    void func_02014994(unk32 param1);
};

extern OverlayManager gOverlayManager;
extern OverlayManager data_02049ba0;
extern OverlayId data_0203e0e8[OverlayIndex_COUNT];
extern char *data_02043c88[OverlayIndex_COUNT];
