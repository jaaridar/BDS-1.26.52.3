'use strict'

/**
 * Placement parameters, per structure set.
 *
 * Every entry here has to be *measured*, not remembered from Java: Bedrock's
 * spacings, salts and spread types are its own, and the whole point of this
 * file is that a reader can check each number against evidence.
 *
 * `evidence` says where a row came from:
 *
 *   'pack'      the vanilla data pack ships the placement (readable JSON)
 *   'binary'    read out of the proprietary binary's constant pool
 *   'measured'  confirmed by asking the server (`locate structure`) and matching
 *   'unknown'   not recovered yet; present so callers can report it honestly
 *
 * A row marked `confirmed: true` has been replayed against every captured
 * position of that set; `note` carries the tally. Re-run the tally with
 *
 *   node tools/worldgen-algo/verify-placements.js
 *
 * which reads research/proprietary/bds-1.26.52.3/structures/captures and prints
 * one line per set.
 */

/** Where the numbers come from, for the reader. */
const PLACEMENT_SOURCE = {
  pack: 'behavior_packs/vanilla_*/__brarchive/worldgen/structure_sets.brarchive (brarchive reader in tools/worldgen-algo/brarchive.js)',
  binary: 'per-set salt inlined in each `<Feature>::vslot5` wrapper; grid resolver at `FUN_0d351a10`',
  measured: 'tools/worldgen-algo/capture-structures.js asks the server with locate structure; tools/worldgen-algo/verify-placements.js replays the captures',
  note: 'rows marked confirmed:false are shape-only and must not be presented as facts'
}

function row (id, { spacing, separation, salt, spreadType, engine = 'mt', evidence = 'measured', confirmed = true, kind, note = null }) {
  const placement = { id, spacing, separation, salt, spreadType, engine, confirmed, evidence, note }
  if (kind) placement.kind = kind
  return placement
}

/**
 * Sets that place one candidate per chunk behind a frequency gate.
 *
 * `spacing 1, separation 0` means the resolver's offset is always 0, so every
 * chunk is a potential start and the only thing that decides is a per-chunk
 * probability drawn from the same stream. Predicting these needs the frequency
 * and the per-chunk seed; the gate's *shape* is known (a draw from the same
 * stream, after the offsets) but its threshold is not recovered yet.
 */
function frequency (id, salt, note) {
  return row(id, {
    spacing: 1,
    separation: 0,
    salt,
    spreadType: 'linear',
    kind: 'frequency',
    confirmed: false,
    evidence: 'unknown',
    note: note || 'per-chunk frequency placement; the gate threshold is not recovered yet'
  })
}

function placeholder (id, spacing, separation, salt, spreadType = 'linear', note = null) {
  return row(id, { spacing, separation, salt, spreadType, confirmed: false, evidence: 'unknown', note })
}

const PLACEMENTS = {
  // --- measured: every captured position reproduced exactly ------------------
  'minecraft:village': row('minecraft:village', {
    spacing: 34, separation: 8, salt: 10387312, spreadType: 'triangular',
    note: '77/77 captured positions, across every seed in the corpus'
  }),

  'minecraft:pillager_outpost': row('minecraft:pillager_outpost', {
    spacing: 80, separation: 24, salt: 165745296, spreadType: 'triangular',
    note: '19/19 captured positions; the unique perfect fit over spacing 4..128 and every separation'
  }),

  'minecraft:monument': row('minecraft:monument', {
    spacing: 32, separation: 5, salt: 10387313, spreadType: 'triangular',
    note: '22/22 captured positions; unique perfect fit'
  }),

  'minecraft:mansion': row('minecraft:mansion', {
    spacing: 80, separation: 20, salt: 10387319, spreadType: 'triangular',
    note: '13/13 captured positions; unique perfect fit'
  }),

  'minecraft:shipwreck': row('minecraft:shipwreck', {
    spacing: 24, separation: 4, salt: 165745295, spreadType: 'linear',
    note: '24/24 captured positions; unique perfect fit'
  }),

  'minecraft:ruined_portal': row('minecraft:ruined_portal', {
    spacing: 40, separation: 15, salt: 40552231, spreadType: 'linear',
    note: '24/24 captured positions; unique perfect fit. Salt read from the binary (0x26ac727), not Java\'s 34222645'
  }),

  'minecraft:ancient_city': row('minecraft:ancient_city', {
    spacing: 24, separation: 8, salt: 20083232, spreadType: 'triangular',
    note: '24/24 captured positions; unique perfect fit'
  }),

  'minecraft:buried_treasure': row('minecraft:buried_treasure', {
    spacing: 4, separation: 2, salt: 16842397, spreadType: 'triangular',
    note: '24/24 captured positions. The set is grid-placed, not frequency-gated'
  }),

  // --- measured through the Java-compatible engine ---------------------------
  'minecraft:trail_ruins': row('minecraft:trail_ruins', {
    spacing: 34, separation: 8, salt: 83469867, spreadType: 'linear', engine: 'java',
    evidence: 'pack',
    note: 'pack placement replayed with the Java engine: 9/27 exact, 26/27 within one chunk. ' +
      'The reported position is the jigsaw structure origin, which sits in the placement chunk ' +
      'or one chunk back on either axis'
  }),

  'minecraft:trial_chambers': row('minecraft:trial_chambers', {
    spacing: 34, separation: 12, salt: 94251327, spreadType: 'linear', engine: 'java',
    note: '4/24 exact, 24/24 within one chunk: same Java engine as trail_ruins, same ' +
      'jigsaw-origin offset'
  }),

  'minecraft:abandoned_camp': row('minecraft:abandoned_camp', {
    spacing: 37, separation: 8, salt: 91231127, spreadType: 'linear', engine: 'java',
    evidence: 'pack', confirmed: false,
    note: 'pack placement; no captured positions yet, so the engine is inferred from the other pack sets'
  }),

  // --- shape-only rows: numbers not yet read from the binary ----------------
  'minecraft:ocean_ruin': placeholder('minecraft:ocean_ruin', 20, 8, 14357621),
  'minecraft:desert_pyramid': placeholder('minecraft:desert_pyramid', 32, 8, 14357617),
  'minecraft:jungle_temple': placeholder('minecraft:jungle_temple', 32, 8, 14357619),
  'minecraft:witch_hut': placeholder('minecraft:witch_hut', 32, 8, 14357620),
  'minecraft:igloo': placeholder('minecraft:igloo', 32, 8, 14357618),
  'minecraft:mineshaft': frequency('minecraft:mineshaft', 0),
  // Strongholds are not a jittered grid of this kind: they use a 200-chunk cell
  // grid whose cells carry one stronghold each, and the placement lives in
  // `stronghold.js` rather than in this table. The row stays empty on purpose so
  // nothing here can be mistaken for a spacing.
  'minecraft:stronghold': row('minecraft:stronghold', {
    spacing: 0, separation: 0, salt: 0x5d534e7, spreadType: 'linear',
    evidence: 'binary', confirmed: false,
    note: 'own code path: see src/world/stronghold.js; the spacing is 0 so no table-driven tool can mistake the row for a grid'
  })
}

module.exports = { PLACEMENTS, PLACEMENT_SOURCE }
