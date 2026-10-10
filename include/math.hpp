#pragma once

#include "global.h"

#include <nitro/math.h>

// some kind of angle conversion? only used for angle values so far
#define MUL_FX32_FX64(a, b) (fx32)(((((a) * (b)) + 0x80000000000LL) >> 32))
#define UNK_FX_OPERATION_1(a) (MUL_FX32_FX64((u64) (a), 0xB60B60B60BLL) >> FX32_SHIFT)
#define MUL_FX32_U(a, b) (fx32)((((u64) (a)) * ((u64) (b)) + 0x800) >> FX32_SHIFT)
#define UNK_FX_OPERATION_2(a) MUL_FX32_U((u64) (a), FX_F32_TO_FX32(1.2f))
#define DEG_TO_ANG(n) ((n) * 0x10000 / 360)
#define DEG_TO_ANG_ALT(n) DEG_TO_ANG((u64) (n))

#define ABS(x) ((x) < 0 ? -(x) : (x))
#define ABS2(x) ((x) >= 0 ? (x) : -(x))
#define CLAMP(x, min, max) ((x) > (max) ? (max) : (x) < (min) ? (min) : (x))
#define CLAMP2(x, min, max) ((x) > (max) ? (max) : (x) >= (min) ? (x) : (min))
#define CLAMP3(x, min, max) ((x) >= (max) ? (max) : (x) <= (min) ? (min) : (x))
#define POW_2(x) (x * x)

static inline const s32 ClampValue(s32 value, const s32 min, const s32 max) {
    if (value > max) {
        value = max;
    } else if (value < min) {
        value = min;
    }

    return value;
}

static inline void ClampValue16(s16 *value, const s32 min, const s32 max) {
    if (*value > max) {
        *value = max;
    } else if (*value < min) {
        *value = min;
    }
}

// C++ wrapper for VecFx32
struct VecFx32Cpp {
    VecFx32 vec;

    VecFx32Cpp() {}
    VecFx32Cpp(fx32 X, fx32 Y, fx32 Z) {
        vec.x = X;
        vec.y = Y;
        vec.z = Z;
    }

    void Set(fx32 X, fx32 Y, fx32 Z) {
        VecFx32_Init(X, Y, Z, &this->vec);
    }

    void CopyIn(VecFx32Cpp *vec) {
        VecFx32_Copy(&this->vec, &vec->vec);
    }

    void CopyIn(VecFx32 *vec) {
        VecFx32_Copy(&this->vec, vec);
    }

    bool TryNormalize() {
        return VecFx32_TryNormalize(&this->vec);
    }
};

// C++ wrapper for VecFx16
struct VecFx16Cpp {
    VecFx16 vec;

    VecFx16Cpp() {}
    VecFx16Cpp(fx16 X, fx16 Y, fx16 Z) {
        vec.x = X;
        vec.y = Y;
        vec.z = Z;
    }
};

union Vec2p {
    struct {
        /* 0 */ fx32 x;
        /* 4 */ fx32 y;
        /* 8 */
    };
    fx32 coords[2];
};

#define Vec2p_Add(a, b, dst) Vec2_Add(Vec2p, a, b, dst)
#define Vec2p_Sub(a, b, dst) Vec2_Sub(Vec2p, a, b, dst)
#define Vec2p_Set(a, dst) Vec2_Set(Vec2p, a, dst)
#define Vec2p_Clear(dst) Vec2_Clear(fx32, dst)
static inline void Vec2p_Copy(const Vec2p *src, Vec2p *dst) {
#if __MWERKS__
    dst->coords = src->coords;
#else
    dst->x = src->x;
    dst->y = src->y;
#endif
}

#if __MWERKS__
    #define Vec2_Set(a, dst)             \
        {                                \
            (dst)->coords = (a)->coords; \
        }                                \
        ((void) 0)
#else
    #define Vec2_Set(a, dst)   \
        {                      \
            (dst)->x = (a)->x; \
            (dst)->y = (a)->y; \
        }                      \
        ((void) 0)
#endif

