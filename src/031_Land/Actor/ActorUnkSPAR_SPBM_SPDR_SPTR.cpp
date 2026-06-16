#include "Actor/ActorUnkSPAR_SPBM_SPDR_SPTR.hpp"

#include "Actor/ActorManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"

// --- Actor Common ---

extern UnkStruct_027e09a8 *data_027e09a8;
extern UnkStruct_027e0cd8 *data_027e0cd8;

extern "C" void func_01fff05c(u32 *, UnkStruct_027e0cd8_0c *, VecFx32 *);
extern "C" bool func_ov000_02098838();
extern "C" void func_ov017_020bf99c();

// non-matching
ARM ActorDroppedItem::ActorDroppedItem() {}

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
// non-matching
ARM bool ActorDroppedItem::func_ov031_020fa00c() {}

ARM bool ActorDroppedItem::func_ov031_020fa20c() {
    if (this->mUnk_D4 >= (u32) 0x9) {
        return false;
    }
    this->mUnk_52 = 0x1E0;
    this->mUnk_50 = 0x0;
    this->func_ov031_020fa424(0x0);
    return true;
}

ARM void ActorDroppedItem::func_ov031_020fa23c() {
    this->func_ov031_020fa260();
}

ARM void ActorDroppedItem::func_ov031_020fa248() {
    if (this->mUnk_4C != 0x6) {
        return;
    }
    this->func_ov031_020fa260();
}

// non-matching
ARM void ActorDroppedItem::func_ov031_020fa260() {}

static PTMF<ActorDroppedItem> data_ov031_02114be8[] = {
    ActorDroppedItem::func_ov031_020fa468, ActorDroppedItem::func_ov031_020fa494, ActorDroppedItem::func_ov031_020fa524,
    ActorDroppedItem::func_ov031_020fa5d8, ActorDroppedItem::func_ov031_020fa650, ActorDroppedItem::func_ov031_020fa668,
    ActorDroppedItem::func_ov031_020fa6c8};

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
    if (((stack >> 0x5) & 0x3) == 0x2 && this->mUnk_D4 != 0x0 && this->mUnk_D4 != 0x1) {
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
            func_ov000_02098838();
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

// non-matching
ARM void ActorDroppedItem::func_ov031_020fa72c() {}

// non-matching
ARM void ActorDroppedItem::func_ov031_020fa83c() {}
// non-matching
ARM void ActorDroppedItem::func_ov031_020fa900() {}
// non-matching
ARM void ActorDroppedItem::func_ov031_020fa9f8() {}

#define GET_ACTOR_DROPPED_ITEM(pActor) ((ActorDroppedItem *) (pActor))

// non-matching
ARM void ActorDroppedItem_c4::func_ov031_020faa30(Actor_c4_stack param_1, unk32 param_2) {
    if (param_2 != 0) {
        ActorDroppedItem *actorDroppedItem = GET_ACTOR_DROPPED_ITEM(this->mUnk_20);
        actorDroppedItem->mUnk_E0          = param_1.param1;
        actorDroppedItem->func_ov031_020fa424(0x4);
    }
    Actor_c4::vfunc_00(param_1, param_2);
}

ARM void ActorDroppedItem_c4::func_ov031_020faa74() {
    GET_ACTOR_DROPPED_ITEM(this->mUnk_20)->func_ov031_020fa424(0x5);
    Actor_c4::vfunc_04();
}

ARM void ActorDroppedItem_c4::func_ov031_020faa94(unk32 param_1) {
    GET_ACTOR_DROPPED_ITEM(this->mUnk_20)->func_ov031_020fa424(0x1);
    Actor_c4::vfunc_0c(param_1);
}

ARM void ActorDroppedItem_c4::func_ov031_020faabc() {
    GET_ACTOR_DROPPED_ITEM(this->mUnk_20)->func_ov031_020fa424(0x6);
    Actor_c4::vfunc_08();
}

// --- end Common ---

// --- Actor SPAR ---

ARM DECL_PROFILE(ActorProfileUnkSPAR);

ARM Actor *ActorProfileUnkSPAR::Create() {
    return new(HeapIndex_2) ActorUnkSPAR();
}

ARM ActorProfileUnkSPAR::ActorProfileUnkSPAR() :
    ActorProfile(ActorId_SPAR) {}

ARM ActorUnkSPAR::ActorUnkSPAR() {}

// --- Actor SPBM ---

ARM DECL_PROFILE(ActorProfileUnkSPBM);

ARM Actor *ActorProfileUnkSPBM::Create() {
    return new(HeapIndex_2) ActorUnkSPBM();
}

ARM ActorProfileUnkSPBM::ActorProfileUnkSPBM() :
    ActorProfile(ActorId_SPBM) {}

ARM ActorUnkSPBM::ActorUnkSPBM() {}

// --- Actor SPDR ---

ARM DECL_PROFILE(ActorProfileUnkSPDR);

ARM Actor *ActorProfileUnkSPDR::Create() {
    return new(HeapIndex_2) ActorUnkSPDR();
}

ARM ActorProfileUnkSPDR::ActorProfileUnkSPDR() :
    ActorProfile(ActorId_SPDR) {}

ARM ActorUnkSPDR::ActorUnkSPDR() {}

// --- Actor SPTR ---

ARM DECL_PROFILE(ActorProfileUnkSPTR);

ARM Actor *ActorProfileUnkSPTR::Create() {
    return new(HeapIndex_2) ActorUnkSPTR();
}

ARM ActorProfileUnkSPTR::ActorProfileUnkSPTR() :
    ActorProfile(ActorId_SPTR) {}

ARM ActorUnkSPTR::ActorUnkSPTR() {}

//
