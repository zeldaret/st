#pragma once

#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_0204a060.hpp"
#include "global.h"
#include "math.hpp"
#include "nitro/fx.h"
#include "types.h"

class UnkStruct_027e0ce0_30_00;

class UnkStruct_027e09bc_0C_230 {
public:
    /* 00 (base) */
    /* 04 */

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual unk32 vfunc_08();
};

struct UnkStruct_027e09bc_0C_268 {
    /* 00 */ u32 unk_00;
    /* 04 */ u16 unk_04;
    /* 06 */ bool unk_06;
    /* 07 */ u8 unk_07;
    /* 08 */ VecFx32 unk_08;
    /* 14 */
};

class UnkStruct_027e09bc_0C {
public:
    /* 000 (vtable) */
    /* 004 */ PAD(0x04, 0x34);
    /* 034 */ VecFx32 mUnk_034;
    /* 040 */ VecFx32 mUnk_040;
    /* 04C */ PAD(0x4C, 0x58);
    /* 058 */ unk32 mUnk_058;
    /* 05C */ PAD(0x5C, 0xCA);
    /* 0CA */ unk16 mUnk_0CA;
    /* 0CC */ PAD(0xCC, 0x230);
    /* 230 */ UnkStruct_027e09bc_0C_230 *mUnk_230;
    /* 234 */ PAD(0x234, 0x264);
    /* 264 */ unk32 mUnk_264;
    /* 268 */ UnkStruct_027e09bc_0C_268 mUnk_268;
    /* 27C */ unk32 mUnk_27C;
    /* 280 */ unk32 mUnk_280;
    /* 284 */

    UnkStruct_027e09bc_0C(unk32 param1);

    // data_ov000_020b24b4
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual ~UnkStruct_027e09bc_0C();
    /* 10 */

    // itcm
    bool func_01ffd43c(Vec2s *param1, VecFx32 *param2, unk32 param3);
    bool func_01ffd640(VecFx32 *param1);
    bool func_01ffd768(void *param1, Vec2s *param2, unk8 param3);

    // overlay 0
    void func_ov000_020767b4(VecFx32 *param1, Vec2s *touchPos, fx32 param3, unk32 param4, VecFx32 *param5);
    void func_ov000_02078230(unk32 param1);
    bool func_ov000_0207834c(VecFx32 *param1, UnkStackStruct_ov000_02077590 *param2, unk32 param3);
    unk16 func_ov000_0207868c();
    unk16 func_ov000_02078698();
    void func_ov000_02078534(VecFx32 *param1, unk32 param2);
    bool func_ov000_02078764(VecFx32 *param1, void *param2, unk32 param3);
    void func_ov000_02078834(VecFx32 *param1, VecFx32 *param2, unk32 param3, unk32 param4);
    void func_ov000_02078aa4(UnkStruct_027e0ce0_30_00 *param1, unk32 param2, unk32 param3, unk32 param4);
    void func_ov000_02078ba4();
    void func_ov000_02078cec();
    void func_ov000_0207a1e0(unk32 param1);
    unk32 func_ov000_02076fa8(void *param1, void *param2, unk32 param3, fx32 param4);
};

class UnkStruct_027e09bc_24 : public UnkStruct_0204a060_Base {
public:
    /* 00 (base) */
    /* 24 */

    UnkStruct_027e09bc_24();

    // data_ov000_020b2488
    /* 0C */ virtual void vfunc_0C(void) override;
};

class UnkStruct_027e09bc : public AutoInstance<UnkStruct_027e09bc> {
public:
    /* 00 (vtable) */
    /* 04 */ UnkStruct_027e09bc_0C *mUnk_04[4];
    /* 14 */ UnkStruct_027e09bc_0C *mUnk_14[4];
    /* 24 */ UnkStruct_027e09bc_24 mUnk_24;
    /* 48 */ UnkSystem9 mUnk_48;

    UnkStruct_027e09bc();
    ~UnkStruct_027e09bc();

    /* 00 */ virtual void vfunc_00(unk32 param1);
    /* 04 */ virtual void vfunc_04();

    // overlay 0
    void func_ov000_020771b8(unk32 param1);
    void func_ov000_020771c8();
    UnkStruct_027e09bc_0C *func_ov000_02077468(unk32 param1, unk32 param2);

    // overlay 1
    void func_ov001_020bab5c();
    void func_ov001_020babc8();
    void func_ov001_020babe8();
    void func_ov001_020bac08();

    static UnkStruct_027e09bc *Create();
    static void Destroy();
};

extern UnkStruct_027e09bc *data_027e09bc;
