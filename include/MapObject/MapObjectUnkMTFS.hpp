//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkMTFS : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkMTFS();

    /* 30 */ virtual ~MapObjectUnkMTFS() override;

    void func_ov066_0215d25c(void);
    void func_ov066_0215d270(void);
    void func_ov066_0215d328(void);
    void func_ov066_0215d474(void);
    void func_ov066_0215d488(void);
    void func_ov066_0215d4a8(void);
    void func_ov066_0215d764(void);
};

class MapObjectProfileUnkMTFS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkMTFS();
    ~MapObjectProfileUnkMTFS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkMTFS *GetProfile();
};
