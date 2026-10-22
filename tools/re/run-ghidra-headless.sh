#!/usr/bin/env bash
# Local-only Ghidra headless harness (generic; no target-specific logic).
#
# Imports ONE binary you point it at into a throwaway Ghidra project and
# runs tools/re/ghidra/ExportFunctions.java. All output lands in
# re-output/ at the repository root, which is gitignored. For proprietary
# targets such as Mojang's bedrock_server this is for private,
# license-permitting interoperability study on your own machine ONLY:
# never commit, publish, or port decompiled output into this repository
# (clean-room policy - see tools/re/README.md and docs/licensing.md).
#
# Requirements (none of these exist in the Arena sandbox, by design):
#   - JDK 17+ and Ghidra 11.x: https://github.com/NationalSecurityAgency/ghidra/releases
#   - GHIDRA_HOME (or analyzeHeadless on PATH)
#   - For a ~256 MB stripped C++ server binary: realistically >= 16 GB RAM
#     assigned to Ghidra, tens of GB of project disk, and hours of CPU for
#     the initial auto-analysis. Raise MAXMEM in Ghidra's
#     support/launch.properties before you start.
#
# Usage:
#   export GHIDRA_HOME=/opt/ghidra
#   BINARY=/path/on/your/machine/bedrock_server \
#   I_OWN_THIS_BINARY_AND_OUTPUT_STAYS_LOCAL=1 \
#     tools/re/run-ghidra-headless.sh
set -euo pipefail

cd "$(dirname "$0")/../.."

fail() { echo "run-ghidra-headless: $*" >&2; exit 3; }

[ "${I_OWN_THIS_BINARY_AND_OUTPUT_STAYS_LOCAL:-}" = "1" ] || fail \
  "refusing to run: set I_OWN_THIS_BINARY_AND_OUTPUT_STAYS_LOCAL=1 to confirm this is your own binary copy and the output will stay local and unpublished."

BINARY="${BINARY:-}"
[ -n "$BINARY" ] || fail "refusing to run: set BINARY=/path/to a binary on YOUR machine (there is deliberately no default target)."
[ -f "$BINARY" ] || fail "binary not found: $BINARY"

node tools/re/check-target.js "$BINARY" >/dev/null || fail \
  "target pre-flight failed (missing file or Git LFS pointer). See output of: node tools/re/check-target.js \"$BINARY\""

ANALYZE="${GHIDRA_HOME:-}/support/analyzeHeadless"
if [ ! -x "$ANALYZE" ]; then
  ANALYZE="$(command -v analyzeHeadless || true)"
fi
[ -n "${ANALYZE:-}" ] && [ -x "$ANALYZE" ] || fail \
  "Ghidra headless not found. Install JDK 17+ and Ghidra 11.x from https://github.com/NationalSecurityAgency/ghidra/releases then export GHIDRA_HOME=/path/to/ghidra. (Deliberately not auto-installed.)"

command -v java >/dev/null || fail "java not found on PATH (JDK 17+ required by Ghidra 11.x)."

OUT_DIR="$(pwd)/re-output/ghidra"
PROJ_DIR="$(pwd)/re-output/ghidra-project"
mkdir -p "$OUT_DIR" "$PROJ_DIR"

echo "Target : $BINARY"
echo "Output : $OUT_DIR  (gitignored - keep it that way)"
echo "Project: $PROJ_DIR"

"$ANALYZE" "$PROJ_DIR" LocalAnalysis \
  -import "$BINARY" \
  -scriptPath "$(pwd)/tools/re/ghidra" \
  -postScript ExportFunctions.java "$OUT_DIR" 60

echo
echo "Done. Files: $OUT_DIR/functions.tsv, $OUT_DIR/decompiled.c"
echo "Reminder: local study only. Do not commit or publish this output;"
echo "OpenBDS accepts only clean-room code (docs/licensing.md)."
