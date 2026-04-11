//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkBLCK : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkBLCK();

    /* 4C */ virtual ~MapObjectUnkBLCK() override;

    void func_ov070_021440ac(void);
    void func_ov070_02144174(void);
};

class MapObjectProfileUnkBLCK : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkBLCK();
    ~MapObjectProfileUnkBLCK();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkBLCK *GetProfile();
};
