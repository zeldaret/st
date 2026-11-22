#include "Unknown/UnkStruct_ov031_Items.hpp"
#include "nitro/types.h"
#include "types.h"

class UnkStruct_ov048_021375e4 : public UnkStruct_ov031_Items_00 {
public:
    /* 00 (vtable) */
    /* 04 */ PAD(0x4, 0x8);
    /* 08 */ unk32 mUnk_08;

    UnkStruct_ov048_021375e4() {
        mUnk_08 = 0;
        mUnk_08 &= ~0x7000;
        mUnk_08 |= 0x7000;
    }

    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) override; // func_ov000_020982d8
    /* 0C */ virtual bool vfunc_0C(RefStruct ref, UnkStruct_ov031_020e54d4 *param2, const VecFx32 *param3,
                                   const VecFx32 *param4);
};
