#pragma once

#include "Animation/CellAnimObject.hpp"
#include "Game/GameModeManager.hpp"
#include "LinkList.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkFileSystem.hpp"
#include "global.h"
#include "math.hpp"
#include "profile.hpp"
#include "types.h"

#include <nitro/mi.h>
#include <nns/g3d/g3d.h>
#include <nns/text.h>

class UnkDataStruct2;
extern "C" void func_0201e8d4(void *param1, void *param2);

//! TODO: make this work with templates?
#define UnkSubStruct1_Methods                                   \
    int GetUnkValue1(bool isAdding) {                           \
        int targetLimit;                                        \
        int nextValue;                                          \
                                                                \
        targetLimit = this->mUnk_06;                            \
                                                                \
        if (isAdding) {                                         \
            nextValue = this->mUnk_04 + this->mUnk_0D;          \
        } else {                                                \
            nextValue = this->mUnk_04 - this->mUnk_0D;          \
        }                                                       \
                                                                \
        if (nextValue > targetLimit) {                          \
            nextValue = targetLimit;                            \
        } else if (nextValue < 0) {                             \
            nextValue = 0;                                      \
        }                                                       \
                                                                \
        return nextValue;                                       \
    }                                                           \
                                                                \
    void Subprocess1() {                                        \
        if (this->mUnk_04 < this->mUnk_06) {                    \
            this->mUnk_04 = this->GetUnkValue1(true);           \
            this->vfunc_00();                                   \
                                                                \
            if (this->mUnk_04 >= this->mUnk_06) {               \
                this->Subprocess1_UnkValueSets();               \
                this->mUnk_0A = false;                          \
                this->mUnk_0C = true;                           \
            }                                                   \
        }                                                       \
    }                                                           \
                                                                \
    void Subprocess2() {                                        \
        if (this->mUnk_0B) {                                    \
            if (this->mUnk_04 != 0) {                           \
                this->mUnk_04 = this->GetUnkValue1(false);      \
                this->vfunc_04();                               \
                                                                \
                if (this->mUnk_04 == 0) {                       \
                    this->Subprocess2_UnkValueSets();           \
                    this->mUnk_0B = false;                      \
                    this->mUnk_0C = true;                       \
                }                                               \
            }                                                   \
        }                                                       \
    }                                                           \
                                                                \
    bool UnkCheck1() {                                          \
        bool value = true;                                      \
                                                                \
        if (this->mUnk_0A == false && this->mUnk_0B == false) { \
            value = false;                                      \
        }                                                       \
                                                                \
        return value;                                           \
    }                                                           \
                                                                \
    void UpdateLogic() {                                        \
        s32 diff;                                               \
                                                                \
        if (this->mUnk_08 != 0) {                               \
            diff = this->mUnk_08 - this->mUnk_0D;               \
                                                                \
            if (diff > 0xFFFF) {                                \
                diff = 0xFFFF;                                  \
            } else if (diff < 0) {                              \
                diff = 0;                                       \
            }                                                   \
                                                                \
            this->mUnk_08 = diff;                               \
        } else {                                                \
            if (this->mUnk_0A) {                                \
                this->Subprocess1();                            \
            } else {                                            \
                this->Subprocess2();                            \
            }                                                   \
        }                                                       \
    }                                                           \
                                                                \
    void UpdatePosition(Vec2s *pOutPos) {                       \
        Vec2s fetch;                                            \
        func_0201e8d4(&fetch, this);                            \
        Vec2s_Set(&fetch, pOutPos);                             \
    }                                                           \
                                                                \
    void Update(Vec2s *pOutPos) {                               \
        this->UpdateLogic();                                    \
        this->UpdatePosition(pOutPos);                          \
    }

class UnkSubStruct1_Base {
public:
    /* 04 */ u16 mUnk_04;
    /* 06 */ u16 mUnk_06;
    /* 08 */ u16 mUnk_08;
    /* 0A */ bool mUnk_0A;
    /* 0B */ bool mUnk_0B;
    /* 0C */ bool mUnk_0C;
    /* 0D */ u8 mUnk_0D;
    /* 10 */ unk32 mUnk_10; // brightness (in this context: of the background)
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */

