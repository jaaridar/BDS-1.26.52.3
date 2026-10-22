# Protocol notes

OpenBDS speaks the Minecraft: Bedrock network protocol as defined by the
public protocol data (`minecraft-data` / `bedrock-protocol`, MIT). This page
records the versioning model and the wire details OpenBDS implements.

## Versioning model

Three version strings, all configurable:

| Where | Config key | Example | Meaning |
| --- | --- | --- | --- |
| Server list / MOTD | `openbds-game-version` | `1.26.52.3` | cosmetic version shown to clients |
| Protocol data | `openbds-protocol-version` | `1.26.51` | the schema version OpenBDS serializes with (protocol number 2193) |
| Real client | - | `1.26.52.3` | connects using its own protocol number |

Clients newer than the implemented protocol data are rejected with
`play_status: failed_spawn` (the standard "server is outdated" flow). When
`minecraft-data` publishes protocol data for a newer client, point
`openbds-protocol-version` at it - no code changes needed.

## Login

1. RakNet unconnected ping answers `MCPE;motd;protocol;version;...` (built by
   `bedrock-protocol`'s `ServerAdvertisement`).
2. `request_network_settings` -> `network_settings` (compression negotiation).
3. Login envelope -> identity JWTs. Two paths are accepted:
   * **offline**: self-signed identity (legacy chain, or the newer
     self-signed multiplayer token for protocol >= 944). Requires
     `online-mode=false`.
   * **online**: Mojang-signed legacy chain or Microsoft OIDC multiplayer
     token, verified against the pinned Mojang key / OIDC issuer.
4. `server_to_client_handshake` -> AES key exchange ->
   `client_to_server_handshake` -> `play_status: login_success`.

## Spawn sequence

`resource_packs_info` -> client response -> `resource_pack_stack` -> client
response (`completed`) -> `start_game` (block palette in `block_properties`)
-> `item_registry`, `biome_definition_list`, `available_entity_identifiers`,
`creative_content` -> `set_time`, `set_spawn_position`, `update_attributes`,
`set_entity_data`, `set_difficulty` -> `network_chunk_publisher_update` +
`level_chunk` stream -> `play_status: player_spawn` ->
`set_local_player_as_initialized`.

## Chunk wire format (classic `level_chunk`)

Cross-checked against PocketMine-MP and Dragonfly encoders:

```
payload    := subChunk{subChunkCount}  biomeStorage{24}  borderCount:u8 (=0)  tiles*
subChunk   := version:u8 (=8)  layerCount:u8 (=1)  layer
layer      := storage
storage    := header:u8 ((bitsPerBlock << 1) | 1)  words:u32le[]  palette
palette    := [count:zigzag32]  runtimeIds:zigzag32[]
```

* `bitsPerBlock` is one of 0, 1, 2, 3, 4, 5, 6, 8, 16. At 0 bits the storage
  holds a single value: no words, no count, just one zigzag32 runtime id.
* Words hold `floor(32/bits)` blocks each (high bits are padding for 3/5/6).
* Block order: `index = (x << 8) | (z << 4) | y`.
* Biomes: 4x4x4 per sub-chunk (64 cells), one storage per column slot
  (24 slots for the overworld, y index -4..19).
* Sub-chunks are written from column slot 0 (y index -4) upward;
  `subChunkCount` stops at the highest non-empty slot.

## Block palette negotiation

`start_game.block_properties` is an ordered list of block states; a chunk's
palette entry is the **index into that list** (runtime id). OpenBDS therefore
controls the mapping and can run with a small self-consistent palette
(`air`, `flat`) or a full vanilla dump (`tools/gen-block-palette.js`).
`block_network_ids_are_hashes` is sent as `false` (indices, not hashes).

## Known quirks worked around

* **`network_settings` must not be compressed.** With BDS's shipped
  `compression-threshold=1` some stacks compress the handshake batch before
  the client enables compression. OpenBDS clamps its own send threshold to
  512 while advertising the configured value (see docs/configuration.md).
* **Unknown packet names serialize to garbage** in protodef-based writers
  instead of throwing. The test suite round-trips every packet OpenBDS sends
  to catch this (`test/unit/spawn.test.js`).
* **Teardown races** in the pure-JS RakNet layer (late disconnect frames on a
  closed UDP socket) are absorbed in `src/protocol/raknet.js` so a headless
  server never crashes on shutdown.

## References

* PrismarineJS protocol data: https://github.com/PrismarineJS/minecraft-data
* PrismarineJS bedrock protocol: https://github.com/PrismarineJS/bedrock-protocol
* PocketMine-MP (format verification): https://github.com/pmmp/PocketMine-MP
* Dragonfly (format verification): https://github.com/df-mc/dragonfly
