#include "Item/ItemManager.hpp"
#include "Save/SaveManager.hpp"
#include "System/OverlayManager.hpp"
#include "Unknown/UnkStruct_027e09a0.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"

THUMB void ItemManager::func_ov001_020bb9f8() {
    if (data_027e09a4->IsNotCutscene() && gOverlayManager.mLoadedOverlays[OverlaySlot_10] != OverlayIndex_PlayerPhantom) {
        this->mTearsAmount = 0;
    }

    CourseEntry *pEntry = data_027e09a0->GetCourseEntry(data_027e09a4->mUnk_00.mSceneIndex);

    if (pEntry->mSaveCourseIndex < SaveCourseIndex_Max) {
        this->mKeyAmount = gSaveManager.mUnk_000->mUnk_36[pEntry->mSaveCourseIndex].mKeyAmount;
    } else {
        this->mKeyAmount = 0;
    }

    if (this->mKeyAmount > MAX_KEYS) {
        this->mKeyAmount = MAX_KEYS;
    }
}