    void UnkOperations1() {
        this->mUnk_0A = true;
        this->mUnk_0B = false;
        this->mUnk_0C = false;

        if (this->mUnk_04 == this->mUnk_06) {
            this->mUnk_0A = false;
            this->mUnk_0C = true;
        }
    }

    void UnkOperations2() {
        this->mUnk_0A = false;
        this->mUnk_0B = true;
        this->mUnk_0C = false;

        if (this->mUnk_04 == 0) {
            this->mUnk_0B = false;
            this->mUnk_0C = true;
        }
    }

    void UnkOperations3() {
        this->mUnk_04 = 0;
        this->mUnk_0A = false;
        this->mUnk_0B = false;
        this->mUnk_0C = true;
    }

    UnkSubStruct1_Base();

    // data_02044330 vtable
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */

    void func_0201ea68(unk32 param1, unk32 param2, unk32 param3, unk32 param4);
    u16 func_0201eaa0();
    unk32 func_0201edbc();
};

class UnkSubStruct1 : public UnkSubStruct1_Base {
public:
    /* 00 (base) */
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */

    UnkSubStruct1() {}

    void Subprocess1_UnkValueSets() {
        this->mUnk_10 = this->mUnk_20;
        this->mUnk_14 = this->mUnk_24;
    }

    void Subprocess2_UnkValueSets() {
        this->mUnk_10 = this->mUnk_18;
        this->mUnk_14 = this->mUnk_1C;
    }

    UnkSubStruct1_Methods;
};

class UnkSubStruct1_Derived1 : public UnkSubStruct1_Base {
public:
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */

    UnkSubStruct1_Derived1();

    void Subprocess1_UnkValueSets() {
        this->mUnk_10 = this->mUnk_18;
    }

    void Subprocess2_UnkValueSets() {
        this->mUnk_10 = this->mUnk_14;
    }

    UnkSubStruct1_Methods;
};

struct UnkStruct_ov019_020d24c8_28_258_00 {
    /* 00 */ void *mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */

    UnkStruct_ov019_020d24c8_28_258_00() {}

    UnkStruct_ov019_020d24c8_28_258_00(void *param1, unk32 param2) :
        mUnk_00(param1),
        mUnk_04(param2) {}

    void Init() {
        this->mUnk_00 = NULL;
        this->mUnk_04 = 0;
    }

    void func_ov000_0205fc20(unk32 param1, unk32 param2, void *param3, void *param4);
};

struct UnkStruct_ov019_020d24c8_28_258_00_Derived1 : public UnkStruct_ov019_020d24c8_28_258_00 {
    /* 00 (base) */
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    UnkStruct_ov019_020d24c8_28_258_00_Derived1() :
        UnkStruct_ov019_020d24c8_28_258_00(NULL, 0) {}
};

class UnkStruct_ov019_020d24c8_28_258 : public UnkStruct_ov019_020d24c8_28_258_00 {
public:
    /* 08 */ unk16 mUnk_08;
    /* 0A */ union { //! TODO: figure out
        Vec2s mPos;
        Vec2us mPosU;
    };
    /* 0E */ Vec2s mUnk_0E;
    /* 12 */ unk16 mUnk_12;
    /* 14 */ unk16 mUnk_14;
    /* 16 */ unk16 mUnk_16;
    /* 18 */

    UnkStruct_ov019_020d24c8_28_258() :
        UnkStruct_ov019_020d24c8_28_258_00(NULL, 0) {
        this->mPos.x = 0;
        this->mPos.y = 0;
    };

    UnkStruct_ov019_020d24c8_28_258(s16 param1, unk32 param2) :
        UnkStruct_ov019_020d24c8_28_258_00(NULL, 0) {
        this->UnknownAction(param1, param2);
    }

    void UnknownAction(s16 param1, unk32 param2) {
        this->func_ov000_0205fc20(param1, param2, &this->mPos, &this->mUnk_0E);
        this->mUnk_12 = param1;
        this->mUnk_14 = param2;
    }
};

#define BTN_ID_NONE -1

#define BTN_ID_UNK_00 0x00

#define BTN_ID_ITEM 0x03
#define BTN_ID_RETURN 0x05

#define BTN_ID_UNK_08 0x08
#define BTN_ID_UNK_0C 0x0C

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

