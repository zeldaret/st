//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkEBRD : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkEBRD();

    /* 4C */ virtual ~MapObjectUnkEBRD() override;

    void func_ov026_0210aa20(void);
    void func_ov026_0210ab3c(void);
};

class MapObjectProfileUnkEBRD : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkEBRD();
    ~MapObjectProfileUnkEBRD();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkEBRD *GetProfile();
};
