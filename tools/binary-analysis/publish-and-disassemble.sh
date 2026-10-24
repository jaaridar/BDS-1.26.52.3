#!/bin/bash
# Publish the slices the static analysis reads, then disassemble the code that
# names structures -- and keep the process's own log in the repository.
#
# Job logs are not reachable from every environment that works on this, so the
# evidence has to carry its own diagnostics. Every command's status is written to
# `status.txt` next to the disassembly, and the script exits non-zero if the
# disassembly produced nothing, because a step that quietly does nothing looks
# exactly like a step that succeeded.
set -uo pipefail

EVIDENCE=${EVIDENCE:?EVIDENCE must point at research/proprietary/bds-<version>}
BINARY=${1:-bedrock_server}
OUT=$EVIDENCE/structures/disasm-refs
SECTIONS=$EVIDENCE/binary-sections
LOG=$OUT/status.txt

mkdir -p "$OUT" "$SECTIONS"
exec > >(tee "$LOG") 2>&1

echo "== $(date -u) publish-and-disassemble"
echo "binary: $BINARY ($(stat -c%s "$BINARY" 2>/dev/null) bytes)"

status=0
python3 -m pip install --break-system-packages --quiet capstone
echo "pip exit=$?"
python3 -c 'import capstone; print("capstone", capstone.__version__)' || status=1

# .text is 174 MiB of the binary's 244. Every reference site for a structure name
# sits inside about 3 MiB of it, and the data sections are 20 MiB together, so
# these are the slices worth keeping.
python3 tools/binary-analysis/extract-sections.py --binary "$BINARY" \
  --out "$SECTIONS" --ranges 0x4e00000:0x5100000
echo "extract exit=$? (this status is the extract's)"
ls -l "$SECTIONS" || status=1

if [ ! -f "$EVIDENCE/structures/scan-refs/scan.json" ]; then
  echo "no reference table; run the string scan first" >&2
  status=1
else
  python3 tools/binary-analysis/disassemble-refs.py \
    --manifest "$SECTIONS/manifest.json" \
    --scan "$EVIDENCE/structures/scan-refs/scan.json" \
    --out "$OUT" --immediates 1000000:2147483648
  echo "disassemble exit=$?"
fi

windows=$(ls "$OUT"/disasm-*.txt 2>/dev/null | wc -l)
echo "windows written: $windows"
ls -l "$OUT" || true
if [ "$windows" -eq 0 ]; then
  echo "FAIL: no disassembly windows were written" >&2
  status=1
fi
echo "overall status=$status"
exit "$status"
