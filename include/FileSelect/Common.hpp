#pragma once

#include "Game/GameModeManager.hpp"
#include "System/SysNew.hpp"
#include "global.h"
#include "nitro/math.h"
#include "types.h"

extern "C" void func_0201e8d4(void *param1, void *param2);

struct Vec2s_cpp {
    /* 0 */ s16 x;
    /* 1 */ s16 y;
    /* 2 */

    Vec2s_cpp() {};
    Vec2s_cpp(s16 __x, s16 __y) {
        x = __x;
        y = __y;
    }

    void operator=(Vec2s_cpp &from) {
        x = from.x;
        y = from.y;
    }

    void operator+=(Vec2s_cpp &from) {
        x = from.x + x;
        y = from.y + y;
    }

    Vec2s_cpp &operator+(Vec2s_cpp &from) {
        Vec2s_cpp vec(x + from.x, y + from.y);
        return vec;
    }

    Vec2s_cpp *operator&() {
        return this;
    }
};

struct Vec2us_cpp {
    /* 0 */ u16 x;
    /* 1 */ u16 y;
    /* 2 */

    Vec2us_cpp() {};
    Vec2us_cpp(u16 __x, u16 __y) {
        x = __x;
        y = __y;
    }

    void operator=(Vec2us_cpp &from) {
        x = from.x;
        y = from.y;
    }

    void operator+=(Vec2us_cpp &from) {
        x += from.x;
        y += from.y;
    }

    Vec2us_cpp &operator+(Vec2us_cpp &from) {
        Vec2us_cpp vec(x + from.x, y + from.y);
        return vec;
    }

    Vec2us_cpp *operator&() {
        return this;
    }
};

class UnkSubStruct1 {
public:
    /* 00 (vtable) */
    /* 04 */ u16 mUnk_04;
    /* 06 */ u16 mUnk_06;
    /* 08 */ u16 mUnk_08;
    /* 0A */ bool mUnk_0A;
    /* 0B */ bool mUnk_0B;
    /* 0C */ bool mUnk_0C;
    /* 0D */ bool mUnk_0D;
    /* 0E */ unk8 mUnk_0E;
    /* 0F */ unk8 mUnk_0F;
    /* 10 */ unk32 mUnk_10; // brightness (in this context: of the background)
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */

    UnkSubStruct1();
    // ~UnkSubStruct1() {};
    void func_0201ea68(unk32 param1, unk32 param2, unk32 param3, unk32 param4);
    u16 func_0201eaa0();

    // data_02044330 vtable
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */

    void UnkOperations(Vec2s *pPos, bool doSetPos) {
        int iVar1;

        if (this->mUnk_08 != 0) {
            iVar1         = this->mUnk_08 - this->mUnk_0D;
            this->mUnk_08 = CLAMP(iVar1, 0, 0xFFFF);
        } else {
            if (this->mUnk_0A) {
                if (this->mUnk_04 < this->mUnk_06) {
                    iVar1 = this->mUnk_04 + this->mUnk_0D;

                    if (iVar1 > this->mUnk_06) {
                        iVar1 = this->mUnk_06;
                    } else if (iVar1 < 0) {
                        iVar1 = 0;
                    }

                    this->mUnk_04 = iVar1;
                    this->vfunc_00();

                    if (this->mUnk_04 >= this->mUnk_06) {
                        this->mUnk_10 = this->mUnk_20;
                        this->mUnk_14 = this->mUnk_24;
                        this->mUnk_0A = false;
                        this->mUnk_0C = true;
                    }
                }
            } else {
                if (this->mUnk_0B && this->mUnk_04 != 0) {
                    iVar1 = this->mUnk_04 - this->mUnk_0D;

                    if (iVar1 > this->mUnk_06) {
                        iVar1 = this->mUnk_06;
                    } else if (iVar1 < 0) {
                        iVar1 = 0;
                    }

                    this->mUnk_04 = iVar1;
                    this->vfunc_04();

                    if (this->mUnk_04 == 0) {
                        this->mUnk_10 = this->mUnk_18;
                        this->mUnk_14 = this->mUnk_1C;
                        this->mUnk_0B = false;
                        this->mUnk_0C = true;
                    }
                }
            }
        }

        if (doSetPos) {
            Vec2us local_4c_copy;
            Vec2us local_4c;
            func_0201e8d4(&local_4c_copy, this);
            local_4c.x = local_4c_copy.y;
            local_4c.y = local_4c_copy.x;
            pPos->x    = local_4c.x;
            pPos->y    = local_4c.y;
        }
    }
};

