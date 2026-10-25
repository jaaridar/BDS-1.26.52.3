#!/usr/bin/env python3
"""Turn a reference scan into decompiler seeds.

Two jobs, both required before Ghidra can say anything useful about a string:

  1. map every reference site to the start of the function containing it -- a
     site on its own decompiles as a fragment that does not include the code
     around it;
  2. emit the deduplicated seed list on stdout, ready for
     `DumpNoiseLattice.java`.

The mapping is delegated to `scan_binary.function_start`, which uses the
linker's own layout (a function ends in `ret` followed by padding).

Usage:
  link-refs.py --scan scan-refs/scan.json --binary bedrock_server [--limit 24]
"""

import argparse
import json
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from importlib.machinery import SourceFileLoader

scan = SourceFileLoader("scan_binary", os.path.join(os.path.dirname(os.path.abspath(__file__)), "scan-binary.py")).load_module()


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--scan", required=True)
    parser.add_argument("--binary", required=True)
    parser.add_argument("--limit", type=int, default=24)
    parser.add_argument("--rewrite", action="store_true", help="write function_starts back into the scan")
    args = parser.parse_args()

    report = json.load(open(args.scan))
    sections = scan.read_sections(args.binary)
    sites = sorted({entry["site"] for entries in report.get("refs", {}).values() for entry in entries})
    starts = {}
    for site in sites:
        guess = scan.function_start(args.binary, sections, site)
        starts[hex(site)] = None if guess is None else hex(guess)

    resolved = sum(1 for value in starts.values() if value)
    print(f"reference sites: {len(sites)}, mapped to a function start: {resolved}", file=sys.stderr)

    if args.rewrite:
        report["function_starts"] = starts
        with open(args.scan, "w") as handle:
            json.dump(report, handle, indent=2)

    seeds = sorted({int(value, 16) for value in starts.values() if value})
    if not seeds:
        print("no function starts resolved; falling back to the raw sites", file=sys.stderr)
        seeds = sites
    seeds = seeds[: args.limit]
    print(",".join(hex(seed) for seed in seeds))
    print(f"{len(seeds)} seeds", file=sys.stderr)


if __name__ == "__main__":
    main()
