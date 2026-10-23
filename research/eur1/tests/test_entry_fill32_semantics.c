/* Host semantic guard for ARM9 startup routine 0x0200093C.
 * This checks range and return behavior, not original compiler output.
 */
#include <stdint.h>
#include <assert.h>
#include "../src/entry_fill32_semantics.c"

static void test_count(uint32_t n, uint32_t expected_words) {
    uint32_t buf[7];
    for (int i = 0; i < 7; i++) buf[i] = 0xDEADBEEFu;
    const uint32_t value = 0x11223344u;
    assert(research_entry_fill32(value, buf + 1, n) == value);
    for (uint32_t i = 0; i < 7; i++) {
        uint32_t should_change = i >= 1 && i < 1 + expected_words;
        assert(buf[i] == (should_change ? value : 0xDEADBEEFu));
    }
}

int main(void) {
    test_count(0, 0);
    test_count(1, 1);
    test_count(4, 1);
    test_count(5, 2);
    test_count(8, 2);
    test_count(16, 4);
    return 0;
}
