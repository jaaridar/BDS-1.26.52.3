# Architecture

OpenBDS is a layered, headless Bedrock server. Each layer is independently
testable; the wire format is pinned to a protocol data version from
`minecraft-data` (the PrismarineJS protocol definitions).

```
bin/openbds.js          CLI entry: config -> logger -> OpenBDSServer -> console
src/index.js            public API (createServer, loadConfig, ...)
src/config.js           server.properties + env + CLI -> typed config
src/logger.js           leveled logger (stdout/stderr + logs/openbds.log)
src/console.js          stdin command console (TTY and piped)
src/commands.js         command dispatcher + built-ins
src/server.js           orchestration: tick loop, players, broadcast, shutdown
src/player.js           per-client session: spawn sequence, chat, movement
src/protocol/
  raknet.js             backend selection (jsp-raknet | raknet-native)
  ping.js               unconnected-ping probe (health checks, tests)
  spawn.js              spawn-sequence packet builders (schema-validated)
src/world/
  palette.js            block palette -> start_game.block_properties
  chunk.js              sub-chunk / level_chunk payload encoder
  generator.js          flat and void terrain generators
  world.js              chunk cache, world clock, spawn point
```

## Connection lifecycle

1. **RakNet** (jsp-raknet or raknet-native): unconnected ping answers the
   server-list advertisement; open-connection handshake establishes the
   session.
2. **Login** (bedrock-protocol): `request_network_settings` ->
   `network_settings`, login envelope (offline self-signed or Xbox/Microsoft
   OIDC), key exchange, AES encryption. `online-mode` controls whether
   unverified identities are accepted.
3. **Resource packs** (`src/player.js`): `resource_packs_info` ->
   client response -> `resource_pack_stack` -> completed. The vanilla packs in
   this repository are proprietary and are not served by default.
4. **World join**: `start_game` (with the negotiated block palette),
   item/biome/entity registries, `set_time`, `set_spawn_position`,
   attributes/metadata, `network_chunk_publisher_update` + `level_chunk`
   stream for the spawn radius, `play_status player_spawn`.
5. **Play**: `player_auth_input` movement is tracked and relayed; `text` and
   `command_request` feed the command dispatcher; `set_local_player_as_initialized`
   marks the session fully spawned.

## Chunk format

`src/world/chunk.js` implements the classic `level_chunk` payload (sub-chunk
version 8, paletted block storage, 3D biomes, border count, block entities),
cross-checked against the encoders in PocketMine-MP and Dragonfly. The block
palette is negotiated per session in `start_game.block_properties`, so a
subset palette (e.g. the 5-block `flat` palette) is fully consistent on the
wire; swap in a complete vanilla dump with `tools/gen-block-palette.js` to
place every block.

## Threading model

Single-threaded Node.js event loop. The tick loop runs on a fixed interval
(`openbds-tick-rate-ms`, default 50 ms = 20 TPS budget); chunk columns are
encoded once and cached. This is plenty for dozens of players; heavier work
(chunk generation, pathfinding) is designed to move to worker threads as the
world layer grows (see docs/roadmap.md).

## Backend abstraction

The RakNet backend is pluggable: `jsp-raknet` (pure JS, default) or
`raknet-native` (optional C++ binding, `npm rebuild raknet-native`). The
`bedrock-protocol` library is used only for packet schemas, crypto and login;
all game logic is OpenBDS code.
