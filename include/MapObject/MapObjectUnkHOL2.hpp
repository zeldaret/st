//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkHOL2 : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkHOL2();

    /* 4C */ virtual ~MapObjectUnkHOL2() override;

    void func_ov062_0215b660(void);
    void func_ov062_0215b6e4(void);
    void func_ov062_0215b784(void);
    void func_ov062_0215b798(void);
};

class MapObjectProfileUnkHOL2 : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkHOL2();
    ~MapObjectProfileUnkHOL2();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkHOL2 *GetProfile();
};
