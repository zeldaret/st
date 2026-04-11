//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTREN : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTREN();

    /* 4C */ virtual ~MapObjectUnkTREN() override;

    void func_ov031_02104470(void);
};

class MapObjectProfileUnkTREN : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTREN();
    ~MapObjectProfileUnkTREN();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTREN *GetProfile();
};
