#pragma once

#include "types.h"

enum CargoType_ {
    CargoType_None = -1,
    CargoType_MegaIce,
    CargoType_Wood,
    CargoType_Iron,
    CargoType_Fish,
    CargoType_Cuccos,
    CargoType_Vessel,
    CargoType_DarkOre,
    CargoType_Max,
};

class Cargo {
public:
    /* 00 */ unk32 mType;
    /* 04 */ unk32 mAmount;
    /* 08 */ u32 mDecayTimer;
    /* 0C */

    Cargo() {
        this->Clear();
    }

    void Set(unk32 type, unk32 amount) {
        this->mType       = type;
        this->mAmount     = amount;
        this->mDecayTimer = 0;
    }

    void Clear() {
        this->mType       = CargoType_None;
        this->mAmount     = 0;
        this->mDecayTimer = 0;
    }
};

class CargoManager : public AutoInstance<CargoManager> {
public:
    /* 00 */ Cargo mCargo;
    /* 0C */ Cargo mCargo2;
    /* 18 */ unk32 mUnk_18; // invicibility timer?
    /* 1C */ bool mUnk_1C;
    /* 20 */

    // overlay 1
    CargoManager();
    ~CargoManager();

    void func_ov001_020bf830();

    static void SetInstance(CargoManager *pInstance);
    static bool ClearInstance();
    static void Destroy(); // func_ov001_020bf428

    // overlay 17
    void Update();
    void Reset();
    void Init(unk32 type, unk32 amount);
    void func_ov017_020bebdc();
    void func_ov017_020bec20();
    void RemoveAmount(unk32 decr);
    bool func_ov017_020bec9c();

    static void DoUpdate();
    static bool IsNotUsingTimer(unk32 type);

    // overlay 24
    void SetCargo(unk32 type, unk32 amount);
    void GetTypeAndAmount(unk32 *pType, unk32 *pAmount);
    void func_ov024_020d5900();
    void func_ov024_020d591c();

    static CargoManager *Create();
};

extern CargoManager *gpCargoManager;
