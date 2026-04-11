//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkEXHS : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkEXHS();

    /* 4C */ virtual ~MapObjectUnkEXHS() override;

    void func_ov058_0214fdc0(void);
};

class MapObjectProfileUnkEXHS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkEXHS();
    ~MapObjectProfileUnkEXHS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkEXHS *GetProfile();
};
