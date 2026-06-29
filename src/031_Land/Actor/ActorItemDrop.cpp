#include "Actor/ActorItemDrop.hpp"

#include "Actor/ActorManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"
#include "versions.h"

extern "C" void func_01ffedac(u16 *, VecFx32 *);
extern "C" void func_01fff05c(u32 *, UnkStruct_027e0cd8_0C_Base *, VecFx32 *);
extern "C" void func_ov000_0205c1f0(unk32 *, u16);
extern "C" void func_ov000_0205c204(unk32 *, VecFx32 *, unk32, unk32, unk32);
extern "C" void func_ov017_020bf99c();

static const Cylinder data_ov031_02114ba0(0x800);

static const u32 data_ov031_02110bc8[] = {
    0x1D, // ItemDropType_Arrow
    0x1E, // ItemDropType_Bomb
    0x1F, // ItemDropType_RedPotion
    0x20, // ItemDropType_DemonFossil
    0x21, // ItemDropType_StalfosSkull
    0x22, // ItemDropType_StarFragment
    0x23, // ItemDropType_BeeLarvae
    0x24, // ItemDropType_WoodHeart
    0x25, // ItemDropType_PirateNecklace
};

DECL_PROFILE(ActorProfileArrowDrop);

Actor *ActorProfileArrowDrop::Create() {
    return new(HeapIndex_2) ActorItemDrop();
}

ActorProfileArrowDrop::ActorProfileArrowDrop() :
    ActorProfile(ActorId_ArrowDrop) {
    this->mUnk_04.Init(0x400);
}

DECL_PROFILE(ActorProfileBombDrop);

Actor *ActorProfileBombDrop::Create() {
    return new(HeapIndex_2) ActorItemDrop();
}

ActorProfileBombDrop::ActorProfileBombDrop() :
    ActorProfile(ActorId_BombDrop) {
    this->mUnk_04.Init(0x400);
}

DECL_PROFILE(ActorProfileRedPotionDrop);

Actor *ActorProfileRedPotionDrop::Create() {
    return new(HeapIndex_2) ActorItemDrop();
}

ActorProfileRedPotionDrop::ActorProfileRedPotionDrop() :
    ActorProfile(ActorId_RedPotionDrop) {
    this->mUnk_04.Init(0x400);
}

DECL_PROFILE(ActorProfileTreasureDrop);

Actor *ActorProfileTreasureDrop::Create() {
    return new(HeapIndex_2) ActorItemDrop();
}

ActorProfileTreasureDrop::ActorProfileTreasureDrop() :
    ActorProfile(ActorId_TreasureDrop) {
    this->mUnk_04.Init(0x400);
}

void ActorItemDrop::func_ov031_020f9f8c(ActorRef *pOutRef, const VecFx32 *pPos, u32 params, ActorRef ref) {
    ActorParams actorParams;

    actorParams.mUnk_28.Reset();
    actorParams.func_ov000_020975f8();

    actorParams.mInitialPos.x = pPos->x;
    actorParams.mInitialPos.y = pPos->y;
    actorParams.mInitialPos.z = pPos->z;

    actorParams.mUnk_28    = ref;
    actorParams.mParams[0] = params & 0xFF;

    Actor::func_ov000_020973f4(pOutRef, &data_ov000_020b539c_eur, ActorId_TreasureDrop, &actorParams, 0);
}

