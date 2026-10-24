"""Print a readable digest of a string scan: literal, address, and neighbours.

`scan_strings` keeps the bytes around each hit because that neighbourhood is
where a record's other fields sit. Printing them without escaping is what makes
the scan usable: a JSON fragment reads as JSON instead of as a latin-1 escape.
"""

import json
import sys


def main(argv):
    if len(argv) < 2:
        print("usage: print-string-hits.py scan.json", file=sys.stderr)
        return 2
    scan = json.load(open(argv[1]))
    hits = scan.get("strings", [])
    salt = [h for h in hits if "salt" in h["literal"]]
    print("text hits:", len(hits), "salt needles:", len(salt))
    for hit in hits:
        context = "".join(c if 32 <= ord(c) < 127 else " " for c in hit["context"])
        print(repr(hit["literal"]), hex(hit["ghidra"]), hit["section"], context[:160])
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
