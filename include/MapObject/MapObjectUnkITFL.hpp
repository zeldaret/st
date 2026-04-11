//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkITFL : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkITFL();

    /* 4C */ virtual ~MapObjectUnkITFL() override;

    void func_ov031_021059b8(void);
    void func_ov031_02105be4(void);
    void func_ov031_02105cbc(void);
    void func_ov031_02105dac(void);
    void func_ov031_02105f54(void);
};

class MapObjectProfileUnkITFL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkITFL();
    ~MapObjectProfileUnkITFL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkITFL *GetProfile();
};