ActorItemDrop::ActorItemDrop() :
    mUnk_AE(0x0),
    mUnk_B0(0x6),
    mUnk_D8(FLOAT_TO_FX32(0.5f)),
    mUnk_DC(0),
    mUnk_E0(0),
    mUnk_E4(this),
    mUnk_108(0x0) {

    this->mUnk_10C.x = FLOAT_TO_FX32(0.0f);
    this->mUnk_10C.y = FLOAT_TO_FX32(0.0f);
    this->mUnk_10C.z = FLOAT_TO_FX32(0.0f);
    this->mUnk_118   = false;
    this->mUnk_119   = false;

    switch (this->GetActorId()) {
        case ActorId_ArrowDrop:
            if (GET_FLAG(data_027e0ce0->mUnk_2C->mFlags, ItemFlag_Bow)) {
                this->mItemTypeId = ItemDropType_Arrow;
                this->mUnk_D8     = FLOAT_TO_FX32(0.5f);
            } else {
                this->mItemTypeId = ItemDropType_Unknown;
            }
            break;
        case ActorId_BombDrop:
            if (GET_FLAG(data_027e0ce0->mUnk_2C->mFlags, ItemFlag_Bombs)) {
                this->mItemTypeId = ItemDropType_Bomb;
                this->mUnk_D8     = FLOAT_TO_FX32(0.3f);
            } else {
                this->mItemTypeId = ItemDropType_Unknown;
            }
            break;
        case ActorId_RedPotionDrop:
            this->mItemTypeId = ItemDropType_RedPotion;
            this->mUnk_D8     = FLOAT_TO_FX32(0.4f);
            this->mUnk_119    = true;
            break;
        case ActorId_TreasureDrop:
            ItemDropType itemType;

            switch (this->mUnk_5C.mParams[0]) {
                case 0:
                    itemType = ItemDropType_DemonFossil;
                    break;
                case 1:
                    itemType = ItemDropType_StalfosSkull;
                    break;
                case 2:
                    itemType = ItemDropType_StarFragment;
                    break;
                case 3:
                    itemType = ItemDropType_BeeLarvae;
                    break;
                case 4:
                    itemType = ItemDropType_WoodHeart;
                    break;
                case 9:
                    itemType = ItemDropType_PirateNecklace;
                    break;
                default:
                    itemType = ItemDropType_Unknown;
                    break;
            }

            this->mItemTypeId = itemType;
            this->mUnk_D8     = FLOAT_TO_FX32(0.3f);
            this->mUnk_119    = true;
            break;
        default:
            this->mItemTypeId = ItemDropType_Unknown;
            break;
    }

    this->mUnk_B4.mUnk_04 = 0x13100;
    this->mUnk_40         = &this->mUnk_E4;

    u16 sp0;
    func_01ffedac(&sp0, &this->mPos);

    if (data_027e0cd8->mUnk_0C->func_ov000_02080180(&sp0) == 0x5) {
        this->mUnk_34 = (Cylinder *) &data_ov031_02114ba0;
    }
}

bool ActorItemDrop::vfunc_18(unk32 param1) {
    if (this->mItemTypeId >= ItemDropType_Unknown) {
        return false;
    }

    this->mUnk_52 = FLOAT_TO_FX32(0.1173f);
    this->mUnk_50 = FLOAT_TO_FX32(0.0f);
    this->SetState(ActorItemDropState_0);
    return true;
}

void ActorItemDrop::vfunc_20() {
    this->func_ov031_020fa260();
}

void ActorItemDrop::vfunc_24() {
    if (this->mState == ActorItemDropState_6) {
        this->func_ov031_020fa260();
    }
}

static PTMF<ActorItemDrop> data_ov031_02114bb0[ActorItemDropState_Max] = {
    ActorItemDrop::func_ov031_020fa46c, // ActorItemDropState_0
    ActorItemDrop::func_ov031_020fa4a0, // ActorItemDropState_1
    ActorItemDrop::func_ov031_020fa568, // ActorItemDropState_2
    ActorItemDrop::func_ov031_020fa5f0, // ActorItemDropState_3
    ActorItemDrop::func_ov031_020fa664, // ActorItemDropState_4
    ActorItemDrop::func_ov031_020fa678, // ActorItemDropState_5
    ActorItemDrop::func_ov031_020fa72c, // ActorItemDropState_6
};

