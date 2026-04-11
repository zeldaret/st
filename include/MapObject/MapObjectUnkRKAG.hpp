//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkRKAG : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkRKAG();

    /* 4C */ virtual ~MapObjectUnkRKAG() override;

    void func_ov068_02161674(void);
    void func_ov068_02161684(void);
    void func_ov068_0216168c(void);
    void func_ov068_02161694(void);
    void func_ov068_02161698(void);
};

class MapObjectProfileUnkRKAG : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkRKAG();
    ~MapObjectProfileUnkRKAG();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkRKAG *GetProfile();
};