class UnkSubStruct13 {
public:
    /* 000 */ void *mUnk_000; // seems to point to data_ov000_020b4f84+0x14 (is it always the case?)

    // ~UnkSubStruct13();
};

// ---

class UnkSystem2_Base {
public:
    ~UnkSystem2_Base();
};

class UnkSystem2_UnkSubSystem1_Base { // UnkSubStruct2_Base
public:
    /* 04 */ GameModeManagerBase_104_04 mUnk_04;
    /* 0C */ void *mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ Vec2s mPos; // image position (among other things)
    /* 18 */ STRUCT_PAD(0x18, 0x24);
    /* 24 */ Vec2us mPosOffset; // used to shift the button when selected
    /* 28 */ bool mUnk_28; // selected highlight effect when set to true
    /* 29 */ bool mUnk_29; // related to having the button selected
    /* 2A */ bool mUnk_2A; // disables button action
    /* 2A */ bool mUnk_2B;
    /* 2C */ bool mUnk_2C;
    /* 2D */ unk8 mUnk_2D;
    /* 2E */ unk8 mUnk_2E;
    /* 2F */ unk8 mUnk_2F;

    // UnkSystem2_UnkSubSystem1_Base();

    // data_ov000_020b1ecc vtable
    /* 00 */ virtual ~UnkSystem2_UnkSubSystem1_Base() {}
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
};

struct UnkSystem2_Derived1_InitArgs2 {
    unk32 param1;
    unk32 param2;
    unk32 param3;
    unk32 param4;
    unk32 param5;
    unk32 param6;

    UnkSystem2_Derived1_InitArgs2(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6) {
        this->param1 = param1;
        this->param2 = param2;
        this->param3 = param3;
        this->param4 = param4;
        this->param5 = param5;
        this->param6 = param6;
    }
};

struct UnkSystem2_Derived1_InitArgs1 {
    UnkSystem2_Derived1_InitArgs2 subParams;
    unk32 param2;
    unk32 param3;
    unk32 param4;

    UnkSystem2_Derived1_InitArgs1(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6,
                                  unk32 param7, unk32 param8, unk32 param9) :
        subParams(param1, param2, param3, param4, param5, param6) {
        this->param2 = param7;
        this->param3 = param8;
        this->param4 = param9;
    }
};

// this class is related to the selectable buttons (actually more related to texture with things on top)
class UnkSystem2_UnkSubSystem1_Derived1 : public UnkSystem2_UnkSubSystem1_Base, public UnkSystem2_Base { // UnkSubStruct2
public:
    /* 00 (vtable) */
    /* 30 */ void *mUnk_30; // related to the background texture draw (idle)
    /* 34 */ unk32 mUnk_34; // related to the texture draw
    /* 38 */ unk16 mUnk_38; // related to the texture draw
    /* 3C */ Vec2us mUnk_3A; // overlaid elements position (text, icons etc...), relative to background position
    /* 40 */ unk16 mUnk_3E;
    /* 40 */ unk32 mUnk_40;
    /* 44 */ unk32 mUnk_44;
    /* 48 */ void *mUnk_48; // related to the background texture draw (selected)
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ unk16 mUnk_50; // related to the texture draw
    /* 50 */ unk16 mUnk_52;
    /* 54 */ unk32 mUnk_54;
    /* 58 */ unk32 mUnk_58;
    /* 5C */ unk32 mUnk_5C;
    /* 60 */

    UnkSystem2_UnkSubSystem1_Derived1();
    UnkSystem2_UnkSubSystem1_Derived1(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6);
    void func_ov000_020633c0(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6);

