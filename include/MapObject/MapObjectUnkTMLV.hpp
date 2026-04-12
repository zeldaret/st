//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTMLV : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTMLV();

    /* 30 */ virtual ~MapObjectUnkTMLV() override;

    void func_ov084_021604f0(void);
    void func_ov084_02160504(void);
    void func_ov084_0216054c(void);
    void func_ov084_02160560(void);
    void func_ov084_021605ac(void);
};

class MapObjectProfileUnkTMLV : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTMLV();
    ~MapObjectProfileUnkTMLV();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTMLV *GetProfile();
};
