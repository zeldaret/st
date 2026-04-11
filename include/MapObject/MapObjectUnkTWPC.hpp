//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTWPC : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTWPC();

    /* 4C */ virtual ~MapObjectUnkTWPC() override;

    void func_ov090_02172a64(void);
    void func_ov090_02172b48(void);
    void func_ov090_02172c2c(void);
    void func_ov090_02172c34(void);
    void func_ov090_02172c3c(void);
    void func_ov090_02172c40(void);
    void func_ov090_02172c44(void);
    void func_ov090_02172c80(void);
    void func_ov090_02172cac(void);
    void func_ov090_02172cd8(void);
    void func_ov090_02172d04(void);
    void func_ov090_02172d0c(void);
};

class MapObjectProfileUnkTWPC : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTWPC();
    ~MapObjectProfileUnkTWPC();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTWPC *GetProfile();
};
