//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkEXTR : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkEXTR();

    /* 30 */ virtual ~MapObjectUnkEXTR() override;

    void func_ov059_02162d44(void);
};

class MapObjectProfileUnkEXTR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkEXTR();
    ~MapObjectProfileUnkEXTR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkEXTR *GetProfile();
};
