#include "MapObject/MapObjectUnkDRDS.hpp"
#include "Actor/ActorManager.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"
#include "Unknown/UnkStruct_027e0d38.hpp"
#include "Unknown/UnkStruct_027e0d8c.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "versions.h"

extern "C" void *func_ov000_02077590(unk32);
extern "C" unk32 func_01ffb428(unk32, unk32);
extern "C" void func_01ffaf74(Vec3p *, Mat4x3p *, Vec3p *);
extern "C" void func_01ff93c0(Vec3p *, q20);
extern unk32 data_ov031_02110c00[];
extern UnkStruct_ov000_020b34c4_Callback data_ov000_020b4cc4;

const UnkStruct_ov031_021150b0 data_ov031_021150b0(0x1E66);

ARM DECL_PROFILE(MapObjectProfileUnkDRDS);

ARM MapObject *MapObjectProfileUnkDRDS::Create() {
    return new(HeapIndex_ITCM) MapObjectUnkDRDS();
}

ARM MapObjectProfileUnkDRDS::MapObjectProfileUnkDRDS() :
    MapObjectProfile_Derived2(MapObjectId_DRDS, MapObjectId_DRDS) {
    this->mUnk_0E = 1;
    this->mUnk_06 = -1;
    this->mUnk_1E &= ~0x01;
}

ARM MapObjectUnkDRDS::MapObjectUnkDRDS() :
    mUnk_94(GetUnkPointer1<MapObjectProfileUnkDRDS>()),
    mUnk_9C(1),
    mUnk_A0(0),
    mUnk_A1(false),
    mUnk_A2(false),
    mUnk_A3(0),
    mUnk_A4(-1),
    mUnk_A8(NULL) {
    this->mUnk_AC = 0;
    this->mUnk_AE = 0;
    this->mUnk_89 = true;
}

ARM bool MapObjectUnkDRDS::vfunc_00(void) {
    this->func_ov031_020fbf10(true, false);
    this->mUnk_78 = 0x23;
    this->mUnk_7A = 0x0F;
    this->mUnk_7C = 0x28;
    this->mUnk_8C = 1;
    this->mUnk_58 = data_027e0ce0->func_01fff1a4();
    return true;
}

ARM void MapObjectUnkDRDS::vfunc_04(void) {
    UnkStruct_027e0cd8_0c *ptr;
    Vec3p auStack_20;

    if (this->mUnk_20.mUnk_00[1] == 2) {
        this->mUnk_6C = 0;

        ptr = data_027e0cd8->mUnk_0C;
        ptr->func_ov000_0208053c(this->mUnk_20.mUnk_00[0]);
        ptr->func_ov000_020803ec(this->mUnk_20.mUnk_00[0]);
        this->vfunc_5C(2, 1);
        return;
    }

    if (this->mUnk_20.mUnk_00[1] == 3) {
        this->mUnk_8C = 0;
    }

    if (this->mUnk_20.mUnk_00[1] == 4) {
        if (this->func_ov000_0209d29c(0) != 0) {
            this->mUnk_6C = 0;
            this->MapObjectDoorBase::vfunc_5C(2, 1);
            return;
        }
    }

    this->vfunc_5C(8, 1);

#if IS_JP
    //! TODO: non-matching
    UnkStruct_ov000_020b34c4 stack;
    bool run      = true;
    stack.mUnk_00 = &data_ov000_020b4cc4;
    stack.mUnk_04 = MapObjectId_DRDS;

    MapObject **ppMapObject =
        gpMapObjManager->func_01fff520((UnkStruct_ov000_020b34c4 *) &stack.mUnk_00, gpMapObjManager->mMapObjTable);

    if (ppMapObject != gpMapObjManager->mUnk_08) {
        MapObjectUnkDRDS *pMapObject = (MapObjectUnkDRDS *) *ppMapObject;
        u32 temp1;
        u32 temp2;

        if (pMapObject != NULL) {
            temp1 = *(u32 *) &this->mUnk_38;
            temp2 = *(u32 *) &pMapObject->mUnk_38;

            if (temp2 != temp1 && pMapObject->mUnk_A2) {
                run = false;
            }
        }
    }

    if (run) {
        data_027e0cd8->mUnk_0C->func_ov000_0208053c(this->mUnk_20.mUnk_00[0]);
    }
#else
    data_027e0cd8->mUnk_0C->func_ov000_0208053c(this->mUnk_20.mUnk_00[0]);
#endif

    ptr = data_027e0cd8->mUnk_0C;

    if (this->func_ov031_020fdec8()) {
        this->mUnk_A2 = true;
        this->mUnk_8C = 0;
        ptr->func_ov000_020803ec(this->mUnk_20.mUnk_00[0]);
        this->vfunc_5C(0, 0);

        UnkStruct_027e09bc_0c *uVar5 = data_027e09bc->mUnk_0C;
        MapObjectUnkDRDS::func_ov031_020fe5fc(&auStack_20, this);

        uVar5->func_ov000_0207834c(&auStack_20, (unk32) func_ov000_02077590(0), 0);
    }
}

