//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkPLFA : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkPLFA();

    /* 30 */ virtual ~MapObjectUnkPLFA() override;

    void func_ov026_02108ee8(void);
    void func_ov026_02109160(void);
    void func_ov026_021091d8(void);
    void func_ov026_021091ec(void);
    void func_ov026_02109228(void);
    void func_ov026_0210922c(void);
    void func_ov026_02109230(void);
};

class MapObjectProfileUnkPLFA : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkPLFA();
    ~MapObjectProfileUnkPLFA();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkPLFA *GetProfile();
};
