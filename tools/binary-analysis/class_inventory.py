#!/usr/bin/env python3
"""Group the recovered RTTI class inventory into a worldgen subsystem map.

Input is ``VTABLE-CLASSES.tsv`` produced by
``tools/binary-analysis/ghidra/RecoverWorldgen.java`` (columns: mangled_name,
demangled_name, typeinfo_address, vtable_address_point, offset_to_top,
slot_count, selected).  Output is Markdown.

This tool is MIT-licensed; the evidence it reads is not.

Example:
    python3 tools/binary-analysis/class_inventory.py \
        research/proprietary/bds-1.26.52.3/ghidra --out INVENTORY.md
"""

from __future__ import annotations

import argparse
import collections
import os
import re
import sys

# Subsystem -> (regex on the bare class name, human description)
SUBSYSTEMS = [
    ("Generators", re.compile(r"(World|Overworld|Nether|TheEnd|Void|Flat|Multinoise).*Generator|Generator.*(Multinoise|2d)$")),
    ("Biome sources", re.compile(r"BiomeSource|OverworldBiomeSource|NodeGraph|ClimateSelector|BiomeVolume|BiomeChunkVolume")),
    ("Noise", re.compile(r"Noise(?!BasedColor)|Octave|Perlin|Simplex|Density")),
    ("Surface building", re.compile(r"SurfaceBuilder|SurfaceSystem|SurfaceLevel|SurfaceMaterial|SurfaceRule")),
    ("Chunk volume / cache", re.compile(r"ChunkVolume|VolumeOf|LevelChunk|ChunkView|ChunkSource|ChunkCache|Blender|BlendingData")),
    ("Carvers", re.compile(r"Carver|Canyon|Cave")),
    ("Features", re.compile(r"Feature$|Feature[A-Z]")),
    ("Structures", re.compile(r"Structure|Jigsaw|Template|Pool|Piece")),
    ("Processors / rules", re.compile(r"processors::|BlockRules|PosRules|Rule|Processor")),
    ("Placement / height", re.compile(r"Placement|HeightProvider|Heightmap|ConstantHeight|UniformHeight|TrapezoidHeight")),
    ("Random", re.compile(r"Random|Xoroshiro|Mersenne|LegacyRandom|PositionalRandom")),
    ("Biome JSON components", re.compile(r"BiomeJsonComponent|BiomeJsonDocument|BiomeComponents|GenerationRules|MountainParameters|SurfaceMaterialAdjustments")),
    ("Block-state / noise specs", re.compile(r"NoiseBlockSpecifier|NoiseDescriptor|BlockStateProvider|BlockSpecifier|WeightedBlock")),
    ("Climate / parameters", re.compile(r"Climate|MultiNoise|Multinoise|ParameterPoint|ParameterList|VanillaTerrainParameters")),
    ("Dimensions", re.compile(r"Dimension|LevelSettings|LevelData|WorldSettings")),
]

NOISE_TERMS = re.compile(r"^(?P<base>[A-Za-z_][A-Za-z0-9_]*)(<.*)?$")


def read_tsv(path):
    with open(path, encoding="utf-8", errors="replace") as handle:
        header = handle.readline().rstrip("\n").split("\t")
        rows = []
        for line in handle:
            parts = line.rstrip("\n").split("\t")
            if len(parts) < len(header):
                parts += [""] * (len(header) - len(parts))
            rows.append(dict(zip(header, parts)))
        return rows


def bare_name(name):
    """Strip template arguments and namespaces that add no information."""
    name = name.replace("std::__1::", "")
    # collapse balanced <...> groups
    out = []
    depth = 0
    for char in name:
        if char == "<":
            depth += 1
            continue
        if char == ">":
            depth = max(0, depth - 1)
            continue
        if depth == 0:
            out.append(char)
    return "".join(out).strip()


def last_component(name):
    pieces = [p for p in re.split(r"::", name) if p]
    return pieces[-1] if pieces else name


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("evidence_dir")
    ap.add_argument("--out", default=None)
    ap.add_argument("--limit", type=int, default=40)
    args = ap.parse_args()

    rows = read_tsv(os.path.join(args.evidence_dir, "VTABLE-CLASSES.tsv"))
    classes = {}
    for row in rows:
        mangled = row.get("mangled_name", "")
        if not mangled or mangled[0].isdigit() or not re.match(r"^[0-9]+[A-Za-z_]", mangled):
            # demangled-only or anonymous entry
            pass
        demangled = row.get("demangled_name", "")
        name = demangled if demangled else mangled
        name = bare_name(name)
        if not name or name.startswith("?"):
            continue
        try:
            slots = int(row.get("slot_count", "0") or 0)
        except ValueError:
            slots = 0
        previous = classes.get(name)
        if previous is None or slots > previous["slots"]:
            classes[name] = {
                "name": name,
                "slots": slots,
                "typeinfo": row.get("typeinfo_address", ""),
                "vtable": row.get("vtable_address_point", ""),
                "selected": row.get("selected", "yes" if row.get("selected") else ""),
            }

    buckets = collections.OrderedDict((name, []) for name, _ in SUBSYSTEMS)
    other = []
    for name, info in classes.items():
        target = last_component(name)
        placed = False
        for label, pattern in SUBSYSTEMS:
            if pattern.search(target) or pattern.search(name):
                buckets[label].append(info)
                placed = True
                break
        if not placed and re.search(r"(world|level|gen|chunk|biome)", name, re.I):
            other.append(info)

    out_path = args.out or os.path.join(args.evidence_dir, "INVENTORY.md")
    with open(out_path, "w", encoding="utf-8") as handle:
        handle.write("# Worldgen class inventory (recovered from RTTI)\n\n")
        handle.write("> Derived from the proprietary BDS binary by static analysis only.\n")
        handle.write("> Generated by `tools/binary-analysis/class_inventory.py`.\n\n")
        handle.write(f"- polymorphic classes recovered: `{len(rows)}` vtable entries, ")
        handle.write(f"`{len(classes)}` distinct class names\n")
        handle.write(f"- subsystem buckets: `{len(buckets)}`\n\n")
        handle.write("Slot counts are the number of virtual functions observed in the "
                     "largest recovered vtable for that class; they are a good proxy for "
                     "the size of the interface.\n\n")

        for label, _ in SUBSYSTEMS:
            infos = sorted(buckets[label], key=lambda i: (-i["slots"], i["name"]))
            if not infos:
                continue
            handle.write(f"## {label} ({len(infos)})\n\n")
            handle.write("| class | vtable slots | vtable |\n|---|---|---|\n")
            for info in infos[: args.limit]:
                handle.write(f"| `{info['name']}` | {info['slots']} | `{info['vtable']}` |\n")
            if len(infos) > args.limit:
                handle.write(f"\n… {len(infos) - args.limit} more\n")
            handle.write("\n")

        if other:
            handle.write(f"## Other world/level classes ({len(other)})\n\n")
            handle.write("| class | vtable slots |\n|---|---|\n")
            for info in sorted(other, key=lambda i: (-i["slots"], i["name"]))[: args.limit]:
                handle.write(f"| `{info['name']}` | {info['slots']} |\n")
            handle.write("\n")

    print(f"wrote {out_path}: {len(classes)} classes in {len(buckets)} buckets")
    return 0


if __name__ == "__main__":
    sys.exit(main())
