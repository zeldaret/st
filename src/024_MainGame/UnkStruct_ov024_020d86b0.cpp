#include "Unknown/UnkStruct_ov024_020d86b0.hpp"
#include "Item/ItemManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkMemFuncs.h"
#include "Unknown/UnkStruct_02049bac.hpp"

extern "C" u8 func_ov000_020a9a50();

UnkStruct_ov024_020d86b0 *UnkStruct_ov024_020d86b0::Create() {
    return new(HeapIndex_1) UnkStruct_ov024_020d86b0();
}

UnkStruct_ov024_020d86b0::UnkStruct_ov024_020d86b0() {
    UnkStruct_ov024_020d86b0::SetInstance(this);
    this->mLettersRead = 0;
    this->mStampsFlag  = 0;
    this->mSongs       = 0;
}

UnkStruct_ov024_020d86b0::~UnkStruct_ov024_020d86b0() {
    UnkStruct_ov024_020d86b0::ClearInstance();
}

void UnkStruct_ov024_020d86b0::func_ov024_020d6310(UnkStruct_ov024_020d86b0 *pSrc) {
    u16 local_10;

    _MI_CpuCopy(pSrc, this, sizeof(UnkStruct_ov024_020d86b0));
    data_02049bac.func_02014a34(&local_10);

    if (local_10 == this->mUnk_28) {
        return;
    }

    if (this->mNumPostedPriceCards == 0) {
        this->func_ov024_020d6530();
    }
}

void UnkStruct_ov024_020d86b0::GiveLetterOrPriceCard(ItemId itemId) {
    AdventureFlag flag = ItemManager::func_ov110_02185db4(itemId);

    if (flag - AdventureFlag_MetPostmanFirstLetter < LetterType_Max) {
        this->GiveLetter(flag);
    }

    if (itemId == ItemId_TenPriceCard) {
        this->GivePriceCard(10);
    }
}

unk32 UnkStruct_ov024_020d86b0::GetObtainedLetterCount() {
    u8 ret = 0;

    for (u32 i = 0; i < ARRAY_LEN(this->mObtainedLetters); i++) {
        if (this->mObtainedLetters[i] >= 0) {
            ret++;
        }
    }

    return ret;
}

bool UnkStruct_ov024_020d86b0::GotUnreadLetters() {
    for (u32 i = 0; i < ARRAY_LEN(this->mObtainedLetters); i++) {
        if (this->mObtainedLetters[i] >= 0 && !GET_FLAG2(this->mLettersRead, i)) {
            return true;
        }
    }

    return false;
}

void UnkStruct_ov024_020d86b0::GiveLetter(AdventureFlag_Half flag) {
    s8 letterType = flag - AdventureFlag_MetPostmanFirstLetter;
    u32 i;

    for (i = 0; i < ARRAY_LEN(this->mObtainedLetters); i++) {
        if (letterType == this->mObtainedLetters[i]) {
            return;
        }

        // LetterType_None
        if (this->mObtainedLetters[i] < 0) {
            break;
        }
    }

    if (i < ARRAY_LEN(this->mObtainedLetters)) {
        this->mObtainedLetters[i] = letterType;
    }
}

unk32 UnkStruct_ov024_020d86b0::func_ov024_020d6468() {
    unk32 ret = 0;

    for (u32 i = 0; i < ARRAY_LEN(this->mObtainedStamps); i++) {
        if (this->mObtainedStamps[i] >= 0) {
            ret++;
        }
    }

    return ret;
}

unk32 UnkStruct_ov024_020d86b0::GetStamp(unk32 index) {
    return this->mObtainedStamps[index];
}

u16 *UnkStruct_ov024_020d86b0::GetStampDate(unk32 index) {
    return &this->mStampDates[index];
}

Vec2b *UnkStruct_ov024_020d86b0::GetStampPos(unk32 index) {
    return &this->mStampPositions[index];
}

void UnkStruct_ov024_020d86b0::func_ov024_020d64b4(unk32 param1, unk32 param2, Vec2b *param3) {
    if (param2 < 0) {
        return;
    }

    if ((u32) param2 >= StampType_Max || (u32) param1 >= StampType_Max) {
        return;
    }

    for (u32 i = 0; i < ARRAY_LEN(this->mObtainedStamps); i++) {
        if (param1 == this->mObtainedStamps[i]) {
            this->mObtainedStamps[i] = -1;
        }
    }

    u16 local_18;
    data_02049bac.func_02014a34((void *) &local_18);
    this->mObtainedStamps[param2] = param1;
    this->mStampDates[param2]     = local_18;

    u16 var                                 = *(u16 *) param3;
    ((u16 *) this->mStampPositions)[param2] = var;
}

void UnkStruct_ov024_020d86b0::func_ov024_020d6530() {
    this->mLastRandomNum = this->mRandomNum;
    this->mRandomNum     = func_ov000_020a9a50();
    data_02049bac.func_02014a34(&this->mUnk_28);
}

unk32 UnkStruct_ov024_020d86b0::GetNumPostcards() {
    unk32 numPostcards = this->mNumPriceCards;

    if (numPostcards < 0) {
        numPostcards = 0;
    }

    return numPostcards;
}

void UnkStruct_ov024_020d86b0::GivePriceCard(unk32 amount) {
    if (this->mNumPriceCards < 0) {
        this->mNumPriceCards = 0;
    }

    if (this->mNumPriceCards + amount > MAX_PRICECARDS) {
        this->mNumPriceCards = MAX_PRICECARDS;
    } else {
        this->mNumPriceCards += amount;
    }
}

void UnkStruct_ov024_020d86b0::PostPriceCard(unk32 amount, unk32 param2) {
    if (amount > this->mNumPriceCards) {
        this->mNumPriceCards = 0;
    } else {
        this->mNumPriceCards -= amount;
    }

    if (this->mNumPostedPriceCards + amount > MAX_PRICECARDS) {
        this->mNumPostedPriceCards = MAX_PRICECARDS;
    } else {
        this->mNumPostedPriceCards += amount;
    }

    u16 date;
    data_02049bac.func_02014a34(&date);
    this->mPostDate = date;

    if (this->mUnk_80 == -1 || param2 < this->mUnk_80) {
        this->mUnk_80 = param2;
    }
}

void UnkStruct_ov024_020d86b0::func_ov024_020d6610() {
    this->mNumPostedPriceCards = 0;
    this->mUnk_80              = -1;
    this->func_ov024_020d6530();
}

void UnkStruct_ov024_020d86b0::SetInstance(UnkStruct_ov024_020d86b0 *pInstance) {
    data_ov024_020d86b0 = pInstance;
}

int UnkStruct_ov024_020d86b0::ClearInstance() {
    data_ov024_020d86b0 = NULL;
    //! @bug: missing return
}