#define BTN_ID_FILE_SELECT_UNK_0F 0x0F
#define BTN_ID_FILE_SELECT_UNK_14 0x14
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

#define BTN_ID_UNK_80 0x80

#define BTN_ID_SHOP_QUIT 0x81   // quit shop
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

class UnkSystem2_UnkSubSystem1_Base : public LinkList<UnkSystem2_UnkSubSystem1_Base> {
public:
    /* 00 (vtable) */
    /* 0C */ void *mUnk_0C;
    /* 10 */ unk32 mButtonID;
    /* 14 */ Vec2s mPos; // image position (among other things)
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ Vec2s mPosOffset; // used to shift the button when selected
    /* 28 */ bool mUnk_28;     // selected highlight effect when set to true
    /* 29 */ bool mUnk_29;     // related to having the button selected
    /* 2A */ bool mUnk_2A;     // disables button action
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

class UnkSystem2_UnkSubSystem7_Base {
public:
    /* 00 (vtable) */

    // data_ov000_020b1c88
    /* 00 */ virtual void vfunc_00();
    /* 00 */ virtual void vfunc_04();
};

class UnkSystem2_UnkSubSystem7 : public UnkSystem2_UnkSubSystem7_Base {
public:
    /* 00 (base) */

    ~UnkSystem2_UnkSubSystem7();
};

class UnkSystem2_UnkSubSystem7_Derived2 {
public:
    /* 00 */ UnkSystem2_UnkSubSystem7 mUnk_00;
    /* 04 */ STRUCT_PAD(0x04, 0x64);

    UnkSystem2_UnkSubSystem7_Derived2();
};

//! TODO: conflicts with UnkSystem2_UnkSubSystem1_Derived1? mUnk_34 type differs for some reasons
class UnkSystem2_UnkSubSystem1_Derived2 : public UnkSystem2_UnkSubSystem1_Base {
public:
    /* 00 (vtable) */
    /* 30 */ void *mUnk_30;                    // related to the background texture draw (idle)
    /* 34 */ UnkSystem2_UnkSubSystem7 mUnk_34; // related to the texture draw
    /* 38 */ unk16 mUnk_38;                    // related to the texture draw
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

class UnkSystem2_UnkSubSystem1_Derived3 : public UnkSystem2_UnkSubSystem1_Base {
public:
    /* 00 (base) */
    /* 30 */ unk32 mUnk_30;
    /* 34 */

    UnkSystem2_UnkSubSystem1_Derived3();

    // data_ov000_020b1f5c
    /* 00 */ virtual ~UnkSystem2_UnkSubSystem1_Derived3() override {}
    /* 0C */ virtual void vfunc_0C() override;

    void func_ov000_02063a3c(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6);
};

class UnkSystem2_UnkSubSystem1_Derived4 : public UnkSystem2_UnkSubSystem1_Derived3 {
public:
    UnkSystem2_UnkSubSystem1_Derived4() {}

    // data_ov000_020b1f2c
    /* 00 */ virtual ~UnkSystem2_UnkSubSystem1_Derived4() override {}
    /* 0C */ virtual void vfunc_0C() override;
};

class UnkSystem2_UnkSubSystem5_Base_10 {
public:
    /* 000 (vtable) */
    /* 014 */ void *mUnk_004;
    /* 018 */ unk32 mUnk_008;
    /* 01C */ void *mUnk_00C;
    /* 020 */ unk32 mUnk_010;
    /* 024 */ unk16 mUnk_014;
    /* 026 */ u16 mUnk_016;
    /* 028 */ unk8 mUnk_018;
    /* 029 */ unk8 mUnk_019;
    /* 02A */ unk8 mUnk_01A;
    /* 02B */ unk8 mUnk_01B;
    /* 02C */ unk32 mUnk_01C;
    /* 030 */ unk32 mUnk_020;
    /* 034 */ unk32 mUnk_024;
    /* 038 */ unk32 mUnk_028;
    /* 03C */ unk32 mUnk_02C;
    /* 040 */ unk32 mUnk_030;
    /* 044 */ unk32 mUnk_034;
    /* 048 */ unk32 mUnk_038;
    /* 04C */ unk32 mUnk_03C;
    /* 050 */ unk32 mUnk_040;
    /* 054 */ unk32 mUnk_044;
    /* 058 */ unk32 mUnk_048;
    /* 05C */ unk32 mUnk_04C;
    /* 060 */ unk32 mUnk_050;
    /* 064 */ unk32 mUnk_054;
    /* 068 */ STRUCT_PAD(0x58, 0x130);
    /* 130 */

