#include "Unknown/UnkStruct_020d8698.hpp"

// non-matching
UnkStruct_020d8698_24_5C_Base::UnkStruct_020d8698_24_5C_Base(unk32 param1, const u16 *param2, u16 param3, unk32 param4) {
    this->mUnk_80 = 0;
    this->mUnk_84 = 0;

    this->func_ov000_0206590c(param3, param4);

    for (int i = 0; i < 10; i++) {
        this->mUnk_08[i].func_ov000_0205fc20(param1, param2[i], NULL, NULL);
    }
}

UnkStruct_020d8698_24_5C::UnkStruct_020d8698_24_5C(unk32 param1, const u16 *param2, u16 param3, unk32 param4) :
    UnkStruct_020d8698_24_5C_Base(param1, param2, param3, param4) {
    this->mUnk_98 = 0;
    this->mUnk_9C = 0;
}
