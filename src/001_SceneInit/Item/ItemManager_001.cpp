#include "Actor/ActorManager.hpp"
#include "Item/ItemManager.hpp"
#include "Save/SaveManager.hpp"
#include "System/OverlayManager.hpp"
#include "Unknown/UnkStruct_027e09a0.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"

#include <nitro/mi.h>

extern unk32 data_ov000_020b3000;

Inventory::Inventory() {
    this->mEquippedItem = ItemFlag_None;
    this->mForcedItem   = ItemFlag_None;
    MI_CpuFill32(0, this->mFlags, sizeof(this->mFlags));
    this->mNumRupees        = 0;
    this->mUnk_12           = 0;
    this->mItemRestrictions = 0;
    this->mTearsAmount      = 0;
    this->mKeyAmount        = 0;
    this->mQuiverCapacity   = 0;
    this->mBombBagCapacity  = 0;
    this->mArrowAmount      = 0;
    this->mBombAmount       = 0;

    for (u32 i = 0; i < ARRAY_LEN(this->mPotions); i++) {
        this->mPotions[i] = 0;
    }
}

Inventory::~Inventory() {}

void Inventory::func_ov001_020bb8bc(const InvImportData *pSrc) {
    this->mEquippedItem = pSrc->equippedItem;

    MI_CpuCopy32((void *) &pSrc->flags, this->mFlags, sizeof(this->mFlags));

    this->mNumRupees  = pSrc->numRupees;
    vu16 stack_unused = pSrc->unk_0E;
    this->mUnk_12     = pSrc->unk_0E;

    this->mQuiverCapacity  = pSrc->quiverCapacity;
    this->mBombBagCapacity = pSrc->bombBagCapacity;
    this->mArrowAmount     = pSrc->arrowAmount;
    this->mBombAmount      = pSrc->bombsAmount;
    this->mPotions[0]      = pSrc->potion1;
    this->mPotions[1]      = pSrc->potion2;

    if ((s32) this->mEquippedItem < ItemFlag_None) {
        this->mEquippedItem = ItemFlag_None;
    }

    if ((s32) this->mEquippedItem > ItemFlag_SandRod) {
        this->mEquippedItem = ItemFlag_SandRod;
    }

    if ((s32) this->mEquippedItem != ItemFlag_None) {
        if (!GET_FLAG(this->mFlags, this->mEquippedItem)) {
            this->mEquippedItem = ItemFlag_None;
        }
    }

    if (this->mEquippedItem == ItemFlag_None) {
        for (u32 i = 0; i < ItemFlag_EQUIP_COUNT; i++) {
            if (GET_FLAG(this->mFlags, i)) {
                this->mEquippedItem = i;
                break;
            }
        }
    }

    if (this->mNumRupees > MAX_RUPEES) {
        this->mNumRupees = MAX_RUPEES;
    }

    if ((*(vu16 *) &this->mUnk_12 & 0x01) && !GET_FLAG(this->mFlags, ItemFlag_RecruitUniform)) {
        this->mUnk_12 &= ~0x01;
    }

    if ((*(vu16 *) &this->mUnk_12 & 0x02) && !GET_FLAG(this->mFlags, ItemFlag_AncientShield)) {
        this->mUnk_12 &= ~0x02;
    }

    if (this->mQuiverCapacity > UpgradeCapacity_Tier3) {
        this->mQuiverCapacity = UpgradeCapacity_Tier3;
    }

    if (this->mBombBagCapacity > UpgradeCapacity_Tier3) {
        this->mBombBagCapacity = UpgradeCapacity_Tier3;
    }

    if (this->mArrowAmount > this->GetQuiverCapacity()) {
        this->mArrowAmount = this->GetQuiverCapacity();
    }

    if (this->mBombAmount > this->GetBombBagCapacity()) {
        this->mBombAmount = this->GetBombBagCapacity();
    }
}

void Inventory::func_ov001_020bb9f8() {
    if (data_027e09a4->IsNotCutscene() && gOverlayManager.mLoadedOverlays[OverlaySlot_10] != OverlayIndex_PlayerPhantom) {
        this->mTearsAmount = 0;
    }

    CourseListEntry *pEntry = data_027e09a0->GetCourseEntry(data_027e09a4->CurrentSceneIndex());

    if (pEntry->saveCourseIndex < SaveCourseIndex_Max) {
        this->mKeyAmount = gSaveManager.mUnk_000->unk_030[pEntry->saveCourseIndex].keyAmount;
    } else {
        this->mKeyAmount = 0;
    }

    if (this->mKeyAmount > MAX_KEYS) {
        this->mKeyAmount = MAX_KEYS;
    }
}

void Inventory::func_ov001_020bba54() {
    this->mItemRestrictions = 0;

    if (gOverlayManager.IsPlayerZelda()) {
        this->func_ov096_02179b20();
    }
}

void Inventory::func_ov001_020bba6c() {
    struct {
        void *ptr;
        unk32 actorId;
    } uStack_18;
    uStack_18.ptr     = &data_ov000_020b3000;
    uStack_18.actorId = ActorId_SZKU;

    Actor **ppActor = gpActorManager->func_01fff350(&uStack_18, gpActorManager->mActorTable);
    while (ppActor != gpActorManager->mUnk_08) {
        UNSET_FLAG((*ppActor)->mFlags, ActorFlag_Alive);
        (*ppActor)->func_ov000_020984f0();
        ppActor = gpActorManager->func_01fff350(&uStack_18, ppActor + 1);
    }
}
