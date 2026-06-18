#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_ov000_020b4f84.hpp"

extern "C" size_t func_020010e0(UnkStruct_02011e10_Sub1 *heapID, void *pFile, unk32 param3);
extern "C" void *func_02012ec8(unk32, unk16, const char *, size_t *, unk32, u8);
extern "C" void *func_02012ee4(const char *, unk32, unk32, size_t *, u8);
extern "C" void *func_02012f6c(const char *, size_t *);
extern "C" HeapIndex16 func_02015338();

THUMB_BEGIN

UnkFileSystem1::~UnkFileSystem1() {}

void UnkFileSystem1::vfunc_0C() {
    this->mpFile    = NULL;
    this->mFileSize = 0;
}

size_t UnkFileSystem1::vfunc_10(unk32 param1) {
    return this->mFileSize;
}

UnkFileSystem5::UnkFileSystem5() :
    UnkFileSystem1(0) {
    this->mUnk_04    = NULL;
    this->mpFile     = NULL;
    this->mFileSize  = 0;
    this->mHeapIndex = HeapIndex_1;
    this->mUnk_12    = 0;
}

UnkFileSystem5::UnkFileSystem5(const char *param1, unk32 param2, unk32 param3, u8 param4) :
    UnkFileSystem1(param1) {
    this->mHeapIndex = param3;
    this->mUnk_12    = param4;
}

UnkFileSystem5::~UnkFileSystem5() {
    this->vfunc_0C();
}

void *UnkFileSystem5::vfunc_08(unk32 param1) {
    if (this->mpFile == NULL) {
        this->mpFile = func_02012ec8(0, this->mHeapIndex, this->mUnk_04, &this->mFileSize, param1, this->mUnk_12);
    }

    return this->mpFile;
}

void UnkFileSystem5::vfunc_0C(void) {
    if (this->mpFile2 != NULL) {
        delete this->mpFile;
        this->UnkFileSystem1::vfunc_0C();
    }
}

size_t UnkFileSystem5::vfunc_10(unk32 param1) {
    size_t prevFileSize = this->mFileSize;

    if (this->mpFile2 != NULL && param1 < this->mFileSize) {
        if (data_0204999c.mUnk_00[this->mHeapIndex]->mId == UnkId_EXPH) {
            this->mFileSize = func_020010e0(data_0204999c.mUnk_00[this->mHeapIndex], this->mpFile, param1);
        }
    }

    return prevFileSize;
}

UnkFileSystem4::UnkFileSystem4(const char *param1, unk32 param2, unk32 param3, unk32 param4) :
    UnkFileSystem1(param1) {
    this->mUnk_18 = param2;
    this->mUnk_10 = param3;
    this->mUnk_14 = param4;
}

UnkFileSystem4::~UnkFileSystem4() {}

void *UnkFileSystem4::vfunc_08(unk32 param1) {
    if (this->mpFile == NULL) {
        this->mpFile = func_02012ee4(this->mUnk_04, this->mUnk_10, this->mUnk_14, &this->mFileSize, this->mUnk_18);
    }

    return this->mpFile;
}

UnkFileSystem3::~UnkFileSystem3() {}

void *UnkFileSystem3::vfunc_08(unk32 param1) {
    if (this->mpFile == NULL) {
        this->mpFile = func_02012f6c(this->mUnk_04, &this->mFileSize);
    }

    return this->mpFile;
}

// https://decomp.me/scratch/Y2SB8
UnkFileSystem2::UnkFileSystem2(const char *param1, unk32 param2) :
    UnkFileSystem1(param1) {
    this->mUnk_14 = param2;
}

UnkFileSystem2::~UnkFileSystem2() {}

void *UnkFileSystem2::vfunc_08(unk32 param1) {
    this->mpFile = this->mUnk_10.mpFile =
        func_02012ec8(0, func_02015338(), this->mUnk_04, &this->mFileSize, -32, this->mUnk_14);
    return this->mpFile;
}

void UnkFileSystem2::vfunc_0C(void) {
    this->mpFile = NULL;
}

size_t UnkFileSystem2::vfunc_10(unk32 param1) {
    size_t prevFileSize = this->mFileSize;

    if (this->mpFile2 != NULL && param1 < this->mFileSize) {
        this->mFileSize = func_020010e0(data_0204999c.mUnk_00[func_02015338()], this->mpFile, param1);
    }

    return prevFileSize;
}

THUMB_END
