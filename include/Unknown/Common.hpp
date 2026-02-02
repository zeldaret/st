#pragma once

#include "Game/GameModeManager.hpp"
#include "System/SysNew.hpp"
#include "global.h"
#include "nitro/math.h"
#include "types.h"

extern "C" void func_0201e8d4(void *param1, void *param2);

class UnkSubStruct1 : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ u16 mUnk_04;
    /* 06 */ u16 mUnk_06;
    /* 08 */ u16 mUnk_08;
    /* 0A */ bool mUnk_0A;
    /* 0B */ bool mUnk_0B;
    /* 0C */ bool mUnk_0C;
    /* 0D */ bool mUnk_0D;
    /* 0E */ unk8 mUnk_0E;
    /* 0F */ unk8 mUnk_0F;
    /* 10 */ unk32 mUnk_10; // brightness (in this context: of the background)
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */

    UnkSubStruct1();
    void func_0201ea68(unk32 param1, unk32 param2, unk32 param3, unk32 param4);
    u16 func_0201eaa0();

    // data_02044330 vtable
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */

    bool UnkCheck1() {
        bool value = true;

        if (mUnk_0A == false && mUnk_0B == false) {
            value = false;
        }

        return value;
    }

    void UnkOperations(Vec2s *pPos, bool doSetPos) {
        int iVar1;

        if (this->mUnk_08 != 0) {
            iVar1         = this->mUnk_08 - this->mUnk_0D;
            this->mUnk_08 = CLAMP(iVar1, 0, 0xFFFF);
        } else {
            if (this->mUnk_0A) {
                if (this->mUnk_04 < this->mUnk_06) {
                    iVar1 = this->mUnk_04 + this->mUnk_0D;

                    if (iVar1 > this->mUnk_06) {
                        iVar1 = this->mUnk_06;
                    } else if (iVar1 < 0) {
                        iVar1 = 0;
                    }

                    this->mUnk_04 = iVar1;
                    this->vfunc_00();

                    if (this->mUnk_04 >= this->mUnk_06) {
                        this->mUnk_10 = this->mUnk_20;
                        this->mUnk_14 = this->mUnk_24;
                        this->mUnk_0A = false;
                        this->mUnk_0C = true;
                    }
                }
            } else {
                if (this->mUnk_0B && this->mUnk_04 != 0) {
                    iVar1 = this->mUnk_04 - this->mUnk_0D;

                    if (iVar1 > this->mUnk_06) {
                        iVar1 = this->mUnk_06;
                    } else if (iVar1 < 0) {
                        iVar1 = 0;
                    }

                    this->mUnk_04 = iVar1;
                    this->vfunc_04();

                    if (this->mUnk_04 == 0) {
                        this->mUnk_10 = this->mUnk_18;
                        this->mUnk_14 = this->mUnk_1C;
                        this->mUnk_0B = false;
                        this->mUnk_0C = true;
                    }
                }
            }
        }

        if (doSetPos) {
            Vec2us local_4c_copy;
            Vec2us local_4c;
            func_0201e8d4(&local_4c_copy, this);
            local_4c.x = local_4c_copy.y;
            local_4c.y = local_4c_copy.x;
            pPos->x    = local_4c.x;
            pPos->y    = local_4c.y;
        }
    }

    void UnkOperations2(Vec2s *pPos, bool doSetPos) {
        int iVar1;

        if (this->mUnk_08 != 0) {
            iVar1         = this->mUnk_08 - this->mUnk_0D;
            this->mUnk_08 = CLAMP2(iVar1, 0, 0xFFFF);
        } else {
            if (this->mUnk_0A) {
                if (this->mUnk_04 < this->mUnk_06) {
                    iVar1 = this->mUnk_04 + this->mUnk_0D;

                    if (iVar1 > this->mUnk_06) {
                        iVar1 = this->mUnk_06;
                    } else if (iVar1 < 0) {
                        iVar1 = 0;
                    }

                    this->mUnk_04 = iVar1;
                    this->vfunc_00();

                    if (this->mUnk_04 >= this->mUnk_06) {
                        this->mUnk_10 = this->mUnk_20;
                        this->mUnk_14 = this->mUnk_24;
                        this->mUnk_0A = false;
                        this->mUnk_0C = true;
                    }
                }
            } else {
                if (this->mUnk_0B && this->mUnk_04 != 0) {
                    iVar1 = this->mUnk_04 - this->mUnk_0D;

                    if (iVar1 > this->mUnk_06) {
                        iVar1 = this->mUnk_06;
                    } else if (iVar1 < 0) {
                        iVar1 = 0;
                    }

                    this->mUnk_04 = iVar1;
                    this->vfunc_04();

                    if (this->mUnk_04 == 0) {
                        this->mUnk_10 = this->mUnk_18;
                        this->mUnk_14 = this->mUnk_1C;
                        this->mUnk_0B = false;
                        this->mUnk_0C = true;
                    }
                }
            }
        }

        if (doSetPos) {
            Vec2us local_4c_copy;
            Vec2us local_4c;
            func_0201e8d4(&local_4c_copy, this);
            local_4c.x = local_4c_copy.y;
            local_4c.y = local_4c_copy.x;
            pPos->x    = local_4c.x;
            pPos->y    = local_4c.y;
        }
    }
};

