//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTREE : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTREE();

    /* 4C */ virtual ~MapObjectUnkTREE() override;

    void func_ov058_0214e09c(void);
    void func_ov058_0214e23c(void);
    void func_ov058_0214e2e8(void);
    void func_ov058_0214e330(void);
    void func_ov058_0214e338(void);
    void func_ov058_0214e3e8(void);
};

class MapObjectProfileUnkTREE : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTREE();
    ~MapObjectProfileUnkTREE();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTREE *GetProfile();
};