void ActorItemDrop::func_ov031_020fa260() {
    this->mUnk_3C = &this->mUnk_B4;

    CALL_PTMF(PTMF<ActorItemDrop>, data_ov031_02114bb0[this->mState]);

    if (this->IsTimerOut()) {
        this->func_ov000_020989e0();

        if (this->mUnk_B4.mUnk_08 & 0x3FFFF) {
            switch (this->mUnk_B4.mUnk_1C) {
                case 8:
                case 16:
                    if (this->mUnk_119) {
                        bool var_r1_3 = false;

                        if (this->mUnk_B4.mUnk_0C.type_index == 0x100 && this->mUnk_B4.mUnk_0C.unk_id == 0) {
                            var_r1_3 = true;
                        }

                        if (var_r1_3 || (this->mUnk_B4.mUnk_0C.type_index == 0x100 && this->mUnk_B4.mUnk_0C.unk_id == 1 &&
                                         data_027e0ce0->func_01fff1e0())) {
                            this->SetState(ActorItemDropState_6);
                        }
                    } else if (this->mUnk_B4.mUnk_0C.type_index & 0x100) {
                        this->SetState(ActorItemDropState_6);
                    }
                    break;
                case 12:
                    this->mUnk_DC = this->mUnk_B4.mUnk_0C;
                    this->mUnk_B4.mUnk_04 &= ~0x1000;
                    this->SetState(ActorItemDropState_3);
                    break;
                default:
                    break;
            }
        }
    }

    if (this->mUnk_5C.mUnk_24 < 0 && this->mState != ActorItemDropState_6) {
        this->func_ov031_020fa900();
    }

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    if (this->mState != ActorItemDropState_3) {
        this->func_ov000_02098b8c(0x0, 0x0);
    }

    if (this->mUnk_46 & 3) {
        this->mVel.y = FLOAT_TO_FX32(0.0f);
    }

    VecFx32_Add(&this->mPos, &this->mUnk_10C, &this->mPos);
    this->mUnk_10C.x = FLOAT_TO_FX32(0.0f);
    this->mUnk_10C.y = FLOAT_TO_FX32(0.0f);
    this->mUnk_10C.z = FLOAT_TO_FX32(0.0f);
}

static PTMF<ActorItemDrop> data_ov031_02114be8[ActorItemDropState_Max] = {
    ActorItemDrop::func_ov031_020fa468, // ActorItemDropState_0
    ActorItemDrop::func_ov031_020fa494, // ActorItemDropState_1
    ActorItemDrop::func_ov031_020fa524, // ActorItemDropState_2
    ActorItemDrop::func_ov031_020fa5d8, // ActorItemDropState_3
    ActorItemDrop::func_ov031_020fa650, // ActorItemDropState_4
    ActorItemDrop::func_ov031_020fa668, // ActorItemDropState_5
    ActorItemDrop::func_ov031_020fa6c8, // ActorItemDropState_6
};

void ActorItemDrop::SetState(ActorState state) {
#if IS_JP
    if (this->mState == ActorItemDropState_6 && state == ActorItemDropState_6) {
        return;
    }
#endif

    this->mState  = state;
    this->mUnk_44 = 0x9C;
    CALL_PTMF(PTMF<ActorItemDrop>, data_ov031_02114be8[this->mState]);
}

void ActorItemDrop::func_ov031_020fa468() {}

void ActorItemDrop::func_ov031_020fa46c() {
    func_ov000_02098838();

    if (this->mVel.y > FLOAT_TO_FX32(0.0f)) {
        return;
    }

    this->SetState(ActorItemDropState_1);
}

void ActorItemDrop::func_ov031_020fa494() {
    this->mUnk_44 = 0x9F;
}

void ActorItemDrop::func_ov031_020fa4a0() {
    u32 stack;

    func_ov000_02098838();

    if (!(this->mUnk_46 & 0x3)) {
        return;
    }

    func_01fff05c(&stack, data_027e0cd8->mUnk_0C, &this->mPos);

    if (((stack >> 0x5) & 0x3) == 0x2 && this->mItemTypeId != ItemDropType_Arrow && this->mItemTypeId != ItemDropType_Bomb) {
        this->func_ov000_020984d0();
        return;
    }

    this->SetState(ActorItemDropState_2);
}