class UnkStruct_ov019_020d24c8_28_258 {
public:
    /* 00 */ void *mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk16 mUnk_08;
    /* 0A */ union { //! TODO: figure out
        Vec2s mPos;
        Vec2us mPosU;
    };
    /* 0E */ unk16 mUnk_0E;
    /* 10 */ unk16 mUnk_10;
    /* 12 */ unk16 mUnk_12;
    /* 14 */ unk16 mUnk_14;
    /* 16 */ unk16 mUnk_16;
    /* 18 */

    UnkStruct_ov019_020d24c8_28_258() {
        this->mUnk_00 = NULL;
        this->mUnk_04 = 0;
        this->mPos.x  = 0;
        this->mPos.y  = 0;
    };

    UnkStruct_ov019_020d24c8_28_258(unk32 param1, unk32 param2) :
        mUnk_00(0),
        mUnk_04(0) {
        this->UnknownAction(param1, param2);
    }

    void UnknownAction(unk32 param1, unk32 param2) {
        this->func_ov000_0205fc20(param1, param2, &this->mPos, &this->mUnk_0E);
        this->mUnk_12 = param1;
        this->mUnk_14 = param2;
    }

    void func_ov000_0205fc20(unk32 param1, unk32 param2, void *param3, void *param4);
};

#define BTN_ID_NONE -1
#define BTN_ID_ITEM 0x03
#define BTN_ID_RETURN 0x05

#define BTN_ID_TRAIN_ROUTE_GO 0x0E
#define BTN_ID_TRAIN_ROUTE_CANCEL 0x0F
#define BTN_ID_TRAIN_ROUTE_QUIT 0x10
#define BTN_ID_TRAIN_LEVER 0x11
#define BTN_ID_TRAIN_ROPE 0x15

#define BTN_ID_MAP_MEMO 0x1A
#define BTN_ID_MAP_ERASE 0x1B

#define BTN_ID_PAUSE_CONTINUE 0x28
#define BTN_ID_PAUSE_SAVE_AND_QUIT 0x29

#define BTN_ID_MENU_OPEN 0x2D
#define BTN_ID_MENU_ROUTE 0x2E
#define BTN_ID_MENU_CLOSE_BOTTOM 0x2F
#define BTN_ID_MENU_WHIRLWIND 0x30
#define BTN_ID_MENU_BOOMERANG 0x31
#define BTN_ID_MENU_WHIP 0x32
#define BTN_ID_MENU_BOW 0x33
#define BTN_ID_MENU_BOMBS 0x34
#define BTN_ID_MENU_SAND_ROD 0x35
#define BTN_ID_MENU_POTION_SLOT_1 0x36
#define BTN_ID_MENU_POTION_SLOT_2 0x37
#define BTN_ID_MENU_SAVE 0x38
#define BTN_ID_MENU_MAP 0x39
#define BTN_ID_MENU_COLLECTION 0x3A
#define BTN_ID_MENU_RAIL_MAP 0x3B
#define BTN_ID_MENU_PAN_FLUTE 0x3C
#define BTN_ID_MENU_CLOSE_TOP 0x3D

