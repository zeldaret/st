//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDRVC : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkDRVC();

    /* 4C */ virtual ~MapObjectUnkDRVC() override;

    void func_ov068_02160be8(void);
    void func_ov068_02160c64(void);
    void func_ov068_02160c70(void);
    void func_ov068_02160de8(void);
    void func_ov068_02160ed4(void);
    void func_ov068_02160f20(void);
    void func_ov068_021611bc(void);
    void func_ov068_021613c8(void);
    void func_ov068_021613dc(void);
    void func_ov068_021613f0(void);
    void func_ov068_0216140c(void);
    void func_ov068_02161494(void);
    void func_ov068_021614cc(void);
};

class MapObjectProfileUnkDRVC : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRVC();
    ~MapObjectProfileUnkDRVC();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRVC *GetProfile();
};
