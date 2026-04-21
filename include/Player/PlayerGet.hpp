#pragma once

#include "global.h"
#include "types.h"
#include "versions.h"

#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov000_0208f820.hpp"
#include <nitro/math.h>

struct UnkStruct_ov110_02185dc8 {
    u16 mItemId;
    u16 mItemFlag;
};

class UnkStruct_ov110_021861ec {
public:
    /* 00 */ Vec3p mUnk_00;
    /* 0C */

    ARM UnkStruct_ov110_021861ec(q20 x, q20 y, q20 z) {
        this->mUnk_00.x = x;
        this->mUnk_00.y = y;
        this->mUnk_00.z = z;
    }
};

class UnkStruct_PlayerGet_74_base : public SysObject {
public:
    /* 00 (vtable) */

    /* 00 */ virtual void vfunc_00(unk32 param1, unk32 param2, unk32 param3);

    UnkStruct_PlayerGet_74_base();
};

class UnkStruct_PlayerGet_74 : public UnkStruct_PlayerGet_74_base {
public:
    /* 00 (base) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ UnkStruct_ov000_0208f820 *mUnk_14;

    /* 00 */ virtual void vfunc_00(unk32 param1, unk32 param2, unk32 param3) override;

    UnkStruct_PlayerGet_74(UnkStruct_ov000_0208f820 *param1) {
        this->mUnk_14 = param1;
    }
};

class UnkStruct_PlayerGet_50 {
public:
    unk32 func_01ff8fa8();
    unk32 func_02015080(unk32 param1);
};

class UnkStruct_PlayerGet_fc {
public:
    /* 00 */ UnkStruct_PlayerGet_ec *mUnk_00;
};

class UnkStruct_PlayerGet_48 {
public:
    /* 00 */ unk8 mUnk_00[0x40];
    /* 40 */ unk16 mUnk_40;
    /* 42 */ unk16 mUnk_42;
    /* 43 */ unk8 mUnk_43;
    /* 44 */ unk8 mUnk_44;
    /* 45 */ unk8 mUnk_45;
    /* 46 */ unk8 mUnk_46;
    /* 47 */ unk8 mUnk_47;
    /* 48 */ unk8 mUnk_48[0x5E - 0x48];
    /* 5E */ unk16 mUnk_5E;
    /* 60 */ unk8 mUnk_60;
    /* 61 */ unk8 mUnk_61;
    /* 62 */ unk8 mUnk_62;
    /* 63 */ unk8 mUnk_63;
};

class PlayerGet : public UnkStruct_ov000_0208f820 {
public:
    /* 000 (base) */
    /* 048 */ UnkStruct_PlayerGet_48 *mUnk_48;
    /* 04C */ unk32 *mUnk_4C;
    /* 050 */ UnkStruct_PlayerGet_50 *mUnk_50;
    /* 054 */ UnkStruct_ov000_0208f820_04 mUnk_54;
    /* 064 */ UnkStruct_PlayerGet_64 mUnk_64;
    /* 068 */ unk32 mUnk_68;
    /* 06C */ unk32 mUnk_6C; // scale
    /* 070 */ unk16 mUnk_70; // angle/rotation
    /* 070 */ u8 mUnk_72; // probably bools
    /* 070 */ u8 mUnk_73; // probably bools
    /* 074 */ UnkStruct_PlayerGet_74 mUnk_74;
    /* 08C */ UnkSystem4 mUnk_8C;
    /* 0EC */ UnkStruct_PlayerGet_ec mUnk_EC[4];
    /* 0FC */ void *mUnk_FC;
    /* 100 */

    /* 04 */ virtual ~PlayerGet() override;
    /* 0C */ virtual void vfunc_0c(UnkStruct_PlayerGet_vfunc_0c_param1 *param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 18 */ virtual void vfunc_18(unk32 param1, unk32 param2, unk32 param3) override;

    PlayerGet();

#if IS_JP
    bool func_ov110_02186b8c();
#else
    bool func_ov110_02186b8c() {
        return true;
    }
#endif
};

extern const UnkStruct_ov110_021861ec data_ov110_021861ec;
