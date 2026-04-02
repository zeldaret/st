#include "Unknown/UnkStruct_027e0ce8.hpp"

struct UnkStruct {
    unk32 one;
    unk32 two;
    unk32 three;
    unk32 four;
};

extern "C" void func_01ffecdc(int, void *);

UnkStruct_027e0ce8_00 *UnkStruct_027e0ce8::func_01fff498(UnkStruct_func_01fff498 param1) {
    if (this->mUnk_0C[param1.valueIndex][param1.ptrIndex] < 0) {
        return NULL;
    }

    return this->mUnk_00[this->mUnk_0C[param1.valueIndex][param1.ptrIndex]];
}

void UnkStruct_027e0ce8::func_01fff4cc(UnkCallback_func_01fff4cc param1, void *param2) {
    UnkStruct_027e0ce8_00 **ptr = this->mUnk_00;

    while (ptr != this->mUnk_08) {
        if (*ptr != NULL && ((*ptr)->mUnk_1C & 1)) {
            param1(*ptr, param2);
        }

        ptr++;
    }
}

UnkStruct_027e0ce8_00 **UnkStruct_027e0ce8::func_01fff520(UnkStruct_ov000_020b34c4 *param1, UnkStruct_027e0ce8_00 **param2) {
    UnkStruct_027e0ce8_00 **ptr = param2;

    while (ptr != this->mUnk_08) {
        if (*ptr != NULL && ((*ptr)->mUnk_1C & 1) != 0 && param1->mUnk_00[0](param1, *ptr)) {
            break;
        }

        ptr++;
    }

    return ptr;
}

unk32 UnkStruct_027e0ce8_00::func_01fff584() {
    return this->mUnk_3C->mUnk_10;
}

void UnkStruct_027e0ce8_00::func_01fff590(unk32 param2) {
    UnkStruct stack;
    unk32 one;
    unk32 two;
    unk32 three;
    unk32 four;

    four  = this->mUnk_3C->mUnk_08;
    one   = (three = this->mUnk_04);
    two   = this->mUnk_08;
    three = this->mUnk_0C;

    stack.one   = one;
    stack.two   = two;
    stack.three = three;
    stack.four  = four;
    func_01ffecdc(param2, &stack);
}
