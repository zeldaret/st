# Spirit Tracks — 100 ARM9 overlay 0 functions reconstructed in C

This is a **100-function actual C translation batch**. All 100 have C bodies and were compiled **together** with Clang ARMv5TE, each into an independent section, and verified byte-for-byte against a locally decompressed user-supplied **EUR Rev 1** overlay. Total matching machine instructions: **916 bytes**. The functions cover pointer and array accessors, fixed memory writes, setters, simple arithmetic, and constant returns; **no empty functions** were selected.

This does **not** establish original CodeWarrior compiler matching, platform integration, gameplay, or a playable PC port. The C function signatures and class ownership should be rechecked before upstream integration. The upstream contribution policy for AI-assisted decompilation must be respected.

## Verify on the original ROM

On your Windows PC, first extract your own verified ROM (SHA1 `dcb221a89acb894503a461c2c7d4cfdad9a06b68`):

```powershell
python research/eur1/scripts/analyze_nds.py extract/baserom_st_eur1.nds --output local_audit
python research/eur1/batches/ov000_100/verify_ov000_100.py --overlay0 local_audit/working_code/overlay_000.bin
```

Requires Clang with ARMv5TE target plus `llvm-objcopy`. The overlay is never committed to GitHub. `manifest_100.json` carries only symbolic addresses, sizes, categories and hashes.

The next task for native portability is to map these routines to their actual C++ classes and integrate **tested** logic into the correct DS modules; isolated exact-code snippets alone do not produce a PC build.

## Standalone CodeWarrior verification (experimental)

Once `ninja arm9_eur1 report_eur1 check_eur1`, `ninja baseline_eur1`,
and `ninja objdiff` have succeeded **on Windows**, run this from `C:\st`:

```powershell
git pull --ff-only origin main
python research/eur1/batches/ov000_100/verify_codewarrior_100.py
```

This test compiles the 100 research functions with the **project's CodeWarrior
ARM dsi/1.2p1** and its flags (`-O4,p`, `-proc arm946e`, etc.) in C mode.
It reads the produced CodeWarrior ELF function symbols with `pyelftools`,
and compares each function's full byte span SHA-256 against the original
EUR1 overlay 0 instruction fingerprints in `manifest_100.json`.

The output is saved to:

```text
C:\st\build\eur1\codewarrior_probe_100.json
```

This report distinguishes `exact_codewarrior_standalone`,
`different_instructions`, `different_size`, missing symbols and relocated
or ambiguous symbols. An exact standalone match is **stronger than the existing
Clang match**, but it is still **not an integrated upstream project match**.
To obtain that, identify the correct original object file and C++ owning
class, add an appropriately typed function to that translation unit, rebuild,
then inspect `objdiff` and `ninja changes_eur1`.

No extra Nintendo game binaries, assets, original ROM bytes or CodeWarrior
binary are committed.

## Current original-compiler results: **98/100 exact standalone CodeWarrior**

The user's Windows `dsi/1.2p1` output from `verify_codewarrior_100.py`
reported **98 functions / 892 bytes identical**, with two correct-size
instruction mismatches: `0x0206A5C0` and `0x0206A5CC` (24 bytes).
The exact reproduction report and next diagnostic are documented in
[CODEWARRIOR_RESULTS.md](CODEWARRIOR_RESULTS.md).

Test alternate C pointer expressions for just those two functions:

```powershell
cd C:\st
git pull --ff-only origin main
python research/eur1/batches/ov000_100/verify_codewarrior_last2.py
```

The script writes `build/eur1/codewarrior_last2_variants.json` with
exact-byte results for each variant, without changing the existing C source.
**Do not count these as newly integrated official matching functions.**
