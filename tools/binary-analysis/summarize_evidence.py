#!/usr/bin/env python3
"""Summarise headless-Ghidra evidence for the proprietary BDS binary.

This tool only reads the TSV/Markdown evidence produced by
tools/binary-analysis/ghidra/RecoverWorldgen.java. It is MIT-licensed
tooling; the evidence it consumes is not.

Example:
    python3 tools/binary-analysis/summarize_evidence.py \
        research/proprietary/bds-1.26.52.3/ghidra
"""

from __future__ import annotations

import argparse
import collections
import os
import re
import sys

SOURCE_PATH = re.compile(r"(/[A-Za-z0-9_./+-]*?\.(?:cpp|h|hpp))")
KEYWORDS = (
    "generator", "biome", "noise", "chunk", "surface", "carver", "structure",
    "feature", "density", "aquifer", "jigsaw", "heightmap", "terrain",
    "random", "xoroshiro", "dimension", "levelgen", "ore", "spawn",
)


def read_tsv(path):
    if not os.path.exists(path):
        return []
    with open(path, encoding="utf-8", errors="replace") as handle:
        header = handle.readline().rstrip("\n").split("\t")
        rows = []
        for line in handle:
            parts = line.rstrip("\n").split("\t")
            if len(parts) < len(header):
                parts += [""] * (len(header) - len(parts))
            rows.append(dict(zip(header, parts)))
        return rows


def keywords_of(name):
    lowered = name.lower()
    return [k for k in KEYWORDS if k in lowered]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("evidence_dir")
    ap.add_argument("--out", default=None)
    args = ap.parse_args()

    base = args.evidence_dir
    classes = read_tsv(os.path.join(base, "VTABLE-CLASSES.tsv"))
    slots = read_tsv(os.path.join(base, "vtable-slots.tsv"))
    functions = read_tsv(os.path.join(base, "functions.tsv"))

    out = args.out or os.path.join(base, "SUMMARY.md")
    print(f"classes={len(classes)} slots={len(slots)} functions={len(functions)}")

    # --- class families -----------------------------------------------------
    families = collections.defaultdict(list)
    for row in classes:
        name = row.get("demangled_name") or row.get("mangled_name") or ""
        if not name:
            continue
        keys = keywords_of(name)
        if not keys:
            continue
        families[keys[0]].append(name)

    unique_classes = sorted({(r.get("demangled_name") or r.get("mangled_name")) for r in classes})

    # --- function attribution by referenced source file ---------------------
    attribution = []
    by_file = collections.defaultdict(list)
    for row in functions:
        strings = row.get("strings", "")
        files = sorted({m.group(1) for m in SOURCE_PATH.finditer(strings)})
        bases = sorted({os.path.basename(f) for f in files})
        for name in bases:
            by_file[name].append(row.get("address", ""))
        if bases:
            attribution.append((row.get("address", ""), row.get("owners", ""), ", ".join(bases),
                                row.get("instructions", "")))

    # --- hub functions (most callers) --------------------------------------
    callers = collections.Counter()
    for row in functions:
        for callee in filter(None, row.get("callees", "").split(",")):
            callers[callee] += 1

    with open(out, "w", encoding="utf-8") as handle:
        handle.write("# Evidence summary\n\n")
        handle.write("> Derived from the proprietary BDS binary by static analysis only.\n\n")
        handle.write(f"- vtables: `{len(classes)}`\n")
        handle.write(f"- distinct class names: `{len(unique_classes)}`\n")
        handle.write(f"- selected vtable slots: `{len(slots)}`\n")
        handle.write(f"- functions analysed: `{len(functions)}`\n\n")

        handle.write("## Class families\n\n")
        for key in KEYWORDS:
            names = sorted(set(families.get(key, [])))
            if not names:
                continue
            handle.write(f"### {key} ({len(names)})\n\n")
            for name in names[:120]:
                handle.write(f"- `{name}`\n")
            if len(names) > 120:
                handle.write(f"- … {len(names) - 120} more\n")
            handle.write("\n")

        handle.write("## Functions attributed to a source file\n\n")
        handle.write("String literals in the binary include the original source paths\n")
        handle.write("(`/mnt/vss/_work/1/s/...`), so a function that references such a\n")
        handle.write("path can be attributed to that translation unit.\n\n")
        handle.write("| function | class::slot | source file | instructions |\n")
        handle.write("|---|---|---|---|\n")
        for address, owners, files, instructions in attribution[:400]:
            handle.write(f"| `{address}` | {owners} | {files} | {instructions} |\n")
        if len(attribution) > 400:
            handle.write(f"\n… {len(attribution) - 400} more\n")

        handle.write("\n## Translation units seen in the evidence\n\n")
        for name in sorted(by_file):
            handle.write(f"- `{name}` — {len(by_file[name])} function(s)\n")

        handle.write("\n## Hub functions (most distinct callers)\n\n")
        for address, count in callers.most_common(40):
            handle.write(f"- `{address}` called by {count}\n")
    print(f"wrote {out}")


if __name__ == "__main__":
    sys.exit(main())
