#pragma once

#include "Render/ModelRender.hpp"
#include "Unknown/UnkStruct_027e0d00.hpp"

#include <nns/g3d/g3d.h>

class UnkTrainSystem1 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */

    UnkTrainSystem1();
    ~UnkTrainSystem1();

    void func_ov024_020d54f4();
    void func_ov024_020d562c(const VecFx32 *param1, fx32 param2);
    bool func_ov024_020d586c();

    static u8 func_ov024_020d54a0(s32 param1);
};

class UnkTrainSystem2 {
    /* 00 */ unk32 mUnk_00;
    /* 04 */ ModelRender mModelRender;
    /* 64 */ s16 mUnk_64;
    /* 66 */ s16 mUnk_66;
    /* 68 */

    void SetModel() {
        this->mModelRender.vfunc_08(G3d_GetModelPtr(data_027e0d00->mUnk_0F4->mUnk_50));
    }

    void SetTransform(const Mat3p *param1, const VecFx32 *param2, fx32 param3) {
        VecFx32 temp;
        temp.x = param3;
        temp.y = param3;
        temp.z = param3;
        this->mModelRender.vfunc_10(&temp, (Mat3p *) param1, (VecFx32 *) param2);
    }

    UnkTrainSystem2();
    ~UnkTrainSystem2();

    void func_ov024_020d5990();
    void func_ov024_020d5afc(const Mat3p *param1, const VecFx32 *param2, unk32 param3);
    bool func_ov024_020d5c40();
};
