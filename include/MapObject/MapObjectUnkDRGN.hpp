//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDRGN : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkDRGN();

    /* 30 */ virtual ~MapObjectUnkDRGN() override;

    void func_ov067_0215bb08(void);
    void func_ov067_0215bce0(void);
};

class MapObjectProfileUnkDRGN : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRGN();
    ~MapObjectProfileUnkDRGN();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRGN *GetProfile();
};
