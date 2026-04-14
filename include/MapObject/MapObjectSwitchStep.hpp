#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "Unknown/Common.hpp"
#include "global.h"
#include "types.h"

class MapObjectSwitchStep_40 : public UnkSystem4 {
public:
    /* 00 (base) */
    /* 60 */ unk16 mUnk_60;
    /* 62 */ bool mUnk_62;
    /* 63 */ unk8 mUnk_63;
    /* 64 */

    MapObjectSwitchStep_40();

    // data_ov000_020b36e0
    /* 00 */ virtual ~MapObjectSwitchStep_40() override {}
    /* 1C */ virtual void vfunc_1C(UnkSystem4_vfunc_1C *param1) override;

    void func_ov000_0209dde0(void);
};

class MapObjectSwitchStep : public MapObject {
public:
    /* 00 (base) */
    /* 40 */ MapObjectSwitchStep_40 mUnk_40;
    /* A4 */ UnkSystem5 mUnk_A4;
    /* C4 */ unk32 mUnk_C4;
    /* C8 */ STRUCT_PAD(0xC8, 0xE4);
    /* E4 */ u16 mUnk_E4;
    /* E6 */ u16 mUnk_E6;
    /* E8 */ unk16 mUnk_E8;
    /* EA */ unk8 mUnk_EA;
    /* EB */ unk8 mUnk_EB;
    /* EC */

    MapObjectSwitchStep();

    /* 00 */ virtual bool vfunc_00() override;
    /* 08 */ virtual unk16 vfunc_08() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18() override;
    /* 20 */ virtual void vfunc_20() override;
    /* 30 */ virtual ~MapObjectSwitchStep() override;

    void func_ov000_0209dda4(void);

    void func_ov000_0209e11c(unk32 param1, unk32 param2);
    void func_ov000_0209e38c(void);
};

class MapObjectProfileSwitchStep_Base : public MapObjectProfile_Derived2 {
public:
    /* 00 (base) */
    /* D4 */ MapObjectProfile_D4 mUnk_D4;

    MapObjectProfileSwitchStep_Base(MapObjectId mapObjId) :
        MapObjectProfile_Derived2(mapObjId, mapObjId) {}

    // data_ov000_020b369c (vtable)
};

class MapObjectProfileSwitchStep : public MapObjectProfileSwitchStep_Base {
public:
    /* 00 (base) */
    /* E0 */ Vec3p mUnk_E0;
    /* EC */ Vec3p mUnk_EC;
    /* F8 */

    MapObjectProfileSwitchStep();
    ~MapObjectProfileSwitchStep() {}

    /* 00 */ virtual MapObject *Create();

    static MapObjectProfileSwitchStep *GetProfile();
};
