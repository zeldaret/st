#include "MainGame/AdventureMode.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e0cf8.hpp"

extern "C" bool func_ov024_020d5354(unk32 *param1, unk16 *param2, ItemId itemId);
extern "C" void func_ov024_020d524c(Vec2us *param1, unk32 param2);
extern "C" void func_ov024_020d51dc(Vec2us *param1, unk32 param2);

UnkStruct_027e0cf8 *UnkStruct_027e0cf8::Create() {
    return new(HeapIndex_1) UnkStruct_027e0cf8();
}

UnkStruct_027e0cf8::UnkStruct_027e0cf8() {
    this->mUnk_00   = new(HeapIndex_1) UnkStruct_027e0cf8_00();
    this->mUnk_04   = NULL;
    this->mUnk_08   = new(HeapIndex_1) UnkStruct_027e0cf8_08();
    this->mUnk_0C   = new(HeapIndex_1) UnkStruct_027e0cf8_0C();
    this->mUnk_10.x = 0;
    this->mUnk_10.y = 0;
    this->mUnk_14.x = 0;
    this->mUnk_14.y = 0;
    this->mUnk_18   = -1;
    this->mUnk_1C   = false;
    this->mUnk_20   = -1;
    this->mUnk_24   = -1;
    this->mUnk_28   = 0;
    this->mUnk_2A   = 0;

    if (data_027e09a4->IsDarkRealm()) {
        this->mUnk_04 = new(HeapIndex_1) UnkStruct_027e0cf8_04();
    }
}

UnkStruct_027e0cf8::~UnkStruct_027e0cf8() {
    this->func_ov024_020c7750();

    if (data_027e09a4->IsDarkRealm()) {
        delete this->mUnk_04;
        this->mUnk_04 = NULL;
    }

    delete this->mUnk_0C;
    this->mUnk_0C = NULL;

    delete this->mUnk_08;
    this->mUnk_08 = NULL;

    delete this->mUnk_00;
    this->mUnk_00 = NULL;
}

void UnkStruct_027e0cf8::func_ov024_020c755c(void *param1) {
    unk32 local_1c = -1;
    unk16 local_20 = 0;

    if (this->func_ov024_020c78ac(&local_1c, &local_20)) {
        this->mUnk_18 = 0;
        this->func_ov024_020c75d0(param1, local_1c, local_20);
    } else {
        this->mUnk_18 = -1;
        this->func_ov024_020c75d0(param1, -1, 0);
    }
}

//! TODO: figure this out
struct SomeSaveFileStruct {
    /* 00 */ SaveFile *mpSaveFiles[MAX_SAVE_SLOTS];
    /* 08 */ STRUCT_PAD(0x00, 0xC4);
    /* CC */ unk32 mUnk_CC;

    SomeSaveFileStruct(unk32 param1);
    ~SomeSaveFileStruct();
};

void UnkStruct_027e0cf8::func_ov024_020c75d0(void *param1, unk32 param2, u16 param3) {
    if (this->mUnk_1C) {
        UnkStruct_027e0cf8::func_ov024_020c7724();
    }

    unk32 uVar1 = ((SomeSaveFileStruct *) param1)->mUnk_CC;

    volatile Vec2us local_1c;
    func_ov024_020d524c((Vec2us *) &local_1c, uVar1);

    Vec2us result;
    result.x        = local_1c.x;
    result.y        = local_1c.y;
    this->mUnk_10.x = result.x;
    this->mUnk_10.y = result.y;

    volatile Vec2us local_20;
    func_ov024_020d51dc((Vec2us *) &local_20, uVar1);

    result.x        = local_20.x;
    result.y        = local_20.y;
    this->mUnk_14.x = result.x;
    this->mUnk_14.y = result.y;

    Vec2s local_24;
    local_24.x = this->mUnk_10.x;
    local_24.y = this->mUnk_10.y;
    this->mUnk_08->func_ov024_020d32e8(&local_24);

    Vec2s local_28;
    local_28.x = this->mUnk_14.x;
    local_28.y = this->mUnk_14.y;
    this->mUnk_0C->func_ov024_020cff8c(param1, &local_28);

    Vec2s local_2c;
    local_2c.x = this->mUnk_14.x;
    local_2c.y = this->mUnk_14.y;

    Vec2s vec;
    vec.x = 0x1E;
    vec.y = 0x96;
    this->mUnk_00->func_ov024_020cfb7c(param1, &local_2c, param2, param3, 0x1E, 0x96);

    if (data_027e09a4->IsDarkRealm()) {
        this->mUnk_04->func_ov026_020dc300();
    }

    this->func_ov024_020c7750();

    if (param2 == -1) {
        this->mUnk_08->func_ov024_020d3324(param1);
    } else {
        this->mUnk_08->func_ov024_020d3348(param1, param2, param3, 0x28, 0x5A);
    }

    this->mUnk_1C = true;
}

