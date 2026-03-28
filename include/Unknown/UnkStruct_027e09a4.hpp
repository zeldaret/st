#pragma once

#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_0204a060.hpp"
#include "global.h"
#include "types.h"

/*
naming scheme:
- test_xxx: debug area
- e3_xxx: E3 demo area
- t_xxx: "T" for "Train" -> overworld area
- d_xxx: "D" for "Dungeon" -> dungeon area
- b_xxx: "B" for "Boss" -> dungeon boss area
- f_xxx: "F" for "Field" -> normal gameplay area (also known as a "land" area)
*/
enum SceneIndex {
    /*   0 */ SceneIndex_test_trn      = 0x00, //
    /*   1 */ SceneIndex_test_trn2     = 0x01, //
    /*   2 */ SceneIndex_test_pre      = 0x02, //
    /*   3 */ SceneIndex_test_iwa      = 0x03, //
    /*   4 */ SceneIndex_t_area0       = 0x04, // Forest Realm
    /*   5 */ SceneIndex_t_area1       = 0x05, // Snow Realm
    /*   6 */ SceneIndex_t_area2       = 0x06, // Ocean Realm
    /*   7 */ SceneIndex_t_area3       = 0x07, // Fire Realm
    /*   8 */ SceneIndex_t_tutorial    = 0x08, //
    /*   9 */ SceneIndex_t_forest      = 0x09, //
    /*  10 */ SceneIndex_t_smarine     = 0x0A, //
    /*  11 */ SceneIndex_t_smount      = 0x0B, // rocktite scene?
    /*  12 */ SceneIndex_t_smount2     = 0x0C, // rocktite scene?
    /*  13 */ SceneIndex_t_smount3     = 0x0D, // rocktite fire realm scene?
    /*  14 */ SceneIndex_t_minigame    = 0x0E, // goron target range minigame
    /*  15 */ SceneIndex_t_dark        = 0x0F, // Dark Realm
    /*  16 */ SceneIndex_t_eviltrain   = 0x10, // train cole fight
    /*  17 */ SceneIndex_t_eviltrain2  = 0x11, // same as above
    /*  18 */ SceneIndex_t_eviltrain3  = 0x12, // same as above
    /*  19 */ SceneIndex_d_main        = 0x13, // Tower Of Spirits
    /*  20 */ SceneIndex_d_main_f      = 0x14, // ToS base
    /*  21 */ SceneIndex_d_main_s      = 0x15, // ToS top stairs
    /*  22 */ SceneIndex_d_main_a      = 0x16, // ToS altar
    /*  23 */ SceneIndex_d_main_w      = 0x17, // ToS inner Stairs
    /*  24 */ SceneIndex_d_tutorial    = 0x18, // Tunnel to ToS
    /*  25 */ SceneIndex_d_forest      = 0x19, // Forest Temple
    /*  26 */ SceneIndex_d_snow26      = 0x1A, // Snow Temple
    /*  27 */ SceneIndex_d_water27     = 0x1B, // Water Temple
    /*  28 */ SceneIndex_d_flame       = 0x1C, // Fire Temple
    /*  29 */ SceneIndex_d_sand        = 0x1D, // Sand Temple
    /*  30 */ SceneIndex_b_forest      = 0x1E, // Stagnox
    /*  31 */ SceneIndex_b_snow        = 0x1F, // Fraaz
    /*  32 */ SceneIndex_b_water       = 0x20, // Phytops
    /*  33 */ SceneIndex_b_flame       = 0x21, // Cragma
    /*  34 */ SceneIndex_b_sand        = 0x22, // Skeldritch
    /*  35 */ SceneIndex_b_deago       = 0x23, // Byrne
    /*  36 */ SceneIndex_b_last1       = 0x24, // demon zelda train
    /*  37 */ SceneIndex_b_last2       = 0x25, // malladus beast 1
    /*  38 */ SceneIndex_b_last22      = 0x26, // malladus song
    /*  39 */ SceneIndex_b_last23      = 0x27, // mallasdus beast 2
    /*  40 */ SceneIndex_f_hyral       = 0x28, // hyrule castle
    /*  41 */ SceneIndex_f_htown       = 0x29, // castle town
    /*  42 */ SceneIndex_f_forest1     = 0x2A, // Whittleton
    /*  43 */ SceneIndex_f_snow        = 0x2B, // Anouki Village
    /*  44 */ SceneIndex_f_water       = 0x2C, // Papuchia Village
    /*  45 */ SceneIndex_f_flame       = 0x2D, // Goron Village
    /*  46 */ SceneIndex_f_flame5      = 0x2E,
    /*  47 */ SceneIndex_f_first       = 0x2F, // Aboda Village
    /*  48 */ SceneIndex_f_forest2     = 0x30, // Forest Sanctuary
    /*  49 */ SceneIndex_f_snow2       = 0x31, // Snow Sanctuary
    /*  50 */ SceneIndex_f_water2      = 0x32, // Water Sanctuary
    /*  51 */ SceneIndex_f_flame2      = 0x33, // Fire Sanctuary
    /*  52 */ SceneIndex_f_sand        = 0x34, // Sand Sanctuary
    /*  53 */ SceneIndex_f_tetsuo      = 0x35, // Icy Spring
    /*  54 */ SceneIndex_f_bridge      = 0x36, // Bridge Worker's House
    /*  55 */ SceneIndex_f_bridge2     = 0x37, // Trading Post
    /*  56 */ SceneIndex_f_forest3     = 0x38, // whittleton forest
    /*  57 */ SceneIndex_f_water3      = 0x39, // papuchia south
    /*  58 */ SceneIndex_f_ajito       = 0x3A, // Pirate Hideout
    /*  59 */ SceneIndex_f_ajito2      = 0x3B, // same as above
    /*  60 */ SceneIndex_f_flame3      = 0x3C, // Goron Target Range
    /*  61 */ SceneIndex_f_flame4      = 0x3D, // Dark Ore Mine
    /*  62 */ SceneIndex_f_rabbit      = 0x3E, // Rabbit Haven
    /*  63 */ SceneIndex_f_kakushi1    = 0x3F, // Snowdrift Station
    /*  64 */ SceneIndex_f_kakushi2    = 0x40, // Disorientation Station
    /*  65 */ SceneIndex_f_kakushi3    = 0x41, // Ends of the Earth Station
    /*  66 */ SceneIndex_f_kakushi4    = 0x42, // train required?
    /*  67 */ SceneIndex_f_pirate      = 0x43, // Train passenger pirate attack (including Carben)
    /*  68 */ SceneIndex_f_passenger   = 0x44, // Anjean force gem
    /*  69 */ SceneIndex_f_trnnpc      = 0x45, // Ferrus encounter
    /*  70 */ SceneIndex_tekiya00      = 0x46, // take em all on?
    /*  71 */ SceneIndex_tekiya01      = 0x47, // take em all on?
    /*  72 */ SceneIndex_tekiya02      = 0x48, // take em all on?
    /*  73 */ SceneIndex_tekiya03      = 0x49, // take em all on?
    /*  74 */ SceneIndex_tekiya04      = 0x4A, // take em all on?
    /*  75 */ SceneIndex_tekiya05      = 0x4B, // take em all on?
    /*  76 */ SceneIndex_tekiya06      = 0x4C, // take em all on?
    /*  77 */ SceneIndex_tekiya07      = 0x4D, // take em all on?
    /*  78 */ SceneIndex_tekiya08      = 0x4E, // take em all on?
    /*  79 */ SceneIndex_tekiya09      = 0x4F, // take em all on?
    /*  80 */ SceneIndex_demo_train    = 0x50, // title screen?
    /*  81 */ SceneIndex_e3_train      = 0x51, // ?
    /*  82 */ SceneIndex_e3_dungeon    = 0x52, // ?
    /*  83 */ SceneIndex_e3_boss       = 0x53, // forest temple boss
    /*  84 */ SceneIndex_e3_bossm      = 0x54, // fake forest temple room
    /*  85 */ SceneIndex_e3_smount     = 0x55, // ?
    /*  86 */ SceneIndex_test_hiratsu  = 0x56, // ?
    /*  87 */ SceneIndex_test_sik      = 0x57, // ?
    /*  88 */ SceneIndex_test_fuj      = 0x58, // ?
    /*  89 */ SceneIndex_test_nit      = 0x59, // ?
    /*  90 */ SceneIndex_test_mri      = 0x5A, // ?
    /*  91 */ SceneIndex_test_morita   = 0x5B, // ?
    /*  92 */ SceneIndex_test_yamaz    = 0x5C, // ?
    /*  93 */ SceneIndex_test_sako     = 0x5D, // ?
    /*  94 */ SceneIndex_test_kita     = 0x5E, // ?
    /*  95 */ SceneIndex_test_take     = 0x5F, // ?
    /*  96 */ SceneIndex_test_suzuki   = 0x60, // ?
    /*  97 */ SceneIndex_test_okane    = 0x61, // ?
    /*  98 */ SceneIndex_test_dera     = 0x62, // ?
    /*  99 */ SceneIndex_test_hosaka   = 0x63, // ?
    /* 100 */ SceneIndex_test_hosaka_f = 0x64, // ?
    /* 101 */ SceneIndex_test_kato     = 0x65, // ?
    /* 102 */ SceneIndex_test_okane_f  = 0x66, // ?
    /* 103 */ SceneIndex_test_yamaz_f  = 0x67, // ?
    /* 104 */ SceneIndex_test_sako_f   = 0x68, // ?
    /* 105 */ SceneIndex_test_take_f   = 0x69, // ?
    /* 106 */ SceneIndex_test_kiuchi   = 0x6A, // ?
    /* 107 */ SceneIndex_test_dera_f   = 0x6B, // ?
    /* 108 */ SceneIndex_test_slope    = 0x6C, // ?
    /* 109 */ SceneIndex_battle01      = 0x6D, // battle mode?
    /* 110 */ SceneIndex_battle02      = 0x6E, // battle mode?
    /* 111 */ SceneIndex_battle03      = 0x6F, // battle mode?
    /* 112 */ SceneIndex_battle04      = 0x70, // battle mode?
    /* 113 */ SceneIndex_battle05      = 0x71, // battle mode?
    /* 114 */ SceneIndex_battle06      = 0x72, // battle mode?
    /* 115 */ SceneIndex_battle07      = 0x73, // battle mode?
    /* 116 */ SceneIndex_battle08      = 0x74, // battle mode?
    /* 117 */ SceneIndex_battle09      = 0x75, // battle mode?
    /* 118 */ SceneIndex_battle10      = 0x76, // battle mode?
    /* 119 */ SceneIndex_battle11      = 0x77, // battle mode?
    /* 120 */ SceneIndex_battle12      = 0x78, // battle mode?
    /* 121 */ SceneIndex_Max           = 0x79
};

