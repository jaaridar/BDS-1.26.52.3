# Seed finder

A browser front end for the structure model in `src/world/`. Give it a seed range
and a list of requirements — "at least two villages within 200 chunks and an
on-grid stronghold within 600 blocks" — and it returns the seeds that satisfy
every requirement, with the position of each structure it counted.

Nothing is downloaded or looked up: the page computes positions from the
placement rules recovered from the Bedrock server, so it works offline once
loaded and it answers for seeds nobody has ever visited.

```
node web/server.js            # http://0.0.0.0:8787
```

It binds `0.0.0.0` so a forwarded port or preview proxy can reach it. There is no
API and no server-side computation: the server hands over four static files.

```
GET /            index.html      the page (filter controls are generated into it)
GET /styles.css                  the stylesheet, tokenised for contrast checks
GET /app.js                      form, results, inspector, stress test
GET /worker.js                   one search shard, per worker
GET /reference.js                src/world/*.js bundled for the browser
GET /placements.json             the measured placement table
GET /seedfinder.wasm             the placement core, 4.5 kB
```

## What it can and cannot answer

Each filter is offered only when that set's placement parameters were confirmed
against captured `locate structure` answers. The tally is in
`src/world/structures-data.js`; the method is in `docs/worldgen.md`.

| Filter | Status |
|---|---|
| villages, pillager outposts, monuments, mansions, shipwrecks, ruined portals, ancient cities, buried treasure | exact — every captured position reproduced, and the parameters are the unique fit |
| trail ruins, trial chambers | within one chunk — the pack-driven sets report a jigsaw origin that can sit a chunk back |
| strongholds | exact for the cells that stay on the grid — 491 of 510 gated cells in the captured corpus, 159 of 160 when asked directly; ungated cells carry a stronghold but the generator always moves it (0 of 82 exact) |

Three things are deliberately absent:

- **ocean ruins, desert pyramids, jungle temples, witch huts, igloos,
  mineshafts, abandoned camps.** Their rows in `structures-data.js` are
  placeholders or per-chunk-gated with an unrecovered threshold. A filter on them
  would be a guess, so they are listed on the page as unavailable, with the reason.
- **the three extra strongholds every world places at villages.** Those positions
  are known exactly (they are village chunks) but *which* villages are chosen is
  not recovered, so they cannot be counted. `docs/worldgen.md` records the
  candidates that have been ruled out.
- **biomes and terrain.** The climate router has not been recovered. The biome
  data is loaded; data is not a sampler.

## How it is put together

```
web/public/                 static site, no build step at runtime
web/assembly/seedfinder.ts  the placement core, compiled to wasm
web/assembly/placements.gen.ts   GENERATED from src/world/structures-data.js
tools/web/build-seedfinder.js    generates the table, the bundle, the filters, the wasm
tools/web/a11y-check.js          static accessibility audit
tools/web/smoke-web.js           end-to-end page test, in jsdom
test/unit/seedfinder-wasm.test.js  wasm against the reference, cell for cell
```

Three design choices worth knowing:

**The numbers have one home.** `src/world/structures-data.js` holds every
spacing, separation, salt and spread type, each with the capture tally that
confirms it. The build script copies them into the wasm table and the page's
manifest, and writes the filter controls into `index.html` between two markers.
A number cannot be right in one place and stale in another.

**The wasm core is checked, not trusted.** `src/world/` stays the reference
implementation and is bundled unmodified into `reference.js`. The stress test on
the page compares the two over every structure type × every seed class, and
`test/unit/seedfinder-wasm.test.js` does the same in CI. If they disagree the
page says so instead of picking one.

**Only the bits that matter are searched.** The legacy engine folds the cell
seed into 32 bits, so placement repeats every 2^32 seeds; the two pack-driven
sets keep 48 bits of the LCG state, so they repeat every 2^48. The page says
this in the form and the stress test re-derives it live, which is why a search
over a 64-bit range is honest about what it can and cannot distinguish.

## Speed

One thread, one filter ("at least one village within 200 chunks", early exit):
about 22,000 seeds per second. Three filters over three structure types with a
distance test, which forces full scans: about 1,400 per second. The page runs up
to eight workers, so a typical multi-filter search settles around 10,000 seeds
per second in a desktop browser. The stress test prints the measured figure for
the machine it is running on rather than quoting this paragraph.

