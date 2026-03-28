#include <arith.h>

int abs(int __x) {
    return __x < 0 ? -__x : __x;
}

long labs(long __x) {
    return __x < 0 ? -__x : __x;
}
