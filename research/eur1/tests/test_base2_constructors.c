/* Host-side mocks: behavioral tests, not byte matching. */
#include <assert.h>
#include <stdint.h>
#include <string.h>
#include "../src/recovered_base2_constructors.c"

static int calls_a, calls_b, calls_c;
static void *seen_a, *seen_b, *seen_c;
void sub_02016694(void *p) { calls_a++; seen_a = p; }
void *sub_0201BA94(void *p) { calls_b++; seen_b = p; return p; }
void sub_0201667C(void *p) { calls_c++; seen_c = p; }

int main(void)
{
    union { uint32_t aligned; uint8_t data[64]; } object;
    uint8_t *p = object.data;
    memset(p, 0xA5, sizeof(object.data));
    assert(research_0201BA1C(p) == p);
    assert(calls_a == 1 && calls_b == 1 && seen_a == p + 0x20 && seen_b == p);
    assert(research_0201BA3C(p) == p);
    assert(calls_c == 1 && seen_c == p + 4);
    assert(*(uint32_t *)p == UINT32_C(0x020440F4) && p[0x0C] == 0 && p[0x0D] == 0xA5);
    memset(p, 0x5A, sizeof(object.data));
    assert(research_0201BA68(p) == p);
    assert(calls_c == 2 && seen_c == p + 4);
    assert(*(uint32_t *)p == UINT32_C(0x020440F4) && p[0x0C] == 0 && p[0x0D] == 0x5A);
    return 0;
}