The hot loop never touches BigInt: a candidate seed is a pair of 32-bit halves
advanced by hand. BigInt appears when a hit is reported, which is rare by design.

## One file, everything in it: the dossier

`web/seed-algorithm.html` is the whole thing in a single self-contained file — the
algorithm as runnable code, the measurement behind every constant, the hypotheses that were
falsified, the tallies, the gaps, a calculator, a finder and a self-test that all run
offline with no network and no second file. It is the artifact to hand to someone who wants
to check the work rather than read about it:

```
node tools/web/build-dossier.js          # writes web/seed-algorithm.html (~220 kB)
```

Its inputs are `web/dossier/page.html` (the prose, with placeholders), `web/dossier/style.css`
and `web/dossier/runtime.js` (inlined), plus `src/world/*.js` (inlined verbatim),
`web/public/seedfinder.wasm` (inlined as base64), `web/public/placements.json` and
`docs/worldgen.md` (Appendix B). Section 10 of the file carries the SHA-256 of every one of
those inputs, and the build is deterministic — no timestamps, no revision — so CI can
regenerate it and compare bytes.

What makes it more than a paper is §5: the checks recompute both sides in the browser, and
one of them takes the four strongholds published in `docs/worldgen.md` and shows that the
grid reproduces seed 1 exactly while the other three are *unreachable* by the grid formula
and sit exactly on modelled village chunks. That is the open problem in the dossier's §8,
demonstrated by the reader's own machine rather than asserted in prose.

## Rebuilding

The wasm artifact is committed, so a fresh checkout runs without a compiler.
To rebuild after changing the table or the core:

```
npm install --prefix /tmp/asc assemblyscript@0.27.31 --no-save
ASC=/tmp/asc/node_modules/assemblyscript/bin/asc.js node tools/web/build-seedfinder.js
```

`--no-wasm` regenerates the table, manifest, bundle and filter markup but leaves
the compiled core alone, which is what CI uses to check that the committed
artifacts match their sources.

## Accessibility

The page is built for keyboard and screen-reader use first, and the parts that
can be checked without a browser are checked by
`node tools/web/a11y-check.js` (60 checks, all passing):

- one `h1`, no skipped heading levels, `header`/`main`/`footer` landmarks, and a
  skip link that is the first focusable element and points at something real;
- every input, select and button has a programmatic name; every `fieldset` has a
  legend; every table has a caption and every `th` has a scope;
- unique ids, no positive `tabindex`, no inline event handlers, no dangling
  `aria-labelledby` / `aria-describedby`;
- `role="status"` live regions for search state and the stress test, `role="alert"`
  for validation errors, and progress that is announced at milestones rather than
  on every tick;
- the palette is tokenised in both colour schemes and every text pair is checked
  against 4.5:1 (3:1 for borders and focus rings) — the checker computes the
  ratios from the CSS, so a colour change cannot slip past it;
- `prefers-reduced-motion`, `prefers-color-scheme` and `forced-colors` are all
  honoured, sizes are relative so text zoom works, and focus is never removed;
- scrollable table containers are focusable named regions, so the tables can be
  reached without a mouse.

What it still needs is a person: reading order and announcement quality in a real
screen reader, and a keyboard-only pass in a real browser, are not things this
repository can automate. `tools/web/smoke-web.js` covers the interactive
behaviour that can be simulated — filters enabling, a refused empty search, a
completed search, the results table agreeing with the reference, the inspector,
and the stress test — but it cannot tell you what any of it sounds like.

```
npm install --prefix /tmp/domtest jsdom --no-save
JSDOM_PATH=/tmp/domtest/node_modules/jsdom node tools/web/smoke-web.js
JSDOM_PATH=/tmp/domtest/node_modules/jsdom node tools/web/smoke-dossier.js
```

The dossier smoke test loads the file from disk with `fetch` replaced by a function that
throws, so a self-contained file that quietly reaches for the network fails the test rather
than looking fine on a machine that happens to be online.

## Limits worth stating plainly

This is the structure half of a world generator, with its gaps listed instead of
filled. It cannot predict terrain, biomes, loot, or the three village strongholds,
and the stronghold grid is exact for the cells that stay put rather than for
every stronghold in the world. If a seed it returns turns out wrong, that is the
most useful bug report there is: include the seed, the structure, and the
`locate` answer from a real server.
