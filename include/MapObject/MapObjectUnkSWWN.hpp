//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSWWN : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkSWWN();

    /* 4C */ virtual ~MapObjectUnkSWWN() override;

    void func_ov070_02146b84(void);
    void func_ov070_02146bb8(void);
    void func_ov070_02146c54(void);
    void func_ov070_02146c74(void);
    void func_ov070_02146d58(void);
    void func_ov070_02146ddc(void);
    void func_ov070_02146f30(void);
    void func_ov070_02146f44(void);
    void func_ov070_0214715c(void);
    void func_ov070_021471c0(void);
    void func_ov070_021473a0(void);
};

class MapObjectProfileUnkSWWN : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSWWN();
    ~MapObjectProfileUnkSWWN();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSWWN *GetProfile();
};
