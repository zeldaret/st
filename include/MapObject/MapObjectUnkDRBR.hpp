//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDRBR : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkDRBR();

    /* 4C */ virtual ~MapObjectUnkDRBR() override;

    void func_ov086_0215e1bc(void);
};

class MapObjectProfileUnkDRBR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRBR();
    ~MapObjectProfileUnkDRBR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRBR *GetProfile();
};
