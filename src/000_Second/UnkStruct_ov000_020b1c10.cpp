#include "MapObject/MapObjectUnkWLMS.hpp"
#include "math.hpp"

// non-matching
UnkStruct_ov000_020b1c10::UnkStruct_ov000_020b1c10(Vec2s *param1, unk32 param2) :
    mUnk_0C(0),
    mUnk_10(param1, param2) {
    mUnk_1C = 0x1000;
    mUnk_20 = 0;
}

void UnkStruct_ov000_020b1c10::vfunc_00() {
    mUnk_10.func_ov000_0205b224(mUnk_1C, mUnk_20);
}
