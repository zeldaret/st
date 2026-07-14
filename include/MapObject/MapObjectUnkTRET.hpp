//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRET : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRET();

    /* 30 */ virtual ~MapObjectUnkTRET() override;

    void func_ov026_0210976c(void);
    void func_ov026_021097cc(void);
    void func_ov026_021097f4(void);
    void func_ov026_021098d8(void);
};

class MapObjectProfileUnkTRET : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRET();
    ~MapObjectProfileUnkTRET();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRET *GetProfile();
};
