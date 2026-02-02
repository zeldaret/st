#include "FileSelect/FileSelectMicTest.hpp"
#include "FileSelect/FileSelect.hpp"
#include "FileSelect/FileSelectOptionsManager.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"

extern "C" {
unk32 func_01ffb428(unk32, unk32);

void func_ov000_02062e44(void *param1, void *param2);
unk8 func_ov000_02070164(void *); //! TODO: turn to a class
};

class UnkStruct_ov019_020d2248 {
public:
    s16 mUnk_00;
    Vec2s mUnk_02;
    Vec2s mUnk_06;
    Vec2s mUnk_0A;
    s16 mUnk_0E;
    Vec2s mUnk_10;

    UnkStruct_ov019_020d2248(s16 x1, s16 y1, s16 x2, s16 y2) {
        this->mUnk_10.x = x2;
        this->mUnk_10.y = y2;

        this->mUnk_02.x = x1;
        this->mUnk_02.y = y1;
    }
};

static const UnkStruct_ov019_020d2248 data_ov019_020d2248(0, 0x32, 0x100, 0);

static PTMF<FileSelectMicTest> data_ov019_020d225c[FSMicTestState_Max] = {
    FileSelectMicTest::func_ov019_020cea70,
    FileSelectMicTest::func_ov019_020ceaac,
    FileSelectMicTest::func_ov019_020cebcc,
    FileSelectMicTest::func_ov019_020cea6c,
};

ARM OptionsManagerAssessor::OptionsManagerAssessor() {
    gpFSOptionsManager = (FileSelectOptionsManager *) this;
}

ARM OptionsManagerAssessor::~OptionsManagerAssessor() {
    gpFSOptionsManager = NULL;
}

// non-matching
ARM FileSelectMicTest::FileSelectMicTest() :
    mState(FSMicTestState_OptionsIdle),
    mUnk_020(0x8D, 0x00),
    mUnk_258(0x8D, 0x00),
    mUnk_304(BTN_ID_RETURN, 0x8E, 0x00, 0x01, 0x8E, 0x00),
    mUnk_3F8(0x8D, 0x01),
    mUnk_630(1) {
    this->mUnk_0C.mList.func_020166cc(&this->mUnk_304.mUnk_044.mUnk_04);
    this->mUnk_020.func_0201f730(0x00020006);
    this->mUnk_3F8.mUnk_14E = 1;
    this->mUnk_3F8.func_0201f730(0x00020043);

    Vec2s local_1c;
    Vec2s local_18;

    func_ov000_02062e44(&local_1c, &this->mUnk_304.mUnk_044.mUnk_04);

    local_18.x = local_1c.x + data_ov019_020d2248.mUnk_06.x;
    local_18.y = local_1c.y + data_ov019_020d2248.mUnk_06.y;

    this->mUnk_304.mUnk_044.mPos.x = local_18.x;
    this->mUnk_304.mUnk_044.mPos.y = local_18.y;
    this->func_ov019_020cea74();
}

ARM FileSelectMicTest::~FileSelectMicTest() {
    this->mUnk_3F8.func_0201f498();
    this->mUnk_020.func_0201f498();
}

ARM void FileSelectMicTest::func_ov019_020cea6c() {}

ARM void FileSelectMicTest::func_ov019_020cea70() {}

ARM void FileSelectMicTest::func_ov019_020cea74() {
    CALL_PTMF(PTMF<FileSelectMicTest>, data_ov019_020d225c[this->mState]);
}

// non-matching
ARM void FileSelectMicTest::func_ov019_020ceaac() {
    Vec2s local_44;
    Vec2s local_40;
    Vec2s local_34;
    Vec2s local_38;

    local_34.x = data_ov019_020d2248.mUnk_10.x;
    local_34.y = data_ov019_020d2248.mUnk_10.y;
    local_38.x = 0;
    local_38.y = 0;
    this->mUnk_304.func_0201e874(0x0C, &local_34, &local_38, 0);

    this->mUnk_304.mUnk_000.mUnk_0A = true;
    this->mUnk_304.mUnk_000.mUnk_0B = false;
    this->mUnk_304.mUnk_000.mUnk_0C = false;

    if (this->mUnk_304.mUnk_000.mUnk_04 == this->mUnk_304.mUnk_000.mUnk_06) {
        this->mUnk_304.mUnk_000.mUnk_0A = false;
        this->mUnk_304.mUnk_000.mUnk_0C = true;
    }

    UnkStruct_ov019_020d24c8_28_258 local_30(0x8D, 0x01);
    func_0201e8d4(&local_40, &this->mUnk_304);
    this->mUnk_270.mUnk_8E.x = local_30.mPos.x + local_40.x;
    this->mUnk_270.mUnk_8E.y = local_30.mPos.y + local_40.y;
    func_ov000_02062e44(&local_44, &this->mUnk_304.mUnk_044);
    this->mUnk_304.mUnk_0A4.func_ov000_0206415c(&local_44, 6, data_ov019_020d2248.mUnk_00, 0);
}

