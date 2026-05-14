//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkBBFL : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkBBFL();

    /* 30 */ virtual ~MapObjectUnkBBFL() override;

    void func_ov058_0214fff4(void);
    void func_ov058_021501ec(void);
    void func_ov058_0215026c(void);
    void func_ov058_0215049c(void);
    void func_ov058_02150510(void);
    void func_ov058_021507a8(void);
};

class MapObjectProfileUnkBBFL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkBBFL();
    ~MapObjectProfileUnkBBFL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkBBFL *GetProfile();
};