ARM void MapObjectUnkDRDS::vfunc2_04(void) {
    this->MapObjectDoorBase::vfunc2_04();
}

ARM void MapObjectUnkDRDS::vfunc2_08(void) {
    this->mUnk_8C = 1;
    this->vfunc_84(1, &this->mUnk_4C, &this->mUnk_4A);
    this->MapObjectDoorBase::vfunc2_08();

    if (this->mUnk_A2) {
        data_027e09bc->mUnk_0C->func_ov000_02078230(0);
    }

    data_ov000_020b51b8.func_ov000_0206c96c(data_ov031_02110c00[this->mUnk_20.mUnk_00[3]]);
}

struct UnkStruct_Copy {
    unk32 data[8];
};

// https://decomp.me/scratch/KLkdU
ARM void MapObjectUnkDRDS::vfunc_08(void) {
    UnkStruct_Copy sp3C;
    UnkStruct_Copy sp1C;
    Vec3p sp10;
    Vec3p sp4;

    if (this->mUnk_AC < this->mUnk_AE) {
        this->mUnk_AC++;
    }

    switch (this->mUnk_16) {
        case 0:
            if (this->mUnk_A2) {
                u16 max   = this->mUnk_AE;
                u16 timer = this->mUnk_AC;

                if (timer < max) {
                    if (max - timer == 1) {
                        this->mUnk_88 = 1;
                        this->vfunc_74();

                        UnkStruct_Copy *temp_r0_3 = (UnkStruct_Copy *) func_ov000_02077590(3);

                        sp3C                     = *temp_r0_3;
                        ((unk16 *) sp3C.data)[3] = this->mUnk_14;

                        UnkStruct_027e09bc_0c *temp_r5 = data_027e09bc->mUnk_0C;

                        this->func_ov031_020fe5fc(&sp10, this);
                        temp_r5->func_ov000_02078764(&sp10, &sp3C, 0);
                        data_ov000_020b51b8.func_ov000_0206d134(0x0F);

                        if (data_027e0ce0->func_01fff1a4()) {
                            data_027e0d8c->func_ov093_02166058();
                        }
                    } else {
                        UnkStruct_Copy *temp_r0_3 = (UnkStruct_Copy *) func_ov000_02077590(0);

                        sp1C = *temp_r0_3;

                        UnkStruct_027e09bc_0c *temp_r7_2 = data_027e09bc->mUnk_0C;
                        this->func_ov031_020fe5fc(&sp4, this);
                        temp_r7_2->func_ov000_02078764(&sp4, &sp1C, 0);
                    }

                    return;
                }
            }
        case 1:
            if (!this->mUnk_86 || data_027e09b8->func_ov000_020732ec(this->mUnk_74)) {
                if (!this->mUnk_A2) {
                    if (data_027e09b8->func_ov000_0207330c() == 0x0A) {
                        data_027e0d34->func_ov031_020d9844();

                        if (data_027e0ce0->func_01fff1a4()) {
                            data_027e0d8c->func_ov093_02166068();
                        }
                    }
                } else {
                    UnkStruct_027e09b8 *temp_r6 = data_027e09b8;
                    unk32 temp_r4               = this->vfunc_8C();

                    if (temp_r4 + 0x0A == temp_r6->func_ov000_0207330c()) {
                        data_027e0d34->func_ov031_020d9844();

                        if (data_027e0ce0->func_01fff1a4()) {
                            data_027e0d8c->func_ov093_02166068();
                        }
                    }
                }
            }
            break;
        case 2:
            if (this->mUnk_20.mUnk_00[1] == 4 && this->func_ov000_0209d29c(0) != 0) {
                if (this->func_ov000_0209d29c(1) != 0) {
                    return;
                }

                if (this->vfunc_68() == 0) {
                    return;
                }

                if (this->mUnk_A1) {
                    return;
                }

                data_ov000_020b51b8.func_ov000_0206d0bc(0);
                this->mUnk_A1 = true;

                unk32 temp = data_027e0cd8->mUnk_0C->func_ov000_02080a44();
                data_ov000_020b51b8.func_ov000_0206d0ec(temp, 0x78, 0x7F, -1);
                this->func_ov000_0209d2c4(1, 1);
                return;
            }
            break;
        default:
            break;
    }

    this->MapObjectDoorBase::vfunc_08();
    this->vfunc2_10();

    if (this->mUnk_16 == 2 && this->mUnk_A4 == 0 && !this->mUnk_A1) {
        data_ov000_020b51b8.func_ov000_0206d0bc(5);
        this->mUnk_A1 = true;
    }
}

