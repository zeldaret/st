#pragma once

#include "System/SysNew.hpp"
#include "Unknown/UnkFileSystem.hpp"
#include "types.h"
#include <nns/font.h>

enum {
    FontIndex_DSZ2_msg       = 0,
    FontIndex_LC_Font_s      = 1, // unused?
    FontIndex_DSZ2_endL      = 2,
    FontIndex_DSZ2_endS      = 3,
    FontIndex_04             = 4,
    FontIndex_LC_Font_s_Name = 5,
    FontIndex_Max            = 6
};

// FontEntry?
class UnkStruct_ov000_020b4f84_00 : public UnkFileSystem5 {
public:
    /* 00 (base) */
    /* 14 */ Font_UnkStruct1 mUnk_14;
    /* 1C */ unk16 mUnk_1C;
    /* 1E */ unk16 mUnk_1E;
    /* 20 */

    UnkStruct_ov000_020b4f84_00();
    ~UnkStruct_ov000_020b4f84_00();
    void func_ov000_02066610(const char *fontPath, unk32 param2, unk32 param3);
};

// FontManager?
class UnkStruct_ov000_020b4f84 {
public:
    /* 00 */ UnkStruct_ov000_020b4f84_00 mUnk_00[FontIndex_Max];
    /* C0 */ unk16 mUnk_C0;
    /* C2 */ unk16 mUnk_C2;

    UnkStruct_ov000_020b4f84();
    void func_ov000_0206667c(unk32 param1, unk32 param2);
};

// gFontManager?
extern UnkStruct_ov000_020b4f84 data_ov000_020b4f84;
