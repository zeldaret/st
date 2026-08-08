#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_ov023_020f1d94.hpp"
#include "global.h"
#include "types.h"

#include <dsprot.h>

static UnkStruct_ov001_020c46f4_Base *data_ov001_020c46f4 = NULL;

void func_ov001_020bfdd0() {
    if (data_ov001_020c46f4 != NULL) {
        DELETE(data_ov001_020c46f4);
    }

    if (data_ov001_020c46f4 == NULL) {
        data_ov001_020c46f4 = new(HeapIndex_1) UnkStruct_ov001_020c46f4_Derived1();
    }
}

void func_ov001_020bfe0c() {
    if (data_ov001_020c46f4 != NULL) {
        DELETE(data_ov001_020c46f4);
    }

    if (data_ov001_020c46f4 == NULL) {
        data_ov001_020c46f4 = new(HeapIndex_1) UnkStruct_ov001_020c46f4_Derived1();
    }
}

void func_ov001_020bfe48() {
    if (data_ov001_020c46f4 != NULL) {
        DELETE(data_ov001_020c46f4);
    }

    if (data_ov001_020c46f4 == NULL) {
        data_ov001_020c46f4 = new(HeapIndex_1) UnkStruct_ov001_020c46f4_Derived1();
    }
}

void func_ov001_020bfe84() {
    if (data_ov001_020c46f4 == NULL) {
        data_ov001_020c46f4 = new(HeapIndex_1) UnkStruct_ov001_020c46f4_Derived2();
    }
}

void UnkStruct_ov023_020f1d94::func_ov001_020bfeb0() {
    DSProt_DetectDummy(func_ov001_020bfdd0);

    if (!DSProt_DetectNotEmulator(func_ov001_020bfe84)) {
        func_ov001_020bfe0c();
    }

    DSProt_DetectFlashcart(func_ov001_020bfe48);
    this->mUnk_04       = data_ov001_020c46f4;
    data_ov001_020c46f4 = NULL;
}
