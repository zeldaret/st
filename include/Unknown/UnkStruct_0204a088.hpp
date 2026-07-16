#pragma once

#include "FileSelect/FileSelectUnkDraw.hpp"
#include "System/SysNew.hpp"
#include "types.h"

// members 00 04 and 08 are used in data_ov000_020b1d74 to figure out which overlay to load next in slot 1
class UnkStruct_0204a088 : public AutoInstance<UnkStruct_0204a088> {
public:
    /* 000 */ unk32 mUnk_00;                             // current index
    /* 000 */ unk32 mUnk_04;                             // prev index
    /* 000 */ unk32 mUnk_08;                             // next index
    /* 00C */ FileSelectManager_UnkDrawBase mUnk_0C[23]; // 23 possible overlays
    /* 120 */ u16 mUnk_120;
    /* 122 */ bool mUnk_122;
    /* 123 */ bool mUnk_123;
    /* 124 */ bool mUnk_124;
    /* 125 */ bool mUnk_125;
    /* 126 */ bool mUnk_126;
    /* 127 */ bool mUnk_127;
    /* 128 */ unk16 mUnk_128;
    /* 12C */

    UnkStruct_0204a088();

    // overlay 0
    void func_ov000_02061098(void);
    void func_ov000_020611dc(void *param1, unk32 param2);
    bool func_ov000_020611fc(unk32 param2); // sets new index
    bool func_ov000_02061224(void);
    void func_ov000_02061230(void);
    void func_ov000_02061248(void);

    // overlay 1
    void func_ov001_020bd6f8();

    static UnkStruct_0204a088 *Create();
};

extern UnkStruct_0204a088 *data_0204a088;