#define Vec2_CopyAdd(type, a, b, dst) \
    {                                 \
        type temp;                    \
        temp.x = (a)->x + (b)->x;     \
        temp.y = (a)->y + (b)->y;     \
        Vec2_Set(&temp, dst);         \
    }                                 \
    ((void) 0)

#define Vec2_CopySub(type, a, b, dst) \
    {                                 \
        type temp;                    \
        temp.x = (a)->x - (b)->x;     \
        temp.y = (a)->y - (b)->y;     \
        Vec2_Set(&temp, dst);         \
    }                                 \
    ((void) 0)

extern "C" {
//! TODO: find a way to remove that
typedef union Vec2sC {
    struct {
        /* 0 */ s16 x;
        /* 2 */ s16 y;
        /* 4 */
    };
    s16 coords[2];
} Vec2sC;
}

union Vec2s {
    struct {
        /* 0 */ s16 x;
        /* 2 */ s16 y;
        /* 4 */
    };
    s16 coords[2];

    void operator=(const Vec2s &from) {
        this->x = from.x;
        this->y = from.y;
    }

    Vec2s() {}

    Vec2s(Vec2s *from) {
#if __MWERKS__
        this->coords = from->coords;
#else
        this->x = from->x;
        this->y = from->y;
#endif
    }

    Vec2s(s16 X, s16 Y) {
        x = X;
        y = Y;
    }
};

#define Vec2s_CopyAdd(a, b, dst) Vec2_CopyAdd(Vec2s, a, b, dst)
#define Vec2s_CopySub(a, b, dst) Vec2_CopySub(Vec2s, a, b, dst)
#define Vec2s_Set(a, dst) Vec2_Set(a, dst)

static inline void Vec2s_Clear(Vec2s *dst) {
    Vec2s empty;
    empty.x = 0;
    empty.y = 0;

#if __MWERKS__
    dst->coords = empty.coords;
#else
    dst->x = empty.x;
    dst->y = empty.y;
#endif
}

static inline void Vec2s_Add(const Vec2s *a, const Vec2s *b, Vec2s *dst) {
    s16 x = a->x + b->x;
    s16 y = a->y + b->y;

    dst->x = x;
    dst->y = y;
}

//! TODO: probably fake
static inline void Vec2s_Add2(const Vec2s *a, Vec2s *dst) {
    s16 x1, y1, x2, y2;

    x1 = a->x;
    x2 = dst->x;
    y2 = dst->y;
    y1 = a->y;

    x2 += x1;
    dst->x = x2;

    dst->y = (s16) dst->y;
    dst->y += y1;
}

static inline void Vec2s_Sub(const Vec2s *a, const Vec2s *b, Vec2s *dst) {
    s16 x = a->x - b->x;
    s16 y = a->y - b->y;

    dst->x = x;
    dst->y = y;
}

//! TODO: Vec2s_OffsetAdd and Vec2s_OffsetAdd2 are probably fake?
static inline void Vec2s_OffsetAdd(Vec2s *a, Vec2s *b, Vec2s *c, Vec2s *dst) {
    s16 y;
    s16 x;

    y = a->y + b->y;
    x = a->x + b->x;

    x += c->x;
    y += c->y;

    dst->x = x;
    dst->y = y;
}

static inline void Vec2s_OffsetAdd2(Vec2s *a, Vec2s *b, Vec2s *c, Vec2s *dst) {
    s16 y;
    s16 x;

    y = a->y + b->y;
    x = a->x + b->x;

    y += c->y;
    x += c->x;

    dst->x = x;
    dst->y = y;
}

static inline void Vec2s_Copy(const Vec2s *a, Vec2s *dst) {
#if __MWERKS__
    dst->coords = a->coords;
#else
    dst->x = a->x;
    dst->y = a->y;
#endif
}

union Vec2us {
    struct {
        /* 0 */ u16 x;
        /* 2 */ u16 y;
        /* 4 */
    };
    u16 coords[2];

    void operator=(const Vec2us &from) {
        this->x = from.x;
        this->y = from.y;
    }

    Vec2us() {}
    Vec2us(u16 X, u16 Y) {
        x = X;
        y = Y;
    }
    Vec2us(Vec2us *pFrom) {
        x = pFrom->x;
        y = pFrom->y;
    }
};