// non-matching
ARM void FileSelectMicTest::func_ov019_020cebcc() {
    Vec2s local_10;
    Vec2s local_14;

    this->mUnk_304.mUnk_000.mUnk_0A = false;
    this->mUnk_304.mUnk_000.mUnk_0B = true;
    this->mUnk_304.mUnk_000.mUnk_0C = false;

    if (this->mUnk_304.mUnk_000.mUnk_04 == 0) {
        this->mUnk_304.mUnk_000.mUnk_0B = false;
        this->mUnk_304.mUnk_000.mUnk_0C = true;
    }

    this->mUnk_270.func_ov019_020cf130();
    func_ov000_02062e44(&local_14, &this->mUnk_304.mUnk_044);
    local_10.y = local_14.y + data_ov019_020d2248.mUnk_02.y;
    local_10.x = local_14.x + data_ov019_020d2248.mUnk_02.x;
    this->mUnk_304.mUnk_0A4.func_ov000_0206415c(&local_10, 7, data_ov019_020d2248.mUnk_00, 0);
}

ARM void FileSelectMicTest::vfunc_08(Input *pButtons, TouchControl *pTouchControl) {
    switch (this->mState) {
        case FSMicTestState_MicTestIdle:
            this->mUnk_270.func_ov019_020cf168();
            if (data_0204a110.func_01ff9b50() == BTN_ID_RETURN) {
                this->func_ov019_020ceff8();
                data_ov000_020b5214.func_ov000_0206d6b4(0x2F, 2);
                data_ov000_020b5214.func_ov000_0206db44(0x2F);
            }
            break;
        case FSMicTestState_OptionsToMicTest:
            if (!this->mUnk_304.mUnk_000.mUnk_0A) {
                this->mState = FSMicTestState_MicTestIdle;
            }
            break;
        case FSMicTestState_MicTestToOptions:
            if (!this->mUnk_304.mUnk_000.mUnk_0B) {
                gpFSOptionsManager->func_ov019_020cc85c(0);
                this->mState = FSMicTestState_OptionsIdle;
            }
            break;
        default:
            break;
    }

    if (this->mState - 1 <= FSMicTestState_OptionsToMicTest) {
        this->mUnk_304.mUnk_000.UnkOperations(NULL, false);
        UnkStruct_ov019_020d24c8_28_258 local_30(0x8D, 0x01);
        Vec2s local_5c;
        Vec2s local_58;
        func_0201e8d4(&local_58, &this->mUnk_304);
        this->mUnk_270.mUnk_8E.x = local_58.x + local_30.mPos.x - local_5c.x;
        this->mUnk_270.mUnk_8E.y = local_58.y + local_30.mPos.y - local_5c.y;
        this->mUnk_304.mUnk_0A4.func_ov000_02063f64();
    }

    data_ov000_020b51b8.func_ov000_0206c608(8, 0, 0x1000);
}

ARM void FileSelectMicTest::vfunc_10(unk8 *param1) {
    this->mUnk_270.func_ov019_020cf21c();
    data_0204af1c.func_0201aa44(&this->mUnk_258.mUnk_00, &this->mUnk_258.mPos, 0, 0);
    this->mUnk_020.func_0201f4b4(0);

    unk32 stack;
    func_0201e8d4(&stack, &this->mUnk_304);
    this->mUnk_3F8.func_0201f500(&stack);
}

extern u8 data_ov000_020b5340[]; // bool?

ARM void FileSelectMicTest::vfunc_14(unk8 *param1) {
    if (this->mUnk_630 != 0) {
        if (data_ov000_020b5340[5] == 0) {
            this->mUnk_630 = 0;
            this->mUnk_3F8.func_0201fa70(0x00020046);
            this->mUnk_270.func_ov019_020cf130();
        }
    } else {
        if (data_ov000_020b5340[5] != 0) {
            this->mUnk_630 = 1;
            this->mUnk_3F8.func_0201fa70(0x00020043);
        }
    }
}

ARM void FileSelectMicTest::func_ov019_020cefe4() {
    this->mState = FSMicTestState_OptionsToMicTest;
    this->func_ov019_020cea74();
}

