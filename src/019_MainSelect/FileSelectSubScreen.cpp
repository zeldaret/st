#include "FileSelect/FileSelect.hpp"
#include "FileSelect/FileSelectOptionsManager.hpp"
#include "System/Random.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "regs.h"

extern "C" {
void func_0200a7b0(unk32 param1, const char *param2, const char *param3, const char *param4, unk32 param5, unk32 param6,
                   unk32 param7, unk32 param8);
void func_020249d4(void *pReg, unk32 param1, unk32 param2, unk32 param3, unk32 param4);
void func_020275e8();

//! TODO: conflict between UnkStructSub4, UnkStructSub4_2 and UnkStructSub19
unk32 func_ov000_020609c4(void *thisx);
unk32 func_ov000_02060af8(void *thisx);
};

#pragma dont_reuse_strings off

FileSelectOptionsManager *gpFSOptionsManager = NULL;

static unk8 data_ov019_020fb8cc[0xDC00];
static unk8 data_ov019_020e00cc[0xDC00];
static unk8 data_ov019_020d24cc[0xDC00];
static unk8 data_ov019_020edccc[0xDC00];
static unk8 data_ov019_021094cc[0xDC00];

const unk32 data_ov019_020d1bcc[] = {0x00010000, 0x00000002};

class UnkStruct2 {
public:
    /* 00 */ unk8 mUnk_00[0x10];
    /* 10 */

    UnkStruct2(const char *path, unk32 param2);
    ~UnkStruct2();
    void func_020154ec(const char *param1);
};

ARM FileSelectSubScreen::FileSelectSubScreen() :
    mUnk_001C(0),
    mUnk_0020(0),
    mUnk_0028(1),
    mUnk_0EB8("Screen/Bg/Tape_a.bin", 1),
    mUnk_0EC4("Screen/Bg/Tape_b.bin", 1),
    mUnk_0ED0("Screen/Bg/Tape_c.bin", 1),
    mUnk_0EDC("Screen/Bg/Tape_d.bin", 1),
    mUnk_0EE8("Screen/Bg/Tape_e.bin", 1) {
    this->mUnk_0EF4.func_020171e4();
    this->mUnk_0F30.func_020171e4();
    this->mUnk_0F6C.func_020171e4();
    this->mUnk_0FA8.func_020171e4();
    this->mUnk_0FE4.func_020171e4();

    this->mUnk_0EB8.func_02015460("TPA", data_ov019_020fb8cc, sizeof(data_ov019_020fb8cc));
    this->mUnk_0EC4.func_02015460("TPB", data_ov019_020edccc, sizeof(data_ov019_020edccc));
    this->mUnk_0ED0.func_02015460("TPC", data_ov019_020d24cc, sizeof(data_ov019_020d24cc));
    this->mUnk_0EDC.func_02015460("TPD", data_ov019_020e00cc, sizeof(data_ov019_020e00cc));
    this->mUnk_0EE8.func_02015460("TPE", data_ov019_021094cc, sizeof(data_ov019_021094cc));

    func_020275e8();

    this->mUnk_0EF4.func_02017520("TPA:Tape_a", "TPA:Tape_a", NULL);
    this->mUnk_0F30.func_02017520("TPB:Tape_b", "TPB:Tape_b", NULL);
    this->mUnk_0F6C.func_02017520("TPC:Tape_c", "TPC:Tape_c", NULL);
    this->mUnk_0FA8.func_02017520("TPD:Tape_d", "TPD:Tape_d", NULL);
    this->mUnk_0FE4.func_02017520("TPE:Tape_e", "TPE:Tape_e", NULL);

    REG_DISPCNT_SUB &= 0xFFFFE0FF;
    REG_DISPCNT_SUB |= 0x00001F00;
    func_020249d4(&REG_BLDCNT_SUB, 0x01, 0x1E, 0x08, 0x0A);

    {
        UnkStruct2 auStack_28("Screen/Bg/Cover.bin", 1);
        auStack_28.func_020154ec("CVR");

        func_020275e8();

        {
            // UnkSystem5 uStack_64("CVR:Cover", "CVR:Cover", "CVR:Tape", 4, 6, 1);
            UnkSystem5 uStack_64;
            func_0200a7b0(4, "CVR:Cover", "CVR:Cover", "CVR:Tape", 0, 0, 6, 1);
        }

        {
            // UnkSystem5 uStack_a0("CVR:Line", NULL, NULL, 7, 0, 1);
            UnkSystem5 uStack_a0;
            func_0200a7b0(7, "CVR:Line", NULL, NULL, 0, 0, 0, 1);
        }
    }

    this->func_ov019_020cf73c(1, 0);
    this->func_ov019_020cf73c(2, 1);
}