#define Vec2us_CopyAdd(a, b, dst) Vec2_CopyAdd(Vec2us, a, b, dst)
#define Vec2us_CopySub(a, b, dst) Vec2_CopySub(Vec2us, a, b, dst)
#define Vec2us_Set(a, dst) Vec2_Set(a, dst)

static inline void Vec2us_Clear(Vec2us *dst) {
    Vec2us empty;
    empty.x = 0;
    empty.y = 0;

#if __MWERKS__
    dst->coords = empty.coords;
#else
    dst->x = empty.x;
    dst->y = empty.y;
#endif
}

static inline void Vec2us_Add(const Vec2us *a, const Vec2us *b, Vec2us *dst) {
    u16 x = a->x + b->x;
    u16 y = a->y + b->y;

    dst->x = x;
    dst->y = y;
}

static inline void Vec2us_Sub(const Vec2us *a, const Vec2us *b, Vec2us *dst) {
    u16 x = a->x - b->x;
    u16 y = a->y - b->y;

    dst->x = x;
    dst->y = y;
}

static inline void Vec2us_Copy(const Vec2us *a, Vec2us *dst) {
#if __MWERKS__
    dst->coords = a->coords;
#else
    dst->x = a->x;
    dst->y = a->y;
#endif
}

union Vec2bCpp {
    struct {
        /* 0 */ u8 x;
        /* 1 */ u8 y;
        /* 2 */
    };
    u8 coords[2];
    u16 data[1];

    void operator=(const Vec2bCpp &from) {
        this->x = from.x;
        this->y = from.y;
    }

    Vec2bCpp() {}
    Vec2bCpp(u8 X, u8 Y) {
        x = X;
        y = Y;
    }
};

#define Vec2b_CopyAdd(a, b, dst) Vec2_CopyAdd(Vec2bCpp, a, b, dst)
#define Vec2b_CopySub(a, b, dst) Vec2_CopySub(Vec2bCpp, a, b, dst)
#define Vec2b_Set(a, dst) Vec2_Set(a, dst)

static inline void Vec2b_Clear(Vec2bCpp *dst) {
    Vec2bCpp empty;
    empty.x = 0;
    empty.y = 0;

#if __MWERKS__
    dst->coords = empty.coords;
#else
    dst->x = empty.x;
    dst->y = empty.y;
#endif
}

static inline void Vec2b_Add(const Vec2bCpp *a, const Vec2bCpp *b, Vec2bCpp *dst) {
    u8 x = a->x + b->x;
    u8 y = a->y + b->y;

    dst->x = x;
    dst->y = y;
}

static inline void Vec2b_Sub(const Vec2bCpp *a, const Vec2bCpp *b, Vec2bCpp *dst) {
    u8 x = a->x - b->x;
    u8 y = a->y - b->y;

    dst->x = x;
    dst->y = y;
}

static inline void Vec2b_Copy(const Vec2bCpp *a, Vec2bCpp *dst) {
#if __MWERKS__
    dst->coords = a->coords;
#else
    dst->x = a->x;
    dst->y = a->y;
#endif
}

union Vec2pCpp {
    struct {
        /* 0 */ fx32 x;
        /* 4 */ fx32 y;
        /* 8 */
    };
    fx32 coords[2];

    void operator=(const Vec2pCpp &from) {
        this->x = from.x;
        this->y = from.y;
    }

    Vec2pCpp() {}
    Vec2pCpp(fx32 X, fx32 Y) {
        x = X;
        y = Y;
    }
};

#define Vec2pCpp_CopyAdd(a, b, dst) Vec2_CopyAdd(Vec2pCpp, a, b, dst)
#define Vec2pCpp_CopySub(a, b, dst) Vec2_CopySub(Vec2pCpp, a, b, dst)
#define Vec2pCpp_Set(a, dst) Vec2_Set(a, dst)

static inline void Vec2pCpp_Clear(Vec2pCpp *dst) {
    Vec2pCpp empty;
    empty.x = 0;
    empty.y = 0;

#if __MWERKS__
    dst->coords = empty.coords;
#else
    dst->x = empty.x;
    dst->y = empty.y;
#endif
}

