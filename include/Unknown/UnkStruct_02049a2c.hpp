#pragma once

#include "Unknown/UnkStruct_02049bd4.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkSystem1.hpp"
#include "global.h"
#include "types.h"

class GameModeFileSelect;

class GameModeBase : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */

    GameModeBase();

    // data_02044018 vtable
    /* 00 */ virtual ~GameModeBase();
    /* 08 */ virtual void vfunc_08(unk32 param1, unk32 param2, unk32 param3); // func_02018374
    /* 0C */ virtual void vfunc_0C() = 0;
    /* 10 */ virtual void vfunc_10(); // func_0201838c
    /* 14 */ virtual void vfunc_14(); // func_02018388
    /* 18 */ virtual void vfunc_18(); // func_02018390
    /* 1C */ virtual void vfunc_1C(); // func_02018394
    /* 20 */ virtual void vfunc_20(); // func_02018398
    /* 24 */ virtual void vfunc_24(); // func_0201839c

    void func_02018374(void);
};

class UnkStruct_02049a2c {
public:
    /* 00 */ GameModeBase *mUnk_00;
    /* 04 */ unk8 mUnk_04[0xE8 - 0x04];
    /* E8 */

    void func_02013394(void);
    void func_02013370(unk32 param1);

    GameModeFileSelect *GetUnk00_FileSelect() {
        return (GameModeFileSelect *) this->mUnk_00;
    }
};

extern UnkStruct_02049a2c data_02049a2c;
