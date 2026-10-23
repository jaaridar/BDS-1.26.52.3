#!/usr/bin/env bash
# A stand-in for bedrock_server, used to exercise the capture orchestration end
# to end without the proprietary binary.
#
# It speaks the same protocol as the real server: it announces a start, answers
# commands on stdin with the log lines run-golden.js waits for, refuses block
# placement in chunks it has not "generated" yet, and writes a world database
# directory on shutdown.
#
# The world database it writes is empty: this tests the orchestration (waits,
# rejections, staging, manifest) and deliberately nothing about world data.
set -u

WORKDIR="$(pwd)"
# The real server refuses early if its packs are missing; so do we, and the
# capture harness must report that clearly.
if [ ! -d "${WORKDIR}/resource_packs" ] && [ "${MOCK_SKIP_ASSETS:-0}" != "1" ]; then
  echo "Failed to load Vanilla Resource Pack, is the vanilla pack missing from the loaded world?"
  echo "Quit correctly"
  exit 3
fi

echo "NO LOG FILE! - setting up server logging..."
echo "[INFO] Starting Server"
echo "[INFO] Version: 1.26.52.3"
echo "[INFO] Level Name: golden"
echo "[INFO] Server started."

GENERATED=0
while IFS= read -r line; do
  echo "[CMD] ${line}"
  case "${line}" in
    "tickingarea add "*)
      # Generation takes a moment, like the real thing: the first placement
      # attempts fail, which is exactly the race the harness must handle.
      echo "[INFO] Added ticking area from 0, 0, 0 to 47, 0, 47."
      echo "1/10 ticking areas in use."
      GENERATED=0
      ;;
    "setblock "*)
      if [ "${GENERATED}" -lt 2 ]; then
        echo "[ERROR] Cannot place block outside of the world"
      else
        echo "[INFO] Block placed"
      fi
      ;;
    "fill "*)
      echo "[ERROR] 0 blocks filled"
      ;;
    "gamerule "*)
      echo "[INFO] Game rule has been updated"
      ;;
    "structure save "*)
      echo "[INFO] Saved a structure with name mystructure:mock"
      ;;
    "stop")
      echo "[INFO] Server stop requested."
      echo "[INFO] Stopping server..."
      mkdir -p "${WORKDIR}/worlds/golden/db"
      echo "# mock database" > "${WORKDIR}/worlds/golden/db/CURRENT"
      echo "Quit correctly"
      exit 0
      ;;
    *)
      ;;
  esac
  # Every command round trip advances generation by one step.
  GENERATED=$((GENERATED + 1))
done

# stdin closed without a stop command: behave like a server that died.
echo "Quit correctly"
exit 0
