//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTWPG : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTWPG();

    /* 30 */ virtual ~MapObjectUnkTWPG() override;

    void func_ov090_02171638(void);
    void func_ov090_02171730(void);
    void func_ov090_02171aac(void);
    void func_ov090_02171ab0(void);
    void func_ov090_02171e40(void);
    void func_ov090_02171e54(void);
    void func_ov090_02171e70(void);
    void func_ov090_02171ef4(void);
    void func_ov090_02171fb4(void);
    void func_ov090_02172028(void);
    void func_ov090_02172030(void);
    void func_ov090_02172080(void);
    void func_ov090_021720b8(void);
    void func_ov090_021720f0(void);
    void func_ov090_02172104(void);
    void func_ov090_0217213c(void);
    void func_ov090_02172148(void);
};

class MapObjectProfileUnkTWPG : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTWPG();
    ~MapObjectProfileUnkTWPG();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTWPG *GetProfile();
};
