'use strict'

/**
 * Read the structure-set parameters out of the packs the server ships.
 *
 * This is the one place where the placement numbers come from data instead of
 * from code: a structure set that is data driven declares its own
 * `placement`:
 *
 *     {"type": "minecraft:random_spread", "salt": 83469867,
 *      "separation": 8, "spacing": 34, "spread_type": "linear"}
 *
 * which is exactly the tuple the recovered resolver takes (salt, separation,
 * spacing, spread type). Most structures are still compiled into the binary;
 * the ones that ship a set are measurable here with no disassembly at all.
 *
 * The packs are already unpacked in the repository root, so this needs no
 * server run:
 *
 *   node tools/worldgen-algo/pack-structure-sets.js
 *   node tools/worldgen-algo/pack-structure-sets.js --json
 */

const fs = require('node:fs')
const path = require('node:path')

const { readArchive } = require('./brarchive')

const PACKS = 'behavior_packs'

function parseArgs (argv) {
  const args = { json: false, packs: PACKS }
  for (let i = 2; i < argv.length; i++) {
    const arg = argv[i]
    const next = () => {
      const value = argv[++i]
      if (value === undefined) throw new Error(`${arg} needs a value`)
      return value
    }
    switch (arg) {
      case '--json': args.json = true; break
      case '--packs': args.packs = next(); break
      default: throw new Error(`unknown argument ${arg}`)
    }
  }
  return args
}

/**
 * Every structure-set document reachable from a pack directory: loose JSON under
 * `worldgen/structure_sets`, the `structure_sets.brarchive` bundle, and any
 * entry of another archive whose path names a structure set.
 */
function collectDocuments (packDir) {
  const documents = []
  const archive = path.join(packDir, '__brarchive', 'worldgen', 'structure_sets.brarchive')
  if (fs.existsSync(archive)) {
    for (const entry of readArchive(fs.readFileSync(archive)).entries) {
      documents.push({ source: archive, name: entry.name, text: entry.data.toString('utf8') })
    }
  }
  const worldgen = path.join(packDir, '__brarchive', 'worldgen.brarchive')
  if (fs.existsSync(worldgen) && fs.statSync(worldgen).size > 16) {
    for (const entry of readArchive(fs.readFileSync(worldgen)).entries) {
      if (entry.name.includes('structure_set')) {
        documents.push({ source: worldgen, name: entry.name, text: entry.data.toString('utf8') })
      }
    }
  }
  const loose = path.join(packDir, 'worldgen', 'structure_sets')
  if (fs.existsSync(loose)) {
    for (const name of fs.readdirSync(loose)) {
      if (!name.endsWith('.json')) continue
      const file = path.join(loose, name)
      documents.push({ source: file, name, text: fs.readFileSync(file, 'utf8') })
    }
  }
  return documents
}

/** Newest pack wins: `vanilla_1.26.50` is newer than `vanilla_1.19.80`. */
function versionOf (packName) {
  const match = /^vanilla_(\d+(?:\.\d+)*)$/.exec(packName)
  if (!match) return null
  return match[1].split('.').map(Number)
}

function compareVersions (a, b) {
  for (let i = 0; i < Math.max(a.length, b.length); i++) {
    const left = a[i] ?? 0
    const right = b[i] ?? 0
    if (left !== right) return left - right
  }
  return 0
}

function main () {
  const args = parseArgs(process.argv)
  const packs = fs.readdirSync(args.packs)
    .map((name) => ({ name, version: versionOf(name) }))
    .filter((pack) => pack.version)
    .sort((a, b) => compareVersions(a.version, b.version))

  const sets = new Map()
  for (const pack of packs) {
    for (const document of collectDocuments(path.join(args.packs, pack.name))) {
      let parsed
      try {
        parsed = JSON.parse(document.text)
      } catch {
        continue
      }
      const set = parsed['minecraft:structure_set']
      if (!set) continue
      const identifier = set.description?.identifier
      if (!identifier) continue
      sets.set(identifier, {
        identifier,
        placement: set.placement,
        structures: (set.structures || []).map((entry) => entry.structure),
        formatVersion: parsed.format_version,
        pack: pack.name,
        source: document.source
      })
    }
  }

  const rows = [...sets.values()].sort((a, b) => a.identifier.localeCompare(b.identifier))
  if (args.json) {
    console.log(JSON.stringify(rows, null, 2))
    return
  }
  if (!rows.length) {
    console.error('no structure sets found in the packs')
    process.exit(1)
  }
  console.log('identifier\ttype\tsalt\tseparation\tspacing\tspread_type\tstructures\tpack\tformat')
  for (const row of rows) {
    const p = row.placement || {}
    console.log([
      row.identifier,
      (p.type || '').replace('minecraft:', ''),
      p.salt,
      p.separation,
      p.spacing,
      p.spread_type ?? '',
      row.structures.length,
      row.pack,
      row.formatVersion
    ].join('\t'))
  }
}

try {
  main()
} catch (error) {
  console.error(error.message)
  process.exit(1)
}
