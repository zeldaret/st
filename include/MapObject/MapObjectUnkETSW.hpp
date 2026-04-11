//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkETSW : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkETSW();

    /* 4C */ virtual ~MapObjectUnkETSW() override;

    void func_ov028_021457e0(void);
    void func_ov028_02145958(void);
    void func_ov028_02145960(void);
    void func_ov028_021459c4(void);
    void func_ov028_021459d8(void);
};

class MapObjectProfileUnkETSW : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkETSW();
    ~MapObjectProfileUnkETSW();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkETSW *GetProfile();
};
