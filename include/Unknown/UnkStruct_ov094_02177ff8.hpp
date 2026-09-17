#include "FileSelect/FileSelectUnkDraw.hpp"
#include "MapObject/MapObject.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/UnkSystem1.hpp"

struct UnkStruct_ov094_02177ff8 : public MapObject, public FileSelectManager_UnkDrawBase {
public:
    /* 00 (vtable MapObject) */
    /* 40 (vtable FileSelectManager_UnkDrawBase) */
    /* 4C */ UnkSystem6_Derived2 mUnk_4C;
    /* 58 */ UnkSystem1_ov000_Derived1 mUnk_58;
    /* 6C */ unk32 mUnk_6C;
    /* 70 */

    UnkStruct_ov094_02177ff8();

    /* 0C */ virtual void vfunc_0C(void) override;
    /* 38 */ virtual void vfunc_38(void);
};
