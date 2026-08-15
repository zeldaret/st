#!/usr/bin/env python

import argparse
import hashlib
import sys

from pathlib import Path

def eprint(*args, **kwargs):
    print(*args, file=sys.stderr, **kwargs)

DEBUG = False

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Computes and verifies a SHA1 checksum")
    parser.add_argument('file', help="Input file to verify")
    parser.add_argument('-c', type=str, dest='checksum_file', required=False, help='Checksum file')
    args = parser.parse_args()

    file_path = Path(args.file)
    file_sha1 = hashlib.sha1(file_path.read_bytes()).hexdigest()

    checksum_path = Path(args.checksum_file)
    filedata = checksum_path.read_text().splitlines()

    for line in filedata:
        target_sha1 = line.split(" ")[0]

        if DEBUG:
            print(f"{file_sha1} vs {target_sha1}")

        if target_sha1 == file_sha1:
            eprint(f"{file_path}: OK")
            sys.exit(0)

    eprint(f"{file_path}: FAILED")
    sys.exit(1)
