//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkPLV2 : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkPLV2();

    /* 30 */ virtual ~MapObjectUnkPLV2() override;

    void func_ov084_0216141c(void);
    void func_ov084_02161424(void);
    void func_ov084_02161428(void);
};

class MapObjectProfileUnkPLV2 : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkPLV2();
    ~MapObjectProfileUnkPLV2();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkPLV2 *GetProfile();
};
