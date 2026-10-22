#!/usr/bin/env bash
# Headless Ghidra driver for the proprietary bedrock_server binary.
#
# Usage: run-headless.sh <ghidra-install-dir> <output-dir> [mode] [max-functions]
#
# The driver never executes bedrock_server: it only imports the ELF, runs the
# RecoverWorldgen.java post-script, and writes bounded text evidence.
set -uo pipefail

GHIDRA_DIR="${1:?ghidra dir}"
OUT="${2:?output dir}"
MODE="${3:-worldgen}"
MAX_FUNCTIONS="${4:-1200}"

PROJECT_PARENT="${RUNNER_TEMP:-/tmp}/ghidra-projects"
PROJECT_NAME="bds-worldgen"

mkdir -p "$OUT" "$PROJECT_PARENT" || exit 1
OUT="$(cd "$OUT" && pwd)"
rm -rf "${PROJECT_PARENT:?}/$PROJECT_NAME" || exit 1
mkdir -p "$PROJECT_PARENT" || exit 1

export MAXMEM="${MAXMEM:-6G}"

echo "== analyzeHeadless =="
echo "ghidra:        $GHIDRA_DIR"
echo "projectParent: $PROJECT_PARENT"
echo "projectName:   $PROJECT_NAME"
echo "output:        $OUT"
echo "mode:          $MODE"
echo "maxFunctions:  $MAX_FUNCTIONS"
ls -ld "$PROJECT_PARENT" || true

"$GHIDRA_DIR/support/analyzeHeadless" \
  "$PROJECT_PARENT" "$PROJECT_NAME" \
  -import "$PWD/bedrock_server" \
  -overwrite \
  -noanalysis \
  -scriptPath "$PWD/tools/binary-analysis/ghidra" \
  -postScript RecoverWorldgen.java "$OUT" "$MODE" "$MAX_FUNCTIONS" \
  -max-cpu "$(nproc)" \
  -log "$OUT/ghidra-application.log" \
  -scriptlog "$OUT/ghidra-script.log" \
  -loglanguage English \
  -scriptloglanguage English

status=$?
echo "analyzeHeadless exit: $status"
exit "$status"
