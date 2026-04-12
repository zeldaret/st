//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkBLCM : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkBLCM();

    /* 30 */ virtual ~MapObjectUnkBLCM() override;

    void func_ov000_0209e4b0(void);
    void func_ov000_0209e6ac(void);
};

class MapObjectProfileUnkBLCM : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkBLCM();
    ~MapObjectProfileUnkBLCM();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkBLCM *GetProfile();
};
