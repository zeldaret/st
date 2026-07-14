//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSTSV : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkSTSV();

    /* 30 */ virtual ~MapObjectUnkSTSV() override;

    void func_ov084_021606e4(void);
    void func_ov084_02160738(void);
};

class MapObjectProfileUnkSTSV : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSTSV();
    ~MapObjectProfileUnkSTSV();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSTSV *GetProfile();
};
