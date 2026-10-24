'use strict'

/**
 * Placement parameters, per structure set.
 *
 * Every entry here has to be *measured*, not remembered from Java: Bedrock's
 * salts and spacings are its own, and the whole point of this file is that a
 * reader can check each number against evidence.
 *
 * `evidence` says where a row came from:
 *
 *   'pack'      the vanilla data pack ships the placement (readable JSON)
 *   'binary'    read out of the proprietary binary's constant pool
 *   'measured'  confirmed by asking the server (`locate structure`) and matching
 *   'unknown'   not recovered yet; present so callers can report it honestly
 *
 * The file currently has two kinds of rows. `trail_ruins` and `abandoned_camp`
 * are real: the packs ship their placement. The rest are placeholders carrying
 * the *structure of the answer* -- spacing, separation, salt, spread type --
 * with the numbers marked unconfirmed, because the placement table is built at
 * startup by the structure registry and has not been dumped yet. Nothing here
 * is allowed to look confirmed when it is not.
 */

/** The registry is not yet dumped; this records the plan for the reader. */
const PLACEMENT_SOURCE = {
  pack: 'behavior_packs/vanilla_1.26.50/__brarchive/worldgen/structure_sets.brarchive (brarchive reader in tools/worldgen-algo/brarchive.js)',
  binary: 'structure registry built at startup; not dumped yet',
  measured: 'tools/worldgen-algo/capture-structures.js asks the server with locate structure',
  note: 'rows marked confirmed:false are shape-only and must not be presented as facts'
}

function pack (id, placement, confirmed = false, note = null) {
  // `confirmed` claims more than "these are shipped data": it claims that
  // positions derived from them match the server. Only rows whose fit has been
  // measured carry it, and the measurement is named so it can be repeated:
  //   node tools/worldgen-algo/fit-placements.js --id trail_ruins
  return { id, ...placement, confirmed, evidence: 'pack', note }
}

function placeholder (id, spacing, separation, salt, spreadType = 'linear', note = null) {
  return { id, spacing, separation, salt, spreadType, confirmed: false, evidence: 'unknown', note }
}

/**
 * Sets that place one candidate per chunk behind a frequency gate.
 *
 * `spacing 1, separation 0` means the resolver's offset is always 0, so every
 * chunk is a potential start and the only thing that decides is a per-chunk
 * probability drawn from the same stream. Predicting these needs the frequency
 * and the per-chunk seed, neither of which is recovered yet -- so they are
 * marked as their own kind rather than left looking like a broken grid.
 */
function frequency (id, salt, note) {
  return {
    id,
    spacing: 1,
    separation: 0,
    salt,
    spreadType: 'linear',
    kind: 'frequency',
    confirmed: false,
    evidence: 'unknown',
    note: note || 'per-chunk frequency placement; the gate is not recovered yet'
  }
}

const PLACEMENTS = {
  'minecraft:trail_ruins': pack('minecraft:trail_ruins', {
    spacing: 34,
    separation: 8,
    salt: 83469867,
    spreadType: 'linear'
  }, true, 'pack placement + 23 `locate structure` observations across 23 seeds: ' +
    'every reported position lands within 3 blocks of the predicted chunk corner'),

  'minecraft:abandoned_camp': pack('minecraft:abandoned_camp', {
    spacing: 37,
    separation: 8,
    salt: 91231127,
    spreadType: 'linear'
  }),

  // --- shape-only rows: numbers not yet read from the binary ----------------
  'minecraft:village': placeholder('minecraft:village', 34, 8, 10387312),
  'minecraft:pillager_outpost': placeholder('minecraft:pillager_outpost', 32, 8, 165745296),
  'minecraft:monument': placeholder('minecraft:monument', 32, 5, 10387313),
  'minecraft:mansion': placeholder('minecraft:mansion', 80, 20, 10387319),
  'minecraft:ocean_ruin': placeholder('minecraft:ocean_ruin', 20, 8, 14357621),
  'minecraft:shipwreck': placeholder('minecraft:shipwreck', 24, 4, 165745295),
  'minecraft:ruined_portal': placeholder('minecraft:ruined_portal', 40, 15, 34222645),
  'minecraft:buried_treasure': frequency('minecraft:buried_treasure', 16842397),
  'minecraft:mineshaft': frequency('minecraft:mineshaft', 0),
  'minecraft:desert_pyramid': placeholder('minecraft:desert_pyramid', 32, 8, 14357617),
  'minecraft:jungle_temple': placeholder('minecraft:jungle_temple', 32, 8, 14357619),
  'minecraft:witch_hut': placeholder('minecraft:witch_hut', 32, 8, 14357620),
  'minecraft:igloo': placeholder('minecraft:igloo', 32, 8, 14357618),
  'minecraft:ancient_city': placeholder('minecraft:ancient_city', 24, 8, 20083232),
  'minecraft:trial_chambers': placeholder('minecraft:trial_chambers', 34, 12, 94251327),
  // Strongholds use a ring layout rather than a jittered grid; the ring
  // parameters are a separate computation and are not modelled here yet.
  'minecraft:stronghold': placeholder('minecraft:stronghold', 0, 0, 0)
}

module.exports = { PLACEMENTS, PLACEMENT_SOURCE }
