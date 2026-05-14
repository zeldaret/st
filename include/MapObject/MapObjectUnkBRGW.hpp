//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkBRGW : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkBRGW();

    /* 30 */ virtual ~MapObjectUnkBRGW() override;

    void func_ov094_02174a04(void);
    void func_ov094_02174c88(void);
    void func_ov094_02174c8c(void);
    void func_ov094_02174e2c(void);
};

class MapObjectProfileUnkBRGW : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkBRGW();
    ~MapObjectProfileUnkBRGW();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkBRGW *GetProfile();
};
