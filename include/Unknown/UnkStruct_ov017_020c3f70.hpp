#pragma once

#include "global.h"
#include "nitro/os.h"
#include "types.h"

class UnkStruct_ov017_020c3f70_Base {
public:
    /* 00 (vtable) */
    /* 04 */ OSThread mThread;
    /* BC */ unk32 mUnk_BC;
    /* C0 */ unk32 mUnk_C0;
    /* C4 */ unk32 mUnk_C4;
    /* C8 */ unk32 mUnk_C8;
    /* CC */

    UnkStruct_ov017_020c3f70_Base(void *param1, unk32 param2, unk32 param3); // func_02013c24

    // data_0204375c
    /* 00 */ virtual ~UnkStruct_ov017_020c3f70_Base(); // func_02013cd4 & func_02013d30
    /* 08 */ virtual void vfunc_08();
};

class UnkStruct_ov017_020c3f70 : public UnkStruct_ov017_020c3f70_Base {
public:
    /* 00 (base) */
    /* CC */

    UnkStruct_ov017_020c3f70(void *param1, unk32 param2, unk32 param3) :
        UnkStruct_ov017_020c3f70_Base(param1, param2, param3) {}

    // data_ov017_020c3f08
    /* 00 */ virtual ~UnkStruct_ov017_020c3f70();
    /* 08 */ virtual void vfunc_08() override;

    void func_ov017_020bba78();
    void func_ov017_020bba94();
};
