//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkGTRK : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkGTRK();

    /* 4C */ virtual ~MapObjectUnkGTRK() override;

    void func_ov077_0215af58(void);
    void func_ov077_0215b018(void);
};

class MapObjectProfileUnkGTRK : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkGTRK();
    ~MapObjectProfileUnkGTRK();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkGTRK *GetProfile();
};