#define BTN_ID_FILE_SELECT_FILE_1 0x40
#define BTN_ID_FILE_SELECT_FILE_2 0x41
#define BTN_ID_FILE_SELECT_42 0x42 // unused file 3 probably
#define BTN_ID_FILE_SELECT_START 0x43
#define BTN_ID_FILE_SELECT_COPY 0x44
#define BTN_ID_FILE_SELECT_ERASE 0x45
#define BTN_ID_FILE_SELECT_ADVENTURE 0x46
#define BTN_ID_FILE_SELECT_BATTLE 0x47
#define BTN_ID_FILE_SELECT_CONTACT_MODE 0x48
#define BTN_ID_FILE_SELECT_OPTIONS 0x49
#define BTN_ID_FILE_SELECT_CONFIRM 0x4A
#define BTN_ID_FILE_SELECT_MIC_TEST 0x4B
#define BTN_ID_FILE_SELECT_MESG_SPEED_LEFT_ARROW 0x4C
#define BTN_ID_FILE_SELECT_MESG_SPEED_RIGHT_ARROW 0x4D
#define BTN_ID_FILE_SELECT_SOUND_SETTINGS_LEFT_ARROW 0x4E
#define BTN_ID_FILE_SELECT_SOUND_SETTINGS_RIGHT_ARROW 0x4F
#define BTN_ID_FILE_SELECT_HANDEDNESS_LEFT_ARROW 0x50
#define BTN_ID_FILE_SELECT_HANDEDNESS_RIGHT_ARROW 0x51
#define BTN_ID_FILE_SELECT_NEW_FILE_CONFIRM 0x57
#define BTN_ID_FILE_SELECT_NEW_FILE_RETURN 0x58

#define BTN_ID_RAIL_MAP_FOREST_MAYSCORE 0x5D
#define BTN_ID_RAIL_MAP_FOREST_OUTSET_VILLAGE 0x5E
#define BTN_ID_RAIL_MAP_SNOW_ANOUKI_VILLAGE 0x5F
#define BTN_ID_RAIL_MAP_OCEAN_PAPUZIA_VILLAGE 0x60
#define BTN_ID_RAIL_MAP_FIRE_GORON_VILLAGE 0x61
#define BTN_ID_RAIL_MAP_TOWER_OF_SPIRITS 0x62
#define BTN_ID_RAIL_MAP_WOODED_TEMPLE 0x63
#define BTN_ID_RAIL_MAP_SNOW_BLIZZARD_TEMPLE 0x64
#define BTN_ID_RAIL_MAP_MARINE_TEMPLE 0x65
#define BTN_ID_RAIL_MAP_MOUNTAIN_TEMPLE 0x66
#define BTN_ID_RAIL_MAP_DESERT_TEMPLE 0x67
#define BTN_ID_RAIL_MAP_FOREST_WOODLAND_SANCTUARY 0x68
#define BTN_ID_RAIL_MAP_SNOW_SNOWFALL_SANCTUARY 0x69
#define BTN_ID_RAIL_MAP_OCEAN_ISLAND_SANCTUARY 0x6A
#define BTN_ID_RAIL_MAP_OCEAN_DUNE_SANCTUARY 0x6B
#define BTN_ID_RAIL_MAP_FOREST_HYRULE_CASTLE 0x6C
#define BTN_ID_RAIL_MAP_SNOW_BRIDGE_WORKERS_HOUSE 0x6D
#define BTN_ID_RAIL_MAP_SNOW_ICY_SPRING 0x6E
#define BTN_ID_RAIL_MAP_FOREST_TRADING_POST 0x6F
#define BTN_ID_RAIL_MAP_FOREST_RABBIT_HAVEN 0x70
#define BTN_ID_RAIL_MAP_OCEAN_PIRATE_HIDEOUT 0x71
#define BTN_ID_RAIL_MAP_FIRE_GORON_TARGET_RANGE 0x72
#define BTN_ID_RAIL_MAP_FIRE_DARK_ORE_MINE 0x73
#define BTN_ID_RAIL_MAP_SNOW_SNOWDRIFT_STATION 0x74
#define BTN_ID_RAIL_MAP_FIRE_DISORIENTATION_STATION 0x75
#define BTN_ID_RAIL_MAP_FIRE_ENDS_OF_THE_EARTH_STATION 0x76
#define BTN_ID_RAIL_MAP_OCEAN_LOST_AT_SEA_STATION 0x77
#define BTN_ID_RAIL_MAP_SNOW_SLIPPERY_STATION 0x78

#define BTN_ID_SHOP_QUIT 0x81 // quit shop
#define BTN_ID_SHOP_RETURN 0x82 // quit item preview
#define BTN_ID_SHOP_BUY 0x83
#define BTN_ID_SHOP_ITEM_1 0x84
#define BTN_ID_SHOP_ITEM_2 0x85
#define BTN_ID_SHOP_ITEM_3 0x86
#define BTN_ID_SHOP_ITEM_4 0x87
#define BTN_ID_SHOP_ITEM_5 0x88

