#!/usr/bin/env python3

import json
import copy

from pathlib import Path
from typing import Optional


class ConfigUnit:
    def __init__(self, name: str, options: dict[str, str]):
        self.name = name
        self.cflags = options["cflags"]
        self.extra_cflags = options["extra_cflags"]
        self.mw_version = options["mw_version"]

    def get_all_cflags(self):
        return " ".join(self.cflags) + " " + " ".join(self.extra_cflags)


class ConfigVersion:
    def __init__(self, name: Optional[str], options: dict[str, str], units: list[ConfigUnit], root_path: Path):
        self.name = name
        self.objdiff_path = Path(options["objdiff"]).resolve()

        objdiff_json = json.loads(self.objdiff_path.read_text())
        self.objdiff_json: dict = copy.copy(objdiff_json)

        # deprecated options
        self.objdiff_json.pop("target_dir")
        self.objdiff_json.pop("base_dir")
        self.objdiff_json.pop("build_base")

        for i, unit_dict in enumerate(objdiff_json["units"]):
            if "name" in unit_dict and self.name is not None:
                unit_dict["name"] = f"{self.name}/{unit_dict['name']}"

            def get_cleaned_path(base_path: Path):
                parts = list(base_path.parts)
                for part in base_path.parts:
                    if "build" in part:
                        break
                    parts.remove(part)
                return Path("/".join(parts))

            if "target_path" in unit_dict:
                target_path = root_path / get_cleaned_path(Path(unit_dict["target_path"]))
                self.objdiff_json["units"][i]["target_path"] = str(target_path.resolve())

            if "base_path" in unit_dict:
                base_path = root_path / get_cleaned_path(Path(unit_dict["base_path"]))
                self.objdiff_json["units"][i]["base_path"] = str(base_path)

            if "scratch" in unit_dict:
                ctx_path = get_cleaned_path(Path(unit_dict["scratch"]["ctx_path"]))
                self.objdiff_json["units"][i]["scratch"]["ctx_path"] = str(ctx_path)

                entry = self.get_entry_from_name(units, self.objdiff_json["units"][i]["name"])
                if entry is not None:
                    self.objdiff_json["units"][i]["scratch"]["c_flags"] = entry.get_all_cflags()
                    self.objdiff_json["units"][i]["scratch"]["compiler"] = entry.mw_version

    def get_entry_from_name(self, units: list[ConfigUnit], base_name: str):
        split = base_name.split("/")
        split.pop(0)

        name = Path(base_name).stem
        for entry in units:
            if name in entry.name:
                return entry

        return None

class ObjdiffConfig:
    def __init__(self, root_path: Path):
        self.root_path = root_path
        self.versions: list[ConfigVersion] = []

    def get_json(self):
        assert len(self.versions) > 0, "no versions?"
        out_json = copy.copy(self.versions[0].objdiff_json)

        # merge units
        for i, entry in enumerate(self.versions):
            if i > 0:
                out_json["units"].extend(entry.objdiff_json["units"])

        return out_json

    @staticmethod
    def new(path: str):
        json_path = Path(path).resolve()
        cfg_json = json.loads(json_path.read_text())
        cfg = ObjdiffConfig(Path(cfg_json["root_path"]))

        units: list[ConfigUnit] = []
        for name, options in cfg_json["units"].items():
            units.append(ConfigUnit(name, options))

        multi_version = len(cfg_json["versions"].items()) > 1
        for name, options in cfg_json["versions"].items():
            cfg.versions.append(ConfigVersion(name if multi_version else None, options, units, cfg.root_path))

        return cfg


def main():
    cfg = ObjdiffConfig.new("build/objdiff_cfg.json")

    out_json = cfg.get_json()
    out_path = Path("objdiff.json").resolve()
    with out_path.open("w") as f:
        json.dump(out_json, f, indent=2)


if __name__ == "__main__":
    main()