    UnkSystem2_UnkSubSystem5_Base_10();

    // data_ov000_020b20fc (vtable)
    /* 00 */ virtual ~UnkSystem2_UnkSubSystem5_Base_10();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10(void *param1);
    /* 14 */ virtual void vfunc_14(unk32 param1);
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

    unk32 func_ov000_020691e0(void *param1);
    void func_ov000_02068798(Vec2s *param1);
    void func_ov000_02068798(void *, void *);
};

struct Font_UnkStruct1;
struct UnkSystem2_UnkSubSystem11_Base_1C {
    /* 00 */ unk32 mUnk_00;
    /* 04 */ Font_UnkStruct1 *mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */
};

class UnkSystem2_UnkSubSystem11_Base {
public:
    /* 00 (vtable) */
    /* 04 */ Text_UnkStruct2 mUnk_04;
    /* 1C */ UnkSystem2_UnkSubSystem11_Base_1C mUnk_1C; // +0x24: space between characters, set from BMG INF1 entry
    /* 2C */ s16 mUnk_2C;
    /* 2E */ unk16 mUnk_2E; // pad?
    /* 30 */

    UnkSystem2_UnkSubSystem11_Base(); // func_ov000_02061ce0

    // data_ov000_020b1e9c vtable
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();

    void func_ov000_02061d38();
    void func_ov000_02061d88();
    unk32 func_ov000_02061da8();
    unk32 func_ov000_02061db8();
};

class UnkSystem2_UnkSubSystem11_Derived1 : public UnkSystem2_UnkSubSystem11_Base {
public:
    /* 00 (base) */
    /* 30 */ STRUCT_PAD(0x30, 0xC0);
    /* C0 */

    UnkSystem2_UnkSubSystem11_Derived1(); // func_ov000_02061f30
    ~UnkSystem2_UnkSubSystem11_Derived1();

    // data_ov000_020b1e9c vtable
    /* 00 */ virtual void vfunc_00() override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;

    void func_ov000_02061f8c();
    void func_ov000_02062144();
    void func_ov000_0206216c(Vec2s *param1, unk32 param2, unk32 param3);
    void func_ov000_02062228();
    void func_ov000_02062838(void *param1);
};

class UnkSystem2_UnkSubSystem11_Derived2 : public UnkSystem2_UnkSubSystem11_Derived1 {
public:
    /* 00 (base) */
    /* C0 */ STRUCT_PAD(0xC0, 0xE0);
    /* E0 */

    UnkSystem2_UnkSubSystem11_Derived2() {}
    ~UnkSystem2_UnkSubSystem11_Derived2() {}

    // data_020443a8 (vtable)

    void func_ov000_020626e4(void *param1, bool param2, unk32 *param3, void *param4);
    void func_ov000_020626e4(void *param1, bool param2, unk32 *param3, unk32 param4, unk32 param5, unk32 param6, unk32 param7);
};

class UnkSystem2_UnkSubSystem5_Base {
public:
    /* 000 (vtable) */
    /* 004 */ wchar_t *mpString; // in this context it points to the player's name
    /* 008 */ unk16 mUnk_008;    // UnkSystem2_UnkSubSystem5()'s param1
    /* 00A */ unk16 mUnk_00A;    // UnkSystem2_UnkSubSystem5()'s param2
    /* 00C */ void *mUnk_00C;
    /* 010 */ UnkSystem2_UnkSubSystem5_Base_10 mUnk_010;
    /* 140 */ unk16 mUnk_140;
    /* 142 */ unk16 mUnk_142;
    /* 144 */ unk16 mUnk_144;
    /* 146 */ unk16 mUnk_146;
    /* 148 */ unk32 mUnk_148;
    /* 14C */ unk8 mUnk_14C; // 0x544
    /* 14D */ unk8 mUnk_14D; // 0x545
    /* 14E */ unk8 mUnk_14E; // 0x546
    /* 14F */ unk8 mUnk_14F; // 0x547

