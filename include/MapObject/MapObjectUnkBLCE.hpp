//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkBLCE : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkBLCE();

    /* 4C */ virtual ~MapObjectUnkBLCE() override;

    void func_ov071_02161a40(void);
};

class MapObjectProfileUnkBLCE : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkBLCE();
    ~MapObjectProfileUnkBLCE();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkBLCE *GetProfile();
};
