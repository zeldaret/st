//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSTSH : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkSTSH();

    /* 4C */ virtual ~MapObjectUnkSTSH() override;

    void func_ov070_0214a0b8(void);
    void func_ov070_0214a1a0(void);
    void func_ov070_0214a1f0(void);
    void func_ov070_0214a24c(void);
    void func_ov070_0214a2f4(void);
    void func_ov070_0214a33c(void);
    void func_ov070_0214a3d8(void);
    void func_ov070_0214a504(void);
    void func_ov070_0214a568(void);
    void func_ov070_0214a794(void);
    void func_ov070_0214a91c(void);
    void func_ov070_0214a928(void);
    void func_ov070_0214a9bc(void);
    void func_ov070_0214ac48(void);
    void func_ov070_0214ad3c(void);
    void func_ov070_0214ade0(void);
    void func_ov070_0214ae5c(void);
    void func_ov070_0214b0ec(void);
    void func_ov070_0214b114(void);
    void func_ov070_0214b138(void);
    void func_ov070_0214b15c(void);
    void func_ov070_0214b180(void);
    void func_ov070_0214b1a4(void);
    void func_ov070_0214b1c4(void);
    void func_ov070_0214b1f0(void);
    void func_ov070_0214b210(void);
    void func_ov070_0214b228(void);
    void func_ov070_0214b23c(void);
    void func_ov070_0214b248(void);
    void func_ov070_0214b29c(void);
};

class MapObjectProfileUnkSTSH : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSTSH();
    ~MapObjectProfileUnkSTSH();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSTSH *GetProfile();
};