    UnkSystem2_UnkSubSystem5_Base(UnkSystem2_UnkSubSystem11_Derived2 *param1, unk32 param2, unk32 param3); // func_0201f288
    ~UnkSystem2_UnkSubSystem5_Base();

    /* 00 */ virtual void vfunc_00();
    /* 04 */
};

// this class seems related to drawing strings?
class UnkSystem2_UnkSubSystem5 : public UnkSystem2_UnkSubSystem5_Base {
public:
    /* 000 (base) */
    /* 150 */ UnkSystem2_UnkSubSystem11_Derived2 mUnk_150;
    /* 230 */ unk32 mUnk_230;
    /* 234 */ unk32 mUnk_234;
    /* 238 */

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

    UnkSystem2_UnkSubSystem3();
    UnkSystem2_UnkSubSystem3(UnkSystem2_UnkSubSystem1_Base *param1, unk32 param2, unk32 param3, unk32 param4);

    void func_ov000_02062f30();
    void func_ov000_02062f18(void *param1, unk32 param2, unk32 param3);
};

class UnkSystem2_UnkSubSystem8_Base {
public:
    /* 00 (vtable) */
    /* 04 */ UnkSystem2_UnkSubSystem1_Base *mUnk_04;
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
    void func_0201e874(unk32 buttonID, void *param2, void *param3, unk32 param4);
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

class UnkStruct2 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ const char *mUnk_04;
    /* 08 */ STRUCT_PAD(0x08, 0x10);
    /* 10 */

    UnkStruct2(const char *path, unk32 param2);
    ~UnkStruct2();
    void func_020154ec(const char *param1);
};

struct UnkResult {
    void *mUnk_00;
    void *mUnk_04;
    void *mUnk_08;
    UnkFileSystem3 mUnk_0C;
    UnkFileSystem3 mUnk_1C;
    UnkFileSystem3 mUnk_2C;

    UnkResult();
    UnkResult(const char *path);
    UnkResult(const char *path, const char *param2, const char *param3);
    ~UnkResult() {}

    void func_02017520(const char *nscrPath, const char *ncgrPath, const char *nclrPath);
};

struct UnkStruct_StackTitleScreen {
    /* 00 */ unk32 pad[5];
    /* 14 */

    UnkStruct_StackTitleScreen(const char *path, unk32 param1);
    ~UnkStruct_StackTitleScreen();

    void func_ov000_02059270(unk32 param1, char *param2, unk32 param3);
    void func_ov000_02059288(unk32 param1, char *param2, unk32 param3);
};

class MapObject;

struct UnkStackStruct1 {
    /* 00 */ unk8 mUnk_00;
    /* 01 */ unk8 mUnk_01;
    /* 02 */ unk8 mUnk_02;
    /* 03 */ unk8 mUnk_03;
    /* 04 */ void *mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ VecFx32 mUnk_0C;
    /* 18 */ unk16 mUnk_18;
    /* 1A */ unk16 mUnk_1A;
    /* 1C */ unk16 mUnk_1C;
    /* 1E */ unk16 mUnk_1E;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ VecFx32 mUnk_24;
    /* 30 */ unk16 mUnk_30;
    /* 32 */ unk16 mUnk_32;
    /* 34 */ unk16 mUnk_34;
    /* 36 */ unk16 mUnk_36;
    /* 38 */ u16 mUnk_38;
    /* 3A */ unk8 mUnk_3A;
    /* 3B */ unk8 mUnk_3B;
    /* 3C */ unk32 mUnk_3C;
    /* 40 */
};
extern "C" void func_ov000_02072fd0(UnkStackStruct1 *);

struct UnkSystem7_UnkStruct_00 {
    /* 00 */ STRUCT_PAD(0x00, 0x24);
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */ unk32 mUnk_30;
    /* 34 */ STRUCT_PAD(0x34, 0xA0);
    /* A0 */ unk32 mUnk_A0;
    /* A4 */ unk16 mUnk_A4;

    void func_ov000_02052c48(VecFx32 *param1, VecFx32 *param2);
};

class UnkSystem7 {
public:
    /* 00 */ UnkSystem7_UnkStruct_00 *mUnk_00;
    /* 04 */