#define BTN_ID_COLLECTION_TO_TRAIN_PARTS 0x99
#define BTN_ID_COLLECTION_TO_TREASURES 0x9A
#define BTN_ID_COLLECTION_TO_LETTERS 0x9B
#define BTN_ID_COLLECTION_TO_STAMPS 0x9C
#define BTN_ID_COLLECTION_FLIP_SCREENS 0x9D
#define BTN_ID_COLLECTION_SWORD 0x9E
#define BTN_ID_COLLECTION_SHIELD 0x9F
#define BTN_ID_COLLECTION_BOMB_BAG 0xA0
#define BTN_ID_COLLECTION_QUIVER 0xA1
#define BTN_ID_COLLECTION_CLOTHES 0xA2
#define BTN_ID_COLLECTION_BOW_OF_LIGHT 0xA3
#define BTN_ID_COLLECTION_A4 0xA4 // most likely the other scroll
#define BTN_ID_COLLECTION_GREAT_SPIN_ATTACK 0xA5
#define BTN_ID_COLLECTION_ENGINEER_CERTIFICATE 0xA6
#define BTN_ID_COLLECTION_BEEDLE_CARD 0xA7
#define BTN_ID_COLLECTION_RABBIT_NET 0xAA
#define BTN_ID_COLLECTION_COMPASS_OF_LIGHT 0xAB
#define BTN_ID_COLLECTION_PRIZE_POSTCARDS 0xAC
#define BTN_ID_COLLECTION_PAN_FLUTE 0xAD
#define BTN_ID_COLLECTION_FOREST_SOURCE 0xAE
#define BTN_ID_COLLECTION_SNOW_SOURCE 0xAF
#define BTN_ID_COLLECTION_OCEAN_SOURCE 0xB0
#define BTN_ID_COLLECTION_FIRE_SOURCE 0xB1
#define BTN_ID_COLLECTION_SAND_SOURCE 0xB2
#define BTN_ID_COLLECTION_SONG_OF_AWAKENING 0xB3
#define BTN_ID_COLLECTION_SONG_OF_HEALING 0xB4
#define BTN_ID_COLLECTION_SONG_OF_BIRDS 0xB5
#define BTN_ID_COLLECTION_SONG_OF_LIGHT 0xB6
#define BTN_ID_COLLECTION_SONG_OF_DISCOVERY 0xB7
#define BTN_ID_COLLECTION_RETURN 0xB8

#define BTN_ID_TRAIN_PARTS_TRAIN 0x99
#define BTN_ID_TRAIN_PARTS_CANNON 0x9A
#define BTN_ID_TRAIN_PARTS_CAR 0x9B
#define BTN_ID_TRAIN_PARTS_WAGON 0x9C
#define BTN_ID_TRAIN_PARTS_CHOICE_1 0x9D
#define BTN_ID_TRAIN_PARTS_CHOICE_2 0x9E
#define BTN_ID_TRAIN_PARTS_CHOICE_3 0x9F
#define BTN_ID_TRAIN_PARTS_RETURN 0xB8

#define BTN_ID_TREASURES_DEMON_FOSSIL 0x9D
#define BTN_ID_TREASURES_STALFOS_SKULL 0x9E
#define BTN_ID_TREASURES_STAR_FRAGMENT 0x9F
#define BTN_ID_TREASURES_BEE_LARVAE 0xA0
#define BTN_ID_TREASURES_WOOD_HEART 0xA1
#define BTN_ID_TREASURES_DARK_PEARL_LOOP 0xA2
#define BTN_ID_TREASURES_WHITE_PEARL_LOOP 0xA3
#define BTN_ID_TREASURES_RUTO_CROWN 0xA4
#define BTN_ID_TREASURES_DRAGON_SCALE 0xA5
#define BTN_ID_TREASURES_PIRATE_NECKLACE 0xA6
#define BTN_ID_TREASURES_PALACE_DISH 0xA7
#define BTN_ID_TREASURES_GORON_AMBER 0xA8
#define BTN_ID_TREASURES_MYSTIC_JADE 0xA9
#define BTN_ID_TREASURES_ANCIENT_COIN 0xAA
#define BTN_ID_TREASURES_PRICELESS_STONE 0xAB
#define BTN_ID_TREASURES_REGAL_RING 0xAC
#define BTN_ID_TREASURES_RETURN 0xB8

