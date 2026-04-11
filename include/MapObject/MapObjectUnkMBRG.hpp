//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkMBRG : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkMBRG();

    /* 4C */ virtual ~MapObjectUnkMBRG() override;

    void func_ov027_02143f7c(void);
    void func_ov027_02144014(void);
    void func_ov027_0214409c(void);
    void func_ov027_021441a8(void);
};

class MapObjectProfileUnkMBRG : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkMBRG();
    ~MapObjectProfileUnkMBRG();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkMBRG *GetProfile();
};
