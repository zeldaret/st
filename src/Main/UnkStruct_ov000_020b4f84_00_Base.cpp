#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_ov000_020b4f84.hpp"

extern "C" void *func_02012ec8(unk32, unk16, void *, size_t *, unk32, u8);
extern "C" size_t func_020010e0(UnkStruct_02011e10_Sub1 *heapID, void *pFile, unk32 param3);

THUMB void UnkStruct_ov000_020b4f84_00_Base::func_02015528() {}

THUMB void UnkStruct_ov000_020b4f84_00_Base::func_0201552c() {
    this->mpFile    = NULL;
    this->mFileSize = 0;
}

THUMB unk32 UnkStruct_ov000_020b4f84_00_Base::func_02015534() {
    return this->mFileSize;
}

THUMB UnkStruct_ov000_020b4f84_00_Base::UnkStruct_ov000_020b4f84_00_Base() {
    this->mUnk_04    = NULL;
    this->mpFile     = NULL;
    this->mFileSize  = 0;
    this->mHeapIndex = HeapIndex_1;
    this->mUnk_12    = 0;
}

THUMB UnkStruct_ov000_020b4f84_00_Base::UnkStruct_ov000_020b4f84_00_Base(void *param1, unk32 param2, unk32 param3, u8 param4) :
    UnkStruct_ov000_020b4f84_00_Base2(param1, param3) {
    this->mUnk_12 = param4;
}

THUMB UnkStruct_ov000_020b4f84_00_Base::~UnkStruct_ov000_020b4f84_00_Base() {
    this->vfunc_0C();
    this->func_02015528();
}

THUMB void *UnkStruct_ov000_020b4f84_00_Base::vfunc_08(unk32 param1) {
    if (this->mpFile == NULL) {
        this->mpFile = func_02012ec8(0, this->mHeapIndex, this->mUnk_04, &this->mFileSize, param1, this->mUnk_12);
    }

    return this->mpFile;
}

THUMB void UnkStruct_ov000_020b4f84_00_Base::vfunc_0C(void) {
    if (this->mpFile2 != NULL) {
        delete this->mpFile;
        this->func_0201552c();
    }
}

THUMB size_t UnkStruct_ov000_020b4f84_00_Base::vfunc_10(unk32 param1) {
    size_t prevFileSize = this->mFileSize;

    if (this->mpFile2 != NULL && param1 < this->mFileSize) {
        if (data_0204999c.mUnk_00[this->mHeapIndex]->mId == UnkId_EXPH) {
            this->mFileSize = func_020010e0(data_0204999c.mUnk_00[this->mHeapIndex], this->mpFile, param1);
        }
    }

    return prevFileSize;
}