    UnkSystem7(UnkSystem7_UnkStruct_00 *param1) {
        this->mUnk_00 = param1;
    }

    ~UnkSystem7() {
        this->func_ov000_020a0304();
    }

    void func_ov000_020a0304(void);
    void func_ov000_020a0334();
};

class UnkSystem7_Derived2 : public UnkSystem7 {
public:
    /* 00 (base) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    UnkSystem7_Derived2(UnkSystem7_UnkStruct_00 *param1, unk32 param2, unk32 param3) :
        UnkSystem7(param1),
        mUnk_04(param2),
        mUnk_08(param3) {}
};

class UnkStruct_PlayerGet_ec : public UnkSystem7 {
public:
    /* 00 (base) */
    /* 04 */

    UnkStruct_PlayerGet_ec(UnkSystem7_UnkStruct_00 *param1) :
        UnkSystem7(param1) {}

    UnkStruct_PlayerGet_ec();
    ~UnkStruct_PlayerGet_ec();
};

class UnkActorSystem2 : public GameModeManagerBase_104 {
public:
    /* 000 (base) */
    /* 01B */ bool mUnk_01B;
    /* 01C */ CellAnimObject mUnk_01C;
    /* 094 */ CellAnimObject mUnk_094;
    /* 10C */ bool mUnk_10C;
    /* 10C */ bool mUnk_10D;

    UnkActorSystem2(bool param1);

    // data_ov024_020d7bd0
    /* 00 */ virtual ~UnkActorSystem2() override;
    /* 08 */ virtual void vfunc_08(Input *pButtons, TouchControl *pTouchControl) override;
    /* 10 */ virtual void vfunc_10(unk8 *param1) override;

    void func_ov024_020c4ec0();
    void func_ov024_020c4ed8();
    void func_ov024_020c4ef0();
    void func_ov024_020c4f08();
    void func_ov024_020c4f18();
    void func_ov024_020c4f28();
    void func_ov024_020c4f4c();
    void func_ov024_020c4f5c();
    void func_ov024_020c4f6c();
    bool func_ov024_020c4f7c();
    bool func_ov024_020c510c();
    void func_ov024_020c5120(bool param1);
};

struct UnkDataStruct1 {
    /* 00 */ void *mUnk_00;
    /* 04 */ u8 mUnk_04;
    /* 05 */ unk8 mUnk_05;
    /* 06 */ u16 mUnk_06;
    /* 08 */

    UnkDataStruct1() {}
    UnkDataStruct1(u16 param1) {
        this->Init();
        this->mUnk_06 |= param1;
    }

    UnkDataStruct1(void *param1, u16 param2) {
        this->Init();
        this->mUnk_06 |= param2;
        this->mUnk_00 = param1;
    }

    void Init() {
        this->mUnk_06 = 0x00;
        MI_CpuFill32(0, this, sizeof(UnkDataStruct1));
        this->mUnk_05 = -1;
    }

    void SetUnk04(u8 param1) {
        this->mUnk_04 = param1;
    }
};

struct UnkDataStruct4_14_2;
struct UnkDataStruct2 {
    /* 00 */ UnkDataStruct4_14_2 *unk_00;
    /* 04 */

    UnkDataStruct2(unk32 param1);
    ~UnkDataStruct2();
};

#define UnkDataStruct4_14_Unk_Max 20
typedef u8 UnkArrayDataType1[UnkDataStruct4_14_Unk_Max][15];
struct UnkDataStruct4_14 {
    /* 00 */ unk8 mUnk_00;
    /* 01 */ s8 mStationSceneIndex;
    /* 02 */ s8 mUnk_02[3];
    /* 05 */ unk8 mUnk_05;
    /* 06 */ u16 mUnk_06[3];
    /* 0C */ u8 mUnk_0C[3];
    /* 0F */ u8 mUnk_0F[3];
    /* 12 */ u8 mUnk_12;
    /* 13 */ u8 mUnk_13;
    /* 14 */

