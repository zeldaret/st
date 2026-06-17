#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

typedef u32 ItemDropType;
enum ItemDropType_ {
    ItemDropType_Arrow          = 0,
    ItemDropType_Bomb           = 1,
    ItemDropType_RedPotion      = 2,
    ItemDropType_DemonFossil    = 3,
    ItemDropType_StalfosSkull   = 4,
    ItemDropType_StarFragment   = 5,
    ItemDropType_BeeLarvae      = 6,
    ItemDropType_WoodHeart      = 7,
    ItemDropType_PirateNecklace = 8,
    ItemDropType_Unknown        = 9,
    ItemDropType_Max            = 10,
};

enum ActorDroppedItemState_ {
    ActorDroppedItemState_0 = 0,
    ActorDroppedItemState_1 = 1,
    ActorDroppedItemState_2 = 2,
    ActorDroppedItemState_3 = 3,
    ActorDroppedItemState_4 = 4,
    ActorDroppedItemState_5 = 5,
    ActorDroppedItemState_6 = 6,
    ActorDroppedItemState_Max,
};

class ActorDroppedItem_c4 : public Actor_c4 {
public:
    // func_ov031_020fa9f8
    ActorDroppedItem_c4(Actor *param1);

    virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    virtual void vfunc_04() override;
    virtual void vfunc_08() override;
    virtual void vfunc_0c(unk32 param1) override;
};

class ActorItemDrop : public Actor_Derived2 {
public:
    /* 000 (base) */
    /* 0AE */ volatile u16 mUnk_AE;
    /* 0B0 */ u16 mUnk_B0;
    /* 0B2 */ STRUCT_PAD(0xB2, 0xB4);
    /* 0B4 */ Actor_9c mUnk_B4;
    /* 0B8 */ unk32 mUnk_B8;
    /* 0BC */ unk32 mUnk_BC;
    /* 0C0 */ ActorRef mUnk_C0;
    /* 0C4 */ STRUCT_PAD(0x0C4, 0x0D0);
    /* 0D0 */ u16 mUnk_D0;
    /* 0D4 */ ItemDropType mItemTypeId;
    /* 0D8 */ fx32 mUnk_D8;
    /* 0DC */ ActorRef mUnk_DC;
    /* 0E0 */ ActorRef mUnk_E0;
    /* 0E4 */ ActorDroppedItem_c4 mUnk_E4;
    /* 108 */ unk16 mUnk_108;
    /* 10A */ STRUCT_PAD(0x10A, 0x10C);
    /* 10C */ VecFx32 mUnk_10C;
    /* 118 */ bool mUnk_118;
    /* 119 */ bool mUnk_119;

    bool IsTimerOut() {
        if (this->mUnk_AE < this->mUnk_B0) {
            this->mUnk_AE++;
            return false;
        }

        return true;
    }

    ActorItemDrop();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 2C */ virtual void vfunc_2c(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 4C */ virtual ~ActorItemDrop() override;

    void func_ov031_020fa260();
    void func_ov031_020fa424(ActorState state);
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
    void func_ov031_020fa900();

    static void func_ov031_020f9f8c(ActorRef *pOutRef, const VecFx32 *pPos, u32 params, ActorRef ref);
};

class ActorProfileArrowDrop : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileArrowDrop();

    /* 0C */ virtual Actor *Create();

    static ActorProfileArrowDrop *GetProfile();
};

class ActorProfileBombDrop : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileBombDrop();

    /* 0C */ virtual Actor *Create();

    static ActorProfileBombDrop *GetProfile();
};

class ActorProfileRedPotionDrop : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileRedPotionDrop();

    /* 0C */ virtual Actor *Create();

    static ActorProfileRedPotionDrop *GetProfile();
};

class ActorProfileTreasureDrop : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileTreasureDrop();

    /* 0C */ virtual Actor *Create();

    static ActorProfileTreasureDrop *GetProfile();
};
