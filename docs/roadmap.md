# Roadmap

OpenBDS today is a working, tested, headless Bedrock server core. The path
to full vanilla parity is deliberately staged - each milestone keeps the
codebase clean-room and MIT.

## Shipped (v0.1)

- [x] RakNet transport (pure-JS default, optional native backend)
- [x] Login pipeline: offline + Xbox/Microsoft identities, encryption
- [x] Resource-pack negotiation, `start_game`, registry packets
- [x] Block palette negotiation (`air` / `flat` / pluggable dumps)
- [x] Chunk streaming (classic `level_chunk`, verified wire format)
- [x] Chat, commands (console + in-game), movement relay
- [x] Config (`server.properties`, env, CLI), logging, tick loop
- [x] Headless ops: Docker, docker-compose, systemd, health-check ping tool
- [x] Test suite incl. end-to-end client session over loopback

## Near term (v0.2)

- [ ] **World persistence** - save/load chunks (LevelDB or an open format)
- [ ] **Player list + real skins** - forward skin data from the login chain
      to `player_list` / `add_player` so players see each other properly
- [ ] **Block interaction** - `player_action` break/place with
      `update_block` broadcast, inventory sync
- [ ] **Sub-chunk request flow** - `subchunk_request` -> `sub_chunk` entries
      (used by newer clients for streamed chunk loading)
- [ ] **Allow-list enforcement** (`white-list` / `allowlist.json`)
- [ ] **Idle timeout**, **server full** handling, better kick messages

## Medium term (v0.3)

- [ ] **Entities & mobs** - spawn, AI tick basics, damage/health
- [ ] **Full item registry + creative inventory** (from a vanilla dump)
- [ ] **Redstone-free block logic first**: fluids, lighting updates, gravity
- [ ] **Multi-dimension support** (nether/end columns, portals later)
- [ ] **Worker-threaded chunk generation** for larger worlds
- [ ] **Noise-based terrain generator** (biomes from the biome registry)

## Long term

- [ ] Redstone simulation parity
- [ ] Plugin/script API (JS, sandboxed), event bus stability
- [ ] Proxy mode / multi-server support
- [ ] Performance parity with BDS on large player counts

## Getting a full vanilla block palette

The engine ships small palettes (`air`, `flat`). For every vanilla block,
generate a palette dump from a `canonical_block_states.nbt` (from the
client/server data) with `tools/gen-block-palette.js` and reference it via
`openbds-palette=data/palettes/vanilla.json`. Keep dumps out of public forks -
they are derived from proprietary data (see docs/licensing.md).

## Non-goals

- **No code derived from the Mojang binary.** The project stays clean-room
  so it can remain MIT.
- **No proprietary data in the repository** beyond the clearly-marked mirror
  that ships with this repo.
