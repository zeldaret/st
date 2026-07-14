//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSTAT : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkSTAT();

    /* 30 */ virtual ~MapObjectUnkSTAT() override;

    void func_ov063_0215f6d0(void);
    void func_ov063_0215f710(void);
    void func_ov063_0215f798(void);
    void func_ov063_0215f7ac(void);
    void func_ov063_0215fc40(void);
    void func_ov063_0215fc88(void);
    void func_ov063_0215fce0(void);
};

class MapObjectProfileUnkSTAT : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSTAT();
    ~MapObjectProfileUnkSTAT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSTAT *GetProfile();
};
