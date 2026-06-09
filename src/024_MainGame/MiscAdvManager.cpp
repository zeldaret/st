#include "MainGame/MiscAdvManager.hpp"
#include "Item/ItemManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_02049bac.hpp"
#include <nitro/mi.h>

extern "C" u8 func_ov000_020a9a50();

MiscAdvManager *gpMiscAdvManager = NULL;

MiscAdvManager *MiscAdvManager::Create() {
    return new(HeapIndex_1) MiscAdvManager();
}

MiscAdvManager::MiscAdvManager() {
    this->mLettersRead = 0;
    this->mStampsFlag  = 0;
    this->mSongs       = 0;
}

MiscAdvManager::~MiscAdvManager() {}

void MiscAdvManager::func_ov024_020d6310(MiscAdvManager *pSrc) {
    u16 local_10;

    MI_CpuCopyFast(pSrc, this, sizeof(MiscAdvManager));
    data_02049bac.func_02014a34(&local_10);

    if (local_10 == this->mUnk_28) {
        return;
    }

    if (this->mNumPostedPriceCards == 0) {
        this->func_ov024_020d6530();
    }
}

void MiscAdvManager::GiveLetterOrPriceCard(ItemId itemId) {
    AdventureFlag flag = ItemManager::GetAdvFlagFromItem(itemId);

    if (flag - AdventureFlag_MetPostmanFirstLetter < LetterType_Max) {
        this->GiveLetter(flag);
    }

    if (itemId == ItemId_TenPriceCard) {
        this->GivePriceCard(10);
    }
}

unk32 MiscAdvManager::GetObtainedLetterCount() {
    u8 ret = 0;

    for (u32 i = 0; i < ARRAY_LEN(this->mObtainedLetters); i++) {
        if (this->mObtainedLetters[i] >= 0) {
            ret++;
        }
    }

    return ret;
}

bool MiscAdvManager::GotUnreadLetters() {
    for (u32 i = 0; i < ARRAY_LEN(this->mObtainedLetters); i++) {
        if (this->mObtainedLetters[i] >= 0 && !GET_FLAG2(this->mLettersRead, i)) {
            return true;
        }
    }

    return false;
}

void MiscAdvManager::GiveLetter(AdventureFlag_Half flag) {
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

unk32 MiscAdvManager::func_ov024_020d6468() {
    unk32 ret = 0;

    for (u32 i = 0; i < ARRAY_LEN(this->mObtainedStamps); i++) {
        if (this->mObtainedStamps[i] >= 0) {
            ret++;
        }
    }

    return ret;
}

unk32 MiscAdvManager::GetStamp(unk32 index) {
    return this->mObtainedStamps[index];
}

u16 *MiscAdvManager::GetStampDate(unk32 index) {
    return (u16 *) &this->mStampDates[index];
}

Vec2b *MiscAdvManager::GetStampPos(unk32 index) {
    return (Vec2b *) &this->mStampPositions[index];
}

void MiscAdvManager::func_ov024_020d64b4(s8 param1, unk32 param2, const u16 *param3) {
    if (param2 < 0) {
        return;
    }

    if ((u32) param2 >= 20 || (u32) param1 >= 20) {
        return;
    }

    u32 i;
    for (i = 0; i < 20; i++) {
        if (param1 == this->mObtainedStamps[i]) {
            this->mObtainedStamps[i] = -1;
        }
    }

    u16 local_18;
    data_02049bac.func_02014a34(&local_18);

    this->mObtainedStamps[param2] = param1;

    u16 new_var2              = this->mStampDates[param2];
    u16 temp                  = local_18;
    this->mStampDates[param2] = temp;
    this->mStampDates[param2] = new_var2;
    this->mStampDates[param2] = temp;

    u16 new_var3            = this->mStampPos[param2];
    u16 temp2               = *param3;
    this->mStampPos[param2] = temp2;
    this->mStampPos[param2] = new_var3;
    this->mStampPos[param2] = temp2;
}

void MiscAdvManager::func_ov024_020d6530() {
    this->mLastRandomNum = this->mRandomNum;
    this->mRandomNum     = func_ov000_020a9a50();
    data_02049bac.func_02014a34(&this->mUnk_28);
}

unk32 MiscAdvManager::GetNumPostcards() {
    unk32 numPostcards = this->mNumPriceCards;

    if (numPostcards < 0) {
        numPostcards = 0;
    }

    return numPostcards;
}

void MiscAdvManager::GivePriceCard(unk32 amount) {
    if (this->mNumPriceCards < 0) {
        this->mNumPriceCards = 0;
    }

    if (this->mNumPriceCards + amount > MAX_PRICECARDS) {
        this->mNumPriceCards = MAX_PRICECARDS;
    } else {
        this->mNumPriceCards += amount;
    }
}

void MiscAdvManager::PostPriceCard(unk32 amount, unk32 param2) {
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

void MiscAdvManager::func_ov024_020d6610() {
    this->mNumPostedPriceCards = 0;
    this->mUnk_80              = -1;
    this->func_ov024_020d6530();
}

DECL_INSTANCE(MiscAdvManager, gpMiscAdvManager);
