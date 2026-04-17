//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkHOW1 : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkHOW1();

    /* 30 */ virtual ~MapObjectUnkHOW1() override;

    void func_ov066_0215d008(void);
    void func_ov066_0215d058(void);
};

class MapObjectProfileUnkHOW1 : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkHOW1();
    ~MapObjectProfileUnkHOW1();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkHOW1 *GetProfile();
};
