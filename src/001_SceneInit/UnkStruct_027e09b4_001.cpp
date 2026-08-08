#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"

UnkStruct_027e09b4 *UnkStruct_027e09b4::Create() {
    return new(HeapIndex_1) UnkStruct_027e09b4();
}

UnkStruct_027e09b4::UnkStruct_027e09b4() {
    this->mUnk_300 = this;
    this->mUnk_304 = 0x6000;
    this->mUnk_308 = 0x019A;
    this->mUnk_30A = 0x00CD;
}

void UnkStruct_027e09b4::func_ov001_020bea84() {
    if (data_027e09a4->IsTrain()) {
        this->mUnk_308 = 0x0052;
        this->mUnk_30A = 0x0029;
        this->mUnk_304 = 0x1000;
    } else {
        this->mUnk_308 = 0x019A;
        this->mUnk_30A = 0x00CD;
        this->mUnk_304 = 0x6000;
    }
}

DECL_INSTANCE(UnkStruct_027e09b4, data_027e09b4);
