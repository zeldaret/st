//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSWBR : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkSWBR();

    /* 4C */ virtual ~MapObjectUnkSWBR() override;

    void func_ov038_0211e82c(void);
    void func_ov038_0211e8d8(void);
    void func_ov038_0211e980(void);
    void func_ov038_0211e99c(void);
    void func_ov038_0211e9bc(void);
};

class MapObjectProfileUnkSWBR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSWBR();
    ~MapObjectProfileUnkSWBR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSWBR *GetProfile();
};
