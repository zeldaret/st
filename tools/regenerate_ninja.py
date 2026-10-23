#!/usr/bin/env python3
"""Regenerate the Ninja graph and update delink timestamps.

Ninja on Windows may execute its command directly rather than through cmd.exe.
Do not rely on `&&` between Python commands in a Ninja rule: Python can
receive it as a literal argument. Use sequential subprocess calls instead.
"""
from pathlib import Path
import subprocess
import sys


def main() -> int:
    if len(sys.argv) < 2:
        print("usage: regenerate_ninja.py DSD_PATH [configure options...]", file=sys.stderr)
        return 2

    root = Path(__file__).resolve().parent.parent
    dsd_path = sys.argv[1]
    configure_args = sys.argv[2:]

    subprocess.run(
        [sys.executable, str(root / "tools" / "configure.py"), *configure_args],
        cwd=root,
        check=True,
    )
    subprocess.run(
        [sys.executable, str(root / "tools" / "delink.py"), dsd_path],
        cwd=root,
        check=True,
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
