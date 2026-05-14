//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkGRSV : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkGRSV();

    /* 30 */ virtual ~MapObjectUnkGRSV() override;

    void func_ov058_02151558(void);
    void func_ov058_02151874(void);
    void func_ov058_021518e8(void);
};

class MapObjectProfileUnkGRSV : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkGRSV();
    ~MapObjectProfileUnkGRSV();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkGRSV *GetProfile();
};
