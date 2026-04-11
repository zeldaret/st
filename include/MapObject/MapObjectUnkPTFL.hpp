//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkPTFL : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkPTFL();

    /* 4C */ virtual ~MapObjectUnkPTFL() override;

    void func_ov070_0214ba34(void);
    void func_ov070_0214bb78(void);
    void func_ov070_0214bbd0(void);
    void func_ov070_0214bd48(void);
    void func_ov070_0214bd90(void);
    void func_ov070_0214bf58(void);
    void func_ov070_0214bf5c(void);
    void func_ov070_0214bf6c(void);
    void func_ov070_0214bfbc(void);
};

class MapObjectProfileUnkPTFL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkPTFL();
    ~MapObjectProfileUnkPTFL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkPTFL *GetProfile();
};
