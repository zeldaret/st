//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkETTV : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkETTV();

    /* 30 */ virtual ~MapObjectUnkETTV() override;

    void func_ov030_02141f54(void);
    void func_ov030_02141f68(void);
    void func_ov030_02142100(void);
    void func_ov030_021421e8(void);
    void func_ov030_021421f0(void);
    void func_ov030_021421f8(void);
    void func_ov030_021421fc(void);
    void func_ov030_021422ec(void);
    void func_ov030_02142460(void);
    void func_ov030_021424ac(void);
    void func_ov030_02142550(void);
    void func_ov030_02142594(void);
    void func_ov030_0214259c(void);
    void func_ov030_02142788(void);
    void func_ov030_021427c0(void);
    void func_ov030_02142828(void);
    void func_ov030_02142868(void);
    void func_ov030_02142888(void);
    void func_ov030_021428a8(void);
    void func_ov030_02142918(void);
    void func_ov030_02142960(void);
};

class MapObjectProfileUnkETTV : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkETTV();
    ~MapObjectProfileUnkETTV();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkETTV *GetProfile();
};
