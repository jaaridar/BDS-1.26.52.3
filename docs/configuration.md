# Configuration

OpenBDS reads the classic Minecraft `server.properties` format (the same
file the Mojang `bedrock_server` uses), and layers environment variables and
CLI flags on top.

**Precedence (lowest to highest):** built-in defaults -> `server.properties`
-> `OPENBDS_*` environment variables -> CLI flags.

## Example

```properties
# server.properties
server-name=My OpenBDS Server
gamemode=survival
difficulty=easy
max-players=20
online-mode=true
server-port=19132
level-name=Bedrock level
level-seed=
allow-cheats=false

# OpenBDS extensions (ignored by the official server)
openbds-palette=flat
openbds-generator=flat
openbds-log-level=info
```

Environment variables map from the **camelCase** setting name:
`serverPort` -> `OPENBDS_SERVER_PORT`, `onlineMode` -> `OPENBDS_ONLINE_MODE`,
`logLevel` -> `OPENBDS_LOG_LEVEL`, `protocolVersion` ->
`OPENBDS_PROTOCOL_VERSION`. (The `openbds-` prefix only appears in
`server.properties` keys, not in environment variables.)

## Settings

### Stock BDS keys

| Key | Default | Description |
| --- | --- | --- |
| `server-name` | `OpenBDS Server` | MOTD shown in the server list |
| `gamemode` | `survival` | `survival` / `creative` / `adventure` / `spectator` |
| `force-gamemode` | `false` | force the configured gamemode on join |
| `difficulty` | `easy` | `peaceful` / `easy` / `normal` / `hard` |
| `allow-cheats` | `false` | enable commands for players |
| `max-players` | `10` | player cap |
| `online-mode` | `false` | require Xbox/Microsoft-authenticated logins |
| `white-list` / `allow-list` | `false` | reserved (allowlist enforcement is on the roadmap) |
| `server-port` | `19132` | UDP port |
| `server-portv6` | `19133` | reserved |
| `level-name` | `Bedrock level` | world name |
| `level-seed` | *(empty)* | world seed (number or string) |
| `view-distance` | `12` | max chunk radius a player can request |
| `tick-distance` | `4` | server chunk tick range (sent in `start_game`) |
| `player-idle-timeout` | `30` | reserved (idle kick is on the roadmap) |
| `max-threads` | `8` | reserved |
| `compression-threshold` | `1` | advertised compression threshold (see note) |
| `compression-algorithm` | `deflate` | `zlib`/`deflate`, `snappy`, `none` |
| `default-player-permission-level` | `member` | `visitor` / `member` / `operator` |
| `texturepack-required` | `false` | `start_game.is_texturepacks_required` |

> **Note on `compression-threshold`:** the value is advertised to clients as
> configured (BDS ships `1`). OpenBDS internally clamps its *own* send
> threshold to 512 bytes to keep the `network_settings` handshake
> uncompressed - some clients cannot decode it otherwise.

### OpenBDS keys

| Key | Default | Description |
| --- | --- | --- |
| `openbds-game-version` | `1.26.52.3` | version string advertised in the server list |
| `openbds-protocol-version` | `1.26.51` | protocol data version to speak (minecraft-data key) |
| `openbds-palette` | `flat` | `air`, `flat`, `vanilla` (needs `data/palettes/vanilla.json`) or a path to a palette JSON |
| `openbds-generator` | `flat` | `flat` or `void` |
| `openbds-raknet-backend` | `auto` | `auto`, `jsp-raknet`, `raknet-native` |
| `openbds-log-level` | `info` | `debug`, `info`, `warn`, `error` |
| `openbds-tick-rate-ms` | `50` | tick interval (50 ms = 20 TPS) |
| `openbds-spawn-radius-chunks` | `4` | chunks sent around spawn before the client requests a radius |
| `openbds-bind-host` | `0.0.0.0` | bind address |

## Operators

`permissions.json` (the Mojang format) is read at startup: entries with
`permission: "operator"` (or `op`/`admin`) grant operator rights to the
named `name` or `xuid`. `default-player-permission-level=operator` makes
everyone an operator (useful for testing).

## CLI flags

```
node bin/openbds.js --help
```

`--config`, `--host`, `--port`, `--online-mode` / `--offline-mode`,
`--mc-version`, `--game-version`, `--palette`, `--generator`, `--log-level`,
`--raknet-backend`.
