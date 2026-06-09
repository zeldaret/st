#include "Unknown/UnkStruct_027e0d00.hpp"
#include "MainGame/CargoManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "versions.h"

extern "C" bool func_ov026_020f4be0(int, int);
extern "C" unk32 func_02012fc4(unk32);

const UnkStruct_ov024_020d7624 data_ov024_020d7624 = {0x13, {0}};
static const unk32 data_ov024_020d764c[]           = {0x0320, 0x0300, 0x0500, 0x0200};
static const unk32 data_ov024_020d763c[]           = {0x0270, 0x0140, 0x0240, 0x0100};
static const unk32 data_ov024_020d762c[]           = {0x444C, 0x2178, 0x203C, 0x15B8};
static const unk32 data_ov024_020d765c[]           = {0x0080, 0x0000, 0x0000, 0x0000};
const unk32 data_ov024_020d766c[]                  = {0x0004, 0x0610, 0x03F0, 0x0450};

void UnkStruct_027e0d00::func_ov024_020d47c4(unk32 *param1, unk32 *param2, unk32 param3) {
    UnkStruct_027e0ce0_34 *ptr = UnkStruct_027e0ce0::func_ov000_0205c904();

    if (param3 < ptr->mUnk_2C) {
        *param1 = ptr->func_ov024_020d3dec(param3);
        *param2 = ptr->func_ov024_020d3e0c(param3);
    } else if (param3 == 2) {
        *param1 = 1;
        *param2 = 0;
    } else if (param3 == 3) {
        *param1 = 3;
        *param2 = 0;
    }
}

UnkStruct_027e0d00 *UnkStruct_027e0d00::Create() {
    return new(HeapIndex_1) UnkStruct_027e0d00();
}

unk32 UnkStruct_027e0d00::func_ov024_020d485c(unk32 param1, unk32 param2) {
    switch (param2) {
        case 0:
            return data_ov024_020d765c[param1];
        case 1:
            return data_ov024_020d764c[param1];
        case 2:
            return data_ov024_020d763c[param1];
        case 3:
            return func_02012fc4(data_ov024_020d762c[param1]);
        default:
            break;
    }

    return 0;
}

u8 UnkStruct_027e0d00::func_ov024_020d48c8(unk32 param1) {
    return data_ov024_020d7624.unk_01[param1];
}

void UnkStruct_027e0d00::func_ov024_020d48d8(unk32 param1, unk32 param2) {
    for (int i = 0; i < MAX_TRAIN_SETS; i++) {
        this->DestroyUnk020(param1, i);
    }

    this->mUnk_020[param1][param2] = new(this->mUnk_0E4[param1]) UnkStruct_027e0d00_20(param1, param2);
    this->mUnk_020[param1][param2]->func_ov000_020588f0(this->mUnk_010[param1], this->func_ov024_020d485c(param1, 0x03), 0x01,
                                                        this->mUnk_000[param1]);
    this->mUnk_020[param1][param2]->func_ov024_020d4fa0(this->mUnk_0A0[param1], data_ov024_020d766c[param1]);
}

void UnkStruct_027e0d00::func_ov024_020d49ec(unk32 param1, unk32 param2) {
    this->DestroyUnk020(param1, param2);
}

void UnkStruct_027e0d00::func_ov024_020d4a50() {
    UnkStruct_027e0ce0_34 *ptr = UnkStruct_027e0ce0::func_ov000_0205c904();

    for (int i = 0; i < MAX_TRAIN_PARTS; i++) {
        unk32 local_1c = -1;
        unk32 local_20 = -1;

        UnkStruct_027e0d00::func_ov024_020d47c4(&local_1c, &local_20, i);
        this->func_ov024_020d48d8(local_1c, local_20);
    }

    this->func_ov024_020d4bf8();
}

void UnkStruct_027e0d00::func_ov024_020d4ab4() {
    int j;
    int i;

    for (i = 0; i < MAX_TRAIN_PARTS; i++) {
        for (j = 0; j < MAX_TRAIN_SETS; j++) {
            this->func_ov024_020d49ec(i, j);
        }
    }
}

#if IS_JP
extern "C" void func_ov000_0205a1f4(void *, int, int, int, int);
#endif

