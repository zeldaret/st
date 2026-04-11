//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkETDD : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkETDD();

    /* 4C */ virtual ~MapObjectUnkETDD() override;

    void func_ov092_02168130(void);
    void func_ov092_021681bc(void);
    void func_ov092_021681c0(void);
    void func_ov092_021681c8(void);
    void func_ov092_021681f8(void);
    void func_ov092_02168200(void);
};

class MapObjectProfileUnkETDD : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkETDD();
    ~MapObjectProfileUnkETDD();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkETDD *GetProfile();
};
