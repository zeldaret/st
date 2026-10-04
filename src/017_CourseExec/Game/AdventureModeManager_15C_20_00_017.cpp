#include "MainGame/AdventureMode.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_ov024_020d8660.hpp"
#include "math.hpp"
#include "nitro/fx.h"

extern "C" void func_ov000_02062e44(Vec2s *param1, void *param2);

struct UnkStruct_ov017_020c3f14 {
    struct Vectors {
        /* 00 */ Vec2s unk_00;
        /* 04 */ Vec2s unk_04;
        /* 08 */ Vec2s unk_08;
        /* 0C */ Vec2s unk_0C;
        /* 10 */

        Vectors() {
            this->unk_08.x = 0xFF00;
            this->unk_08.y = 0x00;

            this->unk_04.x = 0x100;
            this->unk_04.y = 0x00;

            this->unk_00.x = 0x100;
            this->unk_00.y = 0x00;

            this->unk_0C.x = 0xFF00;
            this->unk_0C.y = 0x00;
        }
    };

    /* 00 */ u16 unk_00;
    /* 02 */ u16 unk_02;
    /* 04 */ unk32 unk_04;
    /* 08 */ Vectors unk_08;
    /* 18 */ unk32 unk_18;
    /* 1C */
};

static UnkStruct_ov017_020c3f14 data_ov017_020c3f14 = {0x10, 0x04, 0x2C7, {}, -0x47};

void AdventureModeManager_15C_20_00::vfunc_10(unk8 *param1) {
    if (this->mUnk_778 != 0) {
        this->mUnk_300.func_ov000_02062f30();
        this->mUnk_53C.func_ov000_02062f30();
    }

    if (this->mUnk_779 != 0) {
        data_0204af1c.func_0201aa44(&this->mUnk_2E8, &this->mUnk_2E8.mPos.x, 0, 0);
    }
}

unk16 AdventureModeManager_15C_20_00::func_ov017_020c18c4() {
    if (this->func_ov017_020c19a0()) {
        return -1;
    }

    return this->mUnk_77A;
}

void AdventureModeManager_15C_20_00::func_ov017_020c18e4() {
    this->mUnk_77A = -1;

    if (this->mUnk_779 != 0) {
        this->mUnk_01C = 3;
    } else {
        this->mUnk_01C         = 0;
        this->mUnk_0C8.mUnk_10 = this->mUnk_0C8.mUnk_14;
        this->mUnk_0C8.UnkOperations3();
        this->mUnk_53C.mUnk_04.mUnk_14D = 1;

        if (this->mUnk_024->GetListLength() == 0) {
            this->mUnk_0C.Append(this->mUnk_024);
        }
    }

    if (GetAdventureModeManager()->func_ov024_020c623c()) {
        return;
    }

    if (data_ov024_020d8660 != NULL && data_ov024_020d8660->func_ov024_020c4d74()) {
        return;
    }

    this->func_ov017_020c19ec();
}

bool AdventureModeManager_15C_20_00::func_ov017_020c19a0() {
    return this->mUnk_028.mUnk_08 || this->mUnk_078.mUnk_08 || this->mUnk_0C8.mUnk_0A || this->mUnk_0C8.mUnk_0B;
}

void AdventureModeManager_15C_20_00::func_ov017_020c19cc() {
    this->func_ov017_020c1c80(true);
    this->mUnk_77A = 0x28;
}

void AdventureModeManager_15C_20_00::func_ov017_020c19ec() {
    this->mUnk_024->Detach();
    this->mUnk_53C.mUnk_04.mUnk_14D = 0;
}

static inline void UnknownInline1(UnkSystem2_UnkSubSystem1_Base *param1, Vec2s *param2, Vec2s *param3, Vec2s *param4) {
    func_ov000_02062e44(param2, param1);
    param3->x = param2->x + data_ov017_020c3f14.unk_08.unk_08.x;
    param3->y = param2->y + data_ov017_020c3f14.unk_08.unk_08.y;
    Vec2s_Copy(param3, &param1->mPos);
    func_ov000_02062e44(param4, param1);
}

