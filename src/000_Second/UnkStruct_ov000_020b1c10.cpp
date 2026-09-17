#include "MapObject/MapObjectUnkWLMS.hpp"

extern "C" void func_ov000_0205b224(UnkStruct_ov000_020b1c10_10 *, unk32, u16);

UnkStruct_ov000_020b1c10::UnkStruct_ov000_020b1c10(unk32 *param1, unk32 param2) :
    mUnk_04(),
    mUnk_0C(0) {
    func_ov000_0205b1cc(&mUnk_10, param1, param2);
    mUnk_1C = 0x1000;
    mUnk_20 = 0;
}

void UnkStruct_ov000_020b1c10::vfunc_00() {
    func_ov000_0205b224(&mUnk_10, mUnk_1C, mUnk_20);
}

void func_ov000_0205b1cc(UnkStruct_ov000_020b1c10_10 *param1, unk32 *param2, unk32 param3) {
    param1->mUnk_00 = param2;
    param1->mUnk_04 = param2;
    param1->mUnk_08 = param3;
}
