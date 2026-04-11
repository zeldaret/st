//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRES : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTRES();

    /* 4C */ virtual ~MapObjectUnkTRES() override;

    void func_ov031_02102f64(void);
    void func_ov031_02102f90(void);
    void func_ov031_02102f98(void);
};

class MapObjectProfileUnkTRES : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRES();
    ~MapObjectProfileUnkTRES();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRES *GetProfile();
};
