#pragma once

#include "Unknown/Common.hpp"
#include "global.h"
#include "types.h"

#include <nns/g3d/g3d.h>

#define MAX_TRAIN_PARTS 4
#define MAX_TRAIN_SETS 8

struct UnkStruct_027e0d00_00 {
    /* 00 */ STRUCT_PAD(0x00, 0x1B);
    /* 1B */ u8 mUnk_1B;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */

    UnkStruct_027e0d00_00(unk32 param1, unk32 param2, unk32 param3, u8 param4);
};

struct UnkStruct_027e0d00_10 {
    /* 0000 */ STRUCT_PAD(0x00, 0x44C0);
    /* 44C0 */
};

class UnkStruct_027e0d00_20 : public MapObjectProfile_Derived2_20_Base {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;
    /* 98 */ unk32 mUnk_98;
    /* 9C */ MapObjectProfile_Derived2_20_Base_18 mUnk_9C;
    /* A4 */ UnkSystem3 mUnk_A4;
    /* B0 */ unk32 mUnk_B0;
    /* B4 */ unk32 mUnk_B4;
    /* B8 */

    UnkStruct_027e0d00_20(unk32 param1, unk32 param2);

    /* 00 */ virtual ~UnkStruct_027e0d00_20() override {}

    void func_ov024_020d4fa0(void *param1, unk32 param2);
    void func_ov024_020d5174();

    static void func_ov024_020d4e9c(wchar_t *param1, unk32 param2, bool param3);
    static void func_ov024_020d4edc(wchar_t *param1, wchar_t *param2, unk32 param3);
};

class UnkStruct_027e0d00_E0 : public MapObjectProfile_Derived2_20_Base {
public:
    /* 00 (base) */
    /* 94 */ STRUCT_PAD(0x94, 0xA8);
    /* A8 */

    UnkStruct_027e0d00_E0(bool hasRecruitUniform);

    // overlay 26
    void func_ov026_020fb964();
    void func_ov026_020fba3c();
};

struct UnkStruct_027e0d00_FC {
    /* 000 */ STRUCT_PAD(0x00, 0xD30);
    /* D30 */
};

class UnkStruct_027e0d00 : public AutoInstance<UnkStruct_027e0d00> {
public:
    /* 000 */ UnkStruct_027e0d00_00 *mUnk_000[MAX_TRAIN_PARTS];
    /* 010 */ UnkStruct_027e0d00_10 *mUnk_010[MAX_TRAIN_PARTS];
    /* 020 */ UnkStruct_027e0d00_20 *mUnk_020[MAX_TRAIN_PARTS][MAX_TRAIN_SETS];
    /* 0A0 */ void *mUnk_0A0[MAX_TRAIN_PARTS];
    /* 0B0 */ MapObjectProfile_Derived5 *mUnk_0B0[12]; // train parts models
    /* 0E0 */ UnkStruct_027e0d00_E0 *mUnk_0E0;
    /* 0E4 */ UnkStruct_027e0d00_20 *mUnk_0E4[MAX_TRAIN_PARTS];
    /* 0F4 */ MapObjectProfile_Derived5 *mUnk_0F4; // cargo models
    /* 0F8 */ UnkStruct_027e0d00_00 *mUnk_0F8;
    /* 0FC */ UnkStruct_027e0d00_FC *mUnk_0FC;
    /* 100 */ MapObjectProfile_Derived5 *mUnk_100;
    /* 104 */ bool mUnk_104;
    /* 104 */ unk8 mUnk_105;
    /* 104 */ unk8 mUnk_106;
    /* 104 */ unk8 mUnk_107;
    /* 108 */

    void DestroyUnk020(unk32 param1, unk32 param2) {
        if (this->mUnk_020[param1][param2] != NULL) {
            this->mUnk_020[param1][param2]->func_ov024_020d5174();
            this->mUnk_020[param1][param2]->func_ov000_020589e4();
            this->mUnk_020[param1][param2]->~UnkStruct_027e0d00_20();
            this->mUnk_020[param1][param2] = NULL;
        }
    }

    void DestroyUnk0F4() {
        if (this->mUnk_0F4 != NULL) {
            this->mUnk_0F4->func_ov000_020589e4();
            this->mUnk_0F4->~MapObjectProfile_Derived5();
            this->mUnk_0F4 = NULL;
        }
    }

    UnkStruct_027e0d00();
    ~UnkStruct_027e0d00();

    static UnkStruct_027e0d00 *GetInstance();

    // overlay 1
    void func_ov001_020bf530();
    void func_ov001_020bf568();
    void func_ov001_020bf590();
    void func_ov001_020bf69c();
    void func_ov001_020bf730();
    void func_ov001_020bf750();
    void func_ov001_020bf768();
    void func_ov001_020bf7b8();

    static void Destroy();

    // overlay 24
    unk32 func_ov024_020d485c(unk32 param1, unk32 param2);
    u8 func_ov024_020d48c8(unk32 param1);
    void func_ov024_020d48d8(unk32 param1, unk32 param2);
    void func_ov024_020d49ec(unk32 param1, unk32 param2);
    void func_ov024_020d4a50();
    void func_ov024_020d4ab4();
    void func_ov024_020d4af4();
    unk32 func_ov024_020d4b9c(unk32 param1);
    void func_ov024_020d4bf8();
    void func_ov024_020d4cc0(u32 cargoType);
    void func_ov024_020d4d10();
    void func_ov024_020d4d44();
    void func_ov024_020d4d6c(unk32 param1);
    void func_ov024_020d4df8();
    G3d_Model *func_ov024_020d4e3c(unk32 param1);

    static void func_ov024_020d47c4(unk32 *param1, unk32 *param2, unk32 param3);
    static UnkStruct_027e0d00 *Create();
};

extern UnkStruct_027e0d00 *data_027e0d00;

extern const unk32 data_ov024_020d766c[];

extern "C" {
typedef struct UnkStruct_ov024_020d7624 {
    u8 unk_00;
    u8 unk_01[7];
} UnkStruct_ov024_020d7624;

extern const UnkStruct_ov024_020d7624 data_ov024_020d7624;
}
