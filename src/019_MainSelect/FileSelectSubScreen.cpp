#include "FileSelect/FileSelect.hpp"
#include "FileSelect/FileSelectOptionsManager.hpp"
#include "System/Random.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "global.h"
#include "regs.h"

extern "C" {
void func_0200a7b0(unk32 param1, void *param2, void *param3, void *param4, unk32 param5, unk32 param6, unk32 param7,
                   unk32 param8);
void func_020249d4(void *pReg, unk32 param1, unk32 param2, unk32 param3, unk32 param4);
void DC_FlushAll();
};

FileSelectOptionsManager *gpFSOptionsManager = NULL;

static unk8 data_ov019_020fb8cc[0xDC00];
static unk8 data_ov019_021094cc[0xDC00];
static unk8 data_ov019_020d24cc[0xDC00];
static unk8 data_ov019_020e00cc[0xDC00];
static unk8 data_ov019_020edccc[0xDC00];

const u16 data_ov019_020d1bcc[] = {0x00, 0x01, 0x02};

// https://decomp.me/scratch/LzPt6
ARM FileSelectSubScreen::FileSelectSubScreen() :
    mUnk_001C(0),
    mUnk_0020(0),
    mUnk_0028(1),
    mUnk_0EB8("Screen/Bg/Tape_a.bin", 1),
    mUnk_0EC4("Screen/Bg/Tape_b.bin", 1),
    mUnk_0ED0("Screen/Bg/Tape_c.bin", 1),
    mUnk_0EDC("Screen/Bg/Tape_d.bin", 1),
    mUnk_0EE8("Screen/Bg/Tape_e.bin", 1) {

    this->mUnk_0EB8.func_02015460("TPA", data_ov019_020fb8cc, sizeof(data_ov019_020fb8cc));
    this->mUnk_0EC4.func_02015460("TPB", data_ov019_020edccc, sizeof(data_ov019_020edccc));
    this->mUnk_0ED0.func_02015460("TPC", data_ov019_020d24cc, sizeof(data_ov019_020d24cc));
    this->mUnk_0EDC.func_02015460("TPD", data_ov019_020e00cc, sizeof(data_ov019_020e00cc));
    this->mUnk_0EE8.func_02015460("TPE", data_ov019_021094cc, sizeof(data_ov019_021094cc));

    DC_FlushAll();

    this->mUnk_0EF4.func_02017520("TPA:Tape_a", "TPA:Tape_a", NULL);
    this->mUnk_0F30.func_02017520("TPB:Tape_b", "TPB:Tape_b", NULL);
    this->mUnk_0F6C.func_02017520("TPC:Tape_c", "TPC:Tape_c", NULL);
    this->mUnk_0FA8.func_02017520("TPD:Tape_d", "TPD:Tape_d", NULL);
    this->mUnk_0FE4.func_02017520("TPE:Tape_e", "TPE:Tape_e", NULL);

    REG_DISPCNT_SUB &= ~0x00001F00;
    REG_DISPCNT_SUB |= 0x00001F00;
    func_020249d4(&REG_BLDCNT_SUB, 0x01, 0x1E, 0x08, 0x0A);

    {
        UnkStruct2 stack_narc("Screen/Bg/Cover.bin", 1);
        stack_narc.func_020154ec("CVR");
        DC_FlushAll();

        {
            UnkResult stack_tape("CVR:Cover", "CVR:Cover", "CVR:Tape");
            func_0200a7b0(4, stack_tape.mUnk_00, stack_tape.mUnk_04, stack_tape.mUnk_08, 0, 0, 6, 1);
        }

        {
            UnkResult stack_line("CVR:Line", NULL, NULL);
            func_0200a7b0(7, stack_line.mUnk_00, stack_line.mUnk_04, stack_line.mUnk_08, 0, 0, 0, 1);
        }
    }

    this->func_ov019_020cf73c(1, 0);
    this->func_ov019_020cf73c(2, 1);
}

ARM void FileSelectSubScreen::vfunc_08(Input *pButtons, TouchControl *pTouchControl) {
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

ARM void FileSelectSubScreen::vfunc_10(unk8 *param1) {
    this->mUnk_002C.vfunc_04();
}

ARM FileSelect_UnkClass7::FileSelect_UnkClass7() {
    Random *pRandom = &gRandom;

    for (int i = 0; i < ARRAY_LEN(this->mUnk_004.mUnk_000); i++) {
        this->mUnk_004.mUnk_000[i].func_ov000_0206082c(0x8F, data_ov019_020d1bcc[gRandom.Next32(0, 3)]);

        u16 value = gRandom.ConditionalNext32(this->mUnk_004.mUnk_000[i].func_ov000_02060c28());
        this->mUnk_004.mUnk_000[i].func_ov000_02060bd8(value);

        Vec2us pos   = pRandom->NextPos(SUBSCREEN_WIDTH, SUBSCREEN_HEIGHT);
        Vec2us *pVec = &this->mUnk_004.mUnk_E10[i];
        *pVec        = pos;
    }
}

ARM void FileSelect_UnkClass7::vfunc_00() {
    for (int i = 0; i < ARRAY_LEN(this->mUnk_004.mUnk_000); i++) {
        this->mUnk_004.mUnk_000[i].func_ov000_020609c4();

        if (this->mUnk_004.mUnk_000[i].func_ov000_02060af8() != 0) {
            this->mUnk_004.mUnk_000[i].func_ov000_02060b64();

            Vec2us pos   = gRandom.NextPos(SUBSCREEN_WIDTH, SUBSCREEN_HEIGHT);
            Vec2us *pVec = &this->mUnk_004.mUnk_E10[i];
            *pVec        = pos;
        }
    }
}

ARM void FileSelect_UnkClass7::vfunc_04() {
    for (int i = 0; i < 0x1E; i++) {
        data_0204af1c.func_0201aad0(&this->mUnk_004.mUnk_000[i], &this->mUnk_004.mUnk_E10[i], 1, 0);
    }
}
