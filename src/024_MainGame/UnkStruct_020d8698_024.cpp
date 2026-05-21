#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_020d8698.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "Unknown/UnkStruct_ov024_020d8660.hpp"

UnkStruct_020d8698 *UnkStruct_020d8698::Create() {
    return new(HeapIndex_1) UnkStruct_020d8698();
}

UnkStruct_020d8698::UnkStruct_020d8698() :
    mUnk_01C(NULL),
    mUnk_020(true),
    mUnk_024(NULL),
    mUnk_028(true),
    mUnk_02C(NULL),
    mUnk_030(true),
    mUnk_034(NULL),
    mUnk_038(true),
    mUnk_03C(NULL),
    mUnk_040(true),
    mUnk_044(NULL),
    mUnk_048(true) {
    this->mUnk_18  = true;
    this->mUnk_19  = true;
    this->mUnk_01C = new(HeapIndex_1) UnkStruct_020d8698_1C();
    this->mUnk_024 = new(HeapIndex_1) UnkStruct_020d8698_24();
    this->mUnk_02C = new(HeapIndex_1) UnkStruct_020d8698_2C();

    if (!data_027e09a4->func_01ffd3d8()) {
        this->mUnk_034 = new(HeapIndex_1) UnkStruct_020d8698_34();
        this->mUnk_044 = new(HeapIndex_1) UnkStruct_020d8698_44();

        if (this->mUnk_048) {
            this->mUnk_0C.Append(this->mUnk_044);
        }
    }

    if (data_027e09a4->IsDungeonTower() && !GET_FLAG(data_027e0ce0->mUnk_2C->mFlags, ItemFlag_LokomoSword)) {
        this->mUnk_03C = new(HeapIndex_1) UnkStruct_020d8698_3C();
    }

    this->mUnk_01C->func_ov024_020cdec8();
}

UnkStruct_020d8698::~UnkStruct_020d8698() {
    delete this->mUnk_01C;
    this->mUnk_01C = NULL;

    delete this->mUnk_024;
    this->mUnk_024 = NULL;

    delete this->mUnk_02C;
    this->mUnk_02C = NULL;

    if (!data_027e09a4->func_01ffd3d8()) {
        delete this->mUnk_034;
        this->mUnk_034 = NULL;

        delete this->mUnk_044;
        this->mUnk_044 = NULL;
    }

    if (this->mUnk_03C != NULL) {
        delete this->mUnk_03C;
        this->mUnk_03C = NULL;
    }
}

void UnkStruct_020d8698::func_ov024_020cd094() {
    this->mUnk_01C->func_ov024_020cd768();
    this->mUnk_024->func_ov024_020ce518();
    this->mUnk_02C->func_ov024_020ced54();

    if (data_ov000_020b504c.func_ov000_02067f88(0, 0) || data_027e09b8->func_ov000_020732dc(0)) {
        return;
    }

    UnkStruct_ov000_02067bc4::UnkStruct1 local;

#if __MWERKS__
    local.data = data_ov000_020b504c.func_ov000_02067bc4(0)->mUnk_028.data;
#else
    UnkStruct_ov000_02067bc4::UnkStruct1 *pData = &data_ov000_020b504c.func_ov000_02067bc4(0)->mUnk_028;

    local.mUnk_00 = pData->mUnk_00;
    local.mUnk_02 = pData->mUnk_02;
    local.mUnk_04 = pData->mUnk_04;
    local.mUnk_08 = pData->mUnk_08;
    local.mUnk_0C = pData->mUnk_0C;
    local.mUnk_0D = pData->mUnk_0D;
    local.mUnk_0E = pData->mUnk_0E;
    local.mUnk_0F = pData->mUnk_0F;
#endif

    if (!local.mUnk_0C) {
        this->func_ov024_020cd368(false, false);
        this->func_ov024_020cd3f0(0);
    }
}

void UnkStruct_020d8698::func_ov024_020cd150() {
    if (data_027e09a4->IsCutscene()) {
        return;
    }

    this->mUnk_01C->func_ov024_020cd774();
    this->mUnk_024->func_ov024_020ce570();
    this->mUnk_02C->func_ov024_020ceda8();

    if (!data_027e09a4->func_01ffd3d8()) {
        this->mUnk_034->func_ov024_020cf698();
        this->mUnk_044->func_ov031_0210eeb4();
        data_ov024_020d8698->func_ov024_020cd458(data_027e0ce0->mUnk_2C->mEquippedItem, 1);
    }

    if (this->mUnk_03C != NULL) {
        this->mUnk_03C->func_ov024_020cf82c();
    }
}

