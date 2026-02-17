#pragma once

#include "global.h"
#include "types.h"

class UnkStruct_ov024_020d86b0 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x7E);
    /* 7E */ s8 mNumPostcards; // current amount of postcards
    /* 7F */ s8 mNumPostedCards; // current amount of posted postcards
    /* 80 */ STRUCT_PAD(0x80, 0x90);
    /* 90 */
};

extern UnkStruct_ov024_020d86b0 *data_ov024_020d86b0;
