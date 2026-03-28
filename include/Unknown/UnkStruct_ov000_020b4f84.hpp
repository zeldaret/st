#pragma once

#include "System/SysNew.hpp"
#include "nns/font.h"
#include "types.h"

enum {
    FontIndex_DSZ2_msg       = 0,
    FontIndex_LC_Font_s      = 1, // unused?
    FontIndex_DSZ2_endL      = 2,
    FontIndex_DSZ2_endS      = 3,
    FontIndex_04             = 4,
    FontIndex_LC_Font_s_Name = 5,
    FontIndex_Max            = 6
};

class UnkStruct_ov000_020b4f84_00_Base2 {
public:
    /* 00 (vtable) */
    /* 04 */ void *mUnk_04;
    /* 08 */ union {
        void *mpFile;
        void *volatile mpFile2;
    };
    /* 0C */ size_t mFileSize;
    /* 10 */ HeapIndex16 mHeapIndex;

    UnkStruct_ov000_020b4f84_00_Base2() {}
    UnkStruct_ov000_020b4f84_00_Base2(void *param1, unk32 param2) :
        mUnk_04(param1),
        mpFile(NULL),
        mFileSize(0),
        mHeapIndex(param2) {}

    /* 00 */ virtual ~UnkStruct_ov000_020b4f84_00_Base2() {}
    /* 08 */ virtual void *vfunc_08(unk32 param1); // file open?
    /* 0C */ virtual void vfunc_0C(void); // allocate?
    /* 10 */ virtual size_t vfunc_10(unk32 param1);
};

// file handler? doesn't seem to be specifically tied to fonts
class UnkStruct_ov000_020b4f84_00_Base : public UnkStruct_ov000_020b4f84_00_Base2 {
public:
    /* 12 */ unk8 mUnk_12;
    /* 13 */ unk8 mUnk_13;
    /* 14 */

    UnkStruct_ov000_020b4f84_00_Base();
    UnkStruct_ov000_020b4f84_00_Base(void *param1, unk32 param2, unk32 param3, u8 param4);

    // data_02043f08 vtable
    /* 00 */ virtual ~UnkStruct_ov000_020b4f84_00_Base() override;
    /* 08 */ virtual void *vfunc_08(unk32 param1) override;
    /* 0C */ virtual void vfunc_0C(void) override;
    /* 10 */ virtual size_t vfunc_10(unk32 param1) override;

    void func_02015528();
    void func_0201552c();
    unk32 func_02015534();
};

// FontEntry?
class UnkStruct_ov000_020b4f84_00 : public UnkStruct_ov000_020b4f84_00_Base {
public:
    /* 00 (base) */
    /* 14 */ Font_UnkStruct1 mUnk_14;
    /* 1C */ unk16 mUnk_1C;
    /* 1E */ unk16 mUnk_1E;
    /* 20 */

    UnkStruct_ov000_020b4f84_00();
    ~UnkStruct_ov000_020b4f84_00();
    void func_ov000_02066610(const char *fontPath, unk32 param2, unk32 param3);
};

// FontManager?
class UnkStruct_ov000_020b4f84 {
public:
    /* 00 */ UnkStruct_ov000_020b4f84_00 mUnk_00[FontIndex_Max];
    /* C0 */ unk16 mUnk_C0;
    /* C2 */ unk16 mUnk_C2;

    UnkStruct_ov000_020b4f84();
    void func_ov000_0206667c(unk32 param1, unk32 param2);
};

// gFontManager?
extern UnkStruct_ov000_020b4f84 data_ov000_020b4f84;
