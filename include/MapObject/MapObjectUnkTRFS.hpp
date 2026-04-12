//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRFS : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRFS();

    /* 30 */ virtual ~MapObjectUnkTRFS() override;

    void func_ov028_0214686c(void);
    void func_ov028_021468b8(void);
    void func_ov028_0214694c(void);
};

class MapObjectProfileUnkTRFS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRFS();
    ~MapObjectProfileUnkTRFS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRFS *GetProfile();
};