struct UnkStruct_027e09a4_58_78 {
    unk32 mUnk_00;
    unk32 mUnk_04;
    unk8 mUnk_08;
    unk8 mUnk_09;
    u8 mUnk_0A;
};

struct UnkStruct_func_01ffd400 {
    /* 00 */ STRUCT_PAD(0x00, 0x10);
    /* 1B */ unk32 mUnk_10;
    /* 1B */ unk32 mUnk_14;
    /* 1B */ unk8 mUnk_18;
    /* 1B */ unk8 mUnk_19;
    /* 1B */ unk8 mUnk_1A;
    /* 1B */ u8 mUnk_1B;
};

struct UnkStruct_SceneChange1 {
    /* 00 */ unk32 nextSceneIndex;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk16 mUnk_08;
    /* 0A */ unk8 mUnk_0A;
    /* 0B */ unk8 mUnk_0B;
    /* 0C */ unk8 mUnk_0C;
    /* 0D */ unk8 mUnk_0D;
    /* 0E */ unk8 mUnk_0E;
    /* 0F */ unk8 mUnk_0F;
    /* 10 */ unk8 mUnk_10;
    /* 11 */ unk8 mUnk_11;
    /* 12 */ unk8 mUnk_12;
    /* 13 */ unk8 mUnk_13;
    /* 14 */

