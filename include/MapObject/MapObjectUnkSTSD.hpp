//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSTSD : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkSTSD();

    /* 30 */ virtual ~MapObjectUnkSTSD() override;

    void func_ov087_02161b00(void);
    void func_ov087_02161b84(void);
    void func_ov087_02161bd8(void);
    void func_ov087_02161c38(void);
};

class MapObjectProfileUnkSTSD : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSTSD();
    ~MapObjectProfileUnkSTSD();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSTSD *GetProfile();
};
