#pragma once

#include "MapObject/MapObject.hpp"
#include "Player/PlayerGet.hpp"

class MapObject_UnkStruct1 {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_44;
    /* 08 */ unk16 mUnk_48;
    /* 0A */ s16 mUnk_4A;
    /* 0C */ Vec3p mUnk_4C;
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
    /* 18 */ bool mUnk_58;
    /* 19 */ unk8 mUnk_59;
    /* 1A */ s16 mUnk_5A;
    /* 1C */ Vec3p mUnk_5C;
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
    /* 68 */ UnkStruct_PlayerGet_ec mUnk_68;
    /* 6C */ unk32 mUnk_6C;
    /* 70 */ unk32 mUnk_70;
    /* 74 */ unk32 mUnk_74;
    /* 78 */ u16 mUnk_78;
    /* 7A */ u16 mUnk_7A;
    /* 7C */ u16 mUnk_7C;
    /* 7E */ u16 mUnk_7E;
    /* 80 */ unk16 mUnk_80;
    /* 82 */ u16 mUnk_82;
    /* 84 */ u16 mUnk_84;
    /* 86 */ bool mUnk_86;
    /* 87 */ bool mUnk_87;
    /* 88 */ bool mUnk_88;
    /* 89 */ bool mUnk_89;
    /* 8A */ bool mUnk_8A;
    /* 8B */ bool mUnk_8B;
    /* 8C */ bool mUnk_8C;
    /* 8D */ bool mUnk_8D;
    /* 8E */ bool mUnk_8E;
    /* 8F */ bool mUnk_8F;
    /* 90 */ bool mUnk_90;
    /* 91 */ bool mUnk_91;
    /* 91 */ unk8 mUnk_92; // pad?
    /* 91 */ unk8 mUnk_93; // pad?
    /* 94 */

    MapObjectDoorBase();

    // data_ov031_02115008 (MapObject)
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;

#ifdef DOORBASE_DTOR_NOINLINE
    //! TODO: hacky trick to match function order (pch hint?)
    /* 30 */ virtual ~MapObjectDoorBase() override;
#else
    /* 30 */ virtual ~MapObjectDoorBase() override {}
#endif

    // (MapObject_UnkStruct1_Derived2)
    /* 04 */ virtual void vfunc2_04() override;
    /* 08 */ virtual void vfunc2_08() override;

    // (MapObject)
    /* 40 */ virtual void vfunc_40();
    /* 44 */ virtual void vfunc_44();
    /* 48 */ virtual void vfunc_48();
    /* 4C */ virtual void vfunc_4C();
    /* 50 */ virtual void vfunc_50();
    /* 54 */ virtual void vfunc_54();
    /* 58 */ virtual void vfunc_58();
    /* 5C */ virtual void vfunc_5C(unk32 param1, unk32 param2);
    /* 60 */ virtual void vfunc_60();
    /* 64 */ virtual bool vfunc_64();
    /* 68 */ virtual bool vfunc_68();
    /* 6C */ virtual bool vfunc_6C();
    /* 70 */ virtual void vfunc_70();
    /* 74 */ virtual void vfunc_74();
    /* 78 */ virtual void vfunc_78();
    /* 7C */ virtual void vfunc_7C();
    /* 80 */ virtual void vfunc_80();
    /* 84 */ virtual void vfunc_84(unk32 param1, Vec3p *param2, unk16 *param3);
    /* 88 */ virtual bool vfunc_88();
    /* 8C */ virtual unk32 vfunc_8C();
    /* 90 */

    void func_ov031_020fbf10(bool param1, bool param2);
    void func_ov031_020fcb78(s8 *param1, s8 param2);
    void func_ov031_020fcd40();
    void func_ov031_020fcf0c(unk32 param1);
    bool func_ov031_020fcf30();
};

struct UnkStruct_ov031_021150b0 {
    /* 00 */ u32 mUnk_00;

    UnkStruct_ov031_021150b0(u32 val) :
        mUnk_00(val) {}
};
