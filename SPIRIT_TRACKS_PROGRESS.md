# Spirit Tracks decomp — research log (Europe Rev 1)

Upstream source project: [zeldaret/st](https://github.com/zeldaret/st) (CC0). This repository fork remains the source-of-truth for the matching decompilation. Independent ROM research is stored at [`research/eur1`](research/eur1/README.md).

| Milestone | State |
| --- | --- |
| Verified EUR Rev 1 ROM checksum | Done |
| Extracted/decompressed 114 ARM9 overlays | Done locally; no game binaries checked in |
| Indexed 3,442 named NitroFS resources | Done; metadata only |
| Generated function-entry heuristics | Done; not validated functions |
| Preliminary C reconstructions | **16** total (3 initial + 10 ARM9 wrappers + 3 Base2 class helpers); syntax checked, **none binary matched** |
| Local mock behavior tests | PASS: wrappers (9 scenarios) and Base2 constructor tests; no ROM equivalence established |
| Source fingerprint verification | PASS: 13 ARM9 symbol spans hashed against original EUR1 ROM; not compiler matching |
| Recompilation matching for recovered C | Not done |
| Playable rebuild/PC port | Not done |

Do not mistake the upstream decompilation percentage for local research progress. Legal ownership and build requirements for the ROM/BIOS are separate from this repository.

## 23 Oct 2026 — ARM9 experimental batch

New source: `research/eur1/src/recovered_arm9_wrappers.c`. Addresses: `0200174C`, `02002048`, `02006798`, `02007784`, `02007980`, `020153A4`, `0201BA94`, `0201BAAC`, `0201BACC`, `0201BAE4`. These are local control-flow interpretations with unproven ABI and return types; the module is not wired into the upstream build. Test source: `research/eur1/tests/test_recovered_arm9_wrappers.c`. Run `clang -std=c11 -Wall -Wextra -Werror -O1 -o test_wrappers research/eur1/tests/test_recovered_arm9_wrappers.c` then execute `test_wrappers` on a host machine. The test mocks callees and cannot replace target-compiler, binary matching, or emulator validation.

## 23 Oct 2026 — second ARM9 batch: Base2 class
Three extra provisional C functions were added in `research/eur1/src/recovered_base2_constructors.c`:
- `0x0201BA1C`: helper calling two Base2-related routines.
- `0x0201BA3C` and `0x0201BA68`: `UnkStruct_0204a060_Base2` C2/C1 constructor entrypoints, inferred from `config/eur1/arm9/symbols.txt`.
The host mock test `research/eur1/tests/test_base2_constructors.c` passes, and this file cross-compiles with Clang for ARMv5TE. That does **not** verify exact output against CodeWarrior or Nintendo ROM.

Run `python research/eur1/scripts/verify_arm9_functions.py extract/baserom_st_eur1.nds` to verify the SHA-256 digests of 13 studied ARM9 symbol spans against the original EUR1 ROM. All 13 local byte fingerprints passed on the provided ROM. The 16-reconstruction total also includes 3 other addresses (startup and overlays); fingerprints for those are not included in this ARM9-main-only verifier.
