//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkMTIR : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkMTIR();

    /* 4C */ virtual ~MapObjectUnkMTIR() override;

    void func_ov067_0215be74(void);
    void func_ov067_0215bec0(void);
    void func_ov067_0215bec4(void);
};

class MapObjectProfileUnkMTIR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkMTIR();
    ~MapObjectProfileUnkMTIR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkMTIR *GetProfile();
};
