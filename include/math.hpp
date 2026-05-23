#pragma once

#include <nitro/math.h>

union Vec2s {
    struct {
        /* 0 */ s16 x;
        /* 2 */ s16 y;
        /* 4 */
    };
    s16 coords[2];

    Vec2s() {}
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

static inline void Vec2s_Sub(const Vec2s *a, const Vec2s *b, Vec2s *dst) {
    s16 x = a->x - b->x;
    s16 y = a->y - b->y;

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

union Vec2b {
    struct {
        /* 0 */ u8 x;
        /* 2 */ u8 y;
        /* 4 */
    };
    u8 coords[2];

    Vec2b() {}
    Vec2b(u8 X, u8 Y) {
        x = X;
        y = Y;
    }
};

#define Vec2b_CopyAdd(a, b, dst) Vec2_CopyAdd(Vec2b, a, b, dst)
#define Vec2b_CopySub(a, b, dst) Vec2_CopySub(Vec2b, a, b, dst)
#define Vec2b_Set(a, dst) Vec2_Set(a, dst)

static inline void Vec2b_Clear(Vec2b *dst) {
    Vec2b empty;
    empty.x = 0;
    empty.y = 0;

#if __MWERKS__
    dst->coords = empty.coords;
#else
    dst->x = empty.x;
    dst->y = empty.y;
#endif
}

static inline void Vec2b_Add(const Vec2b *a, const Vec2b *b, Vec2b *dst) {
    u8 x = a->x + b->x;
    u8 y = a->y + b->y;

    dst->x = x;
    dst->y = y;
}

static inline void Vec2b_Sub(const Vec2b *a, const Vec2b *b, Vec2b *dst) {
    u8 x = a->x - b->x;
    u8 y = a->y - b->y;

    dst->x = x;
    dst->y = y;
}

static inline void Vec2b_Copy(const Vec2b *a, Vec2b *dst) {
#if __MWERKS__
    dst->coords = a->coords;
#else
    dst->x = a->x;
    dst->y = a->y;
#endif
}

union Vec2pCpp {
    struct {
        /* 0 */ q20 x;
        /* 2 */ q20 y;
        /* 4 */
    };
    q20 coords[2];

    Vec2pCpp() {}
    Vec2pCpp(q20 X, q20 Y) {
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
    q20 x = a->x + b->x;
    q20 y = a->y + b->y;

    dst->x = x;
    dst->y = y;
}

static inline void Vec2pCpp_Sub(const Vec2pCpp *a, const Vec2pCpp *b, Vec2pCpp *dst) {
    q20 x = a->x - b->x;
    q20 y = a->y - b->y;

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
