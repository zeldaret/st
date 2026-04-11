//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSWRA : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkSWRA();

    /* 4C */ virtual ~MapObjectUnkSWRA() override;

    void func_ov042_0212b820(void);
    void func_ov042_0212b8e0(void);
    void func_ov042_0212b8e4(void);
    void func_ov042_0212b928(void);
    void func_ov042_0212b9b8(void);
};

class MapObjectProfileUnkSWRA : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSWRA();
    ~MapObjectProfileUnkSWRA();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSWRA *GetProfile();
};
