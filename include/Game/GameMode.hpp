#pragma once

#include "System/SysNew.hpp"
#include "types.h"

class GameModeBase : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */

    GameModeBase();

    // data_02044018 vtable
    /* 00 */ virtual ~GameModeBase();
    /* 08 */ virtual void vfunc_08(unk32 param1, unk32 param2, unk32 param3);
    /* 0C */ virtual void vfunc_0C() = 0;
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1C */ virtual void vfunc_1C();
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */

    void func_02018374(void);
};