void ActorItemDrop::func_ov031_020fa524() {
    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.y = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);

    if (!this->mUnk_118 && this->mUnk_52 - this->mUnk_50 > FLOAT_TO_FX32(0.044f)) {
        this->mUnk_52 = FLOAT_TO_FX32(0.044f);
        this->mUnk_50 = FLOAT_TO_FX32(0.0f);
    }

    this->mUnk_44 = 0x9F;
}

// non-matching
void ActorItemDrop::func_ov031_020fa568() {
    if (this->mUnk_5C.mUnk_24 >= 0) {
        return;
    }

    switch (this->mUnk_108) {
        case 0x0:
            if (!(this->mUnk_46 & 0x3)) {
                this->mUnk_108++;
            }
            break;
        case 0x1:
            this->func_ov000_02098838();

            if (this->mUnk_46 & 0x3) {
                this->mVel.x   = FLOAT_TO_FX32(0.0f);
                this->mVel.y   = FLOAT_TO_FX32(0.0f);
                this->mVel.z   = FLOAT_TO_FX32(0.0f);
                this->mUnk_108 = 0x0;
            }

            break;
        default:
            break;
    }
}

void ActorItemDrop::func_ov031_020fa5d8() {
    func_ov017_020bf99c();
    this->mUnk_B4.func_ov000_02097bec();
}

void ActorItemDrop::func_ov031_020fa5f0() {
    this->func_ov017_020bf9c8(gpActorManager->func_01fff3b4(this->mUnk_DC));

    if (GET_FLAG(this->mFlags, ActorFlag_5)) {
        this->mVel.x = FLOAT_TO_FX32(0.0f);
        this->mVel.y = FLOAT_TO_FX32(0.0f);
        this->mVel.z = FLOAT_TO_FX32(0.0f);
        this->mUnk_B4.mUnk_04 |= 0x1000;
        this->SetState(ActorItemDropState_1);
    }
}

void ActorItemDrop::func_ov031_020fa650() {
    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.y = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);
}

void ActorItemDrop::func_ov031_020fa664() {}

void ActorItemDrop::func_ov031_020fa668() {
    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);
}

class UnkActor_ov031_020fa678 : public Actor {
public:
    /* 000 (base) */
    /* 94 */ STRUCT_PAD(0x94, 0xE8);
    /* E8 */ VecFx32 mUnk_E8;
};

void ActorItemDrop::func_ov031_020fa678() {
    UnkActor_ov031_020fa678 *actor = (UnkActor_ov031_020fa678 *) gpActorManager->func_01fff3b4(this->mUnk_E0);

    if (actor == NULL) {
        this->SetState(ActorItemDropState_1);
        return;
    }

    VecFx32_Copy(&actor->mUnk_E8, &this->mPos);
}

void ActorItemDrop::func_ov031_020fa6c8() {
    this->mUnk_52    = FLOAT_TO_FX32(15.9998f);
    this->mUnk_50    = FLOAT_TO_FX32(0.0f);
    this->mVel.x     = FLOAT_TO_FX32(0.0f);
    this->mVel.y     = FLOAT_TO_FX32(0.0f);
    this->mVel.z     = FLOAT_TO_FX32(0.0f);
    this->mUnk_4A[0] = 0x0;
    this->mUnk_44    = 0x0;

    this->mUnk_B4.func_ov000_02097bec();
    UNSET_FLAG(this->mFlags, ActorFlag_Visible);
    data_027e09a8->func_ov000_02071b30(0x77, &this->mPos, 0x0);
}

