//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkMTWR : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkMTWR();

    /* 30 */ virtual ~MapObjectUnkMTWR() override;

    void func_ov026_0210a744(void);
    void func_ov026_0210a85c(void);
    void func_ov026_0210a878(void);
};

class MapObjectProfileUnkMTWR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkMTWR();
    ~MapObjectProfileUnkMTWR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkMTWR *GetProfile();
};