ARM void MapObjectUnkDRDS::vfunc_0C(void) {
    this->MapObjectDoorBase::vfunc_0C();

    if ((u16) this->mUnk_16 <= 1) {
        this->vfunc_08();
    }
}

ARM void MapObjectUnkDRDS::vfunc_5C(unk32 param1, unk32 param2) {
    UnkStruct_027e0cd8 **ptr;
    s32 var_r6;
    u32 temp_r8;
    UnkStackStruct1 sp8;
    s16 sp4;
    s16 *sp4Ptr;

    this->mUnk_16 = param1;
    this->mUnk_AE = 0;
    this->mUnk_AC = 0;

    switch (this->mUnk_16) {
        case 3:
            this->vfunc_7C();

            sp4Ptr = (s16 *) &sp4;
            MapObject::func_ov000_0209d22c(sp4Ptr, this, 0);

            if (*sp4Ptr >= 0x4000 || *sp4Ptr <= -0x4000) {
                this->mUnk_8B = 0;
            } else {
                this->mUnk_8B = 1;
            }

            u16 result    = ROUND_Q20(MUL_Q20(func_01ffb428(0x1000 - this->mUnk_6C, 0x1000), INT_TO_Q20(this->mUnk_78)));
            this->mUnk_80 = result;

            if (this->mUnk_8A) {
                this->mUnk_82 = 0;

                if (this->mUnk_86 != 0) {
                    if (param2 == 0) {
                        func_ov000_02072fd0(&sp8);

                        unk32 temp = this->mUnk_78 + 0x5B;

                        sp8.mUnk_00 = 0x7B;
                        sp8.mUnk_08 = temp;
                        sp8.mUnk_3A = 7;
                        sp8.mUnk_3B = 7;
                        sp8.mUnk_38 |= 0x80;
                        sp8.mUnk_0C.x = this->mPos.x;
                        sp8.mUnk_0C.y = this->mPos.y;
                        sp8.mUnk_0C.z = this->mPos.z;

                        if (this->mUnk_89 && this->mUnk_20.mUnk_16) {
                            sp8.mUnk_38 |= 4;
                        }

                        this->mUnk_74 = data_027e09b8->func_ov000_02073388(&sp8, 0);
                    }
                }

                data_ov000_020b51b8.func_ov000_0206d0bc(5);
                this->mUnk_A1 = 1;
            }

            break;
        case 4:
            this->MapObjectDoorBase::vfunc_5C(param1, param2);
            break;
        case 0:
            this->func_ov000_0209d2c4(1, 0);
            this->func_ov000_0209d2c4(0, 1);

            if (this->mUnk_A2 == 0) {
                data_ov000_020b51b8.func_ov000_0206d134(0x0F);
            }

            data_027e0d38->func_ov031_020d9c44(4);

            if (this->mUnk_A2 != 0) {
                this->mUnk_AE = this->vfunc_8C() * 2;
                this->mUnk_AC = 0;
                this->mUnk_88 = 0;
                this->mUnk_90 = false;
            }

            this->MapObjectDoorBase::vfunc_5C(param1, param2);

            if (this->mUnk_86 && param2 == 0 && this->mUnk_90 && data_027e0ce0->func_01fff1a4()) {
                data_027e0d8c->func_ov093_02166058();
            }

            return;
        case 2:
            ptr = &data_027e0cd8; // whyyy

            this->MapObjectDoorBase::vfunc_5C(param1, param2);

            var_r6  = 1;
            temp_r8 = data_027e09a4->mSceneIndex;

            if (param2 != 0 && (temp_r8 - SceneIndex_tekiya00) > 4) {
                var_r6 = 0;
            }

            if ((temp_r8 == SceneIndex_tekiya03 && (*ptr)->func_ov000_02081d5c() == 4) ||
                (temp_r8 == SceneIndex_tekiya00 && (*ptr)->func_ov000_02081d5c() == 0) ||
                (temp_r8 == SceneIndex_tekiya02 && (*ptr)->func_ov000_02081d5c() == 0) ||
                (temp_r8 == SceneIndex_tekiya02 && (*ptr)->func_ov000_02081d5c() == 5)) {
                var_r6 = 0;
            }

            if (var_r6 != 0) {
                data_ov000_020b51b8.func_ov000_0206c9a8(data_ov031_02110c00[this->mUnk_20.mUnk_00[3]], 0, 0x7F, 0);
            }

            break;
        case 8:
            ptr = &data_027e0cd8;
            this->MapObjectDoorBase::vfunc_5C(param1, param2);
            this->func_ov000_0209d2c4(0, 0);

            if (param2 == 0) {
                (*ptr)->mUnk_0C->func_ov000_0208053c(this->mUnk_20.mUnk_00[0]);
            }

            if (param2 == 0) {
                data_ov000_020b51b8.func_ov000_0206d0ec((*ptr)->mUnk_0C->func_ov000_02080a44(), 0x78, 0x7F, -1);
            }

            break;
        default:
            this->MapObjectDoorBase::vfunc_5C(param1, param2);
            break;
    }
}