#define BTN_ID_STAMPS_PAGE_LEFT 0x99
#define BTN_ID_STAMPS_PAGE_RIGHT 0x9A
#define BTN_ID_STAMPS_RETURN 0xB8

#define BTN_ID_LETTERS_CHOICE_1 0x99
#define BTN_ID_LETTERS_CHOICE_2 0x9A
#define BTN_ID_LETTERS_CHOICE_3 0x9B
#define BTN_ID_LETTERS_CHOICE_4 0x9C
#define BTN_ID_LETTERS_ARROW_RIGHT 0x9E
#define BTN_ID_LETTERS_ARROW_LEFT 0x9F
#define BTN_ID_LETTERS_MAP 0xA0
#define BTN_ID_LETTERS_RAIL_MAP 0xA1
#define BTN_ID_LETTERS_RETURN 0xB8

#define BTN_ID_CONTACT_MODE_EXCHANGE 0x99
#define BTN_ID_CONTACT_MODE_DEMON_FOSSIL 0x9B
#define BTN_ID_CONTACT_MODE_STALFOS_SKULL 0x9C
#define BTN_ID_CONTACT_MODE_STAR_FRAGMENT 0x9D
#define BTN_ID_CONTACT_MODE_BEE_LARVAE 0x9E
#define BTN_ID_CONTACT_MODE_WOOD_HEART 0x9F
#define BTN_ID_CONTACT_MODE_DARK_PEARL_LOOP 0xA0
#define BTN_ID_CONTACT_MODE_WHITE_PEARL_LOOP 0xA1
#define BTN_ID_CONTACT_MODE_RUTO_CROWN 0xA2
#define BTN_ID_CONTACT_MODE_DRAGON_SCALE 0xA3
#define BTN_ID_CONTACT_MODE_PIRATE_NECKLACE 0xA4
#define BTN_ID_CONTACT_MODE_PALACE_DISH 0xA5
#define BTN_ID_CONTACT_MODE_GORON_AMBER 0xA6
#define BTN_ID_CONTACT_MODE_MYSTIC_JADE 0xA7
#define BTN_ID_CONTACT_MODE_ANCIENT_COIN 0xA8
#define BTN_ID_CONTACT_MODE_PRICELESS_STONE 0xA9
#define BTN_ID_CONTACT_MODE_REGAL_RING 0xAA
#define BTN_ID_CONTACT_MODE_RETURN 0xB8

#define BTN_ID_BATTLE_MENU_RETURN 0xB9
#define BTN_ID_BATTLE_MENU_CREATE_GROUP 0xBA
#define BTN_ID_BATTLE_MENU_JOIN_GROUP 0xBB
#define BTN_ID_BATTLE_MENU_PLAYER_LIST 0xBD

class UnkSystem2_UnkSubSystem1_Base {
public:
    /* 04 */ GameModeLinkList<UnkSystem2_UnkSubSystem1_Base> mUnk_04;
    /* 0C */ void *mUnk_0C;
    /* 10 */ unk32 mButtonID;
    /* 14 */ Vec2s mPos; // image position (among other things)
    /* 18 */ STRUCT_PAD(0x18, 0x24);
    /* 24 */ Vec2us mPosOffset; // used to shift the button when selected
    /* 28 */ bool mUnk_28; // selected highlight effect when set to true
    /* 29 */ bool mUnk_29; // related to having the button selected
    /* 2A */ bool mUnk_2A; // disables button action
    /* 2A */ bool mUnk_2B;
    /* 2C */ bool mUnk_2C;
    /* 2D */ unk8 mUnk_2D;
    /* 2E */ unk8 mUnk_2E;
    /* 2F */ unk8 mUnk_2F;

    UnkSystem2_UnkSubSystem1_Base();

    // data_ov000_020b1ecc vtable
    /* 00 */ virtual ~UnkSystem2_UnkSubSystem1_Base();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
};

// this class is related to the selectable buttons (actually more related to texture with things on top)
class UnkSystem2_UnkSubSystem1_Derived1 : public UnkSystem2_UnkSubSystem1_Base {
public:
    /* 00 (vtable) */
    /* 30 */ UnkStruct_ov019_020d24c8_28_258 mUnk_30; // idle
    /* 48 */ UnkStruct_ov019_020d24c8_28_258 mUnk_48; // selected
    /* 60 */