void ActorItemDrop::func_ov031_020fa72c() {
    this->mUnk_3C = NULL;

    if (data_027e09b8->func_01ffd420()) {
        return;
    }

    bool executeFunction = true;
    switch (this->mItemTypeId) {
        case ItemDropType_Arrow:
            data_027e0ce0->mUnk_2C->GiveArrows(5);
            break;
        case ItemDropType_Bomb:
            data_027e0ce0->mUnk_2C->GiveBombs(3);
            break;
        case ItemDropType_RedPotion:
            executeFunction = data_027e0d34->TryItemGive(ItemId_RedPotion);
            break;
        case ItemDropType_DemonFossil:
            executeFunction = data_027e0d34->TryItemGive(ItemId_DemonFossil);
            break;
        case ItemDropType_StalfosSkull:
            executeFunction = data_027e0d34->TryItemGive(ItemId_StalfosSkull);
            break;
        case ItemDropType_StarFragment:
            executeFunction = data_027e0d34->TryItemGive(ItemId_StarFragment);
            break;
        case ItemDropType_BeeLarvae:
            executeFunction = data_027e0d34->TryItemGive(ItemId_BeeLarvae);
            break;
        case ItemDropType_WoodHeart:
            executeFunction = data_027e0d34->TryItemGive(ItemId_WoodHeart);
            break;
        case ItemDropType_PirateNecklace:
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

void ActorItemDrop::vfunc_2C(unk32 param1) {
    VecFx32 vec1;
    VecFx32 vec2;
    unk32 value;

    if (!this->func_01fff5d0(param1, 0x0)) {
        return;
    }

    vec1 = this->mPos;
    vec1.y += FLOAT_TO_FX32(0.03113);
    this->func_ov017_020bf5c4(&vec1, 0x400, 0x400, 0x1F, 0x0);

    func_ov000_0205c1f0(&value, data_ov031_02110bc8[this->mItemTypeId]);
    vec2 = this->mPos;
    vec2.y += this->mUnk_D8;
    func_ov000_0205c204(&value, &vec2, 0x1000, 0x1000, 0x1F);
}

void ActorItemDrop::func_ov031_020fa900() {
    bool var_r2 = true;
    bool var_r3 = true;
    bool var_ip = true;

    if (this->mState != ActorItemDropState_3 && this->mState != ActorItemDropState_4) {
        var_ip = false;
    }

    if (!var_ip && this->mState != ActorItemDropState_5) {
        var_r3 = false;
    }

    if (!var_r3 && this->mState != ActorItemDropState_6) {
        var_r2 = false;
    }

    if (var_r2) {
        SET_FLAG(this->mFlags, ActorFlag_Visible);
    } else if (!this->mUnk_118) {
        if (this->Actor::IsTimerOut()) {
            this->mUnk_118 = true;
            this->mUnk_52  = 60;
            this->mUnk_50  = 0;
        }
    } else {
        if ((this->mUnk_50 % 8) < 4) {
            UNSET_FLAG(this->mFlags, ActorFlag_Visible);
        } else {
            SET_FLAG(this->mFlags, ActorFlag_Visible);
        }

        if (this->Actor::IsTimerOut()) {
            this->func_ov000_020984d0();
        }
    }
}

ActorItemDrop_C4::ActorItemDrop_C4(Actor *param1) :
    Actor_C4(param1) {
    this->mUnk_20 = param1;
    this->mUnk_04 = 0x1;
}

bool ActorItemDrop_C4::vfunc_00(ActorRef ref, unk32 param2) {
    if (param2 != 0) {
        ActorItemDrop *actorDroppedItem = this->GetActorPtr<ActorItemDrop>();
        actorDroppedItem->mUnk_E0       = ref;
        actorDroppedItem->SetState(ActorItemDropState_4);
    }

    return Actor_C4::vfunc_00(ref, param2);
}

void ActorItemDrop_C4::vfunc_04() {
    this->GetActorPtr<ActorItemDrop>()->SetState(ActorItemDropState_5);
    Actor_C4::vfunc_04();
}

void ActorItemDrop_C4::vfunc_0C(unk32 param1) {
    this->GetActorPtr<ActorItemDrop>()->SetState(ActorItemDropState_1);
    Actor_C4::vfunc_0C(param1);
}

void ActorItemDrop_C4::vfunc_08() {
    this->GetActorPtr<ActorItemDrop>()->SetState(ActorItemDropState_6);
    Actor_C4::vfunc_08();
}
