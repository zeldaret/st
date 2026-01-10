#pragma once

#include "Save/SaveManager.hpp"
#include "System/SysNew.hpp"
#include "types.h"

// unknown purpose, graphics related?

// data_ov000_020b2078
class UnkSystem1_ov000_Base : public SysObject {
public:
    /* 00 (vtable) */

    UnkSystem1_ov000_Base(unk32 param1, unk32 param2);
    // ~UnkSystem1_ov000_Base();

    /* 00 */ virtual void vfunc_00(); // func_ov000_020667d8
    /* 04 */ virtual void vfunc_04(); // func_ov000_020667f4
    /* 08 */ virtual void vfunc_08(unk32 param1); // func_ov000_020669cc
    /* 0C */ virtual void vfunc_0C(); // func_ov000_020669d0
    /* 10 */ virtual void vfunc_10(); // func_ov000_02066a5c
    /* 14 */ virtual void vfunc_14(); // func_ov000_02066dfc
    /* 18 */ virtual void vfunc_18(); // func_ov000_020669d8
    /* 1C */ virtual unk32 vfunc_1C(u32 param1, unk32 param2, unk32 param3); // func_ov000_02067234
    /* 20 */ virtual unk32 vfunc_20(unk32 param1, unk32 param2, unk32 param3); // func_ov000_0206723c
    /* 24 */
};

// data_ov000_020b20a4
class UnkSystem1_ov000_Derived1 : public UnkSystem1_ov000_Base {
public:
    /* 00 (base) */
    /* 04 */ unk16 mUnk_04;
    /* 06 */ unk16 mUnk_06;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk16 mUnk_10;
    /* 12 */ unk8 mUnk_12; // file slot index
    /* 13 */ unk8 mUnk_13;
    /* 14 */

    UnkSystem1_ov000_Derived1();
    UnkSystem1_ov000_Derived1(unk32 param1, unk32 param2);

    /* 08 */ virtual void vfunc_08(unk32 param1); // func_ov000_020673c8
    /* 0C */ virtual void vfunc_0C(); // func_ov000_02067434
    /* 10 */ virtual void vfunc_10(); // func_ov000_02067474
    /* 24 */ virtual ~UnkSystem1_ov000_Derived1(); // func_ov000_020672ac & func_ov000_020672f4
};

// data_ov000_020b489c
class UnkSystem1_ov000_Derived2 : public UnkSystem1_ov000_Base {
public:
    /* 00 (base) */

    UnkSystem1_ov000_Derived2(unk32 param1, unk32 param2);

    /* 08 */ virtual void vfunc_08(unk32 param1); // func_ov000_0209fbec
    /* 0C */ virtual void vfunc_0C(); // func_ov000_0209fcdc
    /* 24 */ virtual ~UnkSystem1_ov000_Derived2(); // func_ov000_0209fb18 & func_ov000_0209fb5c
};

// data_ov010_020b8e10
class UnkSystem1_ov010 : public UnkSystem1_ov000_Derived1 {
public:
    /* 00 (base) */

    UnkSystem1_ov010(unk32 param1, unk32 param2);

    /* 08 */ virtual void vfunc_08(unk32 param1); // func_ov010_020b8844
    /* 1C */ virtual unk32 vfunc_1C(u32 param1, unk32 param2, unk32 param3); // func_ov010_020b8878
    /* 24 */ virtual ~UnkSystem1_ov010(); // func_ov010_020b65f0
};

class UnkSystem1_ov010_Derived1 : public UnkSystem1_ov010 {
public:
    /* 00 (base) */

    UnkSystem1_ov010_Derived1(unk32 param1, unk32 param2);
    /* 24 */ virtual ~UnkSystem1_ov010_Derived1(); // func_ov010_020b88b0
};

// data_ov016_020b8278
class UnkSystem1_ov016 : public UnkSystem1_ov000_Derived1 {
public:
    /* 00 (base) */

    UnkSystem1_ov016(unk32 param1, unk32 param2);