    UnkSystem2_UnkSubSystem1_Derived1();
    UnkSystem2_UnkSubSystem1_Derived1(unk32 buttonID, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6);
    void func_ov000_020633c0(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6);

    // data_ov000_020b1efc vtable
    /* 00 */ virtual ~UnkSystem2_UnkSubSystem1_Derived1() override {}
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
};

class UnkSystem2_UnkSubSystem7 {
public:
    /* 00 */ unk32 mUnk_00;

    ~UnkSystem2_UnkSubSystem7();
};

//! TODO: conflicts with UnkSystem2_UnkSubSystem1_Derived1? mUnk_34 type differs for some reasons
class UnkSystem2_UnkSubSystem1_Derived2 : public UnkSystem2_UnkSubSystem1_Base {
public:
    /* 00 (vtable) */
    /* 30 */ void *mUnk_30; // related to the background texture draw (idle)
    /* 34 */ UnkSystem2_UnkSubSystem7 mUnk_34; // related to the texture draw
    /* 38 */ unk16 mUnk_38; // related to the texture draw
    /* 3C */ Vec2us mUnk_3A; // overlaid elements position (text, icons etc...), relative to background position
    /* 40 */ unk16 mUnk_3E;
    /* 40 */ unk32 mUnk_40;
    /* 44 */ unk32 mUnk_44;
    /* 48 */ void *mUnk_48; // related to the background texture draw (selected)
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ unk16 mUnk_50; // related to the texture draw
    /* 50 */ unk16 mUnk_52;
    /* 54 */ unk32 mUnk_54;
    /* 58 */ unk32 mUnk_58;
    /* 5C */ unk32 mUnk_5C;
    /* 60 */

    UnkSystem2_UnkSubSystem1_Derived2(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6);
    void func_ov000_020633c0(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6);

    // data_ov000_020b1efc vtable
    /* 00 */ virtual ~UnkSystem2_UnkSubSystem1_Derived2() override {}
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
};

class UnkSystem2_UnkSubSystem5_Base_10 {
public:
    /* 000 (vtable) */
    /* 014 */ void *mUnk_014;
    /* 018 */ unk32 mUnk_018;
    /* 01C */ void *mUnk_01C;
    /* 020 */ unk32 mUnk_020;
    /* 024 */ unk32 mUnk_024;
    /* 028 */ unk8 mUnk_028;
    /* 029 */ unk8 mUnk_029;
    /* 02A */ unk8 mUnk_02A;
    /* 02B */ unk8 mUnk_02B;
    /* 02C */ unk32 mUnk_02C;
    /* 030 */ unk32 mUnk_030;
    /* 034 */ unk32 mUnk_034;
    /* 038 */ unk32 mUnk_038;
    /* 03C */ unk32 mUnk_03C;
    /* 040 */ unk32 mUnk_040;
    /* 044 */ unk32 mUnk_044;
    /* 048 */ unk32 mUnk_048;
    /* 04C */ unk32 mUnk_04C;
    /* 050 */ STRUCT_PAD(0x50, 0x130);

    // data_ov000_020b20fc (vtable)
    /* 00 */ virtual ~UnkSystem2_UnkSubSystem5_Base_10();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1C */ virtual void vfunc_1C();
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual void vfunc_28();
    /* 2C */ virtual void vfunc_2C();
    /* 30 */ virtual void vfunc_30();
    /* 34 */ virtual void vfunc_34();
    /* 38 */ virtual void vfunc_38();
    /* 3C */ virtual void vfunc_3C();
    /* 40 */ virtual void vfunc_40();
    /* 44 */ virtual void vfunc_44();
    /* 48 */ virtual void vfunc_48();
    /* 4C */
};

class UnkSystem2_UnkSubSystem5_Base {
public:
    /* 000 (vtable) */
    /* 004 */ wchar_t *mpString; // in this context it points to the player's name
    /* 008 */ unk16 mUnk_008;
    /* 00A */ unk16 mUnk_00A;
    /* 00C */ void *mUnk_00C;
    /* 010 */ UnkSystem2_UnkSubSystem5_Base_10 mUnk_010;

    ~UnkSystem2_UnkSubSystem5_Base();

    /* 00 */ virtual void vfunc_00();
    /* 04 */
};