ARM bool MapObjectUnkDRDS::vfunc_64(void) {
    UnkStruct_027e0cd8_0c *pUVar4;
    unk32 var_r0;
    bool var_r5;

    switch (this->mUnk_20.mUnk_00[1]) {
        case 1:
        case 4:
            if (MapObjectDoorBase::vfunc_64()) {
                return true;
            }

            pUVar4 = data_027e0cd8->mUnk_0C;
            if (pUVar4->func_ov000_020802ec(this->mUnk_20.mUnk_00[0], data_027e0ce0->func_01fff148(0)) == 0) {
                return true;
            }

            var_r0 = 0;
            var_r5 = false;

            if (this->mUnk_20.mUnk_00[0] != 0) {
                var_r0 = gpActorManager->func_ov000_020970c8(this->mUnk_20.mUnk_00[0], NULL);
            } else {
                var_r0 = gpActorManager->func_ov000_0209704c();
            }

            if (var_r0 == 0) {
                var_r5 = true;
            }

            return var_r5;
        default:
            break;
    }

    return MapObjectDoorBase::vfunc_64();
}

ARM bool MapObjectUnkDRDS::vfunc_68(void) {
    UnkStruct_027e0cd8_0c *pUVar2 = data_027e0cd8->mUnk_0C;

    if (this->mUnk_20.mUnk_00[2] == 1) {
        if (func_ov000_0209d29c(1)) {
            return true;
        }
    } else {
        if (func_ov000_0209d668()) {
            return true;
        }
    }

    if (this->mUnk_20.mUnk_00[0] != 0) {
        if (gpActorManager->func_ov000_020970c8(this->mUnk_20.mUnk_00[0], &this->mUnk_A4) == 0) {
            pUVar2->func_ov000_0208053c(this->mUnk_20.mUnk_00[0]);
            return true;
        }

        return false;
    }

    return gpActorManager->func_ov000_0209704c() == 0;
}

ARM bool MapObjectUnkDRDS::vfunc_6C(void) {
    UnkStruct_027e0cd8_0c *pUVar5;

    switch (this->mUnk_20.mUnk_00[1]) {
        case 1:
        case 4:
            pUVar5 = data_027e0cd8->mUnk_0C;

            if (this->mUnk_20.mUnk_00[2] == 1) {
                if (this->func_ov000_0209d29c(1) != 0) {
                    return false;
                }
            } else {
                if (this->func_ov000_0209d668() != 0) {
                    return false;
                }
            }

            if (this->mUnk_20.mUnk_00[0] != 0) {
                if (gpActorManager->func_ov000_020970c8(this->mUnk_20.mUnk_00[0], NULL) == 0) {
                    return false;
                }
            } else {
                if (gpActorManager->func_ov000_0209704c() == 0) {
                    return false;
                }
            }

            if (pUVar5->func_ov000_020802ec(this->mUnk_20.mUnk_00[0], data_027e0ce0->func_01fff148(0)) != 0) {
                pUVar5->func_ov000_020803ec(this->mUnk_20.mUnk_00[0]);
                return true;
            }

            return false;
        default:
            break;
    }

    if (this->mUnk_20.mUnk_00[1] == 3) {
        if (this->func_ov000_0209d29c(0) != 0) {
            u16 uVar4 = this->mUnk_20.mUnk_00[0];

            if (uVar4 != 0 && gpActorManager->func_ov000_020970c8(uVar4, 0) != 0) {
                data_027e0cd8->mUnk_0C->func_ov000_020803ec(this->mUnk_20.mUnk_00[0]);
                return true;
            }
        }
    } else {
        return false;
    }

    return false;
}

