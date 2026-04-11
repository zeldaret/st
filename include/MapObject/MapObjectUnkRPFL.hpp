//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkRPFL : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkRPFL();

    /* 4C */ virtual ~MapObjectUnkRPFL() override;

    void func_ov071_02160c88(void);
    void func_ov071_02160cbc(void);
    void func_ov071_02160cd8(void);
    void func_ov071_02160d14(void);
    void func_ov071_02160e00(void);
    void func_ov071_02160e14(void);
    void func_ov071_02160fe4(void);
    void func_ov071_02161054(void);
    void func_ov071_0216120c(void);
    void func_ov071_0216146c(void);
    void func_ov071_021614f4(void);
    void func_ov071_02161514(void);
    void func_ov071_02161604(void);
    void func_ov071_021616d8(void);
    void func_ov071_0216170c(void);
    void func_ov071_02161730(void);
    void func_ov071_02161788(void);
    void func_ov071_02161918(void);
};

class MapObjectProfileUnkRPFL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkRPFL();
    ~MapObjectProfileUnkRPFL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkRPFL *GetProfile();
};
