# CodeWarrior ARM EUR Rev 1 — 100-function standalone experiment

Date: 2026-10-23.
User-provided local report: `build/eur1/codewarrior_probe_100.json` generated
with [`verify_codewarrior_100.py`](verify_codewarrior_100.py). Only the
aggregate outcomes, not the user's local files or original ROM, are recorded
here.

## Verified results from the report

| Status | Functions | Original instruction bytes |
| --- | ---: | ---: |
| Isolated CodeWarrior ARM `dsi/1.2p1` exact code | **98** | **892** |
| Different CodeWarrior instructions | **2** | **24** |
| All 100 investigated | **100** | **916** |

All 100 functions were compiled in C mode using the project-target CodeWarrior
optimization (`-O4,p`) and ARM946E flags. Both mismatching functions had
the **correct generated size of 12 bytes** and **zero relocations**.

Only these two original-assembly spans differ from isolated CodeWarrior output:

- `0x0206A5C0` — index-based 32-bit write: provisional C
  `base[idx + 42] = value;` (12 bytes, different instructions)
- `0x0206A5CC` — index-based 32-bit read: provisional C
  `return base[idx + 42];` (12 bytes, different instructions)

The source and original ROM implement the same memory address calculation:
an index scaled by 4 plus an additional `0xA8` byte displacement.
CodeWarrior can nevertheless choose a different instruction order when C
pointer addition is written as `base[idx + 42]`.

## Next experiment

Run [`verify_codewarrior_last2.py`](verify_codewarrior_last2.py)
**on your Windows PC** to compare a dozen alternative C expressions for those
two instructions. It compiles the candidates with CodeWarrior and reports
individual SHA-256 equality with the original ARM bytes. It writes a local
report to `build/eur1/codewarrior_last2_variants.json`. Neither the original
100-function C source nor the DS game build is altered.

```powershell
cd C:\st
git pull --ff-only origin main
python research/eur1/batches/ov000_100/verify_codewarrior_last2.py
```

If a variant achieves equality, update only these two functions in the
research C and then rerun `verify_codewarrior_100.py` to ensure the result
remains **100/100 CodeWarrior standalone**.

## What this does not establish

**98/100 isolated CodeWarrior instruction matches do not mean 98 new upstream
CodeWarrior matching units.** The prototypes, owning C++ classes and original
object-file layout still need to be recovered and verified. The 100 research
functions remain in `research/`, outside the actual DS game's C++ build;
`ninja changes_eur1` will not count them until properly integrated.
No native PC port was attempted here.
