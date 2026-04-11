//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkLEVS : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkLEVS();

    /* 4C */ virtual ~MapObjectUnkLEVS() override;

    void func_ov058_0214e5dc(void);
    void func_ov058_0214e70c(void);
    void func_ov058_0214e724(void);
    void func_ov058_0214e760(void);
    void func_ov058_0214e7a4(void);
    void func_ov058_0214e858(void);
    void func_ov058_0214e890(void);
};

class MapObjectProfileUnkLEVS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkLEVS();
    ~MapObjectProfileUnkLEVS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkLEVS *GetProfile();
};
