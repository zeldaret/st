//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRDA : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRDA();

    /* 30 */ virtual ~MapObjectUnkTRDA() override;

    void func_ov027_02142e3c(void);
    void func_ov027_02142f28(void);
    void func_ov027_02142f48(void);
    void func_ov027_02142f68(void);
    void func_ov027_02142f88(void);
};

class MapObjectProfileUnkTRDA : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRDA();
    ~MapObjectProfileUnkTRDA();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRDA *GetProfile();
};
