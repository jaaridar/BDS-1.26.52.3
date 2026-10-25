#!/bin/bash
# Publish the slices of the binary that the static analysis reads.
#
# The binary is 244 MiB and lives on a release asset, so the analysis should not
# need it twice: the two windows of .text that hold every structure-name
# reference site are cut out here and committed, after which the disassembly and
# the record scans run anywhere with nothing but a checkout.
#
# Job logs are not reachable from every environment that works on this, so the
# step reports what it did into `status.txt` inside the evidence directory, and it
# fails when the slices it is supposed to publish are not there.
set -uo pipefail

EVIDENCE=${EVIDENCE:?EVIDENCE must point at research/proprietary/bds-<version>}
BINARY=${1:-bedrock_server}
SECTIONS=$EVIDENCE/binary-sections
OUT=$SECTIONS/publish-status.txt

mkdir -p "$SECTIONS"
exec > >(tee "$OUT") 2>&1

echo "== $(date -u) publish-slices"
echo "binary: $BINARY ($(stat -c%s "$BINARY" 2>/dev/null) bytes)"

status=0
# Every reference site for a structure name lies in one of two windows of .text:
# the first holds the code that names them, the second the code that registers
# them. Together they are 14 MiB of a 174 MiB section.
RANGES=0x4e00000:0x5100000,0xc8f0000:0xd2a0000
python3 tools/binary-analysis/extract-sections.py --binary "$BINARY" \
  --out "$SECTIONS" --ranges "$RANGES"
if [ $? -ne 0 ]; then
  echo "FAIL: extract-sections.py rejected the ranges"
  status=1
fi

slices=$(ls "$SECTIONS"/range-*.bin 2>/dev/null | wc -l)
echo "range slices present: $slices"
if [ "$slices" -lt 2 ]; then
  echo "FAIL: expected two range slices"
  status=1
fi
du -sh "$SECTIONS"/*.bin 2>/dev/null || true

git config user.name 'github-actions[bot]'
git config user.email '41898282+github-actions[bot]@users.noreply.github.com'
git add -A "$SECTIONS" || true
if git diff --cached --quiet; then
  echo "nothing new to commit"
else
  git commit -m "research: publish the code slices the static analysis reads"
  for attempt in 1 2 3 4 5; do
    if git pull --rebase origin "${GITHUB_REF_NAME}" &&
      git push origin "HEAD:${GITHUB_REF_NAME}"; then
      echo "pushed"
      break
    fi
    sleep $((attempt * 5))
  done
fi

echo "overall status=$status"
exit "$status"
