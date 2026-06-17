#include "Actor/ActorDroppedItem.hpp"

#include "Actor/ActorManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"

// --- Actor Common ---

static PTMF<ActorDroppedItem> data_ov031_02114be8[] = {
    ActorDroppedItem::func_ov031_020fa468, ActorDroppedItem::func_ov031_020fa494, ActorDroppedItem::func_ov031_020fa524,
    ActorDroppedItem::func_ov031_020fa5d8, ActorDroppedItem::func_ov031_020fa650, ActorDroppedItem::func_ov031_020fa668,
    ActorDroppedItem::func_ov031_020fa6c8};

unk32 data_ov031_02114d28[0x5] = {};

extern UnkStruct_027e09a8 *data_027e09a8;
extern UnkStruct_027e0cd8 *data_027e0cd8;

extern unk32 data_ov031_02110bc8[];
extern Cylinder data_ov031_02114ba0(0x800);

extern "C" void func_01ffedac(u16 *, VecFx32 *);
extern "C" void func_01fff05c(u32 *, UnkStruct_027e0cd8_0c *, VecFx32 *);
extern "C" void func_ov000_0205c1f0(unk32 *, u16);
extern "C" void func_ov000_0205c204(unk32 *, VecFx32 *, unk32, unk32, unk32);
extern "C" void func_ov017_020bf99c();

ARM ActorDroppedItem_Upperclass::ActorDroppedItem_Upperclass() {}

ARM ActorDroppedItem_Upperclass::~ActorDroppedItem_Upperclass() {}

ARM ActorDroppedItem::ActorDroppedItem() :
    mUnk_AE(0x0),
    mUnk_B0(0x6),
    mUnk_D8(FLOAT_TO_FX32(0.5f)),
    mUnk_DC(0x0),
    mUnk_E0(0x0),
    mUnk_E4(this),
    mUnk_108(0x0),
    mUnk_10C(0x0),
    mUnk_110(0x0),
    mUnk_114(0x0),
    mUnk_118(false),
    mUnk_119(false) {

    switch (this->GetActorId()) {
        case ActorId_SPAR:
            if (data_027e0ce0->mUnk_2C->mFlags[0] & 0x8) {
                this->itemTypeId = DroppedItemTypeId_Arrow;
                this->mUnk_D8    = FLOAT_TO_FX32(0.5f);
            } else {
                this->itemTypeId = DroppedItemTypeId_Unknown;
            }
            break;
        case ActorId_SPBM:
            if (data_027e0ce0->mUnk_2C->mFlags[0] & 0x10) {
                this->itemTypeId = DroppedItemTypeId_Bomb;
                this->mUnk_D8    = FLOAT_TO_FX32(0.3f);
            } else {
                this->itemTypeId = DroppedItemTypeId_Unknown;
            }
            break;
        case ActorId_SPDR:
            this->itemTypeId = DroppedItemTypeId_RedPotion;
            this->mUnk_D8    = FLOAT_TO_FX32(0.4f);
            this->mUnk_119   = true;
            break;
        case ActorId_SPTR:
            unk32 treasureType = 0;
            switch (this->mUnk_5C.mParams[0]) {
                case 0:
                    treasureType = DroppedItemTypeId_DemonFossil;
                    break;
                case 1:
                    treasureType = DroppedItemTypeId_StalfosSkull;
                    break;
                case 2:
                    treasureType = DroppedItemTypeId_StarFragment;
                    break;
                case 3:
                    treasureType = DroppedItemTypeId_BeeLarvae;
                    break;
                case 4:
                    treasureType = DroppedItemTypeId_WoodHeart;
                    break;
                case 9:
                    treasureType = DroppedItemTypeId_PirateNecklace;
                    break;
                default:
                case 5:
                case 6:
                case 7:
                case 8:
                    treasureType = DroppedItemTypeId_Unknown;
                    break;
            }
            this->itemTypeId = treasureType;
            this->mUnk_D8    = FLOAT_TO_FX32(0.3f);
            this->mUnk_119   = true;
            break;
        default:
            this->itemTypeId = DroppedItemTypeId_Unknown;
            break;
    }

    this->mUnk_B8 = 0x13100;
    this->mUnk_40 = &this->mUnk_E4;
    u16 sp0;
    func_01ffedac(&sp0, &this->mPos);

    if (data_027e0cd8->mUnk_0C->func_ov000_02080180(&sp0) == 0x5) {
        this->mUnk_34 = &data_ov031_02114ba0;
    }
}

