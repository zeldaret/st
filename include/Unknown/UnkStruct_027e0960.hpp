#pragma once

#include "files.h"
#include "global.h"
#include "iterator.hpp"
#include "types.h"

class UnkStruct_027e0960_TableEntry_04_Base {
public:
    /* 00 (vtable) */
    /* 04 */ unk8 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */

    UnkStruct_027e0960_TableEntry_04_Base();

    // data_02043ff0
    /* 00 */ virtual ~UnkStruct_027e0960_TableEntry_04_Base();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C(VecFx32 *param1) = 0;
    /* 10 */ virtual void vfunc_10()                = 0;
    /* 14 */ virtual void vfunc_14()                = 0;
    /* 18 */ virtual void vfunc_18()                = 0;
    /* 1C */ virtual void vfunc_1C()                = 0;
    /* 20 */
};

class UnkStruct_027e0960_TableEntry_04 : public UnkStruct_027e0960_TableEntry_04_Base {
public:
    /* 00 (base) */
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk16 mUnk_20;
    /* 22 */ unk16 mUnk_22; // pad?
                            /* 24 */

    // data_ov000_020b1bbc
    /* 00 */ virtual ~UnkStruct_027e0960_TableEntry_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(VecFx32 *param1) override;
    /* 10 */ virtual void vfunc_10() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18() override;
    /* 1C */ virtual void vfunc_1C() override;
};

class UnkStruct_027e0960_TableEntry {
public:
    /* 00 */ ZMBEntryRALB *pRALB;
    /* 04 */ Iterator<UnkStruct_027e0960_TableEntry_04> mTable;
    /* 0C */

    UnkStruct_027e0960_TableEntry();
    ~UnkStruct_027e0960_TableEntry();

    bool func_ov000_02059ccc(u8 param1, u8 param2);
};

class UnkStruct_027e0960 {
public:
    /* 00 */ Iterator<UnkStruct_027e0960_TableEntry> mTable;
    /* 08 */

    UnkStruct_027e0960();
    ~UnkStruct_027e0960();

    UnkStruct_027e0960_TableEntry *func_ov000_0205a390(u8 param1);
    UnkStruct_027e0960_TableEntry *func_ov000_0205a3fc(VecFx32 param1, unk32 param4);
};

extern UnkStruct_027e0960 *data_027e0960;
