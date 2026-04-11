//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkPLCT : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkPLCT();

    /* 4C */ virtual ~MapObjectUnkPLCT() override;

    void func_ov060_021604ac(void);
    void func_ov060_021604b4(void);
    void func_ov060_021604b8(void);
};

class MapObjectProfileUnkPLCT : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkPLCT();
    ~MapObjectProfileUnkPLCT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkPLCT *GetProfile();
};