void UnkStruct_027e0d00::func_ov024_020d4af4() {
    if (!this->mUnk_104) {
        return;
    }

    if (data_027e09a4->IsTrain()) {
        return;
    }

    for (int i = 0; i < MAX_TRAIN_PARTS; i++) {
        unk32 local_1c = -1;
        unk32 local_20 = -1;

        UnkStruct_027e0d00::func_ov024_020d47c4(&local_1c, &local_20, i);
        UnkStruct_027e0d00_20 *pUnk20 = this->mUnk_020[local_1c][local_20];

        if (pUnk20 != NULL && pUnk20->mUnk_20.mUnk_04 != NULL) {
#if IS_JP
            UnkStruct_027e0d00_00 *ptr = this->mUnk_000[local_1c];
            func_ov000_0205a1f4(ptr, ptr->mUnk_1C, ptr->mUnk_20, ptr->mUnk_24, ptr->mUnk_1B);
#endif

            pUnk20->func_ov000_02058914(this->mUnk_000[local_1c]);
        }
    }

    this->func_ov024_020d4bf8();
}

unk32 UnkStruct_027e0d00::func_ov024_020d4b9c(unk32 param1) {
    switch (param1) {
        case 0x00:
            return 0x18; // meant to be 0x17?
        case 0x01:
            return 0x18;
        case 0x02:
            return 0x19;
        case 0x03:
            return 0x1A;
        case 0x04:
            return 0x1B;
        case 0x05:
            return 0x1C;
        default:
            break;
    }

#if IS_JP
    return 0x40;
#else
    return 0x3F;
#endif
}

void UnkStruct_027e0d00::func_ov024_020d4bf8() {
    UnkStruct_StackTitleScreen auStack_20("Npc/Tex.bin", 1);
    auStack_20.func_ov000_02059270(0x17, "feel_e", 0x2D200000);
    auStack_20.func_ov000_02059270(0x18, "feel0", 0x2D200000);
    auStack_20.func_ov000_02059270(0x19, "feel1", 0x2D200000);
    auStack_20.func_ov000_02059270(0x1A, "feel2", 0x2D200000);
    auStack_20.func_ov000_02059270(0x1B, "feel3", 0x2D200000);
    auStack_20.func_ov000_02059270(0x1C, "feel4", 0x2D200000);
}

void UnkStruct_027e0d00::func_ov024_020d4cc0(u32 cargoType) {
    if (cargoType != CargoType_None && this->mUnk_100 != NULL) {
        this->mUnk_0F4 = new(this->mUnk_100) MapObjectProfile_Derived5(cargoType);
        this->mUnk_0F4->func_ov000_020588f0(this->mUnk_0FC, 0xD30, 0x01, this->mUnk_0F8);
    }
}

void UnkStruct_027e0d00::func_ov024_020d4d10() {
    this->DestroyUnk0F4();
}

void UnkStruct_027e0d00::func_ov024_020d4d44() {
    if (this->mUnk_0F4 != NULL && this->mUnk_0F4->mUnk_20.mUnk_04 != NULL) {
#if IS_JP
        UnkStruct_027e0d00_00 *ptr = this->mUnk_0F8;
        func_ov000_0205a1f4(ptr, ptr->mUnk_1C, ptr->mUnk_20, ptr->mUnk_24, ptr->mUnk_1B);
#endif
        this->mUnk_0F4->func_ov000_02058914(this->mUnk_0F8);
    }
}

void UnkStruct_027e0d00::func_ov024_020d4d6c(unk32 param1) {
    for (int i = 0; i < ARRAY_LEN(this->mUnk_0B0); i++) {
        if (func_ov026_020f4be0(param1, i)) {
            this->mUnk_0B0[i] = new(HeapIndex_1) MapObjectProfile_Derived5(i);
            this->mUnk_0B0[i]->func_ov000_020586b4(0, 0, 0, 0);
        }
    }
}

void UnkStruct_027e0d00::func_ov024_020d4df8() {
    for (int i = 0; i < ARRAY_LEN(this->mUnk_0B0); i++) {
        DELETE(this->mUnk_0B0[i]);
    }
}

G3d_Model *UnkStruct_027e0d00::func_ov024_020d4e3c(unk32 param1) {
    if (this->mUnk_0B0[param1] != NULL) {
        return G3d_GetModelPtr(this->mUnk_0B0[param1]->mUnk_50);
    }

    return NULL;
}
