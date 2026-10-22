#!/usr/bin/env bash
# Headless wrapper around the Mojang Bedrock Dedicated Server binary.
#
# The binary in this repository is proprietary Mojang software (see NOTICE).
# It is stored with Git LFS - run `git lfs pull` first if `bedrock_server` is
# still an LFS pointer. This wrapper only adds headless conveniences:
#   - nohup-friendly logging to logs/official.log
#   - automatic restart with backoff (OFFICIAL_RESTART=1, default on)
#   - clean SIGTERM handling for containers/systemd
#
# Usage: scripts/start-official.sh [args passed to bedrock_server]

set -euo pipefail
cd "$(dirname "$0")/.."

BIN="./bedrock_server"
RESTART="${OFFICIAL_RESTART:-1}"
LOG_DIR="logs"
LOG_FILE="$LOG_DIR/official.log"

if [ ! -e "$BIN" ]; then
  echo "error: $BIN not found" >&2
  exit 1
fi

if head -c 50 "$BIN" | grep -q "git-lfs"; then
  echo "error: $BIN is still a Git LFS pointer. Run: git lfs pull" >&2
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
