#include "MapObject/MapObjectProfile.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"

extern UnkStruct_027e09c0_04 data_ov031_02118900;

// probably not here but this is unused
struct UnkStruct_ov101_021839c8 {
    /* 00 */ unk32 mUnk_00;
    /* 00 */ unk32 mUnk_04;
    /* 00 */ unk32 mUnk_08;

    UnkStruct_ov101_021839c8() {
        this->mUnk_04 = 0x10002;
        this->mUnk_00 = 0x10006;
        this->mUnk_08 = 0x10009;
    }
};
static const UnkStruct_ov101_021839c8 data_ov101_021839c8;

void MapObjectProfile_Derived6::vfunc_10() {
    this->MapObjectProfile_Derived2::vfunc_10();
    data_ov031_02118900.func_ov000_0207f4d4();
}
