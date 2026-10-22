# Licensing

This repository contains two categories of content with completely
different licensing. The short version:

> **The OpenBDS engine is MIT open source. The Mojang distribution files in
> this repository are proprietary and are NOT open source.**

## 1. OpenBDS engine and project files - MIT

Everything OpenBDS contributors wrote is MIT licensed (see `LICENSE`):

* `bin/`, `src/`, `tools/`, `test/`, `scripts/`, `deploy/`, `docs/`
* project metadata: `package.json`, `Dockerfile`, `docker-compose.yml`,
  workflows, this documentation

You can use, copy, modify, merge, publish, distribute, sublicense and sell
copies of these, provided the copyright notice is included.

Third-party open-source libraries used by the engine (see `package-lock.json`)
carry their own permissive licenses (MIT/ISC), notably `bedrock-protocol`,
`jsp-raknet`, `minecraft-data` and `prismarine-nbt` from the PrismarineJS
project.

## 2. Mojang / Microsoft material - proprietary

The vanilla Minecraft: Bedrock dedicated server distribution that this repo
mirrors is owned by Mojang Studios / Microsoft and is governed by the
Minecraft EULA and the Minecraft Dedicated Server EULA
(https://www.minecraft.net/eula):

* `bedrock_server` (the official server binary; distributed as a GitHub
  release asset and not tracked in git)
* `bedrock_server_how_to.html`, `release-notes.txt`
* `behavior_packs/`, `resource_packs/`, `definitions/`, `data/`, `config/`
* `server.properties`, `packetlimitconfig.json`, `profanity_filter.wlist`

You may use these to run a server, subject to Mojang's terms. You may **not**
relicense them as open source, and forks/mirrors must keep them clearly
marked (keep `NOTICE` intact). If you want a purely open-source tree, delete
the proprietary files - the OpenBDS engine does not need them.

### Generated data derived from Mojang data

Block palette dumps produced with `tools/gen-block-palette.js` from vanilla
registry data (e.g. `canonical_block_states.nbt`) are derived from Mojang
data. Keep them out of public forks (`data/palettes/` is gitignored for that
reason) and treat them under the same EULA terms.

## Why the engine is a clean-room implementation

The OpenBDS engine was written from public protocol definitions and
cross-checked against other open-source implementations (PocketMine-MP,
Dragonfly). It contains **no** code derived from Mojang's binary. Reverse
engineering tools can study the official binary, but code derived from it
could never be published as open source - so this project deliberately does
not. This is what allows the engine to be MIT licensed "in its entirety".

## Trademarks

"Minecraft" and "Bedrock" are trademarks of Mojang Studios / Microsoft.
"OpenBDS" is an unofficial project name; this software is not affiliated
with, endorsed by, or connected to Mojang or Microsoft.

## FAQ

**Can I host a public server with this?** Yes - that's the point. Check
Mojang's EULA for what you may do with the *game data* and the official
binary if you also use those.

**Can I sell a product that includes OpenBDS?** The MIT license permits
commercial use of the engine. Do not bundle the proprietary Mojang files
into your product without Mojang's permission.

**Can I publish my fork?** Yes. Keep `LICENSE` and `NOTICE`, and either keep
the proprietary files clearly marked or remove them.