    /* 24 */ virtual ~UnkSystem1_ov016(); // func_ov016_020b7650
};

class UnkSystem1_ov016_Derived1 : public UnkSystem1_ov016 {
public:
    /* 00 (base) */

    UnkSystem1_ov016_Derived1(unk32 param1, unk32 param2);
    /* 24 */ virtual ~UnkSystem1_ov016_Derived1(); // func_ov016_020b7664
    /* 2C */ virtual void vfunc_2C(); // func_ov016_020b776c
};

// data_ov019_020d1e00
class UnkSystem1_ov019_1 : public UnkSystem1_ov000_Derived1 {
public:
    /* 00 (base) */

    UnkSystem1_ov019_1();
    UnkSystem1_ov019_1(unk32 param1, unk32 param2) :
        UnkSystem1_ov000_Derived1(param1, param2) {};

    /* 24 */ virtual ~UnkSystem1_ov019_1() {}; // func_ov019_020c4914
};

class UnkSystem1_ov019_Derived1 : public UnkSystem1_ov019_1 {
public:
    /* 00 (base) */
    /* 14 */ SaveFile *mUnk_14;
    /* 18 */ unk16 mUnk_18;
    /* 1A */ unk8 mUnk_1A; // bool?
    /* 1B */ u8 mUnk_1B; // bool?
    /* 1C */

    UnkSystem1_ov019_Derived1();
    UnkSystem1_ov019_Derived1(unk32 param1, unk32 param2);

    void func_ov019_020c5200();
    unk32 func_ov019_020c5540(bool param1, unk16 param2);
    void func_ov019_020c5590(unk32 param1, unk32 param2, unk32 param3);

    /* 08 */ virtual void vfunc_08(unk32 param1); // func_ov019_020c523c
    /* 1C */ virtual unk32 vfunc_1C(u32 param1, unk32 param2, unk32 param3); // func_ov019_020c5284
    /* 20 */ virtual unk32 vfunc_20(unk32 param1, unk32 param2, unk32 param3); // func_ov019_020c5430
    /* 24 */ WEAK virtual ~UnkSystem1_ov019_Derived1() {} // func_ov019_020c5614
};

class UnkSystem1_ov019_2 : public UnkSystem1_ov000_Derived1 {
public:
    /* 00 (base) */

    UnkSystem1_ov019_2(unk32 param1, unk32 param2) :
        UnkSystem1_ov000_Derived1(param1, param2) {}

    /* 24 */ virtual ~UnkSystem1_ov019_2() {}; // func_ov019_020c4c38
};

// used to create new files
class UnkSystem1_ov019_Derived2 : public UnkSystem1_ov019_2 { // 0x02262F24
public:
    /* 00 (base) */
    /* 14 */ bool mUnk_14;
    /* 15 */ u8 mUnk_15;
    /* 16 */ unk8 mUnk_16;
    /* 17 */ unk8 mUnk_17;
    /* 18 */

    UnkSystem1_ov019_Derived2();

    // data_ov019_020d2440 vtable
    /* 08 */ virtual void vfunc_08(unk32 param1); // func_ov019_020d035c
    /* 1C */ virtual unk32 vfunc_1C(u32 param1, unk32 param2, unk32 param3); // func_ov019_020d03a4
    /* 24 */ WEAK virtual ~UnkSystem1_ov019_Derived2(){}; // func_ov019_020d0594
};

class UnkSystem1_ov019_3 : public UnkSystem1_ov000_Derived1 {
public:
    /* 00 (base) */
    /* 14 */

    UnkSystem1_ov019_3(unk32 param1, unk32 param2) :
        UnkSystem1_ov000_Derived1(param1, param2) {};

    /* 24 */ virtual ~UnkSystem1_ov019_3() {}; // func_ov019_020c5fd0
};

