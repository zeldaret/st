#include "Game/GameModeManager.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_ov024_020d86a0.hpp"

UnkStruct_ov024_020d86a0::UnkStruct_ov024_020d86a0() {
    this->mUnk_00          = new(HeapIndex_1) UnkStruct_ov024_020d86a0_00(this);
    this->mUnk_0C          = false;
    this->mUnk_0D          = false;
    this->mUnk_0E          = false;
    this->mUnk_0F          = false;
    this->mUnk_10          = false;
    this->mUnk_11          = false;
    this->mUnk_00->mUnk_18 = false;
}

UnkStruct_ov024_020d86a0::~UnkStruct_ov024_020d86a0() {
    delete this->mUnk_00;
}

void UnkStruct_ov024_020d86a0::func_ov001_020bd818() {
    this->mUnk_0F = false;
    gpCurrentGameModeMgr->func_02018ac4(0x64);
    data_0204a110.mUnk_010.func_0201ca28(0x01);
}

DECL_INSTANCE(UnkStruct_ov024_020d86a0, data_ov024_020d86a0);