// non-matching
ARM void ActorDroppedItem::func_ov031_020f9f8c(VecFx32 *param_1, unk32 test, ActorRef ref) {
    ActorParams stack_04;
    u16 thing;

    stack_04.mUnk_28 = 0;
    stack_04.func_ov000_020975f8();
    stack_04.mUnk_28 = ref.Get32();

    stack_04.mInitialPos.x = param_1->x;
    stack_04.mInitialPos.y = param_1->y;
    stack_04.mInitialPos.z = param_1->z;

    stack_04.mParams[0] = test & 0xFF;

    this->func_ov000_020973f4(&data_ov000_020b539c_eur, ActorId_SPTR, &stack_04, 0);
}

ARM bool ActorDroppedItem::vfunc_18(unk32 param1) {
    if (this->itemTypeId >= (u32) 0x9) {
        return false;
    }
    this->mUnk_52 = 0x1E0;
    this->mUnk_50 = 0x0;
    this->func_ov031_020fa424(0x0);
    return true;
}

ARM void ActorDroppedItem::vfunc_20() {
    this->func_ov031_020fa260();
}

ARM void ActorDroppedItem::vfunc_24() {
    if (this->mUnk_4C != 0x6) {
        return;
    }
    this->func_ov031_020fa260();
}

// non-matching
ARM void ActorDroppedItem::func_ov031_020fa260() {}

ARM void ActorDroppedItem::func_ov031_020fa424(s16 param_1) {
    this->mUnk_4C = param_1;
    this->mUnk_44 = 0x9C;
    CALL_PTMF(PTMF<ActorDroppedItem>, data_ov031_02114be8[this->mUnk_4C]);
}

ARM void ActorDroppedItem::func_ov031_020fa468() {}

// non-matching
ARM void ActorDroppedItem::func_ov031_020fa46c() {
    func_ov000_02098838();
    if (this->mVel.y > 0) {
        return;
    }
    this->func_ov031_020fa424(0x1);
}

ARM void ActorDroppedItem::func_ov031_020fa494() {
    this->mUnk_44 = 0x9F;
}

ARM void ActorDroppedItem::func_ov031_020fa4a0() {
    u32 stack;
    func_ov000_02098838();
    if (!(this->mUnk_46 & 0x3)) {
        return;
    }

    func_01fff05c(&stack, data_027e0cd8->mUnk_0C, &this->mPos);
    if (((stack >> 0x5) & 0x3) == 0x2 && this->itemTypeId != DroppedItemTypeId_Arrow &&
        this->itemTypeId != DroppedItemTypeId_Bomb) {
        this->func_ov000_020984d0();
        return;
    }

    this->func_ov031_020fa424(0x2);
}

ARM void ActorDroppedItem::func_ov031_020fa524() {
    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.y = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);
    if (!this->mUnk_118 && this->mUnk_52 - this->mUnk_50 > 0xB4) {
        this->mUnk_52 = 0xB4;
        this->mUnk_50 = 0x0;
    }
    this->mUnk_44 = 0x9F;
}

// non-matching
ARM void ActorDroppedItem::func_ov031_020fa568() {
    if (this->mUnk_5C.mUnk_24 >= 0) {
        return;
    }

    switch (this->mUnk_108) {
        case 0x0:
            if (!(this->mUnk_46 & 0x3)) {
                ++this->mUnk_108;
            }
            break;
        case 0x1:
            this->func_ov000_02098838();
            if (!(this->mUnk_46 & 0x3)) {
                break;
            }
            this->mVel.x   = FLOAT_TO_FX32(0.0f);
            this->mVel.y   = FLOAT_TO_FX32(0.0f);
            this->mVel.z   = FLOAT_TO_FX32(0.0f);
            this->mUnk_108 = 0x0;
            break;
        default:
            break;
    }
}

ARM void ActorDroppedItem::func_ov031_020fa5d8() {
    func_ov017_020bf99c();
    this->mUnk_B4.func_ov000_02097bec();
}

ARM void ActorDroppedItem::func_ov031_020fa5f0() {
    Actor *actor = gpActorManager->func_01fff3b4(this->mUnk_DC);
    this->func_ov017_020bf9c8(actor);

    if (!GET_FLAG(this->mFlags, ActorFlag_5)) {
        return;
    }

    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.y = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);
    this->mUnk_B8 |= 0x1000;
    this->func_ov031_020fa424(0x1);
}

