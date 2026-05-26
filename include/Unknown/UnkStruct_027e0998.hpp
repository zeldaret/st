#pragma once

#include "global.h"
#include "math.hpp"
#include "types.h"

class UnkStruct_027e0998_Base {
public:
    /* 00 (vtable) */
    /* 04 */ unk16 mUnk_04;
    /* 06 */ STRUCT_PAD(0x06, 0x42);
    /* 42 */ unk16 mUnk_42;
    /* 44 */ unk32 mUnk_44;
    /* 48 */ unk16 mUnk_48;
    /* 4A */ unk16 mUnk_4A; // pad?
    /* 4C */

    UnkStruct_027e0998_Base();

    // data_ov000_020b1e08
    /* 00 */ virtual bool vfunc_00(VecFx32 *pPos, Vec2s *param2, u16 *param3);
    /* 04 */

    void func_ov000_02061760();
    void func_ov000_02061764();
    void func_ov000_02061768();
    void func_ov000_02061850(unk32 param1);
    bool func_ov000_02061a48(VecFx32 *param1, Vec2s *param2, Vec2s *param3);
    unk32 func_ov000_02061a70();

    static void SetInstance(UnkStruct_027e0998_Base *pInstance);
};

class UnkStruct_027e0998 : public UnkStruct_027e0998_Base {
public:
    /* 00 (base) */

    UnkStruct_027e0998();
    ~UnkStruct_027e0998(); // ClearInstance

    // data_ov024_020d7c98
    /* 00 */ virtual bool vfunc_00(VecFx32 *pPos, Vec2s *param2, u16 *param3) override;
    /* 04 */

    bool func_ov024_020c716c();
    bool func_ov024_020c7214(VecFx32 *pPos, Vec2s *param2, u16 *param3);
    bool func_ov024_020c727c(Vec2s *param1, u16 *param2);
    bool func_ov024_020c7300(unk32 param1);
    bool func_ov024_020c7354();

    static void Destroy();
    static UnkStruct_027e0998 *Create();
};

extern UnkStruct_027e0998 *data_027e0998;