// used to copy and delete files
class UnkSystem1_ov019_Derived3 : public UnkSystem1_ov019_3 {
public:
    /* 00 (base) */
    /* 14 */ bool mUnk_14;
    /* 15 */ unk8 mUnk_15;
    /* 16 */ unk8 mUnk_16;
    /* 17 */ unk8 mUnk_17;
    /* 18 */ unk32 mUnk_18; // operating mode: 0 for copy and 1 for erase
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ u8 mUnk_20; // bool?
    /* 21 */ bool mUnk_21;
    /* 22 */ unk8 mUnk_22;
    /* 22 */ unk8 mUnk_23;

    UnkSystem1_ov019_Derived3();

    // data_ov019_020d2474 vtable
    /* 08 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08(unk32 param1);
    /* 1C */ virtual unk32 vfunc_1C(u32 param1, unk32 param2, unk32 param3);
    /* 24 */ WEAK virtual ~UnkSystem1_ov019_Derived3() {}
};

// data_ov036_021225f4
class UnkSystem1_ov036 : public UnkSystem1_ov000_Derived1 {
public:
    /* 00 (base) */

    UnkSystem1_ov036(unk32 param1, unk32 param2);

    /* 24 */ virtual ~UnkSystem1_ov036(); // func_ov036_0211eb68
};

class UnkSystem1_ov036_Derived1 : public UnkSystem1_ov036 {
public:
    /* 00 (base) */

    UnkSystem1_ov036_Derived1(unk32 param1, unk32 param2);

    /* 24 */ virtual ~UnkSystem1_ov036_Derived1(); // func_ov036_02120c18
};

// data_ov056_0213ec20
class UnkSystem1_ov056 : public UnkSystem1_ov000_Derived1 {
public:
    /* 00 (base) */

    UnkSystem1_ov056(unk32 param1, unk32 param2);

    /* 24 */ virtual ~UnkSystem1_ov056(); // func_ov056_0213b910
};

class UnkSystem1_ov056_Derived1 : public UnkSystem1_ov056 {
public:
    /* 00 (base) */

    UnkSystem1_ov056_Derived1(unk32 param1, unk32 param2);

    /* 24 */ virtual ~UnkSystem1_ov056_Derived1(); // func_ov056_0213d4dc
};

// data_ov059_02163a28
class UnkSystem1_ov059 : public UnkSystem1_ov000_Derived1 {
public:
    /* 00 (base) */

    UnkSystem1_ov059(unk32 param1, unk32 param2);

    /* 24 */ virtual ~UnkSystem1_ov059(); // func_ov059_021605c8 (?)
};

class UnkSystem1_ov059_Derived1 : public UnkSystem1_ov059 {
public:
    /* 00 (base) */

    UnkSystem1_ov059_Derived1(unk32 param1, unk32 param2);

    /* 24 */ virtual ~UnkSystem1_ov059_Derived1(); // func_ov059_02160d98
};

// data_ov062_021608e8
class UnkSystem1_ov062 : public UnkSystem1_ov000_Derived1 {
public:
    /* 00 (base) */

    UnkSystem1_ov062(unk32 param1, unk32 param2);

    /* 24 */ virtual ~UnkSystem1_ov062(); // func_ov062_0215cf18
};

class UnkSystem1_ov062_Derived1 : public UnkSystem1_ov062 {
public:
    /* 00 (base) */

    UnkSystem1_ov062_Derived1(unk32 param1, unk32 param2);

    /* 24 */ virtual ~UnkSystem1_ov062_Derived1(); // func_ov062_0215e734
};

// data_ov063_02163714
class UnkSystem1_ov063 : public UnkSystem1_ov000_Derived1 {
public:
    /* 00 (base) */

    UnkSystem1_ov063(unk32 param1, unk32 param2);

    /* 24 */ virtual ~UnkSystem1_ov063(); // func_ov063_0215f1c0
};

class UnkSystem1_ov063_Derived1 : public UnkSystem1_ov063 {
public:
    /* 00 (base) */

    UnkSystem1_ov063_Derived1(unk32 param1, unk32 param2);

    /* 24 */ virtual ~UnkSystem1_ov063_Derived1(); // func_ov063_0215f29c
};
