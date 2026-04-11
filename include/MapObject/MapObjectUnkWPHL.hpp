//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkWPHL : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkWPHL();

    /* 4C */ virtual ~MapObjectUnkWPHL() override;

    void func_ov034_02121854(void);
    void func_ov034_021218f0(void);
    void func_ov034_021218f8(void);
    void func_ov034_02121bac(void);
    void func_ov034_02121bc0(void);
    void func_ov034_02121bf0(void);
    void func_ov034_02121c44(void);
    void func_ov034_02121d6c(void);
    void func_ov034_02121d84(void);
    void func_ov034_02121de4(void);
    void func_ov034_02121e44(void);
};

class MapObjectProfileUnkWPHL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkWPHL();
    ~MapObjectProfileUnkWPHL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkWPHL *GetProfile();
};
