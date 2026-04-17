#pragma once

#include "MapObject/MapObject.hpp"

class MapObject_UnkStruct1 {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk16 mUnk_08;
    /* 0A */ unk16 mUnk_0A;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */

    MapObject_UnkStruct1(); // func_ov000_02073194 & func_ov000_020731c4

    // data_ov000_020b2290
    /* 00 */ virtual void vfunc2_00();
    /* 04 */ virtual void vfunc2_04();
    /* 08 */ virtual void vfunc2_08();
    /* 0C */ virtual void vfunc2_0C();
};

class MapObject_UnkStruct1_Derived1 : public MapObject_UnkStruct1 {
public:
    /* 00 (base) */
    /* 18 */ unk8 mUnk_18;
    /* 19 */ unk8 mUnk_19;
    /* 1A */ unk16 mUnk_1A;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */

    MapObject_UnkStruct1_Derived1(); // func_ov000_02073234

    // data_ov000_020b22a8
    /* 0C */ virtual void vfunc2_0C() override;
};

class MapObject_UnkStruct1_Derived2 : public MapObject_UnkStruct1_Derived1 {
public:
    /* 00 (base) */
    /* 28 */

    // data_ov031_021150a0
    /* 04 */ virtual void vfunc2_04() override;
    /* 08 */ virtual void vfunc2_08() override;
};

class MapObjectDoorBase : public MapObject, public MapObject_UnkStruct1_Derived2 {
public:
    /* 00 (base MapObject) */
    /* 40 (base MapObject_UnkStruct1_Derived2) */
    /* 68 */ unk32 mUnk_68;
    /* 6C */ unk32 mUnk_6C;
    /* 70 */ unk32 mUnk_70;
    /* 74 */ unk32 mUnk_74;
    /* 78 */ unk16 mUnk_78;
    /* 7A */ unk16 mUnk_7A;
    /* 7C */ unk16 mUnk_7C;
    /* 7E */ unk16 mUnk_7E;
    /* 80 */ unk16 mUnk_80;
    /* 82 */ unk16 mUnk_82;
    /* 84 */ unk16 mUnk_84;
    /* 86 */ unk8 mUnk_86;
    /* 87 */ unk8 mUnk_87;
    /* 88 */ unk8 mUnk_88;
    /* 89 */ unk8 mUnk_89;
    /* 8A */ unk8 mUnk_8A;
    /* 8B */ unk8 mUnk_8B;
    /* 8C */ unk8 mUnk_8C;
    /* 8D */ unk8 mUnk_8D;
    /* 8E */ unk8 mUnk_8E;
    /* 8F */ unk8 mUnk_8F;
    /* 90 */ unk8 mUnk_90;
    /* 91 */ unk8 mUnk_91;
    /* 91 */ unk8 mUnk_92; // pad?
    /* 91 */ unk8 mUnk_93; // pad?
    /* 94 */

    MapObjectDoorBase();

    // data_ov031_02115008 (MapObject)
    /* 08 */ virtual unk16 vfunc_08() override;
    /* 0C */ virtual unk8 vfunc_0C() override;
    /* 30 */ virtual ~MapObjectDoorBase() override;
    /* 38 */ virtual void vfunc_38();
    /* 3C */ virtual void vfunc_3C();
    /* 40 */ virtual void vfunc_40();
    /* 44 */ virtual void vfunc_44();
    /* 48 */ virtual void vfunc_48();
    /* 4C */ virtual void vfunc_4C();
    /* 50 */ virtual void vfunc_50();
    /* 54 */ virtual void vfunc_54();
    /* 58 */ virtual void vfunc_58();
    /* 5C */ virtual void vfunc_5C();
    /* 60 */ virtual void vfunc_60();
    /* 64 */ virtual void vfunc_64();
    /* 68 */ virtual void vfunc_68();
    /* 6C */ virtual void vfunc_6C();
    /* 70 */ virtual void vfunc_70();
    /* 74 */ virtual void vfunc_74();
    /* 78 */ virtual void vfunc_78();
    /* 7C */ virtual void vfunc_7C();
    /* 80 */ virtual void vfunc_80();
    /* 84 */ virtual void vfunc_84();
    /* 88 */ virtual void vfunc_88();
    /* 8C */ virtual void vfunc_8C();
    /* 90 */
};
