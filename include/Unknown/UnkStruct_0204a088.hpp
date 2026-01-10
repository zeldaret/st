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

class UnkStruct_0204a088 : public UnkStruct_0204a088_Base {
public:
    /* 00 */ unk32 mUnk_00;
    /* 00 */ unk32 mUnk_04;
    /* 00 */ unk32 mUnk_08;
    /* 0C */ FileSelectManager_UnkDrawBase mUnk_0C[23];

    void func_ov000_02061098(void);
    void func_ov000_020611dc(void *param1, unk32 param2);
    void func_ov000_020611fc(unk32 param2);
    void func_ov000_02061224(void);
    void func_ov000_02061230(void);
    void func_ov000_02061248(void);
};
