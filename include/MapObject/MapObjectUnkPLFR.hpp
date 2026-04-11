//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkPLFR : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkPLFR();

    /* 4C */ virtual ~MapObjectUnkPLFR() override;

    void func_ov077_0215ad70(void);
    void func_ov077_0215add0(void);
    void func_ov077_0215add4(void);
};

class MapObjectProfileUnkPLFR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkPLFR();
    ~MapObjectProfileUnkPLFR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkPLFR *GetProfile();
};