ARM void FileSelectMicTest::func_ov019_020ceff8() {
    this->mState = FSMicTestState_MicTestToOptions;
    this->func_ov019_020cea74();
}

ARM UnkStruct_ov019_020d24c8_28_270::UnkStruct_ov019_020d24c8_28_270() :
    mUnk_8C(0) {
    this->mUnk_00.func_ov000_0205fc20(0x8D, 0x01, &this->mUnk_00.mPos, &this->mUnk_00.mUnk_0E);
    this->mUnk_00.mUnk_12 = 0x8D;
    this->mUnk_00.mUnk_14 = 0x01;

    this->mUnk_18.mUnk_00[0].func_ov000_0205fc20(0x8D, 0x03, &this->mUnk_18.mUnk_00[0].mPos,
                                                 &this->mUnk_18.mUnk_00[0].mUnk_0E);
    this->mUnk_18.mUnk_00[0].mUnk_12 = 0x8D;
    this->mUnk_18.mUnk_00[0].mUnk_14 = 0x03;

    this->mUnk_18.mUnk_00[1].func_ov000_0205fc20(0x8D, 0x04, &this->mUnk_18.mUnk_00[1].mPos,
                                                 &this->mUnk_18.mUnk_00[1].mUnk_0E);
    this->mUnk_18.mUnk_00[1].mUnk_12 = 0x8D;
    this->mUnk_18.mUnk_00[1].mUnk_14 = 0x04;

    this->mUnk_18.mUnk_00[2].func_ov000_0205fc20(0x8D, 0x05, &this->mUnk_18.mUnk_00[2].mPos,
                                                 &this->mUnk_18.mUnk_00[2].mUnk_0E);
    this->mUnk_18.mUnk_00[2].mUnk_12 = 0x8D;
    this->mUnk_18.mUnk_00[2].mUnk_14 = 0x05;

    this->mUnk_18.mUnk_00[3].func_ov000_0205fc20(0x8D, 0x02, &this->mUnk_18.mUnk_00[3].mPos,
                                                 &this->mUnk_18.mUnk_00[3].mUnk_0E);
    this->mUnk_18.mUnk_00[3].mUnk_12 = 0x8D;
    this->mUnk_18.mUnk_00[3].mUnk_14 = 0x02;

    this->func_ov019_020cf130();
}

ARM void UnkStruct_ov019_020d24c8_28_270::func_ov019_020cf130() {
    for (int i = 0; i < ARRAY_LEN(this->mUnk_78); i++) {
        this->mUnk_78[i] = 0;
    }

    for (int i = 0; i < ARRAY_LEN(this->mUnk_7C); i++) {
        this->mUnk_7C[i] = 0;
    }
}

ARM void UnkStruct_ov019_020d24c8_28_270::func_ov019_020cf168() {
    u8 *ptr = &this->mUnk_7C[this->mUnk_8C];
    int iVar4_2;
    int iVar4;
    int i;

    *ptr = func_ov000_02070164(data_ov000_020b5340);

    this->mUnk_8C++;
    if (this->mUnk_8C == ARRAY_LEN(this->mUnk_7C)) {
        this->mUnk_8C = 0;
    }

    for (iVar4 = 0, i = 0; i < ARRAY_LEN(this->mUnk_7C); i++) {
        iVar4 += this->mUnk_7C[i];
    }

    iVar4_2 = ROUND_Q20(func_01ffb428(iVar4 * 0x1000, 0xF000));

    if (iVar4_2 > 0) {
        this->mUnk_78[0] = 1;
    } else {
        this->mUnk_78[0] = 0;
    }

    if (iVar4_2 > 1) {
        this->mUnk_78[1] = 1;
    } else {
        this->mUnk_78[1] = 0;
    }

    if (iVar4_2 > 2) {
        this->mUnk_78[2] = 1;
    } else {
        this->mUnk_78[2] = 0;
    }

    if (iVar4_2 > 3) {
        this->mUnk_78[3] = 1;
    } else {
        this->mUnk_78[3] = 0;
    }
}

ARM void UnkStruct_ov019_020d24c8_28_270::func_ov019_020cf21c() {
    data_0204af1c.func_0201aa44(this, &this->mUnk_8E, 0, 0);

    for (int i = 0; i < ARRAY_LEN(this->mUnk_18.mUnk_00); i++) {
        if (this->mUnk_78[i] != 0) {
            UnkStruct_ov019_020d24c8_28_258 *ptr = &this->mUnk_18.mUnk_00[i];
            data_0204af1c.func_0201aa44(ptr, &ptr->mPos, 0, 0);
        }
    }
}
