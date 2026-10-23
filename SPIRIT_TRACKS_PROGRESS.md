# Spirit Tracks decomp — research log (Europe Rev 1)

Upstream source project: [zeldaret/st](https://github.com/zeldaret/st) (CC0). This repository fork remains the source-of-truth for the matching decompilation. Independent ROM research is stored at [`research/eur1`](research/eur1/README.md).

| Milestone | State |
| --- | --- |
| Verified EUR Rev 1 ROM checksum | Done |
| Extracted/decompressed 114 ARM9 overlays | Done locally; no game binaries checked in |
| Indexed 3,442 named NitroFS resources | Done; metadata only |
| Generated function-entry heuristics | Done; not validated functions |
| Preliminary C reconstructions | **23 total** (3 original + 10 ARM9 batch 1 + 10 ARM9 batch 2); **none binary matched** |
| Local mock behavior tests | PASS: wrappers (9 scenarios) and Base2 constructor tests; no ROM equivalence established |
| Source fingerprint verification | PASS: 13 ARM9 symbol spans hashed against original EUR1 ROM; not compiler matching |
| 20 ARM9 function spans cross-checked with existing EUR1 symbols | Exact address and size agreement, SHA-256 verified against local decompressed ROM |
| ARMv5TE Clang exact instruction probes | **PASS** for 15 independently symbolized 8-byte ARM9 functions; not CodeWarrior |
| Recompilation matching for recovered C using original CodeWarrior | Not done |
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

## 23 Oct 2026 — ARM9 research batch 2

Added `research/eur1/src/recovered_arm9_batch2.c` and `research/eur1/tests/test_recovered_arm9_batch2.c`: ten new provisional source-level translations at `0201AEAC`, `0201AEBC`, `0201BDC0`, `0201BE08`, `0201BE20`, `0201BBCC`, `0201C494`, `0201C4A8`, `0201C4D8`, and `0201C504`. Clang syntax checks and host behavior tests passed in a sandbox; **the tests do not run Nintendo DS code or prove matching**. `research/eur1/reports/arm9_span_manifest.json` records 20 ARM9 source targets (both recent batches), all with exact symbol address/size in `config/eur1/arm9/symbols.txt`. The byte hashes were calculated locally from the verified EU Rev1 ROM. Use `python research/eur1/scripts/verify_arm9_spans.py PATH_TO_LOCAL_DECOMPRESSED_ARM9.bin` to reproduce.

### Provenance and progress

* The initial three research functions are not included in the 20-item ARM9 manifest: one belongs to the main ARM9 boot code and the other two to overlays. They remain unproven.
* Existing symbols and previously known addresses are not evidence of new upstream matching progress. The 10 batch-1 and 10 batch-2 wrappers are **approximations**, not replacements for existing upstream source.
* Next objective: establish EUR1 target-compiler baseline and run objdiff/byte comparisons; **zero** new binary-matching functions have been demonstrated by the research batches.

## 23 Oct 2026 — first machine-byte equivalence probe

`research/eur1/probes/leaf_0201BAE4.c` is a standalone candidate for `UnkStruct_0204a060_Base2::vfunc_08(int)`. It returns 1, ignoring its arguments. Running:

```sh
python research/eur1/scripts/check_matching_leaf.py --rom extract/baserom_st_eur1.nds
```

compiled its 8 bytes with Clang `--target=armv5te-none-eabi -march=armv5te -marm -O2` and compared them **byte for byte with the uploaded original EUR1 ROM**. Local result: **PASS**. Without `--rom`, the script compares against the SHA-256 fingerprint recorded from that ROM, and can run in CI without copyrighted data.

**Crucial boundary:** this proves identical machine instructions for one tiny leaf method under Clang; it is *not* CodeWarrior recompilation, not upstream source-level matching, and must not be counted as a new function matched in the `zeldaret/st` build. The recorded 16 experimental reconstructions include this function already; do not double-count the probe.

## 23 Oct 2026 — 15-function exact instruction probe batch

`research/eur1/scripts/check_constant_leaf_batch.py` cross-compiles 15 independent 8-byte ARM9 functions identified by `config/eur1/arm9/symbols.txt`. Each returns the literal 0, 1, or 2. Using Clang ARMv5TE, all 15 isolated functions produced machine bytes identical to the original EUR1 ROM in local tests (`--rom` supplied). The CI version verifies only pre-recorded SHA-256 fingerprints; it does not access a copyrighted ROM.

The previous `0x0201BAE4` leaf is one of these 15. **Do not count this as 15 additional CodeWarrior-matching functions.** These 15 are experimental codegen probes, 14 newly investigated addresses plus 1 previously translated address; the 16 provisional source reconstructions are tracked separately.
