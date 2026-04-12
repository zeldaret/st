//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkEXCT : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkEXCT();

    /* 30 */ virtual ~MapObjectUnkEXCT() override;

    void func_ov060_02160a84(void);
};

class MapObjectProfileUnkEXCT : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkEXCT();
    ~MapObjectProfileUnkEXCT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkEXCT *GetProfile();
};