class UnkSystem2_UnkSubSystem11 {
public:
    /* 00 (vtable) */
    /* 04 */ void *mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ void *mUnk_18;
    /* 1C */ void *mUnk_1C;
    /* 20 */

    void func_ov000_02061f60();
    ~UnkSystem2_UnkSubSystem11();

    // data_ov000_020b1e9c vtable
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
};

// this class seems related to drawing strings?
class UnkSystem2_UnkSubSystem5 : public UnkSystem2_UnkSubSystem5_Base {
public:
    /* 000 (base) */
    /* 130 */ STRUCT_PAD(0x130, 0x140);
    /* 140 */ unk16 mUnk_140;
    /* 142 */ unk16 mUnk_142;
    /* 144 */ unk16 mUnk_144;
    /* 146 */ unk16 mUnk_146;
    /* 148 */ unk32 mUnk_148;
    /* 14C */ unk8 mUnk_14C; // 0x544
    /* 14D */ unk8 mUnk_14D; // 0x545
    /* 14E */ unk8 mUnk_14E; // 0x546
    /* 14F */ unk8 mUnk_14F; // 0x547
    /* 150 */ UnkSystem2_UnkSubSystem11 mUnk_150;
    /* 170 */ void *mUnk_170;
    /* 144 */ STRUCT_PAD(0x174, 0x238);
    /* 238 */

    UnkSystem2_UnkSubSystem5() {}
    UnkSystem2_UnkSubSystem5(unk32 param1, unk32 param2);
    ~UnkSystem2_UnkSubSystem5() {}

    void func_0201f498();
    void func_0201f4b4(unk32 param1);
    void func_0201f500(void *param1);
    void func_0201f730(unk32 param1);
    void func_0201f9c4();
    void func_0201fb78(wchar_t *param1);
    void func_0201fa70(unk32 param1);

    // data_0204439c vtable
    /* 00 */ virtual void vfunc_00() override;
    /* 04 */
};

class UnkSystem2_UnkSubSystem3 {
public:
    /* 00 */ UnkSystem2_UnkSubSystem1_Base *mUnk_00;
    /* 04 */ UnkSystem2_UnkSubSystem5 mUnk_04;

    UnkSystem2_UnkSubSystem3(UnkSystem2_UnkSubSystem1_Base *param1, unk32 param2, unk32 param3, unk32 param4);

    void func_ov000_02062f30();
};

class UnkSystem2_UnkSubSystem8_Base {
public:
    /* 00 (vtable) */
    /* 04 */ UnkSystem2_UnkSubSystem1_Derived2 *mUnk_04;
    /* 08 */ bool mUnk_08;
    /* 09 */ unk8 mUnk_09;
    /* 0A */ unk8 mUnk_0A;
    /* 0B */ unk8 mUnk_0B;
    /* 0C */

    UnkSystem2_UnkSubSystem8_Base(UnkSystem2_UnkSubSystem1_Derived2 *param1);

    // data_ov000_020b1fac vtable
    /* 00 */ virtual void vfunc_00() = 0;
    /* 04 */ virtual void vfunc_04() = 0;
};

// seems to be related to the animations of the ui elements
class UnkSystem2_UnkSubSystem9 : public UnkSubStruct1 {
public:
    /* 00 (base) */
    /* 30 */ unk32 mUnk_30;
    /* 34 */ unk32 mUnk_34;
    /* 38 */ unk32 mUnk_38;
    /* 3C */ unk32 mUnk_3C;
    /* 40 */ unk32 mUnk_40;
    /* 44 */

    UnkSystem2_UnkSubSystem9();

    // data_020442f4 vtable
    /* 00 */ virtual void vfunc_00() override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */

    //! TODO: conflict with UnkStruct_ov019_020d24c8_28_304
    void func_0201e874(unk32 param1, void *param2, void *param3, unk32 param4);
};

class UnkSystem2_UnkSubSystem8 : public UnkSystem2_UnkSubSystem8_Base {
public:
    /* 00 (base) */
    /* 0C */ UnkSystem2_UnkSubSystem9 mUnk_0C;
    /* 50 */

    UnkSystem2_UnkSubSystem8() :
        UnkSystem2_UnkSubSystem8_Base(NULL) {}

    UnkSystem2_UnkSubSystem8(UnkSystem2_UnkSubSystem1_Derived2 *param1) :
        UnkSystem2_UnkSubSystem8_Base(param1) {}