ARM void ActorDroppedItem::func_ov031_020fa650() {
    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.y = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);
}

ARM void ActorDroppedItem::func_ov031_020fa664() {}

ARM void ActorDroppedItem::func_ov031_020fa668() {
    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);
}

class UnkActor_ov031_020fa678 : public Actor {
public:
    /* 000 (base) */
    /* 94 */ STRUCT_PAD(0x94, 0xE8);
    /* E8 */ VecFx32 mUnk_E8;
};

ARM void ActorDroppedItem::func_ov031_020fa678() {
    UnkActor_ov031_020fa678 *actor = (UnkActor_ov031_020fa678 *) gpActorManager->func_01fff3b4(this->mUnk_E0);
    if (!actor) {
        this->func_ov031_020fa424(0x1);
        return;
    }

    VecFx32_Copy(&actor->mUnk_E8, &this->mPos);
}

ARM void ActorDroppedItem::func_ov031_020fa6c8() {
    this->mUnk_52 = 0xFFFF;
    this->mUnk_50 = 0x0;
    this->mVel.x  = FLOAT_TO_FX32(0.0f);
    this->mVel.y  = FLOAT_TO_FX32(0.0f);
    this->mVel.z  = FLOAT_TO_FX32(0.0f);
    this->mUnk_4A = 0x0;
    this->mUnk_44 = 0x0;

    this->mUnk_B4.func_ov000_02097bec();
    UNSET_FLAG(this->mFlags, ActorFlag_Visible);
    data_027e09a8->func_ov000_02071b30(0x77, &this->mPos, 0x0);
}

ARM void ActorDroppedItem::func_ov031_020fa72c() {
    this->mUnk_3C = 0x0;
    if (data_027e09b8->func_01ffd420()) {
        return;
    }

    bool executeFunction = true;
    switch (this->itemTypeId) {
        case DroppedItemTypeId_Arrow:
            data_027e0ce0->mUnk_2C->GiveArrows(0x5);
            break;
        case DroppedItemTypeId_Bomb:
            data_027e0ce0->mUnk_2C->GiveBombs(0x3);
            break;
        case DroppedItemTypeId_RedPotion:
            executeFunction = data_027e0d34->TryItemGive(ItemId_RedPotion);
            break;
        case DroppedItemTypeId_DemonFossil:
            executeFunction = data_027e0d34->TryItemGive(ItemId_DemonFossil);
            break;
        case DroppedItemTypeId_StalfosSkull:
            executeFunction = data_027e0d34->TryItemGive(ItemId_StalfosSkull);
            break;
        case DroppedItemTypeId_StarFragment:
            executeFunction = data_027e0d34->TryItemGive(ItemId_StarFragment);
            break;
        case DroppedItemTypeId_BeeLarvae:
            executeFunction = data_027e0d34->TryItemGive(ItemId_BeeLarvae);
            break;
        case DroppedItemTypeId_WoodHeart:
            executeFunction = data_027e0d34->TryItemGive(ItemId_WoodHeart);
            break;
        case DroppedItemTypeId_PirateNecklace:
            executeFunction = data_027e0d34->TryItemGive(ItemId_PirateNecklace);
            break;
        default:
            executeFunction = true;
            break;
    }
    if (executeFunction) {
        this->func_ov000_020984d0();
    }
}

ARM void ActorDroppedItem::vfunc_2c(unk32 param1) {
    VecFx32 mUnk_18;
    VecFx32 mUnk_0C;
    unk32 mUnk_04;

    if (!this->func_01fff5d0(param1, 0x0)) {
        return;
    }
    mUnk_18 = this->mPos;
    mUnk_18.y += FLOAT_TO_FX32(0.03113);
    this->func_ov017_020bf5c4(&mUnk_18, 0x400, 0x400, 0x1F, 0x0);

    func_ov000_0205c1f0(&mUnk_04, data_ov031_02110bc8[this->itemTypeId]);
    mUnk_0C = this->mPos;
    mUnk_0C.y += this->mUnk_D8;
    func_ov000_0205c204(&mUnk_04, &mUnk_0C, 0x1000, 0x1000, 0x1F);
}

