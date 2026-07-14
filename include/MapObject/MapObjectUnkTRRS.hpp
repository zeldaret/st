//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRRS : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRRS();

    /* 30 */ virtual ~MapObjectUnkTRRS() override;

    void func_ov028_02144970(void);
    void func_ov028_02144a5c(void);
    void func_ov028_02144a7c(void);
    void func_ov028_02144a9c(void);
    void func_ov028_02144abc(void);
};

class MapObjectProfileUnkTRRS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRRS();
    ~MapObjectProfileUnkTRRS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRRS *GetProfile();
};