void UnkStruct_027e0cf8::func_ov024_020c7724() {
    this->mUnk_1C = 0;

    if (this->mUnk_18 >= 0) {
        this->func_ov024_020c78d0();
    }

    this->mUnk_0C->func_ov024_020d0004();
}

void UnkStruct_027e0cf8::func_ov024_020c7750() {
    if (!data_027e09a4->IsDarkRealm()) {
        this->mUnk_08->func_ov024_020d340c();
    }
}

void UnkStruct_027e0cf8::func_ov024_020c7780() {
    if (!data_027e09a4->IsDarkRealm()) {
        this->mUnk_08->func_ov024_020d32d8();
    }
}

void UnkStruct_027e0cf8::func_ov024_020c77b0(unk32 param1) {
    this->mUnk_08->func_ov024_020d341c(param1);
}

void UnkStruct_027e0cf8::func_ov024_020c77c0() {
    this->mUnk_0C->func_ov024_020d02e0();
}

void UnkStruct_027e0cf8::func_ov024_020c77d0() {
    this->mUnk_0C->func_ov024_020d0340();
}

void UnkStruct_027e0cf8::func_ov024_020c77e0(Vec2s *param1) {
    UnkStruct_027e0cf8_0C *ptr = this->mUnk_0C;
    Vec2s local_8;
    local_8.x = param1->x;
    local_8.y = param1->y;
    ptr->func_ov024_020d03f8(&local_8);
}

void UnkStruct_027e0cf8::func_ov024_020c7804(Vec2s *param1) {
    UnkStruct_027e0cf8_0C *ptr = this->mUnk_0C;
    Vec2s local_8;
    local_8.x = param1->x;
    local_8.y = param1->y;
    ptr->func_ov024_020d041c(&local_8);
}

void UnkStruct_027e0cf8::func_ov024_020c7828(ItemId itemId) {
    unk32 local_c  = -1;
    unk16 local_10 = 0;

    if (func_ov024_020d5354(&local_c, &local_10, itemId)) {
        this->func_ov024_020c7878(local_c, local_10);
    }
}

void UnkStruct_027e0cf8::func_ov024_020c7878(unk32 param1, u16 param2) {
    this->mUnk_20 = param1;
    this->mUnk_28 = param2;
}

void UnkStruct_027e0cf8::func_ov024_020c7884() {
    this->mUnk_24 = this->mUnk_20;
    this->mUnk_2A = this->mUnk_28;
}

void UnkStruct_027e0cf8::func_ov024_020c7898() {
    this->mUnk_20 = this->mUnk_24;
    this->mUnk_28 = this->mUnk_2A;
}

bool UnkStruct_027e0cf8::func_ov024_020c78ac(unk32 *param1, unk16 *param2) {
    if (this->mUnk_20 != -1) {
        u16 temp = this->mUnk_28;

        if (temp != 0) {
            *param1 = this->mUnk_20;
            *param2 = temp;
            return true;
        }
    }

    return false;
}

void UnkStruct_027e0cf8::func_ov024_020c78d0() {
    this->mUnk_20 = -1;
    this->mUnk_28 = 0;
}

void UnkStruct_027e0cf8::func_ov024_020c78e4(unk32 param1) {
    if (this->mUnk_0C != NULL) {
        this->mUnk_0C->func_ov024_020d05d0(param1, 1);
    }
}

void UnkStruct_027e0cf8::func_ov024_020c7900(unk32 param1) {
    if (this->mUnk_0C != NULL) {
        this->mUnk_0C->func_ov024_020d05d0(param1, 0);
    }
}

DECL_INSTANCE(UnkStruct_027e0cf8, data_027e0cf8);
