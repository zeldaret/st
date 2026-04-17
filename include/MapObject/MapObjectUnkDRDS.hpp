#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectDoorBase.hpp"
#include "MapObject/MapObjectProfile.hpp"
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

class MapObjectUnkDRDS_Test {
public:
    /* 94 */ void *mUnk_98;
    /* 94 */ UnkSystem6 mUnk_94;

    MapObjectUnkDRDS_Test() :
        mUnk_98(GetUnkPointer1<MapObjectProfileUnkDRDS>()) {}
};

class MapObjectUnkDRDS : public MapObjectDoorBase {
public:
    /* 00 (base) */
    MapObjectUnkDRDS_Test t;
    // /* 94 */ UnkSystem6 mUnk_94;
    // /* 94 */ void* mUnk_98;
    /* 9C */ unk8 mUnk_9C;
    /* 9D */ unk8 mUnk_9D;
    /* 9E */ unk8 mUnk_9E;
    /* 9F */ unk8 mUnk_9F;
    /* A0 */ unk8 mUnk_A0;
    /* A1 */ unk8 mUnk_A1;
    /* A2 */ unk8 mUnk_A2;
    /* A3 */ unk8 mUnk_A3;
    /* A4 */ unk32 mUnk_A4;
    /* A8 */ unk32 mUnk_A8;
    /* AC */ unk16 mUnk_AC;
    /* AE */ unk16 mUnk_AE;

    MapObjectUnkDRDS();

    // data_ov031_021150d8 (MapObject)
    /* 00 */ virtual bool vfunc_00() override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual unk16 vfunc_08() override;
    /* 0C */ virtual unk8 vfunc_0C() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18() override;
    /* 30 */ virtual ~MapObjectUnkDRDS() override;
    /* 38 */ virtual void vfunc_38() override;
    /* 3C */ virtual void vfunc_3C() override;
    /* 40 */ virtual void vfunc_40() override;
    /* 44 */ virtual void vfunc_44() override;
    /* 48 */ virtual void vfunc_48() override;
    /* 4C */ virtual void vfunc_4C() override;
    /* 5C */ virtual void vfunc_5C() override;
    /* 64 */ virtual void vfunc_64() override;
    /* 68 */ virtual void vfunc_68() override;
    /* 6C */ virtual void vfunc_6C() override;
    /* 74 */ virtual void vfunc_74() override;
    /* 7C */ virtual void vfunc_7C() override;
    /* 84 */ virtual void vfunc_84() override;
    /* 88 */ virtual void vfunc_88() override;
    /* 8C */ virtual void vfunc_8C() override;

    // data_ov031_02115170 (MapObject_UnkStruct1_Derived1)
    /* 04 */ virtual void vfunc2_04() override;
    /* 08 */ virtual void vfunc2_08() override;
    /* 10 */ virtual void vfunc2_10();

    void func_ov031_020fdec8(void);
    void func_ov031_020fe5fc(void);
};
