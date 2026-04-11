//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkFRWL : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkFRWL();

    /* 4C */ virtual ~MapObjectUnkFRWL() override;

    void func_ov070_02149248(void);
    void func_ov070_021494a8(void);
    void func_ov070_021494dc(void);
    void func_ov070_021494f4(void);
    void func_ov070_02149a14(void);
    void func_ov070_02149a78(void);
    void func_ov070_02149ec4(void);
    void func_ov070_02149f00(void);
    void func_ov070_02149f30(void);
    void func_ov070_02149f68(void);
    void func_ov070_02149fa0(void);
};

class MapObjectProfileUnkFRWL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkFRWL();
    ~MapObjectProfileUnkFRWL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkFRWL *GetProfile();
};
