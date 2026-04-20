#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectDoorBase.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "Player/PlayerGet.hpp"
#include "Unknown/Common.hpp"
#include "global.h"
#include "types.h"

class MapObjectProfileUnkDRDS : public MapObjectProfile_Derived2 {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRDS();
    ~MapObjectProfileUnkDRDS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRDS *GetProfile();
};

class MapObjectUnkDRDS : public MapObjectDoorBase {
public:
    /* 00 (base) */
    /* 94 */ UnkSystem6_Derived2 mUnk_94;
    /* 9C */ unk8 mUnk_9C;
    /* 9D */ unk8 mUnk_9D;
    /* 9E */ unk8 mUnk_9E;
    /* 9F */ unk8 mUnk_9F;
    /* A0 */ unk8 mUnk_A0;
    /* A1 */ bool mUnk_A1;
    /* A2 */ bool mUnk_A2;
    /* A3 */ unk8 mUnk_A3;
    /* A4 */ unk32 mUnk_A4;
    /* A8 */ UnkStruct_PlayerGet_ec mUnk_A8;
    /* AC */ volatile u16 mUnk_AC;
    /* AE */ u16 mUnk_AE;

    MapObjectUnkDRDS();

    // data_ov031_021150d8 (MapObject)
    /* 00 */ virtual bool vfunc_00() override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18(s8 *param1, s8 param2) override;
    /* 30 */ virtual ~MapObjectUnkDRDS() override;

    // (MapObject_UnkStruct1_Derived1)
    /* 04 */ virtual void vfunc2_04() override;
    /* 08 */ virtual void vfunc2_08() override;

    // (MapObject)
    /* 40 */ virtual void vfunc_40() override;
    /* 44 */ virtual void vfunc_44() override;
    /* 48 */ virtual void vfunc_48() override;
    /* 4C */ virtual void vfunc_4C() override;
    /* 5C */ virtual void vfunc_5C(unk32 param1, unk32 param2) override;
    /* 64 */ virtual bool vfunc_64() override;
    /* 68 */ virtual bool vfunc_68() override;
    /* 6C */ virtual bool vfunc_6C() override;
    /* 74 */ virtual void vfunc_74() override;
    /* 7C */ virtual void vfunc_7C() override;
    /* 84 */ virtual void vfunc_84(unk32 param1, Vec3p *param2, unk16 *param3) override;
    /* 88 */ virtual bool vfunc_88() override;
    /* 8C */ virtual unk32 vfunc_8C() override;

    // (MapObject_UnkStruct1_Derived1)
    /* 10 */ virtual void vfunc2_10();

    bool func_ov031_020fdec8(void);

    static void func_ov031_020fe5fc(Vec3p *param1, MapObjectUnkDRDS *thisx);
};