// https://decomp.me/scratch/e1uCA
void AdventureModeManager_15C_20_00::func_ov017_020c1a0c(bool param1) {
    struct {
        unk32 unk_00;
        unk32 unk_04;
    } sp38;
    Vec2s sp34;
    Vec2s sp30;
    Vec2s sp2C;
    Vec2s sp28;
    Vec2s sp24;
    Vec2s sp20;
    Vec2s sp1C;
    Vec2s sp18;
    Vec2s sp14;
    Vec2s sp10;
    Vec2s spC;
    Vec2s sp8;

    this->mUnk_01C = 1;

    this->mUnk_0C8.func_0201ed30(data_ov017_020c3f14.unk_00, 0, -8, data_ov017_020c3f14.unk_04, data_ov017_020c3f14.unk_18);
    sp38.unk_00 = data_ov017_020c3f14.unk_04;
    sp38.unk_04 = data_ov017_020c3f14.unk_18;

    if (this->mUnk_779) {
        Vec2s *psp28 = (Vec2s *) &sp28;
        UnknownInline1(&this->mUnk_1B8, psp28, &sp2C, &sp34);
        this->mUnk_028.func_ov000_02064080(&sp34, &sp38, data_ov017_020c3f14.unk_00, 0);

        Vec2s *psp20 = (Vec2s *) &sp20;
        UnknownInline1(&this->mUnk_250, psp20, &sp24, &sp1C);
        Vec2s_Copy(&sp1C, &sp34);
        this->mUnk_078.func_ov000_02064080(&sp34, &sp38, data_ov017_020c3f14.unk_00, 0);
    } else {
        Vec2s *psp14 = (Vec2s *) &sp14;
        UnknownInline1(&this->mUnk_0F8, psp14, &sp18, &sp30);
        this->mUnk_028.func_ov000_02064080(&sp30, &sp38, data_ov017_020c3f14.unk_00, 0);

        Vec2s *pspC = (Vec2s *) &spC;
        UnknownInline1(&this->mUnk_158, pspC, &sp10, &sp8);
        Vec2s_Copy(&sp8, &sp30);
        this->mUnk_078.func_ov000_02064080(&sp30, &sp38, data_ov017_020c3f14.unk_00, data_ov017_020c3f14.unk_02);

        if (param1) {
            this->mUnk_0C8.UnkOperations1();
        }
    }
}

// non-matching
void AdventureModeManager_15C_20_00::func_ov017_020c1c80(bool param1) {
    struct {
        unk32 unk_00;
        unk32 unk_04;
    } sp24;
    Vec2s sp20;
    Vec2s sp1C;
    Vec2s sp18;
    Vec2s sp14;
    Vec2s sp10;
    Vec2s spC;
    Vec2s sp8;
    Vec2s sp4;

    this->mUnk_01C = 2;

    sp24.unk_00 = data_ov017_020c3f14.unk_18;
    sp24.unk_04 = data_ov017_020c3f14.unk_04;

    if (this->mUnk_779 != 0) {
        Vec2s *psp18 = (Vec2s *) &sp18;
        func_ov000_02062e44(psp18, &this->mUnk_1B8);
        fx16 x1 = psp18->x + data_ov017_020c3f14.unk_08.unk_00.x;
        fx16 y1 = psp18->y + data_ov017_020c3f14.unk_08.unk_00.y;
        sp20.x  = x1;
        sp20.y  = y1;
        this->mUnk_028.func_ov000_02064080(&sp20, &sp24, data_ov017_020c3f14.unk_00, 0);

        Vec2s *psp10 = (Vec2s *) &sp10;
        func_ov000_02062e44(psp10, &this->mUnk_250);
        fx16 x2 = psp10->x + data_ov017_020c3f14.unk_08.unk_0C.x;
        fx16 y2 = psp10->y + data_ov017_020c3f14.unk_08.unk_0C.y;
        sp14.x  = x2;
        sp14.y  = y2;
        Vec2s_Copy(&sp14, &sp20);
        this->mUnk_078.func_ov000_02064080(&sp20, &sp24, data_ov017_020c3f14.unk_00, 0);
    } else {
        Vec2s *pspC = (Vec2s *) &spC;
        func_ov000_02062e44(pspC, &this->mUnk_0F8);
        fx16 x1 = pspC->x + data_ov017_020c3f14.unk_08.unk_04.x;
        fx16 y1 = pspC->y + data_ov017_020c3f14.unk_08.unk_04.y;
        sp1C.x  = x1;
        sp1C.y  = y1;
        this->mUnk_028.func_ov000_02064080(&sp1C, &sp24, data_ov017_020c3f14.unk_00, 0);

        Vec2s *psp4 = (Vec2s *) &sp4;
        func_ov000_02062e44(psp4, &this->mUnk_158);
        fx16 x2 = psp4->x + data_ov017_020c3f14.unk_08.unk_04.x;
        fx16 y2 = psp4->y + data_ov017_020c3f14.unk_08.unk_04.y;
        sp8.x   = x2;
        sp8.y   = y2;
        Vec2s_Copy(&sp8, &sp1C);
        this->mUnk_078.func_ov000_02064080(&sp1C, &sp24, data_ov017_020c3f14.unk_00, data_ov017_020c3f14.unk_02);

        if (param1) {
            this->mUnk_0C8.UnkOperations2();
        }
    }
}
