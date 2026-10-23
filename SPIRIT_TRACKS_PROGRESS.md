# Spirit Tracks decomp — research log (Europe Rev 1)

Upstream source project: [zeldaret/st](https://github.com/zeldaret/st) (CC0). This repository fork remains the source-of-truth for the matching decompilation. Independent ROM research is stored at [`research/eur1`](research/eur1/README.md).

| Milestone | State |
| --- | --- |
| Verified EUR Rev 1 ROM checksum | Done |
| Extracted/decompressed 114 ARM9 overlays | Done locally; no game binaries checked in |
| Indexed 3,442 named NitroFS resources | Done; metadata only |
| Generated function-entry heuristics | Done; not validated functions |
| Preliminary C reconstructions | 13 total (3 initial + 10 newly translated ARM9 wrappers); syntax checked, **none binary matched** |
| Local mock behavior tests of ARM9 wrappers | PASS (9 scenarios); does **not** establish ROM equivalence |\n| Recompilation matching for recovered C | Not done |
| Playable rebuild/PC port | Not done |

Do not mistake the upstream decompilation percentage for local research progress. Legal ownership and build requirements for the ROM/BIOS are separate from this repository.

## 23 Oct 2026 — ARM9 experimental batch

New source: `research/eur1/src/recovered_arm9_wrappers.c`. Addresses: `0200174C`, `02002048`, `02006798`, `02007784`, `02007980`, `020153A4`, `0201BA94`, `0201BAAC`, `0201BACC`, `0201BAE4`. These are local control-flow interpretations with unproven ABI and return types; the module is not wired into the upstream build. Test source: `research/eur1/tests/test_recovered_arm9_wrappers.c`. Run `clang -std=c11 -Wall -Wextra -Werror -O1 -o test_wrappers research/eur1/tests/test_recovered_arm9_wrappers.c` then execute `test_wrappers` on a host machine. The test mocks callees and cannot replace target-compiler, binary matching, or emulator validation.