    // data_ov000_020b1efc vtable
    /* 00 */ virtual ~UnkSystem2_UnkSubSystem1_Derived1() {}
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
};

class UnkSystem2_UnkSubSystem7 {
public:
    /* 00 */ unk32 mUnk_00;

    ~UnkSystem2_UnkSubSystem7();
};

//! TODO: conflicts with UnkSystem2_UnkSubSystem1_Derived1? mUnk_34 type differs for some reasons
class UnkSystem2_UnkSubSystem1_Derived2 : public UnkSystem2_UnkSubSystem1_Base, public UnkSystem2_Base {
public:
    /* 00 (vtable) */
    /* 30 */ void *mUnk_30; // related to the background texture draw (idle)
    /* 34 */ UnkSystem2_UnkSubSystem7 mUnk_34; // related to the texture draw
    /* 38 */ unk16 mUnk_38; // related to the texture draw
    /* 3C */ Vec2us mUnk_3A; // overlaid elements position (text, icons etc...), relative to background position
    /* 40 */ unk16 mUnk_3E;
    /* 40 */ unk32 mUnk_40;
    /* 44 */ unk32 mUnk_44;
    /* 48 */ void *mUnk_48; // related to the background texture draw (selected)
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ unk16 mUnk_50; // related to the texture draw
    /* 50 */ unk16 mUnk_52;
    /* 54 */ unk32 mUnk_54;
    /* 58 */ unk32 mUnk_58;
    /* 5C */ unk32 mUnk_5C;
    /* 60 */

    UnkSystem2_UnkSubSystem1_Derived2(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6);
    void func_ov000_020633c0(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6);

    // data_ov000_020b1efc vtable
    /* 00 */ virtual ~UnkSystem2_UnkSubSystem1_Derived2() {}
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
};

class UnkSystem2_UnkSubSystem3 { // UnkSubStruct4
public:
    /* 00 */ UnkSystem2_UnkSubSystem1_Base *mUnk_00;
    /* 04 */

    UnkSystem2_UnkSubSystem3(UnkSystem2_UnkSubSystem1_Base *param1, unk32 param2, unk32 param3, unk32 param4);

    void func_ov000_02062f30();
};

class UnkSystem2_Derived1 : public UnkSystem2_Base {
public:
    /* 00 */ UnkSystem2_UnkSubSystem1_Derived1 mUnk_00;
    /* 60 */ UnkSystem2_UnkSubSystem3 mUnk_60;
    /* 64 */

    UnkSystem2_Derived1(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6, unk32 param7,
                        unk32 param8, unk32 param9) :
        mUnk_00(param1, param2, param3, param4, param5, param6),
        mUnk_60(&mUnk_00, param7, param8, param9) {}
};

class UnkSystem2_UnkSubSystem5_Base {
public:
    ~UnkSystem2_UnkSubSystem5_Base();

    // /* 00 */ virtual void vfunc_00();
    int vtable_pad;
};

class UnkSystem2_UnkSubSystem11 {
public:
    int vtable_pad;
    /* 00 (vtable) */
    /* 04 */ void *mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ void *mUnk_18;
    /* 1C */ void *mUnk_1C;
    /* 20 */

    void func_ov000_02061f60();
    ~UnkSystem2_UnkSubSystem11();

    // data_ov000_020b1e9c vtable
    // /* 00 */ virtual void vfunc_00();
    // /* 04 */ virtual void vfunc_04();
    // /* 08 */ virtual void vfunc_08();
    // /* 0C */ virtual void vfunc_0C();
};

