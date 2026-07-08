#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"

extern "C" UnkStruct_02011e10_Sub1 *func_02001098(void *, size_t, unk32);
extern "C" UnkStruct_02011e10_Sub1 *func_020012e0(void *, size_t, unk32);
extern "C" void func_020010b8(void *);
extern "C" void func_02001300(void *);
extern "C" unk32 func_020013ac(void *param1);
extern "C" size_t func_020010e0(UnkStruct_02011e10_Sub1 *heapID, void *pFile, unk32 param3);

void UnkStruct_02011e10::func_ov001_020ba588(unk32 param1, unk32 param2) {
    this->mUnk_2C.func_020144cc(param1, param2, 0x01);
    this->mUnk_00[HeapIndex_2] = this->mUnk_2C.mUnk_00;
}

void UnkStruct_02011e10::func_ov001_020ba59c() {
    this->mUnk_2C.func_02014538();
    this->mUnk_00[HeapIndex_2] = NULL;
}

void UnkStruct_02011e10::func_ov001_020ba5ac(unk32 param1, unk32 param2) {
    this->mUnk_44.func_020144cc(param1, param2, 0x01);
    this->mUnk_00[HeapIndex_ITCM] = this->mUnk_44.mUnk_00;
}

void UnkStruct_02011e10::func_ov001_020ba5c0() {
    this->mUnk_44.func_02014538();
    this->mUnk_00[HeapIndex_ITCM] = NULL;
}

void UnkStruct_02011e10::func_ov001_020ba5d0() {
    size_t size                   = data_027e09a4->IsSceneModeTitleScreen() ? 0xBB800 : 0x6A400;
    this->mUnk_64                 = ::operator new(size, HeapIndex_1);
    this->mUnk_00[HeapIndex_DTCM] = func_02001098(this->mUnk_64, size, 0x02);
}

void UnkStruct_02011e10::func_ov001_020ba608() {
    func_020010b8(this->mUnk_00[HeapIndex_DTCM]);
    DELETE(this->mUnk_64);
    this->mUnk_00[HeapIndex_DTCM] = NULL;
}

void UnkStruct_02011e10::func_ov001_020ba620() {
    size_t size                = 0x40000;
    this->mUnk_68              = ::operator new(size, HeapIndex_1);
    this->mUnk_00[HeapIndex_5] = func_020012e0(this->mUnk_68, size, 0x02);
}

void UnkStruct_02011e10::func_ov001_020ba640() {
    func_020010e0(this->mUnk_00[HeapIndex_1], this->mUnk_68, func_020013ac(this->mUnk_00[HeapIndex_5]));
}

void UnkStruct_02011e10::func_ov001_020ba658() {
    func_02001300(this->mUnk_00[HeapIndex_5]);
    this->mUnk_00[HeapIndex_5] = NULL;
    DELETE(this->mUnk_68);
}
