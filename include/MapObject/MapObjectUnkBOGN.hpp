//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkBOGN : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkBOGN();

    /* 4C */ virtual ~MapObjectUnkBOGN() override;

    void func_ov091_021688e0(void);
    void func_ov091_02168910(void);
    void func_ov091_02168994(void);
};

class MapObjectProfileUnkBOGN : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkBOGN();
    ~MapObjectProfileUnkBOGN();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkBOGN *GetProfile();
};
