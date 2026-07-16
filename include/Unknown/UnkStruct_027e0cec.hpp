#pragma once

#include "LinkList.hpp"
#include "Unknown/UnkFileSystem.hpp"
#include "math.hpp"
#include "types.h"

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
    /* 10 */ void *mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */

    UnkStruct_027e0cec_00(void *param1);

    /* 00 */ virtual void vfunc_00();
};

struct UnkStruct_027e0cec_18_04 {
    /* 00 */ STRUCT_PAD(0x00, 0x3C);
    /* 3C */ unk32 mUnk_3C;
    /* 40 */ unk32 mUnk_40;
    /* 44 */ void *mUnk_44;

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
    void func_ov000_020a0110(UnkStruct_PlayerGet_ec *param1);
    void func_ov000_020a0220(void *param1, void *param2);

    // overlay 1
    const char *func_ov001_020bef98();
    void func_ov001_020bf028();

    static UnkStruct_027e0cec *Create();
    static void func_ov001_020bed34();
};

extern UnkStruct_027e0cec *data_027e0cec;
