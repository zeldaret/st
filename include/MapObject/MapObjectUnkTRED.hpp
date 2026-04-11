//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRED : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTRED();

    /* 4C */ virtual ~MapObjectUnkTRED() override;

    void func_ov031_02104114(void);
    void func_ov031_02104168(void);
};

class MapObjectProfileUnkTRED : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRED();
    ~MapObjectProfileUnkTRED();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRED *GetProfile();
};
