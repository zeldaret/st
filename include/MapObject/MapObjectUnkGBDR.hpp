//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkGBDR : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkGBDR();

    /* 4C */ virtual ~MapObjectUnkGBDR() override;

    void func_ov062_0215be70(void);
    void func_ov062_0215bfc8(void);
};

class MapObjectProfileUnkGBDR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkGBDR();
    ~MapObjectProfileUnkGBDR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkGBDR *GetProfile();
};
