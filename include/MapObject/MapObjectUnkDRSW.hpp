//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDRSW : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkDRSW();

    /* 4C */ virtual ~MapObjectUnkDRSW() override;

    void func_ov031_020feee4(void);
    void func_ov031_020fefac(void);
    void func_ov031_020ff07c(void);
    void func_ov031_020ff100(void);
    void func_ov031_020ff110(void);
    void func_ov031_020ff130(void);
    void func_ov031_020ff1b0(void);
    void func_ov031_020ff1bc(void);
    void func_ov031_020ff288(void);
    void func_ov031_020ff2d8(void);
    void func_ov031_020ff318(void);
    void func_ov031_020ff38c(void);
    void func_ov031_020ff3d0(void);
    void func_ov031_020ff3fc(void);
    void func_ov031_020ff43c(void);
    void func_ov031_020ff468(void);
};

class MapObjectProfileUnkDRSW : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRSW();
    ~MapObjectProfileUnkDRSW();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRSW *GetProfile();
};
