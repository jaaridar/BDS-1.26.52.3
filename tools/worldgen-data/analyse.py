#!/usr/bin/env python3
"""Index the recovered Ghidra pseudocode for world-generation study.

Reads the committed evidence tree (triage + decompiled shards) and prints or
writes compact summaries: which functions were recovered per class, how large
they are, what they call, and which interesting strings/constants they touch.

    python3 tools/worldgen-data/analyse.py research/proprietary/bds-1.26.52.3/worldgen \
        [--class OverworldGeneratorMultinoise] [--top 20] [--dump 0x517cd10]

Output is derived from the proprietary binary (see docs/licensing.md).
"""

from __future__ import annotations

import argparse
import collections
import glob
import json
import os
import re
import sys

FUNC_HEADER = re.compile(r"^ \* Entry: 0x(?P<entry>[0-9a-f]+).*?\(ELF vaddr 0x(?P<elf>[0-9a-f]+)\)", re.M)
LABEL = re.compile(r"^ \* Label: (?P<label>.*)$", re.M)
SIZE = re.compile(r"^ \* Body:\s+(?P<body>.*)$", re.M)
CONSTANT = re.compile(r"\b(0x[0-9a-fA-F]{4,})\b")
FLOAT = re.compile(r"(?<![\w.])(\d+\.\d+(?:e[-+]?\d+)?)f?(?![\w.])")
CALL = re.compile(r"\b(func_0x[0-9a-f]+|wg_[A-Za-z0-9_]+)\s*\(")


def iter_functions(root: str):
    for path in sorted(glob.glob(os.path.join(root, "decompiled", "shard-*", "functions", "*.c"))):
        try:
            text = open(path, encoding="utf-8", errors="replace").read()
        except OSError:
            continue
        header = FUNC_HEADER.search(text)
        label = LABEL.search(text)
        body = SIZE.search(text)
        if not header or not label:
            continue
        yield {
            "path": path,
            "entry_program": int(header.group("entry"), 16),
            "entry_elf": int(header.group("elf"), 16),
            "label": label.group("label").strip(),
            "body": body.group("body").strip() if body else "",
            "text": text,
        }


def function_size(function) -> int:
    total = 0
    for start, end in re.findall(r"\[([0-9a-f]+), ([0-9a-f]+)\]", function["body"]):
        total += int(end, 16) - int(start, 16)
    return total


def body_of(function) -> str:
    """Pseudocode without the header comment and the referenced-strings block."""
    text = function["text"]
    start = text.find("*/")
    if start >= 0:
        text = text[start + 2:]
    marker = text.find("/* ---- referenced strings ----")
    if marker >= 0:
        text = text[:marker]
    marker = text.find("/* ---- assembly ---- */")
    if marker >= 0:
        text = text[:marker]
    return text


def referenced_strings(function):
    text = function["text"]
    marker = text.find("/* ---- referenced strings ----")
    if marker < 0:
        return []
    block = text[marker:]
    end = block.find("*/", 4)
    out = []
    for line in block[4:end].splitlines():
        line = line.strip()
        if line.startswith("*"):
            out.append(line[1:].strip())
    return out


def main(argv=None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("root")
    parser.add_argument("--class-name", dest="class_name", default=None)
    parser.add_argument("--top", type=int, default=25)
    parser.add_argument("--dump", default=None, help="ELF vaddr of a function to print")
    parser.add_argument("--write-index", default=None, help="write a TSV index here")
    args = parser.parse_args(argv)

    functions = list(iter_functions(args.root))
    if not functions:
        print("no decompiled functions found under", args.root, file=sys.stderr)
        return 1

    classes = collections.Counter()
    slots = collections.defaultdict(list)
    for function in functions:
        label = function["label"]
        if "::vslot" in label:
            class_name, _, index = label.partition("::vslot")
        elif label.startswith("string:"):
            class_name, index = "string-ref", "-"
        elif label.startswith("callee-of:") or label.startswith("caller-of"):
            class_name, index = label.split(":", 1)[0], "-"
        else:
            class_name, index = label, "-"
        classes[class_name] += 1
        slots[class_name].append((int(index) if index.isdigit() else -1, function))

    print("recovered functions: %d" % len(functions))
    print("classes represented: %d" % len(classes))
    print()
    print("%-52s %5s" % ("class", "fns"))
    for name, count in classes.most_common(args.top):
        print("%-52s %5d" % (name, count))

    if args.write_index:
        with open(args.write_index, "w") as handle:
            handle.write("class\tslot\telf_vaddr\tsize\tcalls\treferenced_strings\tfile\n")
            for name in sorted(slots):
                for index, function in sorted(slots[name], key=lambda item: item[0]):
                    calls = sorted(set(CALL.findall(body_of(function))))
                    strings = referenced_strings(function)
                    handle.write("%s\t%d\t0x%x\t%d\t%s\t%s\t%s\n" % (
                        name, index, function["entry_elf"], function_size(function),
                        ",".join(calls[:12]), " | ".join(strings[:6]).replace("\t", " "),
                        os.path.basename(function["path"])))
        print("\nindex written to %s" % args.write_index)

    if args.class_name:
        name = args.class_name
        print("\n=== %s ===" % name)
        for index, function in sorted(slots.get(name, []), key=lambda item: item[0]):
            calls = sorted(set(CALL.findall(body_of(function))))
            strings = referenced_strings(function)
            print("slot %-3d 0x%-10x %6d bytes  calls=%d  %s" % (
                index, function["entry_elf"], function_size(function), len(calls),
                ("; ".join(strings[:4]) if strings else "")))
            if calls:
                print("         calls: %s" % ", ".join(calls[:10]))

    if args.dump:
        target = int(args.dump, 16)
        for function in functions:
            if function["entry_elf"] == target or function["entry_program"] == target:
                print("\n=== 0x%x %s ===" % (function["entry_elf"], function["label"]))
                print(body_of(function).strip())
                break
        else:
            print("function 0x%x not found in evidence" % target, file=sys.stderr)
            return 1
    return 0


if __name__ == "__main__":
    sys.exit(main())
