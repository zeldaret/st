//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSTDE : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkSTDE();

    /* 4C */ virtual ~MapObjectUnkSTDE() override;

    void func_ov029_02144194(void);
    void func_ov029_02144200(void);
    void func_ov029_02144228(void);
    void func_ov029_02144244(void);
    void func_ov029_02144288(void);
};

class MapObjectProfileUnkSTDE : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSTDE();
    ~MapObjectProfileUnkSTDE();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSTDE *GetProfile();
};
