#!/usr/bin/env python3
"""Decode Mojang's ``.brarchive`` containers (research utility).

``*.brarchive`` files shipped with the Bedrock dedicated server are a simple
archive: an 8-byte magic, a ``uint32`` entry count, a ``uint32`` version, then
``count`` fixed 256-byte name records (``uint8`` name length, name, NUL
padding) followed by the concatenated, uncompressed JSON payloads.

This tool is used to read the proprietary vanilla data (biomes, features,
feature rules) that the server loads at startup, so the data-driven half of
world generation can be studied next to the decompiled code.

    python3 tools/worldgen-data/brarchive.py behavior_packs/vanilla/__brarchive/biomes.brarchive OUTDIR

Output is proprietary Mojang data - see docs/licensing.md.
"""

from __future__ import annotations

import argparse
import json
import os
import re
import sys

MAGIC_SIZE = 8
HEADER_SIZE = 16
RECORD_SIZE = 256
NAME_RE = re.compile(rb"[A-Za-z0-9_/.\-]+")


def read_index(data: bytes):
    count = int.from_bytes(data[8:12], "little")
    version = int.from_bytes(data[12:16], "little")
    entries = []
    for index in range(count):
        start = HEADER_SIZE + RECORD_SIZE * index
        record = data[start:start + RECORD_SIZE]
        name_length = record[0]
        name = record[1:1 + name_length].decode("ascii", "replace").strip("\x00")
        if not name:
            match = NAME_RE.search(record)
            name = match.group().decode("ascii", "replace") if match else "entry_%d" % index
        entries.append({"name": name})
    return version, entries


def decode(data: bytes):
    version, entries = read_index(data)
    payload_start = HEADER_SIZE + RECORD_SIZE * len(entries)
    decoder = json.JSONDecoder()
    position = payload_start
    objects = {}
    for entry in entries:
        while position < len(data) and data[position] in b" \r\n\t":
            position += 1
        try:
            value, consumed = decoder.raw_decode(data[position:].decode("utf-8", "replace"))
        except json.JSONDecodeError:
            break
        entry["size"] = consumed
        objects[entry["name"]] = value
        position += consumed
    return {"version": version, "entries": entries, "documents": objects,
            "consumed": position, "total": len(data)}


def main(argv=None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("archive")
    parser.add_argument("outdir", nargs="?")
    parser.add_argument("--list", action="store_true")
    args = parser.parse_args(argv)

    data = open(args.archive, "rb").read()
    decoded = decode(data)
    print("version: %d" % decoded["version"])
    print("entries: %d" % len(decoded["entries"]))
    print("payload bytes consumed: %d / %d" % (decoded["consumed"], decoded["total"]))
    if decoded["consumed"] != decoded["total"]:
        print("warning: trailing bytes not consumed", file=sys.stderr)
    if args.list or not args.outdir:
        for entry in decoded["entries"]:
            print("%8d  %s" % (entry["size"], entry["name"]))
        return 0

    os.makedirs(args.outdir, exist_ok=True)
    for name, document in decoded["documents"].items():
        path = os.path.join(args.outdir, name)
        os.makedirs(os.path.dirname(path) or ".", exist_ok=True)
        with open(path, "w") as handle:
            json.dump(document, handle, indent=1, sort_keys=True)
    print("wrote %d documents to %s" % (len(decoded["documents"]), args.outdir))
    return 0


if __name__ == "__main__":
    sys.exit(main())
