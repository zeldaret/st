#include "MainGame/PassengerManager.hpp"

THUMB_BEGIN

inline bool Test(s32 val) {
    bool ret = false;

    if (val > 18 || val >= 16) {
        ret = true;
    }

    return ret;
}

inline bool Test2(s32 val) {
    bool ret = true;

    if (val != 15 && !Test(val)) {
        ret = false;
    }

    return ret;
}

inline bool Test3(s32 val) {
    bool ret = true;

    if (!Test2(val)) {
        if (*((volatile unk32 *) &data_027e09a4->mUnk_00.mSceneIndex) != 36) {
            ret = false;
        }
    }

    return ret;
}

// https://decomp.me/scratch/svwnb
bool PassengerManager::func_ov001_020bf870() {
    s32 sceneIndex = data_027e09a4->mUnk_00.mSceneIndex;
    bool ret       = true;

    if (!Test3(sceneIndex)) {
        if (*((volatile unk32 *) &data_027e09a4->mUnk_00.mSceneIndex) != 37) {
            ret = false;
        }
    }

    return ret;
}

PassengerManager::PassengerManager() {
    this->mDate   = 0;
    this->mUnk_2C = -1;
    this->mUnk_30 = -1;
}

PassengerManager::~PassengerManager() {}

void PassengerManager::func_ov001_020bf8e4() {
    this->func_ov001_020bf910();

    if (this->CanCompleteTrip() && this->func_ov001_020bf870()) {
        this->SetFailedFlag();
        this->Reset();
    }
}

void PassengerManager::func_ov001_020bf90c() {}

void PassengerManager::func_ov001_020bf910() {}

// non-matching
bool PassengerManager::func_ov001_020bfa1c() {
    volatile u16 date[2];
    u16 date2;
    date[1] = date[0] = this->GetDate();

    return !((date2 << 0x1B) & 1);
}

void PassengerManager::SetInstance(PassengerManager *pInstance) {
    gpPassengerManager = pInstance;
}

bool PassengerManager::ClearInstance() {
    gpPassengerManager = NULL;
    //! @bug missing return
}

THUMB_END
