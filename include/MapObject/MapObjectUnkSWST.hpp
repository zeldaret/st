//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSWST : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkSWST();

    /* 4C */ virtual ~MapObjectUnkSWST() override;

    void func_ov000_0209dda4(void);
    void func_ov000_0209dde0(void);
    void func_ov000_0209de10(void);
    void func_ov000_0209df9c(void);
    void func_ov000_0209e068(void);
    void func_ov000_0209e11c(void);
    void func_ov000_0209e280(void);
    void func_ov000_0209e2b4(void);
    void func_ov000_0209e38c(void);
    void func_ov000_0209e3c8(void);
};

class MapObjectProfileUnkSWST : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSWST();
    ~MapObjectProfileUnkSWST();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSWST *GetProfile();
};
