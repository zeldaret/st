//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkGATE : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkGATE();

    /* 4C */ virtual ~MapObjectUnkGATE() override;

    void func_ov031_02100890(void);
    void func_ov031_02100a28(void);
    void func_ov031_02100a2c(void);
};

class MapObjectProfileUnkGATE : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkGATE();
    ~MapObjectProfileUnkGATE();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkGATE *GetProfile();
};