// this class seems related to drawing strings?
class UnkSystem2_UnkSubSystem5 : public UnkSystem2_UnkSubSystem5_Base { // UnkSubStruct11
public:
    /* 000 (vtable) */
    /* 004 */ wchar_t *mpString; // in this context it points to the player's name
    /* 008 */ unk16 mUnk_008;
    /* 00A */ unk16 mUnk_00A;
    /* 00C */ void *mUnk_00C; // seems to point to mUnk_1B8
    /* 010 */ void *mUnk_010; // vtable (data_ov000_020b20fc)
    /* 014 */ void *mUnk_014; // seems to point to mUnk_1B8
    /* 018 */ unk32 mUnk_018;
    /* 01C */ void *mUnk_01C;
    /* 020 */ unk32 mUnk_020;
    /* 024 */ unk32 mUnk_024;
    /* 028 */ unk8 mUnk_028;
    /* 029 */ unk8 mUnk_029;
    /* 02A */ unk8 mUnk_02A;
    /* 02B */ unk8 mUnk_02B;
    /* 02C */ unk32 mUnk_02C;
    /* 030 */ unk32 mUnk_030;
    /* 034 */ unk32 mUnk_034;
    /* 038 */ unk32 mUnk_038;
    /* 03C */ unk32 mUnk_03C;
    /* 040 */ unk32 mUnk_040;
    /* 044 */ unk32 mUnk_044;
    /* 048 */ unk32 mUnk_048;
    /* 04C */ unk32 mUnk_04C;
    /* 050 */ STRUCT_PAD(0x50, 0x140);
    /* 140 */ unk16 mUnk_140;
    /* 142 */ unk16 mUnk_142;
    /* 144 */ unk16 mUnk_144;
    /* 146 */ unk16 mUnk_146;
    /* 148 */ unk32 mUnk_148;
    /* 14C */ unk8 mUnk_14C; // 0x544
    /* 14D */ unk8 mUnk_14D; // 0x545
    /* 14E */ unk8 mUnk_14E; // 0x546
    /* 14F */ unk8 mUnk_14F; // 0x547
    /* 150 */ UnkSystem2_UnkSubSystem11 mUnk_150;
    /* 170 */ UnkSubStruct13 mUnk_170;
    /* 144 */ STRUCT_PAD(0x174, 0x238);
    /* 238 */

    UnkSystem2_UnkSubSystem5() {}
    UnkSystem2_UnkSubSystem5(unk32 param1, unk32 param2);
    ~UnkSystem2_UnkSubSystem5() {}

    void func_0201f498();
    void func_0201f4b4(unk32 param1);
    void func_0201f500(void *param1);
    void func_0201f730(unk32 param1);
    void func_0201f9c4();
    void func_0201fb78(wchar_t *param1);
    void func_0201fa70(unk32 param1);

    // data_0204439c vtable
    // /* 00 */ virtual void vfunc_00();
};

class UnkSystem2_UnkSubSystem8_Base {
public:
    /* 00 (vtable) */
    /* 04 */ UnkSystem2_UnkSubSystem1_Derived2 *mUnk_04;
    /* 08 */ bool mUnk_08;
    /* 09 */ unk8 mUnk_09;
    /* 0A */ unk8 mUnk_0A;
    /* 0B */ unk8 mUnk_0B;
    /* 0C */

    UnkSystem2_UnkSubSystem8_Base(UnkSystem2_UnkSubSystem1_Derived2 *param1);

    // data_ov000_020b1fac vtable
    /* 00 */ virtual void vfunc_00() = 0;
    /* 04 */ virtual void vfunc_04() = 0;
};

// seems to be related to the animations of the ui elements
class UnkSystem2_UnkSubSystem9 : public UnkSubStruct1 { // UnkSubStruct3
public:
    /* 00 (base) */
    /* 30 */ unk32 mUnk_30;
    /* 34 */ unk32 mUnk_34;
    /* 38 */ unk32 mUnk_38;
    /* 3C */ unk32 mUnk_3C;
    /* 40 */ unk32 mUnk_40;
    /* 44 */

    UnkSystem2_UnkSubSystem9();

    // data_020442f4 vtable
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */

    //! TODO: conflict with UnkStruct_ov019_020d24c8_28_304
    void func_0201e874(unk32 param1, void *param2, void *param3, unk32 param4);
};

class UnkSystem2_UnkSubSystem8 : public UnkSystem2_UnkSubSystem8_Base { // UnkSubStruct7
public:
    /* 00 (base) */
    /* 0C */ UnkSystem2_UnkSubSystem9 mUnk_0C;
    /* 50 */

