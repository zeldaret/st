#include "Game/GameModeBattle.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_ov020_020e8544.hpp"

#include <dsprot.h>

void func_ov001_020bfcc0() {
    BOOL status;

    if (data_ov020_020e8544 == NULL) {
        status = false;
    } else {
        status = true;
    }

    if (!status) {
        data_ov020_020e8544 = new(HeapIndex_1) UnkStruct_ov020_020e8544_Derived1();
    }
}

void func_ov001_020bfcf0() {
    BOOL status;

    if (data_ov020_020e8544 == NULL) {
        status = false;
    } else {
        status = true;
    }

    if (!status) {
        data_ov020_020e8544 = new(HeapIndex_1) UnkStruct_ov020_020e8544_Derived1();
    }
}

void func_ov001_020bfd20() {
    BOOL status;

    if (data_ov020_020e8544 == NULL) {
        status = false;
    } else {
        status = true;
    }

    if (!status) {
        data_ov020_020e8544 = new(HeapIndex_1) UnkStruct_ov020_020e8544_Derived2();
    }
}

void func_ov001_020bfd54() {
    BOOL status;

    if (data_ov020_020e8544 == NULL) {
        status = false;
    } else {
        status = true;
    }

    if (!status) {
        data_ov020_020e8544 = new(HeapIndex_1) UnkStruct_ov020_020e8544_Derived1();
    }
}

void GameModeBattle::func_ov001_020bfd84(unk32 param1) {
    switch (param1) {
        case 0:
            DSProt_DetectEmulator(func_ov001_020bfcc0);
            DSProt_DetectFlashcart(func_ov001_020bfcf0);
            DSProt_DetectNotDummy(func_ov001_020bfd20);
            func_ov001_020bfd54();
            break;
        case 1:
            data_ov020_020e8544 = new(HeapIndex_1) UnkStruct_ov020_020e8544_Derived1();
            break;
        default:
            break;
    }
}
