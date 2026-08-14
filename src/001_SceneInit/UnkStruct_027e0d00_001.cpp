#include "MainGame/CargoManager.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0d00.hpp"

extern "C" unk32 func_ov000_0205c984();
extern "C" void func_ov026_020efc40(unk32 param1);

UnkStruct_027e0d00::UnkStruct_027e0d00() {
    this->mUnk_0E0 = NULL;
    this->mUnk_0F4 = NULL;
    this->mUnk_0F8 = NULL;
    this->mUnk_0FC = NULL;
    this->mUnk_100 = NULL;
    this->mUnk_104 = false;

    for (int i = 0; i < MAX_TRAIN_PARTS; i++) {
        this->mUnk_000[i] = NULL;
        this->mUnk_010[i] = NULL;
        this->mUnk_0A0[i] = NULL;
        this->mUnk_0E4[i] = NULL;
    }

    for (int i = 0; i < MAX_TRAIN_PARTS; i++) {
        for (int j = 0; j < MAX_TRAIN_SETS; j++) {
            this->mUnk_020[i][j] = NULL;
        }
    }

    for (int i = 0; i < ARRAY_LEN(this->mUnk_0B0); i++) {
        this->mUnk_0B0[i] = NULL;
    }
}

UnkStruct_027e0d00::~UnkStruct_027e0d00() {}

void UnkStruct_027e0d00::func_ov001_020bf530() {
    if (data_027e09a4->IsTrain()) {
        this->func_ov001_020bf730();

        unk32 uVar2 = func_ov000_0205c984();
        this->func_ov024_020d4d6c(uVar2);
        func_ov026_020efc40(uVar2);
        this->func_ov001_020bf768();
    }
}

void UnkStruct_027e0d00::func_ov001_020bf568() {
    if (data_027e09a4->IsTrain()) {
        this->func_ov001_020bf7b8();
        this->func_ov024_020d4df8();
        this->func_ov001_020bf750();
    }
}

void UnkStruct_027e0d00::func_ov001_020bf590() {
    for (int i = 0; i < MAX_TRAIN_PARTS; i++) {
        unk32 uVar1 = this->func_ov024_020d485c(i, 0);
        unk32 uVar2 = this->func_ov024_020d485c(i, 1);
        unk32 uVar3 = this->func_ov024_020d485c(i, 2);

        const u8 *ptr     = data_ov024_020d7624.unk_01;
        this->mUnk_000[i] = new(HeapIndex_1) UnkStruct_027e0d00_00(uVar1, uVar2, uVar3, ptr[i]);
    }

    for (int i = 0; i < MAX_TRAIN_PARTS; i++) {
        this->mUnk_010[i] = (UnkStruct_027e0d00_10 *) ::operator new(this->func_ov024_020d485c(i, 3), HeapIndex_1);
    }

    for (int i = 0; i < MAX_TRAIN_PARTS; i++) {
        this->mUnk_0E4[i] = (UnkStruct_027e0d00_20 *) ::operator new(sizeof(UnkStruct_027e0d00_20), HeapIndex_1);
    }

    for (int i = 0; i < MAX_TRAIN_PARTS; i++) {
        this->mUnk_0A0[i] = ::operator new(data_ov024_020d766c[i], HeapIndex_1);
    }

    this->mUnk_0F8 = new(HeapIndex_1) UnkStruct_027e0d00_00(0x00, SUBSCREEN_WIDTH, SUBSCREEN_HEIGHT, 0x00);
    this->mUnk_0FC = (UnkStruct_027e0d00_FC *) ::operator new(sizeof(UnkStruct_027e0d00_FC), HeapIndex_1);
    this->mUnk_100 = (MapObjectProfile_Derived5 *) ::operator new(sizeof(MapObjectProfile_Derived5), HeapIndex_1);
    this->mUnk_104 = true;
}

void UnkStruct_027e0d00::func_ov001_020bf69c() {
    this->mUnk_104 = false;
    DELETE_ARRAY2(this->mUnk_100);
    DELETE_ARRAY2(this->mUnk_0FC);
    DELETE(this->mUnk_0F8);

    for (int i = 0; i < MAX_TRAIN_PARTS; i++) {
        DELETE_ARRAY(this->mUnk_0A0[i]);
    }

    for (int i = 0; i < MAX_TRAIN_PARTS; i++) {
        DELETE_ARRAY2(this->mUnk_0E4[i]);
    }

    for (int i = 0; i < MAX_TRAIN_PARTS; i++) {
        DELETE_ARRAY(this->mUnk_010[i]);
    }

    for (int i = 0; i < MAX_TRAIN_PARTS; i++) {
        DELETE(this->mUnk_000[i]);
    }
}

void UnkStruct_027e0d00::func_ov001_020bf730() {
    this->func_ov001_020bf590();
    this->func_ov024_020d4a50();
    this->func_ov024_020d4cc0(gpCargoManager->GetCargo()->GetType());
}

void UnkStruct_027e0d00::func_ov001_020bf750() {
    this->func_ov024_020d4d10();
    this->func_ov024_020d4ab4();
    this->func_ov001_020bf69c();
}

void UnkStruct_027e0d00::func_ov001_020bf768() {
    bool result = data_027e0ce0->mUnk_2C->GetInventory()->HasRecruitUniform();

    bool hasRecruitUniform = false;
    if (result != true) {
        hasRecruitUniform = true;
    }

    this->mUnk_0E0 = new(HeapIndex_1) UnkStruct_027e0d00_E0(hasRecruitUniform);
    this->mUnk_0E0->func_ov000_020586b4(0x0, 0x00, 0x00, 0x00);
    this->mUnk_0E0->func_ov026_020fb964();
}

void UnkStruct_027e0d00::func_ov001_020bf7b8() {
    this->mUnk_0E0->func_ov026_020fba3c();
    this->mUnk_0E0->func_ov000_020589e4();
    DELETE(this->mUnk_0E0);
}

DECL_INSTANCE(UnkStruct_027e0d00, data_027e0d00);