ARM void FileSelectSubScreen::vfunc_08() {
    this->mUnk_0024 = this->mUnk_0020;
    this->mUnk_0020 += 0x800;

    REG_BG1HOFS_SUB = ROUND_Q20(this->mUnk_0020) & 0x1FF;
    REG_BG2HOFS_SUB = (ROUND_Q20(this->mUnk_0020) + 0x100) & 0x1FF;
    REG_BG3HOFS_SUB = (ROUND_Q20(this->mUnk_0020) / 2) & 0x1FF;

    if (!(ROUND_Q20(this->mUnk_0020) % 256) && (ROUND_Q20(this->mUnk_0024) % 256)) {
        switch (this->mUnk_001C) {
            case 0:
                this->mUnk_001C = 1;
                this->func_ov019_020cf73c(this->mUnk_0028, 2);
                break;
            case 1:
                this->mUnk_001C = 2;
                this->func_ov019_020cf73c(this->mUnk_0028, 3);
                break;
            case 2:
                this->mUnk_001C = 3;
                this->func_ov019_020cf73c(this->mUnk_0028, 4);
                break;
            case 3:
                this->mUnk_001C = 4;
                this->func_ov019_020cf73c(this->mUnk_0028, 0);
                break;
            case 4:
                this->mUnk_001C = 0;
                this->func_ov019_020cf73c(this->mUnk_0028, 1);
                break;
            default:
                break;
        }

        if (this->mUnk_0028 == 2) {
            this->mUnk_0028 = 1;
            this->mUnk_0020 = 0;
        } else {
            this->mUnk_0028 = 2;
            this->mUnk_0020 += 0x800;
        }
    }

    this->mUnk_002C.vfunc_00();
}

ARM void FileSelectSubScreen::func_ov019_020cf73c(unk32 param1, unk32 param2) {
    unk32 arg0;
    unk32 arg7;
    unk32 arg8;

    switch (param1) {
        case 1:
            arg0 = 5;
            arg7 = 4;
            arg8 = 5;
            break;
        case 2:
            arg0 = 6;
            arg7 = 2;
            arg8 = 2;
            break;
        default:
            //! @bug: arg0, arg7 and arg8 can be used uninitialized.
            break;
    }

    switch (param2) {
        case 0:
            func_0200a7b0(arg0, this->mUnk_0EF4.mUnk_00, this->mUnk_0EF4.mUnk_04, this->mUnk_0EF4.mUnk_08, 0, 0, arg7, arg8);
            break;
        case 1:
            func_0200a7b0(arg0, this->mUnk_0F30.mUnk_00, this->mUnk_0F30.mUnk_04, this->mUnk_0F30.mUnk_08, 0, 0, arg7, arg8);
            break;
        case 2:
            func_0200a7b0(arg0, this->mUnk_0F6C.mUnk_00, this->mUnk_0F6C.mUnk_04, this->mUnk_0F6C.mUnk_08, 0, 0, arg7, arg8);
            break;
        case 3:
            func_0200a7b0(arg0, this->mUnk_0FA8.mUnk_00, this->mUnk_0FA8.mUnk_04, this->mUnk_0FA8.mUnk_08, 0, 0, arg7, arg8);
            break;
        case 4:
            func_0200a7b0(arg0, this->mUnk_0FE4.mUnk_00, this->mUnk_0FE4.mUnk_04, this->mUnk_0FE4.mUnk_08, 0, 0, arg7, arg8);
            break;
        default:
            break;
    }
}

ARM void FileSelectSubScreen::vfunc_10() {
    this->mUnk_002C.vfunc_04();
}

ARM UnkStructSub2::UnkStructSub2() {}

// non-matching
ARM void FileSelect_UnkClass7::vfunc_00() {
    int i;

    for (i = 0; i < 0x1E; i++) {
        UnkStructSub4 *pVar6 = &this->mUnk_0004[i];

        func_ov000_020609c4(pVar6);

        if (func_ov000_02060af8(pVar6) != 0) {
            pVar6->func_ov000_02060b64();
            this->mUnk_0E14[i].one = (u16) gRandom.Next(0, 256);
            this->mUnk_0E14[i].two = (u16) gRandom.Next(0, 192);
        }
    }
}

ARM void FileSelect_UnkClass7::vfunc_04() {
    for (int i = 0; i < 0x1E; i++) {
        data_0204af1c.func_0201aad0(&this->mUnk_0004[i], &this->mUnk_0E14[i], 1, 0);
    }
}
