//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkMZFX : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkMZFX();

    /* 4C */ virtual ~MapObjectUnkMZFX() override;

    void func_ov091_02167bfc(void);
    void func_ov091_02167c04(void);
};

class MapObjectProfileUnkMZFX : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkMZFX();
    ~MapObjectProfileUnkMZFX();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkMZFX *GetProfile();
};