// non-matching
ARM void ActorDroppedItem::func_ov031_020fa900() {
    bool var1 = true;
    bool var2 = true;
    bool var3 = true;
    if (this->mUnk_4C != 0x3 && this->mUnk_4C != 0x4) {
        var1 = false;
    }
    if (!var1) {
        if (this->mUnk_4C != 0x5) {
            var2 = false;
        }
    }
    if (!var2) {
        if (this->mUnk_4C != 0x6) {
            var3 = false;
        }
    }

    if (var3) {
        SET_FLAG(this->mFlags, ActorFlag_Visible);
        return;
    }

    if (!this->mUnk_118) {
        if (!this->isTimerOut()) {
            return;
        }
        this->mUnk_118 = true;
        this->mUnk_52  = 0x3C;
        this->mUnk_50  = 0;
        return;
    }

    if ((this->mUnk_50 % 8) < 0x4) {
        UNSET_FLAG(this->mFlags, ActorFlag_Visible);
    } else {
        SET_FLAG(this->mFlags, ActorFlag_Visible);
    }

    if (!this->isTimerOut()) {
        return;
    }

    this->func_ov000_020984d0();
}

ARM ActorDroppedItem_c4::ActorDroppedItem_c4(Actor *param_1) :
    Actor_c4(param_1) {
    this->mUnk_20 = param_1;
    this->mUnk_04 = 0x1;
}

#define GET_ACTOR_DROPPED_ITEM(pActor) ((ActorDroppedItem *) (pActor))

// non-matching
ARM unk32 ActorDroppedItem_c4::vfunc_00(Actor_c4_stack param_1, unk32 param_2) {
    if (param_2 != 0) {
        ActorDroppedItem *actorDroppedItem = GET_ACTOR_DROPPED_ITEM(this->mUnk_20);
        actorDroppedItem->mUnk_E0          = param_1.param1;
        actorDroppedItem->func_ov031_020fa424(0x4);
    }
    return Actor_c4::vfunc_00(param_1, param_2);
}

ARM void ActorDroppedItem_c4::vfunc_04() {
    GET_ACTOR_DROPPED_ITEM(this->mUnk_20)->func_ov031_020fa424(0x5);
    Actor_c4::vfunc_04();
}

ARM void ActorDroppedItem_c4::vfunc_0c(unk32 param_1) {
    GET_ACTOR_DROPPED_ITEM(this->mUnk_20)->func_ov031_020fa424(0x1);
    Actor_c4::vfunc_0c(param_1);
}

ARM void ActorDroppedItem_c4::vfunc_08() {
    GET_ACTOR_DROPPED_ITEM(this->mUnk_20)->func_ov031_020fa424(0x6);
    Actor_c4::vfunc_08();
}

// --- end Common ---

// --- Actor SPAR ---

ARM DECL_PROFILE(ActorProfileDroppedArrow);

ARM Actor *ActorProfileDroppedArrow::Create() {
    return new(HeapIndex_2) ActorDroppedItem();
}

ARM ActorProfileDroppedArrow::ActorProfileDroppedArrow() :
    ActorProfile(ActorId_SPAR) {
    this->mUnk_04.Init(0x400);
}

// --- Actor SPBM ---

ARM DECL_PROFILE(ActorProfileDroppedBomb);

ARM Actor *ActorProfileDroppedBomb::Create() {
    return new(HeapIndex_2) ActorDroppedItem();
}

ARM ActorProfileDroppedBomb::ActorProfileDroppedBomb() :
    ActorProfile(ActorId_SPBM) {
    this->mUnk_04.Init(0x400);
}

// --- Actor SPDR ---

ARM DECL_PROFILE(ActorProfileDroppedRedPotion);

ARM Actor *ActorProfileDroppedRedPotion::Create() {
    return new(HeapIndex_2) ActorDroppedItem();
}

ARM ActorProfileDroppedRedPotion::ActorProfileDroppedRedPotion() :
    ActorProfile(ActorId_SPDR) {
    this->mUnk_04.Init(0x400);
}

// --- Actor SPTR ---

ARM DECL_PROFILE(ActorProfileDroppedTreasure);

ARM Actor *ActorProfileDroppedTreasure::Create() {
    return new(HeapIndex_2) ActorDroppedItem();
}

ARM ActorProfileDroppedTreasure::ActorProfileDroppedTreasure() :
    ActorProfile(ActorId_SPTR) {
    this->mUnk_04.Init(0x400);
}

ARM ActorProfileDroppedArrow::~ActorProfileDroppedArrow() {}
ARM ActorProfileDroppedBomb::~ActorProfileDroppedBomb() {}
ARM ActorProfileDroppedRedPotion::~ActorProfileDroppedRedPotion() {}
ARM ActorProfileDroppedTreasure::~ActorProfileDroppedTreasure() {}
