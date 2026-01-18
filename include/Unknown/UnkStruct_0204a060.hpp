#pragma once

#include "Game/GameModeManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "types.h"

class UnkStruct_0204a060_Base3 : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ GameModeLinkListNode mUnk_04;
    /* 0C */ bool mUnk_0C;
    /* 0D */ unk8 mUnk_0D;
    /* 0E */ unk8 mUnk_0E;
    /* 0F */ unk8 mUnk_0F;
    /* 10 */

    UnkStruct_0204a060_Base3();

    // data_020440f4 vtable
    /* 00 */ virtual ~UnkStruct_0204a060_Base3();
    /* 08 */ virtual bool vfunc_08(unk32 param1);
    /* 0C */
};

class UnkStruct_0204a060_Base2 : public UnkStruct_0204a060_Base3 {
public:
    /* 00 (vtable) */
    /* 10 */ unk16 mUnk_10;
    /* 12 */ unk16 mUnk_12;
    /* 14 */

    UnkStruct_0204a060_Base2();
    void func_0201ba68();
};

class UnkStruct_0204a060_Base : public UnkStruct_0204a060_Base2 {
public:
    /* 00 (base) */
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk8 mUnk_18;
    /* 19 */ unk8 mUnk_19;
    /* 1A */ u16 mUnk_1A;
    /* 1C */ unk16 mUnk_1C;
    /* 1E */ unk16 mUnk_1E;
    /* 20 */ unk16 mUnk_20;
    /* 22 */ unk16 mUnk_22;
    /* 24 */

    UnkStruct_0204a060_Base();
    void func_0201bb84(unk32 param1, unk32 param2, unk32 param3);
    void func_0201bba4(unk32 param1, unk32 param2);
    void func_0201bbcc();

    // data_02044108 vtable
    /* 00 */ virtual ~UnkStruct_0204a060_Base() override;
    /* 08 */ virtual bool vfunc_08(unk32 param1) override;
    /* 0C */ virtual bool vfunc_0C(void);
    /* 10 */ virtual bool vfunc_10(void);
    /* 14 */
};

class UnkStruct_0204a060 : public UnkStruct_0204a060_Base {
public:
    /* 00 (base) */
    /* 24 */ void *callback; //! TODO: is it a PTMF?

    UnkStruct_0204a060();

    void func_020183c0(void);
    bool func_020183d4(bool param1, void *param2, unk32 param3);
    static void func_02018424(void); //! TODO: is it a PTMF?

    // data_02044048 vtable
    /* 00 */ virtual ~UnkStruct_0204a060() override;
    /* 0C */ virtual bool vfunc_0C(void) override;
    /* 14 */

    static void func_020183b8(void);
};

extern UnkStruct_0204a060 data_0204a060;
