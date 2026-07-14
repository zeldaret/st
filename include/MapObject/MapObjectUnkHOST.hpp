//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkHOST : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkHOST();

    /* 30 */ virtual ~MapObjectUnkHOST() override;

    void func_ov058_0214f838(void);
    void func_ov058_0214f888(void);
};

class MapObjectProfileUnkHOST : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkHOST();
    ~MapObjectProfileUnkHOST();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkHOST *GetProfile();
};