void UnkStruct_020d8698::vfunc_08(Input *pButtons, TouchControl *pTouchControl) {
    if (this->mUnk_020 && !this->func_ov024_020cd604()) {
        this->mUnk_01C->func_ov024_020cd9f0();
    }

    if (this->mUnk_028) {
        this->mUnk_024->func_ov024_020ce5cc();
    }

    if (this->mUnk_030) {
        this->mUnk_02C->func_ov024_020cef58();
    }

    if (!data_027e09a4->func_01ffd3d8() && this->mUnk_038) {
        this->mUnk_034->func_ov024_020cf6e4();
    }

    if (this->mUnk_03C != NULL && this->mUnk_040) {
        this->mUnk_03C->func_ov024_020cf888();
    }
}

void UnkStruct_020d8698::vfunc_10(unk8 *param1) {
    if (data_0204a110.mUnk_DF4 == 0 && !this->func_ov024_020cd604()) {
        if (this->mUnk_020) {
            this->mUnk_01C->func_ov024_020cdaac();
        }

        if (this->mUnk_028) {
            this->mUnk_024->func_ov024_020ce88c(param1);
        }

        if (this->mUnk_030 && data_ov024_020d8660->mUnk_1C != 5) {
            this->mUnk_02C->func_ov024_020cf2b8(param1);
        }

        if (!data_027e09a4->func_01ffd3d8() && this->mUnk_038) {
            this->mUnk_034->func_ov024_020cf724();
        }
    }

    if (this->mUnk_03C != NULL && this->mUnk_040) {
        this->mUnk_03C->func_ov024_020cf88c();
    }
}

void UnkStruct_020d8698::func_ov024_020cd348() {
    this->mUnk_01C->func_ov024_020cdd3c();
}

void UnkStruct_020d8698::func_ov024_020cd358() {
    this->mUnk_01C->func_ov024_020cde54();
}

void UnkStruct_020d8698::func_ov024_020cd368(bool param1, bool param2) {
    if (!data_027e09a4->func_ov000_0207056c()) {
        this->mUnk_024->func_ov024_020ce990(param1, param2);
    }
}

void UnkStruct_020d8698::func_ov024_020cd3a4() {
    if (!data_027e09a4->func_ov000_0207056c()) {
        this->mUnk_024->func_ov024_020ce9ac();
    }
}

void UnkStruct_020d8698::func_ov024_020cd3d0() {
    this->mUnk_02C->func_ov024_020cf514();
}

void UnkStruct_020d8698::func_ov024_020cd3e0(unk32 param1) {
    this->mUnk_02C->func_ov024_020cf53c(param1);
}

void UnkStruct_020d8698::func_ov024_020cd3f0(unk32 param1) {
    this->mUnk_02C->func_ov024_020cf494(param1);
}

void UnkStruct_020d8698::func_ov024_020cd400() {
    this->mUnk_02C->func_ov024_020cf4c4();
}

void UnkStruct_020d8698::func_ov024_020cd410() {
    this->mUnk_02C->func_ov024_020cee58();
}

void UnkStruct_020d8698::func_ov024_020cd420() {
    if (data_027e09a4->IsNotCutscene() && !data_027e09a4->func_ov000_0207056c()) {
        this->mUnk_02C->func_ov024_020cee64();
    }
}

void UnkStruct_020d8698::func_ov024_020cd458(ItemFlag itemFlag, unk32 param2) {
    if (!data_027e09a4->func_01ffd3d8() && data_027e09a4->IsNotCutscene()) {
        this->mUnk_044->func_ov031_0210f7e4(itemFlag, param2);
    }
}

void UnkStruct_020d8698::func_ov024_020cd4a4(bool param1) {
    if (data_027e09a4->func_01ffd3d8()) {
        return;
    }

    if (param1) {
        this->mUnk_044->mUnk_18B = true;
    } else {
        this->mUnk_044->mUnk_18B = false;
    }
}

void UnkStruct_020d8698::func_ov024_020cd4e4(u16 param1, bool param2) {
    switch (param1) {
        case 0:
            this->mUnk_020 = param2;
            break;
        case 1:
            this->mUnk_028 = param2;
            break;
        case 3:
            this->mUnk_030 = param2;
            break;
        case 2:
            if (!data_027e09a4->func_01ffd3d8() && param2 != this->mUnk_048) {
                this->mUnk_048 = param2;

                if (this->mUnk_044 != NULL) {
                    if (param2) {
                        this->mUnk_0C.Append(this->mUnk_044);
                    } else {
                        this->mUnk_044->Detach();
                    }
                }
            }
            break;
        case 5:
            this->func_ov024_020cd4e4(0, param2);
            this->func_ov024_020cd4e4(1, param2);
            this->func_ov024_020cd4e4(2, param2);
            this->func_ov024_020cd4e4(3, param2);
            break;
        default:
            break;
    }
}

