#!/usr/bin/env bash
# Headless wrapper around the Mojang Bedrock Dedicated Server binary.
#
# The official server binary is proprietary Mojang software (see NOTICE) and is
# not tracked in git. Download it from the GitHub release into the repo root, or
# point BDS_BIN at an existing copy. This wrapper only adds headless
# conveniences:
#   - nohup-friendly logging to logs/official.log
#   - automatic restart with backoff (OFFICIAL_RESTART=1, default on)
#   - clean SIGTERM handling for containers/systemd
#
# Usage: scripts/start-official.sh [args passed to bedrock_server]

set -euo pipefail
cd "$(dirname "$0")/.."

BIN="${BDS_BIN:-./bedrock_server}"
RESTART="${OFFICIAL_RESTART:-1}"
LOG_DIR="logs"
LOG_FILE="$LOG_DIR/official.log"

if [ ! -e "$BIN" ]; then
  echo "error: $BIN not found - download it from the GitHub release (see README) or set BDS_BIN" >&2
  exit 1
fi

if head -c 50 "$BIN" | grep -q "git-lfs"; then
  echo "error: $BIN is a Git LFS pointer, not the real binary - download it from the GitHub release (see README)" >&2
  exit 1
fi

if [ ! -x "$BIN" ]; then
  chmod +x "$BIN" || true
fi

mkdir -p "$LOG_DIR"

# The binary needs to find its shared libraries next to itself.
export LD_LIBRARY_PATH="${LD_LIBRARY_PATH:-}:$(pwd)"

stop_requested=0
on_term() {
  stop_requested=1
  if [ -n "${SERVER_PID:-}" ]; then
    kill -TERM "$SERVER_PID" 2>/dev/null || true
  fi
}
trap on_term TERM INT

backoff=1
while true; do
  echo "[start-official] starting Mojang bedrock_server (headless)" | tee -a "$LOG_FILE"
  "$BIN" "$@" >>"$LOG_FILE" 2>&1 &
  SERVER_PID=$!
  wait "$SERVER_PID" || true
  SERVER_PID=""

  if [ "$stop_requested" = "1" ]; then
    echo "[start-official] stopped by signal" | tee -a "$LOG_FILE"
    exit 0
  fi

  if [ "$RESTART" != "1" ]; then
    echo "[start-official] server exited (restart disabled)" | tee -a "$LOG_FILE"
    exit 0
  fi

  echo "[start-official] server exited - restarting in ${backoff}s" | tee -a "$LOG_FILE"
  sleep "$backoff"
  backoff=$(( backoff * 2 ))
  [ "$backoff" -gt 60 ] && backoff=60
done
