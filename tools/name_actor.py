#!/usr/bin/env python3

import argparse

from pathlib import Path


CONFIG_DIR = Path("config").resolve()
INC_DIR = Path("include").resolve()
SRC_DIR = Path("src").resolve()


def update_filename(args):
    # rename the file in config and directories

    is_actor = not args.is_map_obj
    kind = "Actor" if is_actor else "MapObject"
    old_fname = f"{kind}Unk{args.old_name}.cpp"
    new_fname = f"{kind}{args.new_name}.cpp"

    for delink_file in CONFIG_DIR.rglob("delinks.txt"):
        assert delink_file.exists()
        filedata = delink_file.read_text()
        if old_fname in filedata:
            delink_file.write_text(filedata.replace(old_fname, new_fname))

    for sym_file in CONFIG_DIR.rglob("symbols.txt"):
        assert sym_file.exists()
        filedata = sym_file.read_text()
        if old_fname in filedata:
            sym_file.write_text(filedata.replace(old_fname, new_fname))

    config_py = Path("tools/configure.py").resolve()
    filedata = config_py.read_text()
    if old_fname in filedata:
        config_py.write_text(filedata.replace(old_fname, new_fname))

    for h_old in INC_DIR.rglob("*.hpp"):
        if old_fname.removesuffix(".cpp") in h_old.stem:
            h_old.rename(h_old.with_stem(new_fname.removesuffix(".cpp")).with_suffix(".hpp"))
            break

    for s_old in SRC_DIR.rglob("*.cpp"):
        if old_fname.removesuffix(".cpp") in s_old.stem:
            s_old.rename(s_old.with_stem(new_fname.removesuffix(".cpp")))
            break


def update_classes(args, is_profile: bool):
    # rename the class in the files

    is_actor = not args.is_map_obj
    kind = "Actor" if is_actor else "MapObject"

    if is_profile:
        kind = f"{kind}Profile"

    old_class = f"{kind}Unk{args.old_name}"
    new_class = f"{kind}{args.new_name}"

    for h_file in INC_DIR.rglob("*.hpp"):
        assert h_file.exists()

        filedata = h_file.read_text()
        if old_class in filedata:
            h_file.write_text(filedata.replace(old_class, new_class))

    for c_file in SRC_DIR.rglob("*.cpp"):
        assert c_file.exists()

        filedata = c_file.read_text()
        if old_class in filedata:
            c_file.write_text(filedata.replace(old_class, new_class))

    old_mangled = f"{len(old_class)}{old_class}"
    new_mangled = f"{len(new_class)}{new_class}"

    for sym_file in CONFIG_DIR.rglob("symbols.txt"):
        assert sym_file.exists()
        filedata = sym_file.read_text()
        if old_mangled in filedata:
            sym_file.write_text(filedata.replace(old_mangled, new_mangled))


def update_id(args):
    # renames the id in files

    if args.is_map_obj:
        table = INC_DIR / "Map" / "MapObjectTable.inl"
        old_id = f"MapObjectId_{args.old_name}"
        new_id = f"MapObjectId_{args.new_name}"
    else:
        table = INC_DIR / "Actor" / "ActorTable.inl"
        old_id = f"ActortId_{args.old_name}"
        new_id = f"ActortId_{args.new_name}"

    for h_file in INC_DIR.rglob("*.hpp"):
        assert h_file.exists()

        filedata = h_file.read_text()
        if old_id in filedata:
            h_file.write_text(filedata.replace(old_id, new_id))

    for c_file in SRC_DIR.rglob("*.cpp"):
        assert c_file.exists()

        filedata = c_file.read_text()
        if old_id in filedata:
            c_file.write_text(filedata.replace(old_id, new_id))

    assert table.exists()
    table.write_text(table.read_text().replace(f", {args.old_name})", f", {args.new_name})"))


def main():
    parser = argparse.ArgumentParser(description="Generates build.ninja")
    parser.add_argument("old_name", type=str, help="old name")
    parser.add_argument("new_name", type=str, help="new name")
    parser.add_argument("-m", "--map-object", action="store_true", dest="is_map_obj", required=False, default=False, help="is map object")

    args = parser.parse_args()
    assert len(args.old_name) > 0 and len(args.new_name) > 0

    update_id(args)
    update_classes(args, False) # update actor class
    update_classes(args, True) # update profile class
    update_filename(args) # update filenames


if __name__ == "__main__":
    main()
