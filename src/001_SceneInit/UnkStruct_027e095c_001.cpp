#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e095c.hpp"

extern "C" u32 func_0202447c();
extern "C" u32 func_02024494();
extern "C" void func_02006d8c(u16, unk32);
extern "C" void func_02006aa8(unk32, unk32);

UnkStruct_027e095c *UnkStruct_027e095c::Create() {
    return new(HeapIndex_1) UnkStruct_027e095c();
}

UnkStruct_027e095c::UnkStruct_027e095c() {
    this->mUnk_8DC = &this->mUnk_2F4;
    this->mUnk_940 = &this->mUnk_8E0;
    func_02006d8c(func_0202447c() >> 0x11, 0x01);
    func_02006aa8(func_02024494(), 0x01);

    for (VecFx32 *pIt = this->mUnk_000; pIt != &this->mUnk_000[ARRAY_LEN(this->mUnk_000)]; pIt++) {
        VecFx32_Init(0, 0, 0, pIt);
    }
}

DECL_INSTANCE_CTOR(UnkStruct_027e095c, data_027e095c);