    s32 func_ov024_020d1c3c(unk32 *param1, unk32 param2) const;
    void func_ov024_020d1c84();
    bool func_ov024_020d1cc8(unk32 param1, unk32 param2) const;
    bool func_ov024_020d1cf4(unk32 param1) const;
    bool func_ov024_020d1d30(unk32 param1, u16 param2) const;
    u8 func_ov024_020d1d78() const;
    u8 func_ov024_020d1da0() const;
    bool func_ov024_020d1dc8(unk32 param1, unk32 param2) const;
    bool func_ov024_020d1df4(unk32 param1) const;
    void func_ov024_020d1f60(u32 param1);
    unk32 func_ov024_020d1f70() const;
    bool func_ov024_020d1fa4(unk32 param1) const;
    void func_ov024_020d1fe8();
    bool func_ov024_020d2030(unk32 param1, unk32 param2);
    u8 func_ov024_020d208c(unk32 param1) const;
    void func_ov024_020d2098(unk32 param1, unk32 param2);
    unk32 func_ov024_020d20c0(unk32 param1, unk32 param2) const;
    bool IsStationDungeon() const;
    bool func_ov024_020d21d8() const;
    bool func_ov024_020d223c() const;
    bool func_ov024_020d2270(unk32 param1, unk32 param2) const;
    unk32 func_ov024_020d22ac(unk32 param1) const;
    bool func_ov024_020d2320(unk32 param1) const;
    unk32 func_ov024_020d2348(unk32 param1) const;
    bool func_ov024_020d23bc() const;
    bool func_ov024_020d239c() const;
    bool func_ov024_020d23ec() const;
    bool func_ov024_020d243c() const;
    bool func_ov024_020d2448() const;
    bool func_ov024_020d2464(bool param1) const;

    static const u8 func_ov024_020d1a18(unk32 param1);
    static unk32 func_ov024_020d1a28(u8 param1);
    static u8 func_ov024_020d1a98(unk32 param1, unk32 param2);
    static void func_ov024_020d1ab8(unk32 param1, unk32 *param2, unk32 *param3);
    static s32 func_ov024_020d1b98(unk32 *param1, unk32 param2);
    static s32 func_ov024_020d1be0(s32 param1);
    static void func_ov024_020d1e20(unk16 *param1, unk32 param2);
    static u8 func_ov024_020d1eac(const unk32 param1);
};

struct UnkDataStruct4_14_2 {
    /* 000 */ UnkDataStruct4_14 mUnk_00[15];
    /* 12C */
};

struct EntranceInfo;
struct UnkDataStruct4 {
    /* 00 (vtable) */
    /* 04 */ u16 mUnk_04;
    /* 06 */ u16 mUnk_06;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ UnkDataStruct4_14_2 *mUnk_14[20];
    /* 64 */ UnkDataStruct4_14_2 *mUnk_64;
    /* 68 */ VecFx32 mUnk_68[8];
    /* C8 */ VecFx32 *mUnk_C8;
    /* CC */ u32 mSceneIndex;
    /* D0 */

    UnkDataStruct4();

    // data_ov024_020d8260
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */

    void func_ov024_020d2518();
    void func_ov024_020d251c();
    void func_ov024_020d2520(EntranceInfo *param1);
    void func_ov024_020d2538(u32 sceneIndex, u8 roomIndex, UnkDataStruct4_14_2 *param3);
    void func_ov024_020d2564();
    void func_ov024_020d258c(u32 sceneIndex, u8 roomIndex);
    void func_ov024_020d26b0(unk32 param1);
    void func_ov024_020d277c();
    void func_ov024_020d27cc();
    void func_ov024_020d280c();
    void func_ov024_020d29b0(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5);
    bool func_ov024_020d2a18(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5);
    void func_ov024_020d2b08(unk32 param1, unk32 param2, VecFx32 *param3) const;
    void func_ov024_020d2c54(UnkArrayDataType1 param1, unk32 param2);
    void func_ov024_020d2cfc(UnkArrayDataType1 param1, unk32 param2, unk32 param3);
    s32 func_ov024_020d3068() const;
    bool func_ov024_020d308c(fx32 *param1, fx32 *param2, unk16 param3) const;
    void func_ov024_020d3100();
    void func_ov024_020d3140();

