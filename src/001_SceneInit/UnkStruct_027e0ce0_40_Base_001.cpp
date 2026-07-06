#include "Unknown/UnkStruct_027e0ce0.hpp"

UnkStruct_027e0ce0_40_Base::UnkStruct_027e0ce0_40_Base(unk32 param1, void *param2, ItemManager *pItemMgr) :
    mUnk_000(param1),
    mUnk_004(param2),
    mpItemManager(pItemMgr),
    mUnk_074(param1 == -1 ? new(HeapIndex_1) UnkStruct_027e0ce0_40_Base_74() : NULL),
    mUnk_078(param1 == -1 ? new(HeapIndex_1) UnkStruct_027e0ce0_40_Base_78() : NULL),
    mUnk_07C(param1),
    mUnk_094(param1),
    mUnk_104(0) {
    this->func_ov001_020bc0e0(false);
}

UnkStruct_027e0ce0_40_Base::~UnkStruct_027e0ce0_40_Base() {
    delete this->mUnk_078;
    delete this->mUnk_074;
}

void UnkStruct_027e0ce0_40_Base::func_ov001_020bc0e0(bool param1) {
    this->mButtons.Init();
    this->mUnk_014.func_ov000_02096a9c();

    if (this->mUnk_074 != NULL) {
        this->mUnk_074->func_ov031_020e0c34();
    }

    this->mUnk_07C.func_ov000_020968e0();
    this->mUnk_094.func_ov000_0208aee4();

    UnkStruct_027e0ce0_40_Base_94_50 *unk_94_50 = this->mUnk_094.mUnk_50;
    if (unk_94_50 != NULL) {
        unk_94_50->mUnk_0C = unk_94_50->mUnk_08;
        unk_94_50->mUnk_2C = &unk_94_50->mUnk_24;
    }

    if (this->mUnk_078 != NULL) {
        this->mUnk_078->mUnk_00 = 0;
    }

    this->mUnk_094.mUnk_5C = 0;
    this->mUnk_094.mUnk_60 = 0x80;
    this->mUnk_094.mUnk_62 = 0x60;
    this->mUnk_094.mUnk_64 = 0;
    this->mUnk_094.mUnk_65 = 0;
    this->mUnk_094.mUnk_66 = 0;
    this->mUnk_094.mUnk_67 = 0;
    this->mUnk_094.mUnk_68 = 0;
    this->mUnk_094.mUnk_69 = 0;
    this->mUnk_094.mUnk_6A = 0;
    this->mUnk_094.mUnk_6C = 0;

    if (param1) {
        UNSET_FLAG2(this->mUnk_104, UnkFlags3_0);
        UNSET_FLAG2(this->mUnk_104, UnkFlags3_1);
        UNSET_FLAG2(this->mUnk_104, UnkFlags3_2);
        UNSET_FLAG2(this->mUnk_104, UnkFlags3_3);
        UNSET_FLAG2(this->mUnk_104, UnkFlags3_5);
        UNSET_FLAG2(this->mUnk_104, UnkFlags3_6);
        UNSET_FLAG2(this->mUnk_104, UnkFlags3_7);
        UNSET_FLAG2(this->mUnk_104, UnkFlags3_8);
        UNSET_FLAG2(this->mUnk_104, UnkFlags3_9);
        UNSET_FLAG2(this->mUnk_104, UnkFlags3_10);
    } else {
        this->mUnk_104 = UnkFlags3_None;
    }
}
