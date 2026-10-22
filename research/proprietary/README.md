# Proprietary-binary research boundary

Files below this directory are observations mechanically derived from the
official Mojang/Microsoft `bedrock_server` binary. They are **not** covered by
the repository's MIT license and are not source code for OpenBDS.

The clean-room implementation under `src/` must not copy decompiler output,
constants, control flow, or other protected expression from this directory.
Use these reports only as private research evidence, and validate independently
observable behavior through black-box tests before implementing compatible
behavior.

Large artifacts are intentionally excluded. Do not commit the Ghidra project,
the materialized server executable, memory dumps, or bulk decompiler output.
