#pragma once

#include "global.h"
#include "nitro/fx.h"
#include "types.h"

#include <nns/g3d/g3d.h>

extern "C" void *func_ov000_02057750(size_t allocSize);

typedef void (*UnkSystem4_UnkCallback)(void);

class UnkSystem4_vfunc_1C_B4 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 00 */ STRUCT_PAD(0x04, 0x4C);
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ unk32 mUnk_50;
    /* 54 */ unk32 mUnk_54;
};

class UnkSystem4_vfunc_1C {
public:
    /* 00 */ u8 *mUnk_00;
    /* 04 */ unk32 *mUnk_04;
    /* 08 */ STRUCT_PAD(0x08, 0xB4);
    /* B4 */ UnkSystem4_vfunc_1C_B4 *mUnk_B4;
    /* 00 */ unk32 *mUnk_B8;
};

class ModelRenderBase {
public:
    /* 00 (vtable) */
    /* 04 */ G3d_Model *mpModel;
    /* 08 */

    ModelRenderBase(G3d_Model *pModel) :
        mpModel(pModel) {}

    // data_ov000_020b1a98
    /* 00 */ virtual ~ModelRenderBase();
    /* 08 */ virtual void vfunc_08(G3d_Model *pModel);
    /* 0C */ virtual void vfunc_0C()                                                = 0;
    /* 10 */ virtual void vfunc_10(VecFx32 *param1, Mat3p *param2, VecFx32 *param3) = 0;
    /* 14 */ virtual void vfunc_14(Mat3p *param1, VecFx32 *param2)                  = 0;
    /* 18 */ virtual void vfunc_18(VecFx32 *param1)                                 = 0;
    /* 1C */

    unk32 func_ov000_02057f18(const void *param1);
    unk32 func_ov000_02057f40(const void *param1);
    const G3d_Model_14 *func_ov000_02057ee0() const;
};

class ModelRender : public ModelRenderBase {
public:
    /* 00 (base) */
    /* 08 */ G3d_RenderObject mRenderObj;
    /* 5C */ unk32 mUnk_5C; // G3d_BoneMtxStruct?
    /* 60 */

    ModelRender(G3d_Model *pModel);

    // data_ov000_020b1a6c
    /* 00 */ virtual ~ModelRender();
    /* 08 */ virtual void vfunc_08(G3d_Model *pModel) override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 10 */ virtual void vfunc_10(VecFx32 *param1, Mat3p *param2, VecFx32 *param3) override; // SetTransform?
    /* 14 */ virtual void vfunc_14(Mat3p *param1, VecFx32 *param2) override;                  // SetRotationTranslation?
    /* 18 */ virtual void vfunc_18(VecFx32 *param1) override;
    /* 1C */ virtual void vfunc_1C(UnkSystem4_vfunc_1C *param1);
    /* 20 */ virtual void vfunc_20();

    void func_ov000_02057c38(unk32 param1, unk32 param2);
    void func_ov000_02057d20(u8 numBones);
    void func_ov000_02057d3c(G3d_BoneMtxStruct *pCacheJntAnm);
    void func_ov000_0209a7b8(void *param1, UnkSystem4_UnkCallback param2);
};

class UnkSystem6_Derived1 : public ModelRenderBase {
public:
    /* 00 (base) */
    /* 08 */

    UnkSystem6_Derived1(G3d_Model *pModel) :
        ModelRenderBase(pModel) {}

    // data_ov000_020b1a48
    /* 00 */ virtual ~UnkSystem6_Derived1() override {}
    /* 10 */ virtual void vfunc_10(VecFx32 *param1, Mat3p *param2, VecFx32 *param3) override;
    /* 14 */ virtual void vfunc_14(Mat3p *param1, VecFx32 *param2) override;
    /* 18 */ virtual void vfunc_18(VecFx32 *param1) override;
};

class UnkSystem6_Derived2 : public UnkSystem6_Derived1 {
public:
    /* 00 (base) */
    /* 08 */

    UnkSystem6_Derived2() :
        UnkSystem6_Derived1(NULL) {}

    UnkSystem6_Derived2(G3d_Model *pModel) :
        UnkSystem6_Derived1(pModel) {}

    // data_ov000_020b1968
    /* 00 */ virtual ~UnkSystem6_Derived2() {}
    /* 0C */ virtual void vfunc_0C() override;

    void func_01ffc6d4(u16 angle, VecFx32 *pos);
};

class UnkSystem5 {
public:
    /* 00 */ G3d_Model *mpModel;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */

    UnkSystem5(void *param1, G3d_Model *pModel);

    void func_01ffc3b4();

    void func_ov000_020577a4(unk32 param1, unk32 param2, unk32 param3);
    void func_ov000_020577f8(unk32 param1);
};

class UnkSystem5_Derived1 : public UnkSystem5 {
public:
    UnkSystem5_Derived1(void *param1, G3d_Model *param2, unk32 param3) :
        UnkSystem5(param1, param2) {
        unk32 value = 0;

        //! TODO: struct
        if (!(*((u32 *) param3 + 2) & 2)) {
            value = 1;
        }

        this->func_ov000_020577a4(param3, 0, value);
    }
};

class ModelRender_Derived1 : public ModelRender {
public:
    /* 00 (base) */
    /* 60 */ unk32 mUnk_60;
    /* 64 */ unk32 mUnk_64;
    /* 68 */ unk32 mUnk_68;
    /* 6C */

    ModelRender_Derived1(G3d_Model *pModel, unk32 param2, void *param3);

    // data_ov000_020b1be4
    /* 00 */ virtual ~ModelRender_Derived1() override {}
    /* 08 */ virtual void vfunc_08(G3d_Model *pModel) override;
    /* 1C */ virtual void vfunc_1C(UnkSystem4_vfunc_1C *param1) override;

    unk32 func_ov000_0205a778(const char *param1);
    void *func_ov000_0205a7a8(unk32 param1);
};

class ModelRender_Derived2 : public ModelRender_Derived1 {
public:
    /* 00 (base) */
    /* 6C */

    ModelRender_Derived2(G3d_Model *pModel, unk32 param2, void *param3) :
        ModelRender_Derived1(pModel, param2, param3) {}

    // data_ov024_020d84bc
    /* 00 */ virtual ~ModelRender_Derived2() override {}
};

class ModelRender_UnkSystem1 {
public:
    /* 00 */ UnkSystem5 mUnk_00;
    /* 20 */

    ModelRender_UnkSystem1(G3d_Model *pModel, size_t allocSize) :
        mUnk_00(func_ov000_02057750(allocSize), pModel) {}

    ~ModelRender_UnkSystem1();
};

class ModelRender_UnkSystem1_Derived1 : public ModelRender_UnkSystem1 {
public:
    /* 00 (base) */
    /* 20 */

    ModelRender_UnkSystem1_Derived1(G3d_Model *pModel, size_t allocSize);
};
