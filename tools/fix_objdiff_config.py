#!/usr/bin/env python3

import json
import copy

from pathlib import Path


class FixConfigEntry:
    def __init__(self, name: str, options):
        self.name = name
        self.cflags = options["cflags"]
        self.extra_cflags = options["extra_cflags"]
        self.mw_version = options["mw_version"]

    def get_all_cflags(self):
        return " ".join(self.cflags) + " " + " ".join(self.extra_cflags)


class FixConfig:
    def __init__(self):
        self.entries: list[FixConfigEntry] = []

    def get_entry_from_name(self, base_name: str):
        split = base_name.split("/")
        split.pop(0)

        name = Path(base_name).stem
        for entry in self.entries:
            if name in entry.name:
                return entry

        return None

    @staticmethod
    def new(path: str):
        json_path = Path(path).resolve()
        cfg_json = json.loads(json_path.read_text())
        cfg = FixConfig()

        for name, options in cfg_json.items():
            cfg.entries.append(FixConfigEntry(name, options))

        return cfg


def main():
    cfg = FixConfig.new("build/objdiff_fixup_cfg.json")

    json_path = Path("objdiff.json").resolve()
    objdiff_json = json.loads(json_path.read_text())
    out_json = copy.copy(objdiff_json)

    for i, unit_dict in enumerate(objdiff_json["units"]):
        if "target_path" in unit_dict:
            target_path = Path(unit_dict["target_path"]).resolve()
            out_json["units"][i]["target_path"] = str(target_path)

        if "base_path" in unit_dict:
            base_path = Path(unit_dict["base_path"]).resolve()
            out_json["units"][i]["base_path"] = str(base_path)

        if "scratch" in unit_dict:
            ctx_path = Path(unit_dict["scratch"]["ctx_path"]).resolve()
            out_json["units"][i]["scratch"]["ctx_path"] = str(ctx_path)

            entry = cfg.get_entry_from_name(out_json["units"][i]["name"])
            if entry is not None:
                out_json["units"][i]["scratch"]["c_flags"] = entry.get_all_cflags()
                out_json["units"][i]["scratch"]["compiler"] = entry.mw_version

    out_path = Path("objdiff.json").resolve()
    with out_path.open("w") as f:
        json.dump(out_json, f, indent=2)


if __name__ == "__main__":
    main()
