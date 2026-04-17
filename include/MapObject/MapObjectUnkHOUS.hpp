//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkHOUS : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkHOUS();

    /* 30 */ virtual ~MapObjectUnkHOUS() override;

    void func_ov058_0214f160(void);
    void func_ov058_0214f52c(void);
};

class MapObjectProfileUnkHOUS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkHOUS();
    ~MapObjectProfileUnkHOUS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkHOUS *GetProfile();
};
