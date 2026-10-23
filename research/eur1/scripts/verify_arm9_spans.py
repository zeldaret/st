#!/usr/bin/env python3
"""Validate address/size/code fingerprints against a locally extracted ARM9 image.
Not a C/C++ recompilation matcher. Requires your own legally dumped EUR1 ROM.
No game data is sent anywhere. Python 3.11+; no external dependencies.
"""
import argparse
import hashlib
import json
from pathlib import Path

def validate(image: bytes, manifest: dict) -> list[str]:
    errors = []
    if manifest.get("schema_version") != 1:
        return ["Unsupported manifest schema"]
    base = int(manifest["base_address"], 0)
    sha1 = hashlib.sha1(image).hexdigest()
    if sha1 != manifest["arm9_image_sha1"]:
        errors.append(f"Wrong ARM9 image: SHA1 {sha1}")
    ranges = []
    for f in manifest["functions"]:
        addr = int(f["address"], 0)
        n = int(f["size_bytes"])
        offset = addr-base
        if offset < 0 or n <= 0 or offset+n > len(image):
            errors.append(f"Invalid span at {f['address']}")
            continue
        if (offset & 3) or (n & 3):
            errors.append(f"Unaligned ARM span at {f['address']}")
        digest = hashlib.sha256(image[offset:offset+n]).hexdigest()
        if digest != f["sha256"]:
            errors.append(f"Mismatch at {f['address']}")
        ranges.append((offset,offset+n,f["address"]))
    ordered = sorted(ranges)
    for (_start,end,name),(start2,_end2,name2) in zip(ordered, ordered[1:]):
        if start2 < end:
            errors.append(f"Overlapping spans: {name}, {name2}")
    return errors

def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("arm9_bin", type=Path, help="Local, decompressed ARM9 image")
    p.add_argument("--manifest", type=Path, default=Path(__file__).resolve().parent.parent/"reports"/"arm9_span_manifest.json")
    a = p.parse_args()
    image = a.arm9_bin.read_bytes()
    manifest = json.loads(a.manifest.read_text(encoding="utf-8"))
    errors = validate(image, manifest)
    for e in errors:
        print("FAIL:", e)
    if errors:
        return 1
    print(f"PASS: {len(manifest['functions'])} ARM9 spans match the ROM fingerprints.")
    print("Source matching, ABI correctness, and DS run-time behavior remain unverified.")
    return 0

if __name__ == "__main__":
    raise SystemExit(main())
