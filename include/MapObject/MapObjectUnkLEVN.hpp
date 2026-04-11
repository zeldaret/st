//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkLEVN : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkLEVN();

    /* 4C */ virtual ~MapObjectUnkLEVN() override;

    void func_ov064_0215a260(void);
};

class MapObjectProfileUnkLEVN : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkLEVN();
    ~MapObjectProfileUnkLEVN();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkLEVN *GetProfile();
};
