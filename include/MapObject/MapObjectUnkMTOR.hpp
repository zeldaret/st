//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkMTOR : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkMTOR();

    /* 30 */ virtual ~MapObjectUnkMTOR() override;

    void func_ov067_0215c074(void);
    void func_ov067_0215c0c0(void);
    void func_ov067_0215c0c4(void);
};

class MapObjectProfileUnkMTOR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkMTOR();
    ~MapObjectProfileUnkMTOR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkMTOR *GetProfile();
};
