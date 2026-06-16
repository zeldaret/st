#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

enum ActorDroppedItem_Type {
    DroppedItemTypeId_Arrow = 0x0,
    DroppedItemTypeId_Bomb  = 0x1,
    // TBD
    DroppedItemTypeId_RedPotion      = 0x2,
    DroppedItemTypeId_DemonFossil    = 0x3,
    DroppedItemTypeId_StalfosSkull   = 0x4,
    DroppedItemTypeId_StarFragment   = 0x5,
    DroppedItemTypeId_BeeLarvae      = 0x6,
    DroppedItemTypeId_WoodHeart      = 0x7,
    DroppedItemTypeId_PirateNecklace = 0x8,

    DroppedItemTypeId_Unknown = 0x9,
};

class ActorDroppedItem_c4 : public Actor_c4 {
public:
    // func_ov031_020fa9f8
    ActorDroppedItem_c4(Actor *param1);

    void func_ov031_020faa30(Actor_c4_stack param_1, unk32 param_2);
    void func_ov031_020faa74();
    void func_ov031_020faa94(unk32 param_1);
    void func_ov031_020faabc();
};

class ActorDroppedItem_Upperclass : public Actor {
public:
    ActorDroppedItem_Upperclass();
    virtual ~ActorDroppedItem_Upperclass() override;
};

class ActorDroppedItem : public ActorDroppedItem_Upperclass {
public:
    /* 000 (base) */
    /* 094 */ STRUCT_PAD(0x094, 0x0AE);
    /* 0AE */ unk16 mUnk_AE;
    /* 0B0 */ unk16 mUnk_B0;
    /* 0B2 */ STRUCT_PAD(0xB2, 0xB4);
    /* 0B4 */ Actor_9c mUnk_B4;
    /* 0B8 */ unk32 mUnk_B8;
    /* 0BC */ STRUCT_PAD(0x0BC, 0x0D4);
    /* 0D4 */ unk32 itemTypeId;
    /* 0D8 */ unk32 mUnk_D8;
    /* 0DC */ unk32 mUnk_DC;
    /* 0E0 */ unk32 mUnk_E0;
    /* 0E4 */ ActorDroppedItem_c4 mUnk_E4;
    /* 108 */ unk16 mUnk_108;
    /* 10A */ STRUCT_PAD(0x10A, 0x10C);
    /* 10C */ unk32 mUnk_10C;
    /* 110 */ unk32 mUnk_110;
    /* 114 */ unk32 mUnk_114;
    /* 118 */ bool mUnk_118;
    /* 119 */ bool mUnk_119;

    ActorDroppedItem();

    virtual ~ActorDroppedItem() override;

    void func_ov031_020f9f8c(VecFx32 *param_1, unk32 test, ActorRef ref);
    bool func_ov031_020fa20c();
    void func_ov031_020fa23c();
    void func_ov031_020fa248();
    void func_ov031_020fa260();
    void func_ov031_020fa424(s16 param_1);
    void func_ov031_020fa468();
    void func_ov031_020fa46c();
    void func_ov031_020fa494();
    void func_ov031_020fa4a0();
    void func_ov031_020fa524();
    void func_ov031_020fa568();
    void func_ov031_020fa5d8();
    void func_ov031_020fa5f0();
    void func_ov031_020fa650();
    void func_ov031_020fa664();
    void func_ov031_020fa668();
    void func_ov031_020fa678();
    void func_ov031_020fa6c8();
    void func_ov031_020fa72c();
    void func_ov031_020fa83c();
    void func_ov031_020fa900();
};

// --- Actor SPAR ---

class ActorProfileDroppedArrow : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileDroppedArrow();
    ~ActorProfileDroppedArrow();

    /* 0C */ virtual Actor *Create();

    static ActorProfileDroppedArrow *GetProfile();
};

// --- Actor SPBM ---

class ActorProfileDroppedBomb : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileDroppedBomb();
    ~ActorProfileDroppedBomb();

    /* 0C */ virtual Actor *Create();

    static ActorProfileDroppedBomb *GetProfile();
};

// --- Actor SPDR ---

class ActorProfileDroppedRedPotion : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileDroppedRedPotion();
    ~ActorProfileDroppedRedPotion();

    /* 0C */ virtual Actor *Create();

    static ActorProfileDroppedRedPotion *GetProfile();
};

// --- Actor SPTR ---

class ActorProfileDroppedTreasure : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileDroppedTreasure();
    ~ActorProfileDroppedTreasure();

    /* 0C */ virtual Actor *Create();

    static ActorProfileDroppedTreasure *GetProfile();
};
