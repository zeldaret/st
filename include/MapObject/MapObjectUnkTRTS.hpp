//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRTS : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTRTS();

    /* 4C */ virtual ~MapObjectUnkTRTS() override;

    void func_ov028_021461d4(void);
    void func_ov028_0214625c(void);
    void func_ov028_021462f0(void);
};

class MapObjectProfileUnkTRTS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRTS();
    ~MapObjectProfileUnkTRTS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRTS *GetProfile();
};
