//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkHOLB : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkHOLB();

    /* 30 */ virtual ~MapObjectUnkHOLB() override;

    void func_ov062_0215bb90(void);
    void func_ov062_0215bbe0(void);
    void func_ov062_0215bbe8(void);
};

class MapObjectProfileUnkHOLB : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkHOLB();
    ~MapObjectProfileUnkHOLB();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkHOLB *GetProfile();
};