bool UnkStruct_020d8698::func_ov024_020cd5c0(u16 param1) {
    switch (param1) {
        case 0:
            return this->mUnk_020;
        case 1:
            return this->mUnk_028;
        case 2:
            return this->mUnk_048;
        case 3:
            return this->mUnk_030;
        default:
            break;
    }

    return false;
}

bool UnkStruct_020d8698::func_ov024_020cd604() {
    if (data_027e09b8 != NULL) {
        if (data_027e09b8->func_ov000_020732dc(0) || data_027e09b8->func_ov000_020732dc(4) || data_0204e5f8.mUnk_18 ||
            data_0204e5f8.mUnk_3A != 0 || data_0204e5f8.mUnk_3E != 0) {
            return true;
        }
    }

    return false;
}

UnkStruct_020d8698_1C::UnkStruct_020d8698_1C() {
    this->mUnk_000.Init(this->func_ov024_020ce2a8());
    this->func_ov024_020cd774();
}

void UnkStruct_020d8698_1C::func_ov024_020cd768() {}
void UnkStruct_020d8698_1C::func_ov024_020cd774() {}
void UnkStruct_020d8698_1C::func_ov024_020cd9f0() {}
void UnkStruct_020d8698_1C::func_ov024_020cdaac() {}
void UnkStruct_020d8698_1C::func_ov024_020cdd3c() {}
void UnkStruct_020d8698_1C::func_ov024_020cde54() {}
void UnkStruct_020d8698_1C::func_ov024_020cdec8() {}
void UnkStruct_020d8698_1C::func_ov024_020cdfd8() {}
void UnkStruct_020d8698_1C::func_ov024_020ce218() {}
void UnkStruct_020d8698_1C::func_ov024_020ce260() {}
unk32 UnkStruct_020d8698_1C::func_ov024_020ce2a8() {}

UnkStruct_020d8698_24::UnkStruct_020d8698_24() {}
void UnkStruct_020d8698_24::func_ov024_020ce518() {}
void UnkStruct_020d8698_24::func_ov024_020ce570() {}
void UnkStruct_020d8698_24::func_ov024_020ce5cc() {}
void UnkStruct_020d8698_24::func_ov024_020ce88c(unk8 *param1) {}
void UnkStruct_020d8698_24::func_ov024_020ce990(bool param1, bool param2) {}
void UnkStruct_020d8698_24::func_ov024_020ce9ac() {}

UnkStruct_020d8698_2C::UnkStruct_020d8698_2C() {}
void UnkStruct_020d8698_2C::func_ov024_020ced54() {}
void UnkStruct_020d8698_2C::func_ov024_020ceda8() {}
void UnkStruct_020d8698_2C::func_ov024_020cee58() {}
void UnkStruct_020d8698_2C::func_ov024_020cee64() {}
void UnkStruct_020d8698_2C::func_ov024_020cee84() {}
void UnkStruct_020d8698_2C::func_ov024_020cef58() {}
void UnkStruct_020d8698_2C::func_ov024_020cf2b8(unk8 *param1) {}
void UnkStruct_020d8698_2C::func_ov024_020cf494(unk32 param1) {}
void UnkStruct_020d8698_2C::func_ov024_020cf4c4() {}
void UnkStruct_020d8698_2C::func_ov024_020cf514() {}
void UnkStruct_020d8698_2C::func_ov024_020cf53c(unk32 param1) {}
void UnkStruct_020d8698_2C::func_ov024_020cf570() {}
void UnkStruct_020d8698_2C::func_ov024_020cf584() {}
void UnkStruct_020d8698_2C::func_ov024_020cf5a8() {}

UnkStruct_020d8698_34::UnkStruct_020d8698_34() {}
void UnkStruct_020d8698_34::func_ov024_020cf698() {}
void UnkStruct_020d8698_34::func_ov024_020cf6e4() {}
void UnkStruct_020d8698_34::func_ov024_020cf724() {}

UnkStruct_020d8698_3C::UnkStruct_020d8698_3C() {}
void UnkStruct_020d8698_3C::func_ov024_020cf82c() {}
void UnkStruct_020d8698_3C::func_ov024_020cf888() {}
void UnkStruct_020d8698_3C::func_ov024_020cf88c() {}

DECL_INSTANCE(UnkStruct_020d8698, data_ov024_020d8698);
