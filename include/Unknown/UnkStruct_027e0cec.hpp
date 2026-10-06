#pragma once

#include "LinkList.hpp"
#include "Unknown/UnkFileSystem.hpp"
#include "global.h"
#include "math.hpp"
#include "nitro/fx.h"
#include "types.h"

class UnkStruct_PlayerGet_ec;
class UnkStruct_027e0cec;
class UnkSystem7;

class UnkStruct_027e0cec_00_00 : public LinkList<UnkStruct_027e0cec_00_00> {
public:
    /* 00 (vtable) */
    /* 04 (base) */
    /* 0C */ unk32 mUnk_0C;

    UnkStruct_027e0cec_00_00() :
        mUnk_0C(0) {}
};

class UnkStruct_027e0cec_00 : public UnkStruct_027e0cec_00_00 {
public:
    /* 00 (base) */
    /* 10 */ UnkStruct_027e0cec *mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */

    UnkStruct_027e0cec_00(UnkStruct_027e0cec *param1);

    // data_ov017_020c3f38
    /* 00 */ virtual void vfunc_00();
};

struct UnkStruct_027e0cec_18_04_20 {
    /* 00 */ u32 mUnk_00_00 : 14;
    /* 00 */ u32 mUnk_00_14 : 1;
    /* 04 */ STRUCT_PAD(0x04, 0x36);
    /* 36 */ u16 mUnk_36;
    /* 38 */ STRUCT_PAD(0x38, 0x40);
    /* 40 */ u16 mUnk_40;
};

class UnkStruct_027e0cec_18_04 : public LinkList<UnkStruct_027e0cec_18_04> {
public:
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ UnkStruct_027e0cec_18_04_20 **mUnk_20;
    /* 24 */ u32 mUnk_24_00 : 1;
    /* 24 */ u32 mUnk_24_01 : 1;
    /* 24 */ u32 mUnk_24_02 : 1;
    /* 24 */ u32 mUnk_24_03 : 1;
    /* 24 */ u32 mUnk_24_04 : 1;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */ unk32 mUnk_30;
    /* 34 */ unk32 mUnk_34;
    /* 38 */ unk32 mUnk_38;
    /* 3C */ unk32 mUnk_3C;
    /* 40 */ LinkList<void *> mUnk_40;
    /* 48 */ u16 mUnk_48;
    /* 48 */ u16 mUnk_4A;
    /* 48 */ u16 mUnk_4C;
    /* 50 */ STRUCT_PAD(0x50, 0x84);
    /* 84 */ unk32 mUnk_84_00 : 16;
    /* 84 */ u32 mUnk_84_16 : 3;
    /* 88 */ unk32 mUnk_88;
    /* 8C */ unk32 mUnk_8C;
    /* 90 */ unk32 mUnk_90;
    /* 94 */ unk32 mUnk_94;
    /* 98 */ unk32 mUnk_98;
    /* 9C */ unk32 mUnk_9C;

    // overlay 0
    void func_ov000_02054a78();
    void func_ov000_02054a88();
    void func_ov000_0205498c(void *pFile);
    void func_ov000_02054998(void *param1);
};

class UnkStruct_027e0cec_18 {
public:
    /* 00 (vtable) */
    /* 04 */ UnkStruct_027e0cec_18_04 *mUnk_04;
    /* 08 */ unk16 mUnk_08;
    /* 0A */ unk16 mUnk_0A; // pad?
    /* 0C */

    UnkStruct_027e0cec_18(UnkFileSystem1 *param1, bool param2, unk32 param3);

    // data_ov001_020c2fcc
    /* 00 */ virtual ~UnkStruct_027e0cec_18();
    /* 08 */

    // overlay 0
    void func_ov000_020a0460();

    // overlay 1
    static void *func_ov001_020bf0a0(size_t length);

    // overlay 17
    void func_ov017_020c297c(unk32 param1, unk32 param2);
    bool func_ov017_020c2ad8(void *param1, unk32 param2, unk32 param3);
};

class UnkStruct_027e0cec : public AutoInstance<UnkStruct_027e0cec> {
public:
    /* 00 */ UnkStruct_027e0cec_00 mUnk_00;
    /* 18 */ UnkStruct_027e0cec_18 *mUnk_18[2];
    /* 20 */ unk32 mUnk_20;
    /* 24 */

    UnkStruct_027e0cec();
    ~UnkStruct_027e0cec();

    // overlay 0
    void func_ov000_0209feac(unk32 param1, VecFx32 *param2, unk32 param3, unk32 param4, unk32 param5);
    void func_ov000_0209ff24(unk32 param1, VecFx32 *param2, VecFx16 *param3, unk32 param4);
    void func_ov000_0209ff8c(UnkStruct_PlayerGet_ec *param1, unk32 param2, VecFx32 *param3, unk32 param4);
    void func_ov000_020a0000(UnkStruct_PlayerGet_ec *param1, void *param2, unk32 *param3, VecFx32 *param4, unk32 param5);
    void func_ov000_020a00d4(UnkStruct_PlayerGet_ec *param1, unk32 param2, unk32 param3, unk32 param4, VecFx32 *param5,
                             unk32 param6);
    void func_ov000_020a0110(UnkSystem7 *param1);
    void func_ov000_020a0140(UnkSystem7 *param1, VecFx32 *param2);
    void func_ov000_020a0220(void *param1, void *param2);
    void func_ov000_0209ff4c(unk32 param1, VecFx32 *param2, UnkAngleStruct param3, unk32 param4);

    // overlay 1
    const char *func_ov001_020bef98();
    void func_ov001_020bf028();

    static UnkStruct_027e0cec *Create();
    static void func_ov001_020bed34();

    // overlay 17
    void func_ov017_020c1e54(unk32 param1, unk32 param2);
    void func_ov017_020c1e9c(unk32 param1, unk32 param2);
    void func_ov017_020c1fc0(unk32 param1, unk32 param2);
};

extern UnkStruct_027e0cec *data_027e0cec;
