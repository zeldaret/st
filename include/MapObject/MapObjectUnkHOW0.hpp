//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkHOW0 : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkHOW0();

    /* 4C */ virtual ~MapObjectUnkHOW0() override;

    void func_ov066_0215ceb4(void);
    void func_ov066_0215cf04(void);
};

class MapObjectProfileUnkHOW0 : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkHOW0();
    ~MapObjectProfileUnkHOW0();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkHOW0 *GetProfile();
};
