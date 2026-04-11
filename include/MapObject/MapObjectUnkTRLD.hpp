//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRLD : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTRLD();

    /* 4C */ virtual ~MapObjectUnkTRLD() override;

    void func_ov070_0214b5f4(void);
    void func_ov070_0214b648(void);
    void func_ov070_0214b670(void);
    void func_ov070_0214b698(void);
};

class MapObjectProfileUnkTRLD : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRLD();
    ~MapObjectProfileUnkTRLD();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRLD *GetProfile();
};
