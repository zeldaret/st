//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkETUS : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkETUS();

    /* 4C */ virtual ~MapObjectUnkETUS() override;

    void func_ov091_021686a4(void);
    void func_ov091_0216872c(void);
    void func_ov091_02168730(void);
    void func_ov091_02168744(void);
    void func_ov091_02168784(void);
};

class MapObjectProfileUnkETUS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkETUS();
    ~MapObjectProfileUnkETUS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkETUS *GetProfile();
};
