//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkGTRB : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkGTRB();

    /* 4C */ virtual ~MapObjectUnkGTRB() override;

    void func_ov069_0215a97c(void);
    void func_ov069_0215a9cc(void);
    void func_ov069_0215a9e8(void);
    void func_ov069_0215a9fc(void);
    void func_ov069_0215aa18(void);
};

class MapObjectProfileUnkGTRB : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkGTRB();
    ~MapObjectProfileUnkGTRB();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkGTRB *GetProfile();
};
