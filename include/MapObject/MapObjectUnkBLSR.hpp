//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkBLSR : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkBLSR();

    /* 4C */ virtual ~MapObjectUnkBLSR() override;

    void func_ov038_0211e548(void);
    void func_ov038_0211e6a0(void);
    void func_ov038_0211e6a4(void);
    void func_ov038_0211e6ec(void);
};

class MapObjectProfileUnkBLSR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkBLSR();
    ~MapObjectProfileUnkBLSR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkBLSR *GetProfile();
};
