#!/usr/bin/env python3
"""Summarise the vanilla world-generation data that the server loads at boot.

Reads the decoded ``*.biome.json`` documents (see brarchive.py) plus the
unpacked ``definitions/features`` / ``definitions/feature_rules`` trees and
writes compact TSV tables for the world-generation research notes.

Output is derived from proprietary Mojang data (see docs/licensing.md).

    python3 tools/worldgen-data/summarize.py BIOME_DIR OUT_DIR [DEFINITIONS_DIR]
"""

from __future__ import annotations

import argparse
import glob
import json
import os
import re
import sys


def lenient_json(path: str):
    """Bedrock JSON allows comments and trailing commas."""
    text = open(path, encoding="utf-8", errors="replace").read()
    text = re.sub(r"//[^\n]*", "", text)
    text = re.sub(r"/\*.*?\*/", "", text, flags=re.S)
    text = re.sub(r",(\s*[}\]])", r"\1", text)
    return json.loads(text)


def format_value(value) -> str:
    if isinstance(value, str):
        return value
    return json.dumps(value, sort_keys=True)


def main(argv=None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("biome_dir")
    parser.add_argument("out_dir")
    parser.add_argument("definitions", nargs="?", default="definitions")
    args = parser.parse_args(argv)
    os.makedirs(args.out_dir, exist_ok=True)

    # ---- biome table ----------------------------------------------------
    biomes = []
    for path in sorted(glob.glob(os.path.join(args.biome_dir, "*.biome.json"))):
        document = json.load(open(path))
        biome = document["minecraft:biome"]
        components = biome["components"]
        identifier = biome["description"]["identifier"]
        climate = components.get("minecraft:climate", {})
        height = components.get("minecraft:overworld_height", {})
        builder = components.get("minecraft:surface_builder", {}).get("builder", {})
        rules = components.get("minecraft:overworld_generation_rules", {})
        multinoise = components.get("minecraft:multinoise_generation_rules", {})
        biomes.append({
            "id": identifier,
            "temperature": climate.get("temperature"),
            "downfall": climate.get("downfall"),
            "humidity": components.get("minecraft:humidity"),
            "snow": format_value(climate.get("snow_accumulation")),
            "noise_type": height.get("noise_type"),
            "noise_params": format_value(height.get("noise_params")),
            "surface_builder": builder.get("type"),
            "surface_keys": ",".join(sorted(builder)),
            "climates": format_value(rules.get("generate_for_climates")),
            "hills": format_value(rules.get("hills_transformation")),
            "mutate": format_value(rules.get("mutate_transformation")),
            "river": format_value(rules.get("river_transformation")),
            "shore": format_value(rules.get("shore_transformation")),
            "edge": format_value(rules.get("edge_transformation")),
            "other_rules": ",".join(sorted(set(rules) - {
                "generate_for_climates", "hills_transformation",
                "mutate_transformation", "river_transformation",
                "shore_transformation", "edge_transformation"})),
            "mn_altitude": multinoise.get("target_altitude"),
            "mn_temperature": multinoise.get("target_temperature"),
            "mn_humidity": multinoise.get("target_humidity"),
            "mn_weirdness": multinoise.get("target_weirdness"),
            "mn_weight": multinoise.get("weight"),
            "tags": ",".join(components.get("minecraft:tags", {}).get("tags", [])),
        })

    columns = ["id", "temperature", "downfall", "humidity", "snow", "noise_type",
               "noise_params", "surface_builder", "surface_keys", "climates",
               "hills", "mutate", "river", "shore", "edge", "other_rules",
               "mn_altitude", "mn_temperature", "mn_humidity", "mn_weirdness",
               "mn_weight", "tags"]
    with open(os.path.join(args.out_dir, "biome-table.tsv"), "w") as handle:
        handle.write("\t".join(columns) + "\n")
        for row in biomes:
            handle.write("\t".join(str(row.get(column, "")) if row.get(column) is not None else ""
                                   for column in columns) + "\n")

    # ---- surface builders ----------------------------------------------
    builders = {}
    for path in sorted(glob.glob(os.path.join(args.biome_dir, "*.biome.json"))):
        document = json.load(open(path))
        biome = document["minecraft:biome"]
        builder = biome["components"].get("minecraft:surface_builder", {}).get("builder")
        if builder:
            builders.setdefault(builder.get("type"), set()).update(builder.keys())
    with open(os.path.join(args.out_dir, "surface-builders.tsv"), "w") as handle:
        handle.write("builder\tparameters\n")
        for name, keys in sorted(builders.items()):
            handle.write("%s\t%s\n" % (name, ",".join(sorted(keys))))

    # ---- feature rules --------------------------------------------------
    rule_rows = []
    pass_counts = {}
    for path in sorted(glob.glob(os.path.join(args.definitions, "feature_rules", "*.json"))):
        rule = lenient_json(path)["minecraft:feature_rules"]
        description = rule.get("description", {})
        conditions = rule.get("conditions", {})
        distribution = rule.get("distribution", {})
        placement = conditions.get("placement_pass")
        pass_counts[placement] = pass_counts.get(placement, 0) + 1
        filters = conditions.get("minecraft:biome_filter", [])
        rule_rows.append({
            "rule": description.get("identifier"),
            "places": description.get("places_feature"),
            "pass": placement,
            "iterations": format_value(distribution.get("iterations")),
            "x": format_value(distribution.get("x")),
            "y": format_value(distribution.get("y")),
            "z": format_value(distribution.get("z")),
            "filters": format_value(filters),
            "allowed_biomes": format_value(conditions.get("minecraft:biome_filter")),
            "other_conditions": ",".join(sorted(set(conditions) - {
                "placement_pass", "minecraft:biome_filter"})),
        })
    with open(os.path.join(args.out_dir, "feature-rules.tsv"), "w") as handle:
        handle.write("rule\tplaces\tpass\titerations\ty\tx\tz\tother_conditions\n")
        for row in rule_rows:
            handle.write("\t".join(str(row.get(column, "")) for column in
                                   ("rule", "places", "pass", "iterations", "y", "x", "z",
                                    "other_conditions")) + "\n")

    # ---- feature types --------------------------------------------------
    type_counts = {}
    for path in sorted(glob.glob(os.path.join(args.definitions, "features", "*.json"))):
        document = lenient_json(path)
        for key in document:
            if key.startswith("minecraft:") and key != "format_version":
                type_counts[key] = type_counts.get(key, 0) + 1
    with open(os.path.join(args.out_dir, "feature-types.tsv"), "w") as handle:
        handle.write("feature_type\tcount\n")
        for name, count in sorted(type_counts.items(), key=lambda item: -item[1]):
            handle.write("%s\t%d\n" % (name, count))

    print("biomes: %d" % len(biomes))
    print("surface builders: %d" % len(builders))
    print("feature rules: %d" % len(rule_rows))
    print("placement passes: %s" % json.dumps(pass_counts, sort_keys=True))
    print("feature types: %d" % len(type_counts))
    print("written to %s" % args.out_dir)
    return 0


if __name__ == "__main__":
    sys.exit(main())
