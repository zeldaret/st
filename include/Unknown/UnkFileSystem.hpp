#pragma once

#include "System/SysNew.hpp"
#include "types.h"

class UnkFileSystem1 {
public:
    /* 00 (vtable) */
    /* 04 */ void *mUnk_04;
    /* 08 */ union {
        void *mpFile;
        void *volatile mpFile2;
    };
    /* 0C */ size_t mFileSize;
    /* 10 */

    UnkFileSystem1(void *param1) :
        mUnk_04(param1),
        mpFile(NULL),
        mFileSize(0) {}

    // data_02043f78
    /* 00 */ virtual ~UnkFileSystem1(); // func_02015518 && func_0201551c && func_02015528
    /* 08 */ virtual void *vfunc_08(unk32 param1) = 0;
    /* 0C */ virtual void vfunc_0C(void); // func_0201552c
    /* 10 */ virtual size_t vfunc_10(unk32 param1); // func_02015534
    /* 14 */
};

class UnkFileSystem5 : public UnkFileSystem1 {
public:
    /* 00 (base) */
    /* 10 */ HeapIndex16 mHeapIndex;
    /* 12 */ unk8 mUnk_12;
    /* 13 */ unk8 mUnk_13;
    /* 14 */

    UnkFileSystem5();
    UnkFileSystem5(void *param1, unk32 param2, unk32 param3, u8 param4);

    // data_02043f08
    /* 00 */ virtual ~UnkFileSystem5() override;
    /* 08 */ virtual void *vfunc_08(unk32 param1) override;
    /* 0C */ virtual void vfunc_0C(void) override;
    /* 10 */ virtual size_t vfunc_10(unk32 param1) override;
};

class UnkFileSystem2_10 {
public:
    /* 00 */ void *mpFile;

    UnkFileSystem2_10(); // func_02015380
    ~UnkFileSystem2_10(); // func_020153c4
};

class UnkFileSystem4 : public UnkFileSystem1 {
public:
    /* 00 (base) */
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ u8 mUnk_18;
    /* 1C */

    UnkFileSystem4(void *param1, unk32 param2, unk32 param3, unk32 param4); // func_02015628

    // data_02043f24
    /* 00 */ virtual ~UnkFileSystem4() override; // func_02015644 && func_02015650
    /* 08 */ virtual void *vfunc_08(unk32 param1) override; // func_02015664
};

class UnkFileSystem3 : public UnkFileSystem1 {
public:
    /* 00 (base) */
    /* 10 */

    UnkFileSystem3(void *param1) :
        UnkFileSystem1(param1) {}

    // data_02043f40
    /* 00 */ virtual ~UnkFileSystem3() override; // func_0201568c && func_02015698
    /* 08 */ virtual void *vfunc_08(unk32 param1) override; // func_020156ac
};

class UnkFileSystem2 : public UnkFileSystem1 {
public:
    /* 00 (base) */
    /* 10 */ UnkFileSystem2_10 mUnk_10;
    /* 14 */ unk8 mUnk_14;

    UnkFileSystem2(void *param1, unk32 param2); // func_020156c8

    // data_02043f5c
    /* 00 */ virtual ~UnkFileSystem2() override; // func_020156f4 && func_02015708
    /* 08 */ virtual void *vfunc_08(unk32 param1) override; // func_02015724
    /* 0C */ virtual void vfunc_0C(void) override; // func_02015750
    /* 10 */ virtual size_t vfunc_10(unk32 param1) override; // func_02015758
};
