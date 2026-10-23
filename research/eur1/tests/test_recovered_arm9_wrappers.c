/* Host-only behavioral tests of provisional wrapper translations.
 * Does NOT verify matching with the original DS ROM.
 * clang -std=c11 -Wall -Wextra -Werror -O1 -o /tmp/test_st_wrappers test_recovered_arm9_wrappers.c
 */
#include <stdint.h>
#include <stddef.h>
#include <assert.h>
#include <string.h>

#include "../src/recovered_arm9_wrappers.c"

static int called, order[8], order_n;
static void *arg0, *arg1;
static uint32_t call_result;
static void reset(void) {
    called = 0; arg0 = arg1 = NULL; call_result = 0;
    order_n = 0; memset(order, 0, sizeof(order));
}
void sub_02002060(void *p) { arg0 = p; order[order_n++] = 1; }
void sub_02001300(void *p) { arg1 = p; order[order_n++] = 2; }
void sub_02006850(void *p) { called++; arg0 = p; }
uint32_t sub_020075A8(void *p) { called++; arg0 = p; return call_result; }
void sub_02007850(void *p) { arg0 = p; order[order_n++] = 1; }
void sub_02007860(void *p) { arg1 = p; order[order_n++] = 2; }
void sub_02016694(void *p) { called++; arg0 = p; order[order_n++] = 1; }
void sub_02011FF4(void *p) { arg1 = p; order[order_n++] = 2; }
void sub_020153E4(void *p) { arg0 = p; order[order_n++] = 1; }
void sub_02013118(void *p) { arg1 = p; order[order_n++] = 2; }
void sub_02001C0C(void) { called++; }

int main(void) {
    union { uint32_t align; unsigned char bytes[64]; } storage = {0};
    unsigned char *mem = storage.bytes;
    reset();
    void *target = (void *)mem;
    research_02002048(&target);
    assert(arg0 == &target && arg1 == mem && order_n == 2 && order[0] == 1 && order[1] == 2);
    reset();
    research_02006798(mem);
    assert(called == 0);
    *(uint32_t *)(mem + 0x24) = 1;
    research_02006798(mem);
    assert(called == 1 && arg0 == mem);
    reset();
    *(uint32_t *)(mem + 0x10) = 123;
    research_02007784(mem);
    assert(called == 1 && *(uint32_t *)(mem + 0x10) == 123);
    call_result = 42;
    assert(research_02007784(mem) == 42 && *(uint32_t *)(mem + 0x10) == 0);
    reset();
    research_02007980(mem);
    assert(arg0 == mem && arg1 == mem && order_n == 2 && order[0] == 1 && order[1] == 2);
    reset();
    assert(research_0201BA94(mem) == mem && arg0 == mem + 4 && called == 1);
    reset();
    assert(research_0201BAAC(mem) == mem && arg0 == mem + 4 && arg1 == mem && order_n == 2);
    reset();
    assert(research_0201BACC(mem) == mem && arg0 == mem + 4 && called == 1);
    assert(research_0201BAE4() == 1);
    reset();
    assert(research_020153A4(mem) == mem && arg0 == mem && (uintptr_t)arg1 == 0x0204999cU && order_n == 2);
    /* Not tested: research_0200174C accesses Nintendo DS memory-mapped global address. */
    return 0;
}
