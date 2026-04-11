//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkHOL1 : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkHOL1();

    /* 4C */ virtual ~MapObjectUnkHOL1() override;

    void func_ov062_0215ba3c(void);
    void func_ov062_0215ba8c(void);
    void func_ov062_0215ba94(void);
};

class MapObjectProfileUnkHOL1 : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkHOL1();
    ~MapObjectProfileUnkHOL1();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkHOL1 *GetProfile();
};
