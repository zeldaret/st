//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRLW : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTRLW();

    /* 4C */ virtual ~MapObjectUnkTRLW() override;

    void func_ov070_0214b7e0(void);
    void func_ov070_0214b800(void);
    void func_ov070_0214b810(void);
    void func_ov070_0214b83c(void);
    void func_ov070_0214b864(void);
    void func_ov070_0214b88c(void);
};

class MapObjectProfileUnkTRLW : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRLW();
    ~MapObjectProfileUnkTRLW();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRLW *GetProfile();
};
