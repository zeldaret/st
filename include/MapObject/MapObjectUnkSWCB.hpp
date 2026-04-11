//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSWCB : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkSWCB();

    /* 4C */ virtual ~MapObjectUnkSWCB() override;

    void func_ov058_02151a68(void);
    void func_ov058_02151a7c(void);
    void func_ov058_02151a8c(void);
    void func_ov058_02151a9c(void);
    void func_ov058_02151aac(void);
    void func_ov058_02151b88(void);
    void func_ov058_02151c58(void);
    void func_ov058_02151d24(void);
    void func_ov058_02151e88(void);
    void func_ov058_02151ed8(void);
    void func_ov058_02152078(void);
    void func_ov058_0215208c(void);
    void func_ov058_02152090(void);
    void func_ov058_021521ac(void);
    void func_ov058_0215250c(void);
    void func_ov058_02152564(void);
    void func_ov058_02152574(void);
    void func_ov058_0215266c(void);
};

class MapObjectProfileUnkSWCB : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSWCB();
    ~MapObjectProfileUnkSWCB();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSWCB *GetProfile();
};