    UnkSystem2_UnkSubSystem8() :
        UnkSystem2_UnkSubSystem8_Base(NULL) {}

    UnkSystem2_UnkSubSystem8(UnkSystem2_UnkSubSystem1_Derived2 *param1) :
        UnkSystem2_UnkSubSystem8_Base(param1) {}

    UnkSystem2_UnkSubSystem8(UnkSystem2_UnkSubSystem1_Derived1 *param1) :
        UnkSystem2_UnkSubSystem8_Base((UnkSystem2_UnkSubSystem1_Derived2 *) param1) {}

    void func_ov000_02064080(void *param1, void *param2, unk32 param3, u16 param4);
    void func_ov000_0206415c(void *param1, unk32 param2, unk32 param3, unk32 param4);
    void func_ov000_02063f64();

    // data_ov000_020b1f8c vtable
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
};

class UnkSystem2_Derived2 : public UnkSystem2_Base {
public:
    /* 00 */ UnkSystem2_UnkSubSystem1_Derived2 mUnk_00;
    /* 60 */ unk8 mUnk_60[0x38];
    /* 98 */ UnkSystem2_UnkSubSystem8 mUnk_98;
    /* E8 */ UnkSystem2_UnkSubSystem3 mUnk_E8;
    /* EC */

    UnkSystem2_Derived2(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6, unk32 param7,
                        unk32 param8, unk32 param9) :
        mUnk_00(param1, param2, param3, param4, param5, param6),
        mUnk_E8(&mUnk_00, param7, param8, param9) {}
};

class UnkSystem3 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    UnkSystem3(const char *path, unk32 param2);
    ~UnkSystem3();
    void func_02015410(const char *path, unk32 param2);
    void func_02015460(const char *param1, void *param2, unk32 param3);
};

class UnkSystem4 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */

    ~UnkSystem4();
};

extern "C" void func_0200a7b0(unk32 param1, const char *param2, const char *param3, const char *param4, unk32 param5,
                              unk32 param6, unk32 param7, unk32 param8);

class UnkSystem5 {
public:
    /* 00 */ char *mUnk_00;
    /* 04 */ char *mUnk_04;
    /* 08 */ char *mUnk_08;
    /* 10 */ UnkSystem4 mUnk_0F00;
    /* 20 */ UnkSystem4 mUnk_0F10;
    /* 30 */ UnkSystem4 mUnk_0F20;
    /* 40 */

    UnkSystem5() {}
    // UnkSystem5(const char *param1, const char *param2, const char *param3, unk32 param4, unk32 param5, unk32 param6) {
    //     func_0200a7b0(param4, mUnk_00, mUnk_04, mUnk_08, 0, 0, param5, param6);
    // }
    ~UnkSystem5() {}
    void func_020171e4();
    void func_02017520(const char *nscrPath, const char *ncgrPath, const char *nclrPath);
};

// ---

class UnkSubStruct10 {
public:
    /* 00 */ void *mUnk_00;
    /* 04 */ void *mUnk_04;

    UnkSubStruct10();
    void func_020166ac(void);
    void func_020166cc(void *param1);
};

class UnkSubStruct14 {
public:
    /* 00 (vtable) */
    /* 04 */ void *mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ void *mUnk_18;
    /* 1C */ void *mUnk_1C;
    /* 20 */

    void func_ov000_02061f60();
    // ~UnkSubStruct14();

    // data_020443a8 vtable
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
};

class UnkSubStruct20 : public UnkSystem2_UnkSubSystem1_Derived1 {
public:
    /* 060 */ unk8 mUnk_060[0x38];
    /* 098 */ UnkSystem2_UnkSubSystem8 mUnk_098;
    /* 0E8 */ UnkSystem2_UnkSubSystem3 mUnk_0E8;
    /* 324 */

    UnkSubStruct20(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6, unk32 param7,
                   unk32 param8, unk32 param9) :
        UnkSystem2_UnkSubSystem1_Derived1(param1, param2, param3, param4, param5, param6),
        mUnk_0E8(this, param7, param8, param9) {}
};
