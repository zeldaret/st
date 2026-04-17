//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkBRGL : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkBRGL();

    /* 30 */ virtual ~MapObjectUnkBRGL() override;

    void func_ov067_0215b180(void);
    void func_ov067_0215b268(void);
    void func_ov067_0215b2b4(void);
    void func_ov067_0215b2f0(void);
};

class MapObjectProfileUnkBRGL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkBRGL();
    ~MapObjectProfileUnkBRGL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkBRGL *GetProfile();
};