    UnkStruct_SceneChange1() {
        this->nextSceneIndex = SceneIndex_Max;
        this->mUnk_04        = 0;
        this->mUnk_08        = 0;
        this->mUnk_0A        = 0xFF;
        this->mUnk_0B        = 0;
        this->mUnk_0C        = 0;
        this->mUnk_0D        = 0;
        this->mUnk_0E        = 0x2B;
        this->mUnk_0F        = 0;
        this->mUnk_10        = 0;
    }
};

class UnkStruct_WarpUnk1 : public UnkStruct_0204a060_Base {
public:
    /* 00 (base) */
    /* 24 */ STRUCT_PAD(0x24, 0x78);
    /* 78 */ UnkStruct_SceneChange1 mUnk_78;
    /* 8C */ unk32 mNextSceneIndex;
    /* 90 */ STRUCT_PAD(0x90, 0xB4);
    /* B4 */ unk32
        mSpawnTransitionType; // the behavior of Link when entering a new scene (walk from the entrance, stay still etc)
};

class UnkStruct_027e09a4 : public SysObject {
public:
    /* 00 */ unk32 mSceneIndex; // the scene index of the current area, this isn't saved when you save the game
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ u8 mUnk_0C;
    /* 0D */ unk8 mUnk_0D;
    /* 0E */ unk8 mUnk_0E;
    /* 0F */ unk8 mUnk_0F;
    /* 10 */ unk32 *mUnk_10;
    /* 14 */ unk32 mSavedSceneIndex;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk8 mUnk_1C;
    /* 1D */ unk8 mUnk_1D;
    /* 1E */ unk8 mSavedHouseIndex; // this changes when you enter a house, it's not clear if it has another purpose yet
    /* 1F */ unk8 mSavedSpawnIndex; // changing this then saving will change your spawn location after opening the save again
                                    // (not the area)
    /* 20 */ unk32 mUnk_20;
    /* 24 */ STRUCT_PAD(0x24, 0x54);
    /* 54 */ void *mUnk_54; // vtable
    /* 58 */ UnkStruct_WarpUnk1 *mpWarpUnk1;
    /* 5C */ unk32 mUnk_5C;
    /* 60 */ unk32 mUnk_60;
    /* 64 */ unk32 mUnk_64;
    /* 68 */

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

    ~UnkStruct_027e09a4();

    UnkStruct_func_01ffd400 *func_01ffd400();

    unk8 func_ov000_02070bd0(unk32, unk32);
    UnkStruct_027e09a4_58_78 *func_ov000_02070560();
    void func_ov000_020707a8(void *param1);
    void func_ov000_02070834(void *param1);
    void func_ov000_0207087c(unk32 param1);
    void func_ov000_020708d8(unk32 param1);
    void func_ov000_02070938(unk32 param1);
    void func_ov000_02070a4c(unk32 param1);

    void func_ov017_020bb994(void *param1);
    void func_ov017_020bb994(unk32 param1);
    void func_ov017_020bb994(void *, void *);

    static void func_ov025_020c4a60();
};

extern UnkStruct_027e09a4 *data_027e09a4;
