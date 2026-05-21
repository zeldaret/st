#include "Unknown/UnkStruct_020d8698.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"

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

void UnkStruct_020d8698::func_ov024_020cd094() {}
void UnkStruct_020d8698::func_ov024_020cd150() {}
void UnkStruct_020d8698::vfunc_08(Input *pButtons, TouchControl *pTouchControl) {}
void UnkStruct_020d8698::vfunc_10(unk8 *param1) {}
void UnkStruct_020d8698::func_ov024_020cd348() {}
void UnkStruct_020d8698::func_ov024_020cd358() {}
void UnkStruct_020d8698::func_ov024_020cd368(bool param1, bool param2) {}
void UnkStruct_020d8698::func_ov024_020cd3a4() {}
void UnkStruct_020d8698::func_ov024_020cd3d0() {}
void UnkStruct_020d8698::func_ov024_020cd3e0(unk32 param1) {}
void UnkStruct_020d8698::func_ov024_020cd3f0(unk32 param1) {}
void UnkStruct_020d8698::func_ov024_020cd400() {}
void UnkStruct_020d8698::func_ov024_020cd410() {}
void UnkStruct_020d8698::func_ov024_020cd420() {}
void UnkStruct_020d8698::func_ov024_020cd458(ItemFlag itemFlag, unk32 param2) {}
void UnkStruct_020d8698::func_ov024_020cd4a4() {}
void UnkStruct_020d8698::func_ov024_020cd4e4(u16 param1) {}
bool UnkStruct_020d8698::func_ov024_020cd5c0(u16 param1) {}
bool UnkStruct_020d8698::func_ov024_020cd604() {}

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
void UnkStruct_020d8698_24::func_ov024_020ce88c() {}
void UnkStruct_020d8698_24::func_ov024_020ce990() {}
void UnkStruct_020d8698_24::func_ov024_020ce9ac() {}

UnkStruct_020d8698_2C::UnkStruct_020d8698_2C() {}
void UnkStruct_020d8698_2C::func_ov024_020ced54() {}
void UnkStruct_020d8698_2C::func_ov024_020ceda8() {}
void UnkStruct_020d8698_2C::func_ov024_020cee58() {}
void UnkStruct_020d8698_2C::func_ov024_020cee64() {}
void UnkStruct_020d8698_2C::func_ov024_020cee84() {}
void UnkStruct_020d8698_2C::func_ov024_020cef58() {}
void UnkStruct_020d8698_2C::func_ov024_020cf2b8() {}
void UnkStruct_020d8698_2C::func_ov024_020cf494() {}
void UnkStruct_020d8698_2C::func_ov024_020cf4c4() {}
void UnkStruct_020d8698_2C::func_ov024_020cf514() {}
void UnkStruct_020d8698_2C::func_ov024_020cf53c() {}
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
