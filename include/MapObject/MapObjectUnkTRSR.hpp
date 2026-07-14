//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRSR : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRSR();

    /* 30 */ virtual ~MapObjectUnkTRSR() override;

    void func_ov028_0214643c(void);
    void func_ov028_0214647c(void);
    void func_ov028_021464cc(void);
};

class MapObjectProfileUnkTRSR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRSR();
    ~MapObjectProfileUnkTRSR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRSR *GetProfile();
};