ARM bool MapObjectUnkDRDS::func_ov031_020fdec8(void) {
    UnkStruct_027e0cd8_0c *pUVar4;
    Vec3p *uVar3;
    int iVar1;

    switch (this->mUnk_20.mUnk_00[1]) {
        case 1:
        case 4:
            if (this->mUnk_20.mUnk_00[2] == 1) {
                if (this->func_ov000_0209d29c(1) != 0) {
                    return false;
                }
            } else {
                if (this->func_ov000_0209d668() != 0) {
                    return false;
                }
            }

            if (this->mUnk_20.mUnk_00[0] != 0) {
                if (gpActorManager->func_ov000_020970c8(this->mUnk_20.mUnk_00[0], 0) == 0) {
                    return false;
                }
            } else {
                if (gpActorManager->func_ov000_0209704c() == 0) {
                    return false;
                }
            }

            pUVar4 = data_027e0cd8->mUnk_0C;
            uVar3  = pUVar4->func_ov001_020b8a5c(data_027e09a4->func_ov000_02070560()->mSpawnIndex, 0);

            if (pUVar4->func_ov000_020802ec(this->mUnk_20.mUnk_00[0], uVar3) != 0) {
                return true;
            }

            return false;
        default:
            break;
    }

    return false;
}

ARM void MapObjectUnkDRDS::vfunc_18(s8 *param1, s8 param2) {
    this->func_ov031_020fcb78(param1, param2);
}

ARM void MapObjectUnkDRDS::vfunc_14(void) {
    Mat3p m;
    Mat3p_InitYRotation(&m, SIN((u16) this->mUnk_14), COS((u16) this->mUnk_14));

    Vec3p pos(this->mPos);
    pos.y += -(this->mUnk_6C * 2);

    this->mUnk_94.vfunc_14(&m, &pos);
}

ARM void MapObjectUnkDRDS::vfunc2_10(void) {
    switch (this->mUnk_16) {
        case 0:
        default:
            if (data_027e09b8->func_ov000_020732ec(this->mUnk_74) != 0) {
                if (this->mUnk_68.mUnk_00 != NULL) {
                    this->mUnk_68.mUnk_00->mUnk_24 &= ~0x08;
                }
            } else if (this->mUnk_68.mUnk_00 != NULL) {
                this->mUnk_68.mUnk_00->mUnk_24 |= 0x08;
            }
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            break;
    }
}

// https://decomp.me/scratch/DEJfq
ARM void MapObjectUnkDRDS::vfunc_74(void) {
    Vec3p local_28;
    Vec3p local_34;
    Vec3p local_40;
    Vec3p local_4c;
    Mat4x3p m;

    q20 b33 = 0xB33;

    local_34.x = this->mPos.x;
    local_34.y = this->mPos.y;
    local_34.z = this->mPos.z;

    local_40.x = 0;
    local_40.y = 0;
    local_40.z = b33;

    local_4c.x = 0;
    local_4c.y = 0;
    local_4c.z = -b33;

    local_28.x = local_34.x;
    local_28.y = local_34.y;
    local_28.z = local_34.z;

    u16 var_r5 = (u16) (this->mUnk_14 + DEG_TO_ANG(45));

    if (((u16) this->mUnk_14 / DEG_TO_ANG(90)) == 2 && this->mUnk_16 == 5) {
        var_r5 = 0;
    }

    Mat4x3p_InitYRotation(&m, SIN(var_r5), COS(var_r5));

    func_01ffaf74(&local_40, &m, &local_40);
    func_01ffaf74(&local_4c, &m, &local_4c);

    Vec3p_Add(&local_28, &local_40, &local_28);
    Vec3p_Add(&local_34, &local_4c, &local_34);

    data_027e0cec->func_ov000_0209ff8c(&this->mUnk_68, 0x8CF, &local_28, 4);
    data_027e0cec->func_ov000_0209ff8c(&this->mUnk_A8, 0x8CF, &local_34, 4);

    if (this->mUnk_68.mUnk_00 != NULL) {
        this->mUnk_68.mUnk_00->mUnk_A4 = var_r5;
    }

    if (this->mUnk_A8.mUnk_00 != NULL) {
        this->mUnk_A8.mUnk_00->mUnk_A4 = var_r5;
    }
}