    UnkSystem2_UnkSubSystem8(UnkSystem2_UnkSubSystem1_Derived1 *param1) :
        UnkSystem2_UnkSubSystem8_Base((UnkSystem2_UnkSubSystem1_Derived2 *) param1) {}

    void func_ov000_02064080(void *param1, void *param2, unk32 param3, u16 param4);
    void func_ov000_0206415c(void *param1, unk32 param2, unk32 param3, unk32 param4);
    void func_ov000_02063f64();

    // data_ov000_020b1f8c vtable
    /* 00 */ virtual void vfunc_00() override;
    /* 04 */ virtual void vfunc_04() override;
};

class UnkSystem3 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    UnkSystem3(const char *path, unk32 param2);
    ~UnkSystem3();
    void func_02015410(const char *path, unk32 param2);
    void func_02015460(const char *param1, void *param2, unk32 param3);
};

class UnkSystem4 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */

    ~UnkSystem4();
};

class UnkSystem5 {
public:
    /* 00 */ char *mUnk_00;
    /* 04 */ char *mUnk_04;
    /* 08 */ char *mUnk_08;
    /* 10 */ UnkSystem4 mUnk_0F00;
    /* 20 */ UnkSystem4 mUnk_0F10;
    /* 30 */ UnkSystem4 mUnk_0F20;
    /* 40 */

    UnkSystem5() {}
    ~UnkSystem5() {}
    void func_020171e4();
    void func_02017520(const char *nscrPath, const char *ncgrPath, const char *nclrPath);
};

class UnkStruct2 {
public:
    /* 00 */ unk8 pad[0x10];
    /* 10 */

    UnkStruct2(const char *path, unk32 param2);
    ~UnkStruct2();
    void func_020154ec(const char *param1);
};

struct UnkResult {
    void *mUnk_00;
    void *mUnk_04;
    void *mUnk_08;
    UnkSystem4 mUnk_0C;
    UnkSystem4 mUnk_1C;
    UnkSystem4 mUnk_2C;

    UnkResult(const char *path);
};

class UnkStructSub2 {
public:
    UnkStructSub2();

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
};

// used to draw the swords from the adventure and battle buttons
class UnkSubStruct19 {
public:
    /* 00 */ void *mUnk_00;
    /* 04 */ void *mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C; // pause the animation timer (in this context: pause the shiny animation on the sword)
    /* 10 */ unk32 mUnk_10; // animation timer
    /* 14 */ unk32 mUnk_14; // animation speed (also affects above timer)
    /* 18 */ unk32 mUnk_18;
    /* 1C */ void *mUnk_1C; // pointer to animation bank ("ABNK")
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ u8 mUnk_28; // bool?
    /* 29 */ unk8 mUnk_29;
    /* 2A */ unk8 mUnk_2A;
    /* 2B */ unk8 mUnk_2B;
    /* 2C */ UnkStructSub2 mUnk_2C;
    /* 30 */ void *mUnk_30; // pointer to somewhere inside "CEBK"
    /* 34 */ void *mUnk_34;
    /* 38 */ unk32 mUnk_38;
    /* 3C */ unk32 mUnk_3C;
    /* 40 */ unk32 mUnk_40; // related to the width of the texture (scaling matrix?)
    /* 44 */ unk32 mUnk_44; // related to the height of the texture
    /* 48 */ Vec2us mUnk_48;
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ unk32 mUnk_50;
    /* 54 */ unk32 mUnk_54;
    /* 58 */ unk32 mUnk_58; // another timer?
    /* 5C */ Vec2us mUnk_5C; // position of the animated texture
    /* 60 */ unk32 mUnk_60;
    /* 64 */ unk32 mUnk_64;
    /* 68 */ unk32 mUnk_68;
    /* 6C */ unk16 mUnk_6C;
    /* 6E */ bool mUnk_6E;
    /* 6F */ unk8 mUnk_6F;
    /* 70 */ unk32 mUnk_70;
    /* 74 */ unk16 mUnk_74;
    /* 76 */ unk16 mUnk_76;
    /* 78 */

    UnkSubStruct19();

    void func_ov000_0206082c(unk32 param1, unk32 param2);
    void func_ov000_02060950();
    void func_ov000_020609b0();
    void func_ov000_020609c4(void);
    void func_ov000_02060a98();
    void func_ov000_02060ad0();
    unk32 func_ov000_02060af8(void);
    void func_ov000_02060b50();
    void func_ov000_02060b64(void);
};
