# OpenBDS

**An open-source, headless Minecraft: Bedrock dedicated server.**

OpenBDS is a from-scratch, clean-room server implementation that speaks the
Bedrock network protocol (RakNet + the game protocol), runs completely
headless (no GUI, no display - just sockets, a console, and logs), and is
published under the MIT license in its entirety.

It lives in this repository next to a vanilla Minecraft: Bedrock dedicated
server **1.26.52.3** distribution so it can be compared with, and validated
against, the real thing. The Mojang binary and game data in this repository
are **not** open source - see [NOTICE](NOTICE) and
[docs/licensing.md](docs/licensing.md) for exactly where the line is.

```
┌──────────────────────────────────────────────────────────────────────┐
│  OpenBDS engine (MIT)                                                │
│  bin/ src/ tools/ test/ scripts/ deploy/ docs/                       │
│  ├── RakNet transport (jsp-raknet, optional raknet-native)           │
│  ├── login + encryption + Xbox auth (bedrock-protocol, MIT)          │
│  ├── game layer: spawn sequence, chunks, chat, commands, tick loop   │
│  └── world layer: palettes, sub-chunk encoder, flat/void generators  │
├──────────────────────────────────────────────────────────────────────┤
│  Mojang distribution (proprietary, clearly marked, not required)     │
│  bedrock_server (release asset), behavior_packs/, resource_packs/ ...│
└──────────────────────────────────────────────────────────────────────┘
```

## Quick start

Requirements: Node.js >= 22.18 (24 recommended). No compilers, no cmake,
no native modules.

```bash
npm install          # .npmrc skips optional native build scripts
npm start            # reads ./server.properties if present
```

Then add `127.0.0.1:19132` in Minecraft (Bedrock) -> Play -> Servers.

Run a test client against it (CI does exactly this):

```bash
npm test             # unit + end-to-end protocol tests
npm run ping         # server-list status probe (JSON)
```

### Command line

```
node bin/openbds.js --help

  --config <file>       server.properties to read
  --port <n>            UDP port (default 19132)
  --online-mode         require Xbox/Microsoft authenticated logins
  --palette <name|json> block palette: air | flat | vanilla | <file.json>
  --generator <name>    flat | void
  --log-level <level>   debug | info | warn | error
```

Every option also exists as a `server.properties` key (`openbds-*`) and as an
`OPENBDS_*` environment variable. See [docs/configuration.md](docs/configuration.md).

### Console commands

The stdin console (and in-game chat, with cheats on) supports:
`help`, `list`, `say`, `time`, `gamemode`, `kick`, `difficulty`, `status`,
`version`, `stop`.

## Headless operations

* **Docker**: `docker compose up -d` (UDP 19132, healthchecked via
  `tools/ping.js`) - see [Dockerfile](Dockerfile).
* **systemd**: [deploy/openbds.service](deploy/openbds.service).
* **Scripts**: `scripts/start.sh` (open-source engine) or
  `scripts/start-official.sh` (headless wrapper around the Mojang binary,
  with auto-restart; the binary is optional and proprietary).
* **Health checks**: `node tools/ping.js <host> <port>` exits 0/1 and prints
  the server-list advertisement as JSON.

### Official (Mojang) server binary

`bedrock_server` is proprietary and is not tracked in git. To run it, or to
compare the engine against the real server, download the 1.26.52.3 binary from
the [releases page](../../releases/tag/v1.26.52.3) into the repository root:

```bash
gh release download v1.26.52.3 -p bedrock_server   # or use the GitHub web UI
chmod +x bedrock_server
scripts/start-official.sh
```

An existing copy can be used instead:
`BDS_BIN=/path/to/bedrock_server scripts/start-official.sh`.

## What works today

* RakNet server-list ping (shows up in the LAN/server list with your MOTD)
* Full login pipeline: network settings, key exchange, encryption, offline
  *and* Xbox/Microsoft-authenticated identities (`online-mode=true`)
* Resource-pack negotiation, `start_game` with a negotiated block palette,
  registries, world state, spawn-area chunk streaming (classic `level_chunk`
  sub-chunk format, verified against PocketMine-MP and Dragonfly formats)
* Chat and commands (console + in-game), game mode/difficulty/time changes,
  player movement relay, clean join/leave flow
* Config, logs, ticking world clock, flat/void world generation
* Test suite including a real end-to-end client session over loopback

The full picture and the plan for vanilla parity (redstone, entities,
persistence, ...) is in [docs/roadmap.md](docs/roadmap.md).

## Find seeds in your browser

The structure half of world generation is modelled and measured, so it has a
front end: give it a seed range and say what the world must contain (villages,
monuments, ruined portals, ancient cities, on-grid strongholds, ...), and it
returns the seeds that qualify with every position it counted.

```bash
node web/server.js            # http://localhost:8787
```

The page computes everything locally — a WebAssembly transcription of
`src/world/` in a pool of workers — so it needs no server, no captured worlds and
no network once loaded. If you want the whole algorithm in one downloadable file,
including the measurements behind every constant and the hypotheses that were
falsified, that is [web/seed-algorithm.html](web/seed-algorithm.html): one
self-contained page with a calculator, a finder and a self-test, no network. It also carries a stress test that checks the wasm core
against the JavaScript reference over every seed class and every structure type,
in your browser, and tells you if they ever disagree. What it cannot place
(biomes, terrain, ocean ruins and other unmeasured sets, and the three strongholds
every world puts at villages) is listed on the page rather than guessed at. See
[web/README.md](web/README.md) and [docs/worldgen.md](docs/worldgen.md).

## Why not just decompile the official server?

Making the *proprietary* server binary "open source" is not possible in any
meaningful sense: its code is owned by Mojang/Microsoft and its license does
not permit redistribution or derivative works. Tools like
[morluto/rea](https://github.com/morluto/rea) are excellent for studying
binaries, but anything derived from the BDS binary would not be legally
redistributable as open source.

OpenBDS takes the path that actually produces something open: a clean-room,
headless implementation written against public protocol definitions and
verified by an automated test client. Everything under `bin/`, `src/`,
`tools/`, `test/`, `scripts/`, `deploy/` and `docs/` is MIT-licensed and
yours to fork.

## Contributing

PRs welcome - see [CONTRIBUTING.md](CONTRIBUTING.md). Run `npm test` before
opening one; the integration suite boots a real server and client.

## License

The OpenBDS engine: [MIT](LICENSE).
Mojang game data in this repository, and the official binary distributed as a
release asset: proprietary - see [NOTICE](NOTICE). "Minecraft" and "Bedrock"
are trademarks of Mojang/Microsoft; this project is not affiliated with or
endorsed by them.
