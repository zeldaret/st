#pragma once

#include "FileSelect/FileSelectUnkDraw.hpp"
#include "System/SysNew.hpp"
#include "types.h"

class UnkStruct_0204a088;
extern UnkStruct_0204a088 *data_0204a088;

class UnkStruct_0204a088_Base : public SysObject {
public:
    UnkStruct_0204a088_Base();
    ~UnkStruct_0204a088_Base(); //! TODO: most likely inlined but can't make it work for some reasons
};

// members 00 04 and 08 are used in data_ov000_020b1d74 to figure out which overlay to load next in slot 1
class UnkStruct_0204a088 : public UnkStruct_0204a088_Base {
public:
    /* 000 */ unk32 mUnk_00; // current index
    /* 000 */ unk32 mUnk_04; // prev index
    /* 000 */ unk32 mUnk_08; // next index
    /* 00C */ FileSelectManager_UnkDrawBase mUnk_0C[23]; // 23 possible overlays
    /* 120 */ u16 mUnk_120;
    /* 122 */ unk16 mUnk_122;
    /* 123 */ unk8 mUnk_123;

    void func_ov000_02061098(void);
    void func_ov000_020611dc(void *param1, unk32 param2);
    void func_ov000_020611fc(unk32 param2); // sets new index
    void func_ov000_02061224(void);
    void func_ov000_02061230(void);
    void func_ov000_02061248(void);
};
