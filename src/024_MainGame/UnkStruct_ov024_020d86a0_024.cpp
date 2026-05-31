#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_ov024_020d86a0.hpp"

UnkStruct_ov024_020d86a0 *UnkStruct_ov024_020d86a0::Create() {
    return new(HeapIndex_1) UnkStruct_ov024_020d86a0();
}

void UnkStruct_ov024_020d86a0::func_ov024_020d167c() {
    if (this->mUnk_11) {
        this->func_ov017_020c31cc();
    }
}

UnkStruct_ov024_020d86a0_00::UnkStruct_ov024_020d86a0_00(UnkStruct_ov024_020d86a0 *pInstance) {
    this->mpInstance = pInstance;
}

UnkStruct_ov024_020d86a0_00::~UnkStruct_ov024_020d86a0_00() {}

bool UnkStruct_ov024_020d86a0_00::vfunc_0C() {
    return this->mpInstance->func_ov017_020c3180();
}