static inline void Vec2pCpp_Add(const Vec2pCpp *a, const Vec2pCpp *b, Vec2pCpp *dst) {
    fx32 x = a->x + b->x;
    fx32 y = a->y + b->y;

    dst->x = x;
    dst->y = y;
}

static inline void Vec2pCpp_Sub(const Vec2pCpp *a, const Vec2pCpp *b, Vec2pCpp *dst) {
    fx32 x = a->x - b->x;
    fx32 y = a->y - b->y;

    dst->x = x;
    dst->y = y;
}

static inline void Vec2pCpp_Copy(const Vec2pCpp *a, Vec2pCpp *dst) {
#if __MWERKS__
    dst->coords = a->coords;
#else
    dst->x = a->x;
    dst->y = a->y;
#endif
}

//! TODO: remove
extern "C" inline Vec2s *Vec2s_New(s16 x, s16 y) {
    Vec2s vec;
    vec.x = x;
    vec.y = y;
    return &vec;
}

//! TODO: remove
extern "C" inline Vec2s *Vec2s_GetCopy(Vec2s *src) {
    Vec2s vec;
    vec.x = src->x;
    vec.y = src->y;
    return &vec;
}

union Vec2sb {
    struct {
        /* 0 */ s8 x;
        /* 2 */ s8 y;
        /* 4 */
    };
    s8 coords[2];

    void operator=(const Vec2sb &from) {
        this->x = from.x;
        this->y = from.y;
    }

    Vec2sb() {}
    Vec2sb(u8 X, u8 Y) {
        x = X;
        y = Y;
    }
};

union Vec3s {
    struct {
        /* 0 */ s16 x;
        /* 2 */ s16 y;
        /* 4 */ s16 z;
        /* 6 */
    };
    s16 coords[3];

    void operator=(const Vec3s &from) {
        this->x = from.x;
        this->y = from.y;
        this->z = from.z;
    }

    Vec3s() {}

    Vec3s(Vec3s *from) {
#if __MWERKS__
        this->coords = from->coords;
#else
        this->x = from->x;
        this->y = from->y;
        this->z = from->z;
#endif
    }

    Vec3s(s16 X, s16 Y, s16 Z) {
        x = X;
        y = Y;
        y = Z;
    }
};

struct UnkAngleStruct {
    union {
        u16 angle_u;
        s16 angle_s;
    };

    UnkAngleStruct() {}
    UnkAngleStruct(s16 angle) :
        angle_s(angle) {}

    // clang-format off
    UnkAngleStruct& operator+=(const u16 value) { this->angle_u += value; return *this; }
    UnkAngleStruct& operator+=(const unsigned int value) { this->angle_u += value; return *this; }
    UnkAngleStruct& operator+=(const s16 value) { this->angle_s += value; return *this; }
    UnkAngleStruct& operator+=(const int value) { this->angle_s += value; return *this; }
    UnkAngleStruct& operator++() { this->angle_s += 1; return *this; }
    UnkAngleStruct& operator++(int) { this->angle_s += 1; return *this; }

    UnkAngleStruct& operator-=(const u16 value) { this->angle_u -= value; return *this; }
    UnkAngleStruct& operator-=(const unsigned int value) { this->angle_u -= value; return *this; }
    UnkAngleStruct& operator-=(const s16 value) { this->angle_s -= value; return *this; }
    UnkAngleStruct& operator-=(const int value) { this->angle_s -= value; return *this; }
    UnkAngleStruct& operator--() { this->angle_s -= 1; return *this; }
    UnkAngleStruct& operator--(int) { this->angle_s -= 1; return *this; }

    UnkAngleStruct& operator=(const u16 value) { this->angle_u = value; return *this; }
    UnkAngleStruct& operator=(const unsigned int value) { this->angle_u += value; return *this; }
    UnkAngleStruct& operator=(const s16 value) { this->angle_s = value; return *this; }
    UnkAngleStruct& operator=(const int value) { this->angle_s = value; return *this; }
    // clang-format on
};
