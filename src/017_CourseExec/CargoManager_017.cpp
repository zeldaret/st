#include "MainGame/CargoManager.hpp"
#include "Save/AdventureFlags.hpp"
#include "Unknown/UnkStruct_020d8698.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0d00.hpp"

struct CargoInfos {
    /* 00 */ u16 timerMax;
    /* 02 */ s8 amountDecr;
    /* 03 */ s8 amountDamageDecr;
    /* 04 */ s16 amount;
    /* 06 */
};

static const CargoInfos sCargoInfos[] = {
    {
        // CargoType_MegaIce
        .timerMax         = 600,
        .amountDecr       = 1,
        .amountDamageDecr = 3,
        .amount           = 5,
    },
    {
        // CargoType_Wood
        .timerMax         = 0,
        .amountDecr       = 3,
        .amountDamageDecr = 3,
        .amount           = 5,
    },
    {
        // CargoType_Iron
        .timerMax         = 0,
        .amountDecr       = 3,
        .amountDamageDecr = 3,
        .amount           = 5,
    },
    {
        // CargoType_Fish
        .timerMax         = 900,
        .amountDecr       = 3,
        .amountDamageDecr = 3,
        .amount           = 5,
    },
    {
        // CargoType_Cuccos
        .timerMax         = 0,
        .amountDecr       = 1,
        .amountDamageDecr = 1,
        .amount           = 1,
    },
    {
        // CargoType_Vessel
        .timerMax         = 0,
        .amountDecr       = 1,
        .amountDamageDecr = 1,
        .amount           = 0,
    },
    {
        // CargoType_DarkOre
        .timerMax         = 900,
        .amountDecr       = 1,
        .amountDamageDecr = 3,
        .amount           = 5,
    },
};

void CargoManager::DoUpdate() {
    gpCargoManager->Update();
}

bool CargoManager::IsNotUsingTimer(unk32 type) {
    if (type == CargoType_None) {
        return true;
    }

    if (sCargoInfos[type].timerMax == 0) {
        return true;
    }

    return false;
}

void CargoManager::Update() {
    if (!UnkStruct_027e0ce0::func_ov000_0205c904()->func_ov024_020d3dcc()) {
        return;
    }

    if (!CargoManager::IsNotUsingTimer(this->mCargo.mType)) {
        if (this->mCargo.mType != CargoType_None && this->mCargo.mAmount != 0) {
            //! TODO: fake match?
            unk32 type = *((volatile unk32 *) &this->mCargo.mType);

            if (type == CargoType_DarkOre) {
                if (this->func_ov017_020bec9c()) {
                    this->mCargo.mDecayTimer++;
                }
            } else if (type == CargoType_MegaIce || type == CargoType_Fish) {
                // the timer won't increase if we are in snow realm
                if (data_027e09a4->GetCurrentCourseEntry()->unk_1B & 0x20) {
                    this->mCargo.mDecayTimer++;
                }
            } else {
                this->mCargo.mDecayTimer++;
            }

            if (this->mCargo.mDecayTimer >= sCargoInfos[this->mCargo.mType].timerMax) {
                this->RemoveAmount(1);
                this->mCargo.mDecayTimer = 0;
                data_ov024_020d8698->func_ov024_020cd3f0(true);
            }
        }
    }

    if (this->mCargo.mAmount <= sCargoInfos[this->mCargo.mType].amount) {
        data_ov024_020d8698->func_ov024_020cd3e0(true);
    } else {
        data_ov024_020d8698->func_ov024_020cd3e0(false);
    }

    if (this->mUnk_18 > 0) {
        this->mUnk_18--;
    }
}

void CargoManager::Reset() {
    this->mCargo.Clear();
    this->mCargo2.Clear();
    UnkStruct_027e0d00::func_ov000_0205c944()->func_ov024_020d4d10();
}

void CargoManager::Init(unk32 type, unk32 amount) {
    this->mCargo.Set(type, amount);
    this->mCargo2.Set(type, amount);

    UnkStruct_027e0d00 *pUnkStruct_027e0d00 = UnkStruct_027e0d00::func_ov000_0205c944();
    pUnkStruct_027e0d00->func_ov024_020d4d10();
    pUnkStruct_027e0d00->func_ov024_020d4cc0(this->mCargo.mType);

    data_ov024_020d8698->func_ov024_020cd410();
    data_ov024_020d8698->func_ov024_020cd3f0(true);
}

void CargoManager::func_ov017_020bebdc() {
    if (this->mCargo.mType > CargoType_None && this->mCargo.mType < CargoType_Max) {
        this->RemoveAmount(sCargoInfos[this->mCargo.mType].amountDecr);
        data_ov024_020d8698->func_ov024_020cd3d0();
    }
}

void CargoManager::func_ov017_020bec20() {
    if (this->mCargo.mType > CargoType_None && this->mCargo.mType < CargoType_Max) {
        this->mUnk_18 = 0x1E;
        this->RemoveAmount(sCargoInfos[this->mCargo.mType].amountDamageDecr);
        data_ov024_020d8698->func_ov024_020cd3d0();
    }
}

void CargoManager::RemoveAmount(unk32 decr) {
    unk32 prevAmount = this->mCargo.mAmount;

    if (prevAmount >= decr) {
        this->mCargo.mAmount = prevAmount - decr;
    } else {
        this->mCargo.mAmount = 0;
    }

    if (prevAmount > 0 && this->mCargo.mAmount == 0) {
        this->mUnk_1C = true;
    }
}

bool CargoManager::func_ov017_020bec9c() {
    if (data_027e09a4->IsTrain()) {
        return data_027e0cd8->mUnk_0C->mUnk_160->func_ov026_02106aa8();
    }

    return false;
}
