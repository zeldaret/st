//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDRBK : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkDRBK();

    /* 4C */ virtual ~MapObjectUnkDRBK() override;

    void func_ov041_0212ba90(void);
    void func_ov041_0212bac8(void);
    void func_ov041_0212bb18(void);
    void func_ov041_0212bba4(void);
    void func_ov041_0212bc1c(void);
    void func_ov041_0212bdd0(void);
    void func_ov041_0212be5c(void);
    void func_ov041_0212bfa4(void);
    void func_ov041_0212c084(void);
    void func_ov041_0212c10c(void);
    void func_ov041_0212c144(void);
    void func_ov041_0212c544(void);
    void func_ov041_0212c644(void);
    void func_ov041_0212c6cc(void);
    void func_ov041_0212c794(void);
    void func_ov041_0212c7b0(void);
};

class MapObjectProfileUnkDRBK : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRBK();
    ~MapObjectProfileUnkDRBK();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRBK *GetProfile();
};
