//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "MapObjectUnkTREE.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkLEVS : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkLEVS();

    /* 30 */ virtual ~MapObjectUnkLEVS() override;

    void func_ov058_0214e5dc(void);
    void func_ov058_0214e70c(void);
    void func_ov058_0214e724(void);
    void func_ov058_0214e760(void);
    void func_ov058_0214e7a4(void);
    void func_ov058_0214e858(void);
    void func_ov058_0214e890(void);
};

class MapObjectProfileUnkSTNE_Base : public MapObjectProfile_Derived2 {
public:
    /* 00 (base) */
    /* D4 */ MapObject_10_ov058 mUnk_D4;
    /* F8 */

    MapObjectProfileUnkSTNE_Base(MapObjectId mapObjId1, MapObjectId mapObjId2) :
        MapObjectProfile_Derived2(mapObjId1, mapObjId2) {}
    ~MapObjectProfileUnkSTNE_Base() {}
};

class MapObjectProfileUnkLEVS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkLEVS();
    ~MapObjectProfileUnkLEVS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkLEVS *GetProfile();
};
