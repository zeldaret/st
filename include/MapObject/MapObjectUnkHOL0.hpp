//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkHOL0 : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkHOL0();

    /* 30 */ virtual ~MapObjectUnkHOL0() override;

    void func_ov062_0215b8e8(void);
    void func_ov062_0215b938(void);
    void func_ov062_0215b940(void);
};

class MapObjectProfileUnkHOL0 : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkHOL0();
    ~MapObjectProfileUnkHOL0();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkHOL0 *GetProfile();
};
