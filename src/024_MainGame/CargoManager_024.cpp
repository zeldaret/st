#include "MainGame/CargoManager.hpp"
#include "System/SysNew.hpp"

CargoManager *CargoManager::Create() {
    return new(HeapIndex_1) CargoManager();
}

void CargoManager::SetCargo(unk32 type, unk32 amount) {
    this->mCargo.Set(type, amount);
    this->func_ov024_020d5900();
}

void CargoManager::GetTypeAndAmount(unk32 *pType, unk32 *pAmount) {
    volatile Cargo *pCargo = &this->mCargo2;

    unk32 type   = pCargo->mType;
    unk32 amount = pCargo->mAmount;

    *pType   = type;
    *pAmount = amount;
}

void CargoManager::func_ov024_020d5900() {
    this->mCargo2 = this->mCargo;
}

void CargoManager::func_ov024_020d591c() {
    this->mCargo = this->mCargo2;
}
