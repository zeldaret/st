#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a0.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_ov000_020b504c.hpp"

#include <nitro/mi.h>

extern "C" void *func_02022884(unk32);
extern u8 data_ov097_02181060[];

static const char *data_ov001_020c2cf4[] = {
    NULL,   "tower", "tower_lobby", "intrain",   "castle", "castle_town", "forest",
    "snow", "water", "flame",       "flame_fld", "desert", "village",     "dungeon",
};

void UnkStruct_ov000_020b504c::func_ov001_020be504(void) {
    this->mUnk_000->func_ov000_02068f0c();
}

void UnkStruct_ov000_020b504c::func_ov001_020be510(void) {
    this->mUnk_000->mUnk_10++;
    this->mUnk_000->func_ov000_020676f8("maingame", HeapIndex_1);

    this->mUnk_028 = new(HeapIndex_1) UnkStruct_ov000_020b504c_28(0x00);
    this->mUnk_02C = new(HeapIndex_1) UnkStruct_ov000_020b504c_2C(0x00);

    UnkStruct_ov000_020b504c_28 *pvVar1          = new(HeapIndex_1) UnkStruct_ov000_020b504c_28(0x01);
    UnkStruct_ov000_020b504c_0C_Derived1 *pvVar2 = new(HeapIndex_1) UnkStruct_ov000_020b504c_0C_Derived1(0x00);
    UnkStruct_ov000_020b504c_0C_Derived1 *pvVar3 = new(HeapIndex_1) UnkStruct_ov000_020b504c_0C_Derived1(0x01);
    void *uVar4                                  = func_02022884(0x00);
    UnkStruct_ov000_020b504c_0C_Derived2 *pvVar5 = new(HeapIndex_1) UnkStruct_ov000_020b504c_0C_Derived2();

    this->mUnk_00C[0] = this->mUnk_028;
    this->mUnk_00C[1] = pvVar1;
    this->mUnk_00C[2] = pvVar2;
    this->mUnk_00C[3] = pvVar3;
    this->mUnk_00C[4] = (UnkStruct_ov000_020b504c_0C_Base *) uVar4;
    this->mUnk_00C[5] = pvVar5;

    this->mUnk_008 = new(HeapIndex_1) UnkStruct_ov000_020b504c_08();
}

void UnkStruct_ov000_020b504c::func_ov001_020be5e8(void) {
    this->mUnk_000->mUnk_10++;
    this->mUnk_000->func_ov000_020676f8("battle_common", HeapIndex_1);
    this->mUnk_000->func_ov000_020676f8("battle_parent", HeapIndex_1);

    UnkStruct_ov000_020b504c_2C *pvVar1          = new(HeapIndex_1) UnkStruct_ov000_020b504c_2C(0x00);
    UnkStruct_ov000_020b504c_0C_Derived3 *pvVar2 = new(HeapIndex_1) UnkStruct_ov000_020b504c_0C_Derived3(0x00);
    void *iVar3                                  = func_02022884(0x00);

    this->mUnk_00C[0] = pvVar1;
    this->mUnk_00C[2] = pvVar2;
    this->mUnk_00C[4] = (UnkStruct_ov000_020b504c_0C_Base *) iVar3;

    this->mUnk_008 = new(HeapIndex_1) UnkStruct_ov000_020b504c_08();
}

void UnkStruct_ov000_020b504c::func_ov001_020be668(void) {
    this->mUnk_000->mUnk_10++;
    this->mUnk_000->func_ov000_020676f8("select", HeapIndex_1);

    UnkStruct_ov000_020b504c_2C *pvVar1          = new(HeapIndex_1) UnkStruct_ov000_020b504c_2C(0x00);
    UnkStruct_ov000_020b504c_0C_Derived3 *pvVar2 = new(HeapIndex_1) UnkStruct_ov000_020b504c_0C_Derived3(0x00);
    void *iVar3                                  = func_02022884(0x00);

    this->mUnk_00C[0] = pvVar1;
    this->mUnk_00C[2] = pvVar2;
    this->mUnk_00C[4] = (UnkStruct_ov000_020b504c_0C_Base *) iVar3;

    this->mUnk_008 = new(HeapIndex_1) UnkStruct_ov000_020b504c_08();
}

void UnkStruct_ov000_020b504c::func_ov001_020be6d8(void) {
    this->mUnk_000->mUnk_10++;
    this->mUnk_000->func_ov000_020676f8("collect", HeapIndex_1);
}

void UnkStruct_ov000_020b504c::func_ov001_020be6f4(void) {
    DELETE(this->mUnk_00C[5]);
    DELETE(this->mUnk_00C[4]);
    DELETE(this->mUnk_00C[2]);
    DELETE(this->mUnk_00C[3]);

    if (this->mUnk_02C != NULL || this->mUnk_028 != NULL) {
        DELETE(this->mUnk_02C);
        DELETE(this->mUnk_028);
        this->mUnk_00C[0] = NULL;
    } else {
        DELETE(this->mUnk_00C[0]);
    }

    DELETE(this->mUnk_00C[1]);
    DELETE(this->mUnk_008);
    this->mUnk_000->func_ov000_02068f0c();
}

