//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSTTR : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkSTTR();

    /* 4C */ virtual ~MapObjectUnkSTTR() override;

    void func_ov090_02172e08(void);
    void func_ov090_02172ee8(void);
    void func_ov090_02172f38(void);
    void func_ov090_02172f3c(void);
    void func_ov090_02172f58(void);
    void func_ov090_02172fa4(void);
    void func_ov090_02172fe4(void);
    void func_ov090_02172ff4(void);
    void func_ov090_02173018(void);
};

class MapObjectProfileUnkSTTR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSTTR();
    ~MapObjectProfileUnkSTTR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSTTR *GetProfile();
};