ARM void MapObjectUnkDRDS::vfunc_7C(void) {
    this->MapObjectDoorBase::vfunc_7C();

    if (this->mUnk_A8.mUnk_00 != NULL) {
        this->mUnk_A8.func_ov000_020a0334();
    }
}

ARM void MapObjectUnkDRDS::vfunc_40(void) {
    data_027e09a8->func_ov000_02071b30(0x138, &this->mPos, 0);
}

ARM void MapObjectUnkDRDS::vfunc_44(void) {
    unk32 local_c = *(u32 *) &this->mUnk_38;
    data_027e09a8->func_ov000_02071d34(&local_c, 0x137, &this->mPos, 0);
}

ARM void MapObjectUnkDRDS::vfunc_48(void) {
    data_027e09a8->func_ov000_02071b30(0x13A, &this->mPos, 0);
}

ARM void MapObjectUnkDRDS::vfunc_4C(void) {
    unk32 local_c = *(u32 *) &this->mUnk_38;
    data_027e09a8->func_ov000_02071d34(&local_c, 0x139, &this->mPos, 0);
}

ARM bool MapObjectUnkDRDS::vfunc_88(void) {
    return !data_027e09b8->func_01ffd420();
}

ARM unk32 MapObjectUnkDRDS::vfunc_8C(void) {
    if (this->mUnk_A2) {
        if (data_027e0ce0->func_01fff1a4()) {
            return 0x28;
        }

        return 0x14;
    }

    return 0;
}

ARM void MapObjectUnkDRDS::vfunc_84(unk32 param1, Vec3p *param2, unk16 *param3) {
    s16 iVar1;

    if (!this->mUnk_58) {
        MapObjectDoorBase::vfunc_84(param1, param2, param3);
        return;
    }

    Vec3p local_24;
    *param3 = this->mUnk_14;
    iVar1   = this->mUnk_14 + DEG_TO_ANG(30);
    if (param1 != 0) {
        local_24.x = MUL_Q20(SIN((u16) iVar1), 0x1666);
        local_24.z = MUL_Q20(COS((u16) iVar1), 0x1666);
        local_24.y = 0;
    } else {
        local_24.x = MUL_Q20(SIN((u16) iVar1), 0x10CD);
        local_24.z = MUL_Q20(COS((u16) iVar1), 0x10CD);
        local_24.y = 0;

        *param3 += DEG_TO_ANG(180);
    }
    Vec3p_Add(&this->mPos, &local_24, param2);

    Vec3p local_30;
    this->mUnk_5A = this->mUnk_14;
    iVar1         = this->mUnk_14 - DEG_TO_ANG(30);
    if (param1 != 0) {
        local_30.x = MUL_Q20(SIN((u16) iVar1), 0x1666);
        local_30.z = MUL_Q20(COS((u16) iVar1), 0x1666);
        local_30.y = 0;
    } else {
        local_30.x = MUL_Q20(SIN((u16) iVar1), 0x10CD);
        local_30.z = MUL_Q20(COS((u16) iVar1), 0x10CD);
        local_30.y = 0;
        this->mUnk_5A += DEG_TO_ANG(180);
    }
    Vec3p_Add(&this->mPos, &local_30, &this->mUnk_5C);
}

ARM void MapObjectUnkDRDS::func_ov031_020fe5fc(Vec3p *param1, MapObjectUnkDRDS *thisx) {
    if (data_027e0ce0->func_01fff1a4()) {
        Vec3p *piVar2 = data_027e0ce0->func_01fff148(1);
        Vec3p *piVar3 = data_027e0ce0->func_01fff148(0);

        Vec3p temp(piVar3->x, piVar3->y, piVar3->z);
        Vec3p pos(temp.x + piVar2->x, temp.y + piVar2->y, temp.z + piVar2->z);

        func_01ff93c0(&pos, FLOAT_TO_Q20(0.5f));
        param1->coords = pos.coords;
    } else {
        Vec3p *piVar4  = data_027e0ce0->func_01fff148(0);
        param1->coords = piVar4->coords;
    }
}

ARM MapObjectUnkDRDS::~MapObjectUnkDRDS() {}
ARM MapObjectProfileUnkDRDS::~MapObjectProfileUnkDRDS() {}