void UnkStruct_ov000_020b504c::func_ov001_020be79c(SceneIndex sceneIndex) {
    MI_CpuFill32(0, this->mUnk_05C, sizeof(this->mUnk_05C));

    if (data_027e09a4->IsCutscene()) {
        this->mUnk_00C[6] = new(HeapIndex_1) UnkStruct_ov000_020b504c_0C_Derived4();
    }

    this->mUnk_000->mUnk_10++;
    this->mUnk_000->func_ov000_020676f8("field", HeapIndex_1);

    const char *unk_14 = data_ov001_020c2cf4[data_027e09a0->func_ov000_020702a8(sceneIndex)->mUnk_14];
    if (unk_14 != NULL) {
        this->mUnk_000->func_ov000_020676f8(unk_14, HeapIndex_1);
    }

    if (data_027e09a4->IsCutscene()) {
        this->mUnk_000->func_ov000_020677b0("staff.bmg", HeapIndex_1);
    }
}

void UnkStruct_ov000_020b504c::func_ov001_020be82c(SceneIndex sceneIndex) {
    MI_CpuFill32(0, this->mUnk_05C, sizeof(this->mUnk_05C));

    this->mUnk_000->mUnk_10++;

    const char *unk_14 = data_ov001_020c2cf4[data_027e09a0->func_ov000_020702a8(sceneIndex)->mUnk_14];
    if (unk_14 != NULL) {
        this->mUnk_000->func_ov000_020676f8(unk_14, HeapIndex_1);
    } else {
        this->mUnk_000->func_ov000_020676f8("dungeon", HeapIndex_1);
    }
}

void UnkStruct_ov000_020b504c::func_ov001_020be880(SceneIndex sceneIndex) {
    MI_CpuFill32(0, this->mUnk_05C, sizeof(this->mUnk_05C));

    this->mUnk_000->mUnk_10++;
    this->mUnk_000->func_ov000_02067804("train", data_ov097_02181060, 0x8C00);

    if (data_027e09a0->GetCourseEntry(sceneIndex)->unk_10 == 4 || sceneIndex == SceneIndex_t_tutorial ||
        sceneIndex == SceneIndex_e3_train) {
        this->mUnk_000->func_ov000_020676f8("train_extra", HeapIndex_1);
    }
}

void UnkStruct_ov000_020b504c::func_ov001_020be8e0(void) {
    if (data_027e09a4->GetCurrentCourseEntry()->unk_10 != 5) {
        this->func_ov001_020be504();
    }

    for (int i = 0; i < ARRAY_LEN(this->mUnk_00C); i++) {
        if (this->mUnk_00C[i] != NULL) {
            this->mUnk_00C[i]->vfunc_18(0x00);
        }
    }

    DELETE(this->mUnk_00C[6]);
}

void UnkStruct_ov000_020b504c::func_ov001_020be92c(UnkStruct_027e0cd8_04_0C *param1) {
    if (data_027e09a4->IsLand()) {
        this->mUnk_000->mUnk_10++;
    }
}

void UnkStruct_ov000_020b504c::func_ov001_020be94c(void) {
    if (data_027e09a4->IsLand()) {
        this->mUnk_06F = false;
        this->func_ov001_020be504();
    }

    for (int i = 0; i < ARRAY_LEN(this->mUnk_00C); i++) {
        if (this->mUnk_00C[i] != NULL) {
            this->mUnk_00C[i]->vfunc_18(0x00);
        }
    }

    if (this->mUnk_008 != NULL) {
        this->mUnk_008->func_ov000_020a4764();
    }
}

void UnkStruct_ov000_020b504c::func_ov001_020be998(void) {
    this->mUnk_000->mUnk_10++;
    this->mUnk_000->func_ov000_020676f8("demo", HeapIndex_1);
    this->mUnk_000->func_ov000_020676f8("demo01_05", HeapIndex_1);
    this->mUnk_000->func_ov000_020676f8("demo06_10", HeapIndex_1);
    this->mUnk_000->func_ov000_020676f8("demo11_15", HeapIndex_1);
    this->mUnk_000->func_ov000_020676f8("demo16_20", HeapIndex_1);
    this->mUnk_000->func_ov000_020676f8("demo21_25", HeapIndex_1);
}

void UnkStruct_ov000_020b504c::func_ov001_020be9fc(void) {
    if (!this->mUnk_06F) {
        this->mUnk_000->func_ov000_020676f8("shop", HeapIndex_1);
        this->mUnk_000->func_ov000_020676f8("collect", HeapIndex_1);
        this->mUnk_06F = true;
    }
}

void UnkStruct_ov000_020b504c::func_ov001_020bea2c(void) {
    this->mUnk_000->func_ov000_020676f8("post", HeapIndex_1);
}
