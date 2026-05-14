//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTWGS : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTWGS();

    /* 30 */ virtual ~MapObjectUnkTWGS() override;

    void func_ov090_02172314(void);
    void func_ov090_02172328(void);
    void func_ov090_02172370(void);
    void func_ov090_0217244c(void);
    void func_ov090_02172460(void);
    void func_ov090_02172734(void);
    void func_ov090_02172784(void);
    void func_ov090_021727bc(void);
    void func_ov090_021727f4(void);
    void func_ov090_02172808(void);
    void func_ov090_02172840(void);
    void func_ov090_021728d4(void);
};

class MapObjectProfileUnkTWGS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTWGS();
    ~MapObjectProfileUnkTWGS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTWGS *GetProfile();
};
