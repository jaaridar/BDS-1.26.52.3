# Contributing to OpenBDS

Thanks for helping build an open-source Bedrock server!

## Ground rules

1. **Clean room only.** Do not submit code derived from decompiled or
   disassembled Mojang/Microsoft binaries (including `bedrock_server`), or
   from any other proprietary source. Write against public protocol
   documentation and open-source protocol definitions. This keeps the
   project legally redistributable under MIT.
2. **Everything you contribute is MIT licensed** (see LICENSE).
3. **Do not commit proprietary game data** - no vanilla behavior/resource
   packs, no extracted block/item registries, no server binaries. Generated
   palette dumps stay local (see `tools/gen-block-palette.js`).
4. Keep the codebase dependency-light and typed-by-tests: the protocol
   serializer tests (`test/unit/spawn.test.js`) are the safety net for packet
   changes.

## Development setup

```bash
npm install
npm test           # unit + integration (spins up a real server + client)
```

Useful entry points:

| Path | What it is |
| --- | --- |
| `src/server.js` | orchestration, tick loop, broadcast, shutdown |
| `src/player.js` | per-session spawn sequence and packet handlers |
| `src/protocol/spawn.js` | every spawn-sequence packet builder |
| `src/world/chunk.js` | network sub-chunk/column encoder |
| `src/world/palette.js` | block palette (runtime id negotiation) |
| `test/integration/server.test.js` | end-to-end proof of life |

## Testing

* Unit tests must stay fast and dependency-free.
* The integration suite binds an ephemeral UDP port on loopback; if your
  environment blocks UDP loopback it will fail on `ping`.
* When adding/changing packets, add a builder in `src/protocol/spawn.js` and
  a `mustSerialize(...)` case - the round-trip check catches unknown packet
  names and schema drift.

## Pull requests

* One feature/fix per PR, with a clear description.
* Update docs when behavior changes (`docs/` is part of the deliverable).
* Run `npm test` and make sure it passes before requesting review.

## Reporting issues

Please include: OpenBDS version (`node bin/openbds.js --version`), game and
protocol versions, OS/Node versions, and whether you use `jsp-raknet` or
`raknet-native`. Logs from `logs/openbds.log` (at `--log-level debug`) help a
lot.
