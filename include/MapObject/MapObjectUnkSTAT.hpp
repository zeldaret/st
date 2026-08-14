//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "Render/ModelRender.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSTAT : public MapObject {
public:
    /* 00 (base) */
    /* 40 */ UnkSystem6_Derived2 mUnk_40;
    /* 48 */ unk8 mUnk_48;
    /* 49 */ STRUCT_PAD(0x49, 0x4C);
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ unk32 mUnk_50;
    /* 54 */ unk32 mUnk_54;
    /* 58 */ unk16 mUnk_58;
    /* 5A */ volatile u16 mUnk_5A;
    /* 5C */ u16 mUnk_5C;
    /* 5E */ STRUCT_PAD(0x5E, 0x60);
    /* 60 */ unk32 mUnk_60;
    /* 64 */ unk32 mUnk_64;
    /* 68 */ unk32 mUnk_68;

    MapObjectUnkSTAT();

    /* 00 */ virtual bool vfunc_00() override; // Init
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 30 */ virtual ~MapObjectUnkSTAT() override;

    void func_ov063_0215f6d0(void);
    void func_ov063_0215f710(void);
    void func_ov063_0215f798(void);
    void func_ov063_0215f7ac(void);
    void func_ov063_0215fc40(unk32 param1);
    void func_ov063_0215fc88(void);
    unk32 func_ov063_0215fce0(void);
};

class MapObjectProfileUnkSTAT_Base_D4 : public MapObject_10 {
public:
};

class MapObjectProfileUnkSTAT_Base : public MapObjectProfile_Derived2 {
public:
    /* 00 (base) */
    /* D4 */ MapObjectProfileUnkSTAT_Base_D4 mUnk_D4;
    /* F8 */

    MapObjectProfileUnkSTAT_Base(MapObjectId mapObjId1, MapObjectId mapObjId2) :
        MapObjectProfile_Derived2(mapObjId1, mapObjId2),
        mUnk_D4() {};
};

class MapObjectProfileUnkSTAT : public MapObjectProfileUnkSTAT_Base {
public:
    /* 00 (base) */
    /* F8 */

    MapObjectProfileUnkSTAT();
    ~MapObjectProfileUnkSTAT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSTAT *GetProfile();
};