    static void func_ov024_020d2b40(Vec2s *param1, const UnkDataStruct4 *thisx);
    static void func_ov024_020d2bcc(Vec2s *param1, const UnkDataStruct4 *thisx);
};

struct UnkDataStruct3 {
    /* 00 */ UnkDataStruct2 mUnk_00;
    /* 04 */ UnkDataStruct4 mUnk_04;
    /* D4 */

    UnkDataStruct3(unk32 param1) :
        mUnk_00(param1) {}
};

struct InputInformations {
    void *unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0C;
};

class MapObjectProfile_Derived5 : public MapObjectProfile_Derived2_20_Base {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectProfile_Derived5(s32 param1);
    MapObjectProfile_Derived5(u32 param1);
    MapObjectProfile_Derived5(const char *directory, const char *archiveName, const char *param3, const char *param4,
                              unk32 param5, unk32 param6) :
        MapObjectProfile_Derived2_20_Base(directory, archiveName, param3, param4, param5, param6) {}

    // data_ov024_020d8350
    /* 00 */ virtual ~MapObjectProfile_Derived5() override;
    /* 08 */
};

class UnkActorFileSystem2 : public MapObjectProfile_Derived2_20_Base {
public:
    /* 00 (base) */
    /* 94 */ unk16 mUnk_94;
    /* 96 */ unk16 mUnk_96;
    /* 98 */

    UnkActorFileSystem2(u32 actorId2); // func_ov000_02097af8

    // data_ov000_020b3084
    /* 00 */ virtual ~UnkActorFileSystem2() override;
};

//! TODO: move to a better place
enum TrainPresetType_ {
    TrainPresetType_Default                = 0, // normal overworld settings
    TrainPresetType_DarkRealmNormal        = 1, // default dark realm settings (SceneIndex_t_dark)
    TrainPresetType_DarkRealmLightTear     = 2, // dark realm when on a light tear (SceneIndex_t_dark)
    TrainPresetType_DarkRealmLightTearRope = 3, // same as above but when pulling the rope (SceneIndex_t_dark)
    TrainPresetType_DarkRealmFight         = 4, // (SceneIndex_t_eviltrain, SceneIndex_t_eviltrain2 & SceneIndex_t_eviltrain3)
    TrainPresetType_5                      = 5, // unused?
    TrainPresetType_Max,
};

struct TrainSpeedTarget {
    /* 00 */ unk32 speed;
    /* 04 */ unk32 unk_04;
    /* 08 */
};

struct TrainSpeedPreset {
    /* 00 */ TrainSpeedTarget reverse;
    /* 08 */ TrainSpeedTarget stop;
    /* 10 */ TrainSpeedTarget slow;
    /* 18 */ TrainSpeedTarget fast;
    /* 20 */ unk32 unk_20;
    /* 24 */ unk32 unk_24;
    /* 28 */ unk32 unk_28;
    /* 2C */ unk32 unk_2C;
    /* 30 */ unk32 unk_30;
    /* 34 */ unk32 unk_34;
    /* 38 */ unk32 unk_38; // related to the "emergency break" thing when you go to reverse while fast speed
    /* 3C */ fx32 unk_3C;
    /* 40 */
};

class UnkSystem8 : public LinkList<UnkSystem8> {
public:
    /* 00 (vtable) */
    /* 04 (base) */
    /* 0C */

    // data_ov000_020b2940
    /* 00 */ virtual void vfunc_00();
};

class UnkSystem9 : public LinkList<UnkSystem9> {
public:
    /* 00 (vtable) */
    /* 04 (base) */
    /* 0C */

    // data_ov000_020b24c4
    /* 00 */ virtual void vfunc_00();
};

class UnkStruct_PlayerGet_74_base {
public:
    /* 00 (vtable) */

    /* 00 */ virtual void vfunc_00(unk32 param1, unk32 param2, unk32 param3);

    UnkStruct_PlayerGet_74_base();
};

struct UnkStruct_ov000_020aa88c {
    /* 00 */ bool mUnk_00;
    /* 01 */ bool mUnk_01;
    /* 02 */ bool mUnk_02;
    /* 03 */ bool mUnk_03;
    /* 04 */ bool mUnk_04;
    /* 05 */ unk8 mUnk_05;
    /* 06 */ u16 mUnk_06;
    /* 08 */
};
extern UnkStruct_ov000_020aa88c data_ov000_020aa88c[];
