# Spirit Tracks decomp — research log (Europe Rev 1)

Upstream source project: [zeldaret/st](https://github.com/zeldaret/st) (CC0). This repository fork remains the source-of-truth for the matching decompilation. Independent ROM research is stored at [`research/eur1`](research/eur1/README.md).

| Milestone | State |
| --- | --- |
| Verified EUR Rev 1 ROM checksum | Done |
| Extracted/decompressed 114 ARM9 overlays | Done locally; no game binaries checked in |
| Indexed 3,442 named NitroFS resources | Done; metadata only |
| Generated function-entry heuristics | Done; not validated functions |
| Preliminary C reconstructions | Earlier 23 approximations, plus 13 new exact-Clang probes (one address overlaps earlier batch); **zero additional CodeWarrior matches** |
| Local mock behavior tests | PASS: wrappers (9 scenarios) and Base2 constructor tests; no ROM equivalence established |
| Source fingerprint verification | PASS: 13 ARM9 symbol spans hashed against original EUR1 ROM; not compiler matching |
| 20 ARM9 function spans cross-checked with existing EUR1 symbols | Exact address and size agreement, SHA-256 verified against local decompressed ROM |
| ARMv5TE Clang exact instruction probes | **74 distinct isolated functions**, including new Input::Init; Clang ARMv5TE only, **not CodeWarrior** |
| Batch 0001 (ARM9 main) | **1,000 known targets: 60 isolated Clang-exact, 6 additional host-tested semantic C reconstructions, 934 queued** |
| Native-PC-playability preparation | Critical-path source graph, ROM-free audit tool and ARM9 boot semantic regression tests added; PC runtime not started |\n| Overlay 0 C research | **265 distinct isolated Clang-exact functions:** 144 nonempty + 121 genuine empty; 1,940 bytes; **0 CodeWarrior integrations** |\n| Playable rebuild/PC port | Not done |

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

## 23 Oct 2026 — 13 new short-function ARMv5TE exact probes

A [new source collection](research/eur1/probes/arm9_short_functions.c) and [reproducible checker](research/eur1/scripts/verify_arm9_short_functions.py) cover 13 independent ARM9 functions (12–16 bytes each; total **176 original machine-code bytes**). The checker verifies the ROM SHA-1, decompresses ARM9, compares with the expected ARM9 SHA-1, requires the corresponding official `eur1` address and span length in `config/eur1/arm9/symbols.txt`, compiles each C function separately with Clang 17 targeting ARMv5TE, and demands **exact code bytes**, not just equivalent behavior. All **13/13 PASS** on the user-supplied EUR1 ROM and the extracted ARM9 image. An altered ARM9 input correctly fails.

[Detailed address/size/SHA-256 proof](research/eur1/reports/clang_byte_matches_13.md).

Combined with the previously confirmed 15 constant-return leaves, this establishes **28 disjoint isolated Clang-exact ARM9 examples**. Do not mistake this for 28 newly matched functions in the project: the source remains in `research/`, 0x0201BE20 already appeared in the approximate research batch, and **no original CodeWarrior-compiler match or game integration is demonstrated**.

## 23 Oct 2026 — Batch 0001: queue of 1,000 symbolized functions

The [batch 0001 manifest](research/eur1/batches/batch_0001_1000_manifest.json) records 870 ARM and 130 Thumb known function spans in the main ARM9 game code. These are **targets**, not decompiled sources. The first [58 short C code probes](research/eur1/batches/batch_0001_short_exact_58.c) generated 356 machine-code bytes identical to locally verified EUR1 ARM9 output when each was compiled separately under Clang ARMv5TE. Across previous codegen experiments this adds **45 newly verified** distinct Clang-exact addresses, for **73 distinct isolated Clang-exact probes total** (13 of the current 58 overlapped prior probes). The [verification script](research/eur1/batches/verify_batch_0001.py) checks the original SHA-1 and recompilation bytes on a local ROM; the remaining 942 functions are explicitly listed as awaiting validation.

**This does not mean 1,000 functions have been decompiled** or imply any progress in original CodeWarrior matching or game playability. See [batch detailed README](research/eur1/batches/README.md).

## 23 Oct 2026 — decompilation focused on a future native playable game

**Future goal:** playable **native PC port**, but **no PC port implementation yet**. Rather than only chasing short Clang instruction matches, the priority is code actually used by boot -> frame loop -> title -> file selection -> gameplay/train -> save. See [decompilation-first plan](research/eur1/NATIVE_PORT_DECOMP_PLAN.md) and the [ten-file source snapshot](research/eur1/reports/critical_path_source_snapshot.json).

- New **ROM-free audit**: `research/eur1/scripts/decomp_readiness.py` walks C++ source files and flags DS register/GX/FS/CARD/input/audio uses, non-matching markers, and TODOs. It does **not** compute a source-matching percentage. Three unit tests passed locally, and the script is included in research CI.
- Located the actual frame event sequence in `src/Main/Game/Game.cpp`: `main() -> gGame.Run()`, mode creation, update callbacks, graphics flush, frame counter and interrupt synchronization.
- Confirmed `OverlayManager` uses `FS_LoadOverlay`/`FS_UnloadOverlay`, the title screen has input-driven state transitions, and `SaveManager` uses cartridge-backed saves and duplicate block integrity checks. These become named decompilation milestones.
- The upstream `src/Main/Main.cpp` still marks `func_0200093c` as non-matching and its current loop seems inconsistent with ROM instructions. Added a separate [semantic reconstruction](research/eur1/src/entry_fill32_semantics.c) and [host guard tests](research/eur1/tests/test_entry_fill32_semantics.c) that check the destination, byte count, whole-word rounding and return register. They passed Clang host tests with sanitizers. This **is not** CodeWarrior matching and was **not** inserted into the DS game source.
- The `ninja` baseline on the user's Windows PC still requires `extract/baserom_st_eur1.nds` locally; no Nintendo ROM/assets were committed to GitHub.

**Number of newly CodeWarrior-matching functions from this phase: zero.** The deliverables are tested semantic correctness for a critical boot routine and a better prioritized decompilation map, not a playable game.

## 23 Oct 2026 — Eight input and frame helper reconstructions

Reconstructed ARM9 input state update, input reset, IPC special condition, keyboard polling mask, frame scanline predicate and callback dispatch from the owner's BKIP EUR Rev 1 ROM. Code lives in [`research/eur1/src/nds_input_frame_semantics.c`](research/eur1/src/nds_input_frame_semantics.c) and is deliberately **not included in the DS game build**. The [host tests](research/eur1/tests/test_nds_input_frame_semantics.c) passed under Clang with AddressSanitizer and UndefinedBehaviorSanitizer.

- **2 functions with exact isolated Clang ARMv5TE instruction bytes**: `0x02013B10` (Input::Init, 20 bytes) and `0x02013B88` (clear edges, 16 bytes). [Independent verification](research/eur1/scripts/verify_arm9_input_exact.py) compares Clang output to original ROM-derived hashes, or optionally to the original local ARM9 bytes. `0x02013B88` was matched before in the prior 13-probe batch, so this increases the distinct count by **one**, from 73 to **74**.
- **6 other functions** were reconstructed as semantic C models and behavior-tested but remain **unmatched**: `0x02013B24`, `0x02013B98`, `0x02013BBC`, `0x02013C08`, `0x0201328C`, `0x02013354`. In particular, the host models intentionally abstract direct hardware reads and bound a scanline wait loop.
- The batch of 1000 target functions is now explicitly split into **60 Clang-exact / 6 semantic C host-tested / 934 queued**. Original CodeWarrior matching: **0 newly demonstrated**. This work supports the eventual native PC port without implementing a PC executable yet.

## 23 Oct 2026 — 100 genuine C reconstructions in overlay 0

**New decompilation batch:** [`research/eur1/batches/ov000_100/`](research/eur1/batches/ov000_100/) contains **100 distinct, non-empty C functions** targeting symbols from `config/eur1/arm9/overlays/ov000/symbols.txt`. Exactly 100 functions with actual C bodies (46 constant returns, 54 accessors, field writes, arithmetic and pointer operations). The functions are separate from the earlier ARM9 main batches, because these have distinct addresses in **overlay 0**.

**Locally reproduced:** The entire 100-function C source was compiled together into one ARMv5TE Clang ELF object with `-O2 -ffunction-sections`. All **100/100** isolated emitted function sections are **byte-for-byte identical** to their spans in the user's decompressed, SHA-1-verified EUR1 overlay-0 image, totaling **916 original ARM instruction bytes**. All addresses and sizes agree with the repository's existing EUR1 overlay0 symbol map. [Manifest](research/eur1/batches/ov000_100/manifest_100.json) and [verification script](research/eur1/batches/ov000_100/verify_ov000_100.py) allow local rechecks against `overlay_000.bin` extracted from the owner's original ROM.

**Scope limit:** This is a C reconstruction, **not** source integrated into the official DS game's build; no original CodeWarrior matching or gameplay test has been shown. It has **not** begun a native PC port. The code was published via [PR #2](https://github.com/zeranemesis/st/pull/2). No proprietary original ROM, assembly, BIOS or assets have been committed.

## 23 Oct 2026 — Further maximum verified ov000 batch: +165 C reconstructions

A second [overlay-0 C reconstruction batch](research/eur1/batches/ov000_165/) adds **165 distinct C function definitions that are not in the previous 100-function batch**. The original EUR1 overlay functions consist of **121 genuine empty ARM `BX LR` returns, 25 constant returns, and 19 other short nonempty operations**. All **165/165** were compiled in one Clang ARMv5TE object with `-O2 -ffunction-sections` and the instructions in each separate function section matched the original locally extracted SHA-1-verified overlay-0 bytes **byte-for-byte**: **1,024 machine-code bytes**. Intentional corruption of the original image was rejected.

This results in **265 distinct overlay-0 research C functions (144 nonempty, 121 empty; 1,940 machine-code bytes)** across the [100-function batch](research/eur1/batches/ov000_100/) and the [165-function batch](research/eur1/batches/ov000_165/). No code from either batch has been integrated into the game's original `src/` build, and **0 newly matching functions were established with the original CodeWarrior compiler**. These are isolated Clang-exact C reconstructions with provisional signatures, not a playable DS build or PC port. The 165 were merged via [PR #3](https://github.com/zeranemesis/st/pull/3).

The next productive decompilation effort should concentrate on nonempty gameplay/control-flow functions, true C++ method signatures and original target-compiler equivalence instead of inflating totals with empty returns.

## 23 Oct 2026 — CodeWarrior standalone verifies 98/100 overlay-0 C functions

The owner's local `codewarrior_probe_100.json` reports **98 distinct standalone original-CodeWarrior ARM instruction matches (892 bytes)** out of 100 C reconstructions (916 bytes), compiled under `dsi/1.2p1 -O4,p`. Two 12-byte indexed word accessors, `0x0206A5C0` and `0x0206A5CC`, have matching size but different instructions and zero relocations. This supersedes the earlier blanket statement of zero CodeWarrior *standalone* matches; there are still **zero newly established integrated project/objdiff matching functions** from this isolated research batch.

Added [the result analysis](research/eur1/batches/ov000_100/CODEWARRIOR_RESULTS.md) and a [12-variant original-compiler probe](research/eur1/batches/ov000_100/verify_codewarrior_last2.py) for resolving the two mismatches on Windows without touching the 98 known matches. No CodeWarrior-exact success for those variants has been claimed prior to executing the tool on Windows.

## 23 Oct 2026 — 500 additional ROM-checked ARM9 C reconstructions

Published [batch overlay500](research/eur1/batches/overlay500/) via [PR #4](https://github.com/zeranemesis/st/pull/4) (main). The batch contains **500 unique ARM9 overlay function bodies** beyond the preceding [100 overlay0 functions](research/eur1/batches/ov000_100/), across **40 overlays**.

- **211 non-empty** small C reconstructions (loads, stores, pointer arithmetic, constant returns and some semantic multi-instruction functions).
- **289 originally empty** `BX LR` functions. These are real minimal DS functions but are **not 289 gameplay implementations**.
- **500/500 standalone Clang ARMv5TE -O2 identical code sections** against the user's SHA-1-verified local European Rev 1 ARM9 overlays, representing **3,188 identical instruction bytes**.
- **396 upstream-symbolized** function starts; **104 BL-referenced heuristic starts**, which must be confirmed in the upstream symbol maps before direct C++ source integration.
- All [500 addresses, sizes and original span SHA-256 values](research/eur1/batches/overlay500/manifest_500.json), the [source C](research/eur1/batches/overlay500/overlay_recovered_500.c) and [full verifier](research/eur1/batches/overlay500/verify_500.py) are published. No ROM or binary assets were committed.

**No original CodeWarrior matching has been measured yet for these 500 additional C functions**, and none were integrated into the normal DS build. The earlier **98/100 standalone CodeWarrior-matching** result applies to the *prior* separate 100-function set only. No PC runtime/port work was undertaken.
