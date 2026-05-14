//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRPT : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRPT();

    /* 30 */ virtual ~MapObjectUnkTRPT() override;

    void func_ov026_0210e5c0(void);
    void func_ov026_0210e688(void);
    void func_ov026_0210e69c(void);
    void func_ov026_0210e760(void);
    void func_ov026_0210e82c(void);
    void func_ov026_0210e880(void);
};

class MapObjectProfileUnkTRPT : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRPT();
    ~MapObjectProfileUnkTRPT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRPT *GetProfile();
};
