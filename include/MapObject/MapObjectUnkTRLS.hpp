//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRLS : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTRLS();

    /* 4C */ virtual ~MapObjectUnkTRLS() override;

    void func_ov070_0214b424(void);
    void func_ov070_0214b450(void);
    void func_ov070_0214b458(void);
    void func_ov070_0214b484(void);
    void func_ov070_0214b4ac(void);
};

class MapObjectProfileUnkTRLS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRLS();
    ~MapObjectProfileUnkTRLS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRLS *GetProfile();
};
