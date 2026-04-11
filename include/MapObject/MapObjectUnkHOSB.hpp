//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkHOSB : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkHOSB();

    /* 4C */ virtual ~MapObjectUnkHOSB() override;

    void func_ov062_0215bce4(void);
    void func_ov062_0215bd34(void);
    void func_ov062_0215bd3c(void);
};

class MapObjectProfileUnkHOSB : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkHOSB();
    ~MapObjectProfileUnkHOSB();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkHOSB *GetProfile();
};
