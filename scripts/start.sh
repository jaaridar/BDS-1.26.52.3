#!/usr/bin/env bash
# OpenBDS headless launcher.
#
#   scripts/start.sh              # run the open-source OpenBDS engine
#   scripts/start.sh official     # run the Mojang bedrock_server binary (if present)
#   scripts/start.sh openbds      # explicit engine selection
#
# Options after the engine name are passed through to the engine.

set -euo pipefail
cd "$(dirname "$0")/.."

ENGINE="${1:-openbds}"
shift || true

case "$ENGINE" in
  openbds)
    exec node bin/openbds.js "$@"
    ;;
  official|mojang|bds)
    exec scripts/start-official.sh "$@"
    ;;
  *)
    echo "unknown engine: $ENGINE (expected: openbds | official)" >&2
    exit 2
    ;;
esac
