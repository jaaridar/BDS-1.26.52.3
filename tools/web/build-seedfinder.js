#!/usr/bin/env node
'use strict'

/**
 * Build the seed finder's WebAssembly core and its JavaScript reference bundle.
 *
 * Three artifacts, all generated -- none of them is a source of truth:
 *
 *   web/assembly/placements.gen.ts   the placement table, from src/world/structures-data.js
 *   web/public/placements.json       the same table plus prose, for the UI
 *   web/public/reference.js          src/world/*.js, bundled for the browser
 *   web/public/seedfinder.wasm       web/assembly/seedfinder.ts, compiled
 *
 * The point of generating the table is that a number can only be corrected in
 * one place. `src/world/structures-data.js` is where every spacing, salt and
 * spread type lives, each with the capture tally that confirms it; this script
 * copies those numbers into the web build and refuses to guess the rest.
 *
 * Usage:
 *
 *   node tools/web/build-seedfinder.js            # everything
 *   node tools/web/build-seedfinder.js --no-wasm  # table + bundle only
 *
 * The compiler is looked up in ASC, then in a few usual places, then `npx asc`.
 * Install it without touching this project's dependency tree with
 *
 *   npm install --prefix /tmp/asc assemblyscript@0.27.31
 *   ASC=/tmp/asc/node_modules/assemblyscript/bin/asc.js node tools/web/build-seedfinder.js
 */

const fs = require('node:fs')
const path = require('node:path')
const { execFileSync } = require('node:child_process')

const ROOT = path.resolve(__dirname, '..', '..')
const PUBLIC = path.join(ROOT, 'web', 'public')
const ASSEMBLY = path.join(ROOT, 'web', 'assembly')

const { PLACEMENTS } = require(path.join(ROOT, 'src', 'world', 'structures-data.js'))

/**
 * Which rows the finder may filter on.
 *
 * A row is offered only when its parameters were confirmed against captured
 * server answers. `confirmed: false` rows are placeholders, and presenting them
 * as filters would put invented worlds in front of a user -- so they are carried
 * into the UI as *disabled* entries with the reason attached instead.
 */
function partition (placements) {
  const available = []
  const unavailable = []
  for (const placement of Object.values(placements)) {
    if (placement.id === 'minecraft:stronghold') continue // its own code path
    const entry = {
      id: placement.id,
      name: placement.id.replace('minecraft:', ''),
      spacing: placement.spacing,
      separation: placement.separation,
      salt: placement.salt,
      spreadType: placement.spreadType,
      engine: placement.engine,
      evidence: placement.evidence,
      confirmed: placement.confirmed,
      note: placement.note || null,
      tolerance: toleranceOf(placement)
    }
    if (placement.confirmed && placement.spacing > 1) available.push(entry)
    else {
      entry.reason = placement.confirmed === false
        ? (placement.note || 'placement parameters are placeholders, not measured')
        : 'this set is gated per chunk rather than placed on a grid'
      unavailable.push(entry)
    }
  }
  available.sort((a, b) => a.name.localeCompare(b.name))
  unavailable.sort((a, b) => a.name.localeCompare(b.name))
  return { available, unavailable }
}

/** How far a reported position may sit from the modelled chunk. */
function toleranceOf (placement) {
  if (!placement.note) return 0
  if (/within one chunk/.test(placement.note)) return 1
  return 0
}

function writePlacements (available) {
  const lines = []
  lines.push('// GENERATED FILE -- do not edit.')
  lines.push('//')
  lines.push('// Written by tools/web/build-seedfinder.js from src/world/structures-data.js.')
  lines.push('// Every number here is that file\'s measured value for one structure set;')
  lines.push('// the order is the order of `available` in web/public/placements.json.')
  lines.push('')
  lines.push(`export const P_COUNT: i32 = ${available.length}`)
  lines.push('')
  const table = (name, type, pick) => {
    const cases = available.map((entry, i) => `  case ${i}: return ${pick(entry, type)}`)
    lines.push(`export function ${name} (i: i32): ${type} {`)
    lines.push('  switch (i) {')
    lines.push(...cases)
    lines.push('  }')
    lines.push(`  return ${type === 'bool' ? 'false' : '0'}`)
    lines.push('}')
    lines.push('')
  }
  table('pSpacing', 'i32', (e) => e.spacing)
  table('pSeparation', 'i32', (e) => e.separation)
  table('pSalt', 'u32', (e) => `${e.salt}`)
  table('pTriangular', 'bool', (e) => e.spreadType === 'triangular')
  table('pJava', 'bool', (e) => e.engine === 'java')
  fs.writeFileSync(path.join(ASSEMBLY, 'placements.gen.ts'), lines.join('\n'))

  return {
    generatedBy: 'tools/web/build-seedfinder.js',
    source: 'src/world/structures-data.js',
    orderNote: 'index i in this file is index i in web/assembly/placements.gen.ts',
    available: available.map((entry, index) => ({ index, ...entry }))
  }
}

function writeManifest (manifest, unavailable) {
  const out = {
    generatedBy: manifest.generatedBy,
    source: manifest.source,
    orderNote: manifest.orderNote,
    available: manifest.available,
    unavailable
  }
  fs.writeFileSync(path.join(PUBLIC, 'placements.json'), JSON.stringify(out, null, 2) + '\n')
}

/**
 * Write the filter controls into index.html, between the FILTERS markers.
 *
 * They are generated rather than hand-written so that the set of tickable
 * structures cannot drift from the measured table, and they are written into the
 * HTML rather than built in JavaScript so the controls are real static markup:
 * labelled inputs that exist before any script runs, which is also what makes
 * them checkable by `tools/web/a11y-check.js`.
 */
function writeFilterMarkup (available, unavailable) {
  const page = path.join(PUBLIC, 'index.html')
  const html = fs.readFileSync(page, 'utf8')
  const begin = html.indexOf('<!-- FILTERS:BEGIN -->')
  const end = html.indexOf('<!-- FILTERS:END -->')
  if (begin < 0 || end < 0) throw new Error('index.html lost its FILTERS markers')
  const out = [html.slice(0, begin), '<!-- FILTERS:BEGIN -->', '']
  const slug = (id) => id.replace(/^minecraft:/, '')
  const esc = (text) => String(text).replace(/&/g, '&amp;').replace(/</g, '&lt;').replace(/>/g, '&gt;').replace(/"/g, '&quot;')

  out.push('<div class="filter" data-kind="stronghold">')
  out.push('  <p class="filter-head">')
  out.push('    <input type="checkbox" id="filter-stronghold" data-role="enable">')
  out.push('    <label for="filter-stronghold">strongholds</label>')
  out.push('    <span class="badge badge-exact">grid positions exact · 159/160 probed</span>')
  out.push('  </p>')
  out.push('  <p class="filter-body">')
  out.push('    <label for="filter-stronghold-count">Minimum</label>')
  out.push('    <input id="filter-stronghold-count" type="number" min="1" max="20" step="1" value="1" disabled>')
  out.push('    <label for="filter-stronghold-radius">Radius (chunks)</label>')
  out.push('    <input id="filter-stronghold-radius" type="number" min="16" max="4096" step="16" value="400" disabled>')
  out.push('    <label for="filter-stronghold-nearest">Nearest within (blocks)</label>')
  out.push('    <input id="filter-stronghold-nearest" type="number" min="0" max="100000" step="16" value="0" disabled aria-describedby="filter-stronghold-nearest-hint">')
  out.push('    <label for="filter-stronghold-mode">Cells to count</label>')
  out.push('    <select id="filter-stronghold-mode" disabled>')
  out.push('      <option value="gated" selected>on-grid only (positions exact)</option>')
  out.push('      <option value="any">every cell (ungated ones are moved)</option>')
  out.push('    </select>')
  out.push('  </p>')
  out.push('  <p class="hint" id="filter-stronghold-nearest-hint">0 ignores the distance test. Each world also has exactly three strongholds at villages, which this cannot place yet.</p>')
  out.push('</div>')
  out.push('')

  for (const entry of available) {
    const name = slug(entry.id)
    const exact = entry.tolerance === 0
    const badge = exact
      ? `exact${entry.note ? ` · ${tally(entry.note)}` : ''}`
      : `within ${entry.tolerance} chunk${entry.tolerance === 1 ? '' : 's'}`
    out.push(`<div class="filter" data-placement="${esc(name)}" data-index="${entry.index}">`)
    out.push('  <p class="filter-head">')
    out.push(`    <input type="checkbox" id="filter-${esc(name)}" data-role="enable">`)
    out.push(`    <label for="filter-${esc(name)}">${esc(name.replace(/_/g, ' '))}</label>`)
    out.push(`    <span class="badge ${exact ? 'badge-exact' : 'badge-approx'}">${esc(badge)}</span>`)
    out.push('  </p>')
    out.push('  <p class="filter-body">')
    out.push(`    <label for="filter-${esc(name)}-count">Minimum</label>`)
    out.push(`    <input id="filter-${esc(name)}-count" type="number" min="1" max="999" step="1" value="1" disabled>`)
    out.push(`    <label for="filter-${esc(name)}-radius">Radius (chunks)</label>`)
    out.push(`    <input id="filter-${esc(name)}-radius" type="number" min="16" max="2048" step="16" value="200" disabled>`)
    out.push('  </p>')
    out.push('</div>')
  }

  out.push('')
  out.push('<div class="withdrawn">')
  out.push('  <h3>Not available as filters</h3>')
  out.push('  <p class="hint">These sets exist in the game but their placement is not measured, so a filter on them would guess.</p>')
  out.push('  <ul>')
  for (const entry of unavailable) {
    out.push(`    <li><strong>${esc(slug(entry.id).replace(/_/g, ' '))}</strong> — ${esc(entry.reason)}</li>`)
  }
  out.push('  </ul>')
  out.push('  <p class="hint">Biomes and terrain are also absent, because the climate sampler is not recovered.</p>')
  out.push('</div>')
  out.push('')
  out.push('<!-- FILTERS:END -->')
  out.push(html.slice(end + '<!-- FILTERS:END -->'.length))
  fs.writeFileSync(page, out.join('\n'))
}

/** The capture tally out of a row note, e.g. "98/98 captured positions" -> "98/98 captured". */
function tally (note) {
  const match = /(\d+\/\d+) captured/.exec(note)
  return match ? `${match[1]} captured` : 'confirmed'
}

/**
 * Bundle src/world into one browser file.
 *
 * No bundler dependency: the modules only require each other, so a 20-line
 * CommonJS shim is enough, and reading the real sources means the fallback path
 * in the browser is the reference implementation and not a second opinion.
 */
function writeReferenceBundle () {
  const modules = [
    'mt19937',
    'java-random',
    'structures-data',
    'structure-placement',
    'stronghold',
    'world-report'
  ]
  const sources = modules.map((name) => {
    const file = path.join(ROOT, 'src', 'world', `${name}.js`)
    return { id: `src/world/${name}.js`, code: fs.readFileSync(file, 'utf8') }
  })

  const parts = []
  parts.push('// GENERATED FILE -- do not edit. Bundled by tools/web/build-seedfinder.js')
  parts.push('// from src/world/*.js. This is the reference implementation, unmodified:')
  parts.push('// the wasm core is checked against it by the in-browser stress test.')
  parts.push('(function (global) {')
  parts.push("  'use strict'")
  parts.push('  var defs = {}')
  parts.push('  var cache = {}')
  parts.push('  function resolve (from, request) {')
  parts.push("    if (request.charAt(0) !== '.') throw new Error('external require in a world module: ' + request)")
  parts.push("    var base = from.split('/').slice(0, -1)")
  parts.push("    request.split('/').forEach(function (part) {")
  parts.push("      if (part === '.' || part === '') return")
  parts.push("      if (part === '..') base.pop()")
  parts.push('      else base.push(part)')
  parts.push('    })')
  parts.push("    var id = base.join('/')")
  parts.push("    return /\\.js$/.test(id) ? id : id + '.js'")
  parts.push('  }')
  parts.push('  function req (id) {')
  parts.push('    if (cache[id]) return cache[id].exports')
  parts.push("    if (!defs[id]) throw new Error('module not bundled: ' + id)")
  parts.push('    var module = { exports: {} }')
  parts.push('    cache[id] = module')
  parts.push('    defs[id](module, module.exports, function (request) { return req(resolve(id, request)) })')
  parts.push('    return module.exports')
  parts.push('  }')
  for (const source of sources) {
    parts.push(`  defs[${JSON.stringify(source.id)}] = function (module, exports, require) {`)
    parts.push(source.code.replace(/^/gm, '    '))
    parts.push('  }')
  }
  parts.push("  var placementData = req('src/world/structures-data.js')")
  parts.push("  var placement = req('src/world/structure-placement.js')")
  parts.push("  var stronghold = req('src/world/stronghold.js')")
  parts.push("  var report = req('src/world/world-report.js')")
  parts.push('  global.OpenBDSWorld = {')
  parts.push('    PLACEMENTS: placementData.PLACEMENTS,')
  parts.push('    candidateStarts: placement.candidateStarts,')
  parts.push('    structureInCell: placement.structureInCell,')
  parts.push('    nearestStart: placement.nearestStart,')
  parts.push('    strongholdInCell: stronghold.strongholdInCell,')
  parts.push('    strongholdsNear: stronghold.strongholdsNear,')
  parts.push('    seed32: stronghold.seed32,')
  parts.push('    strongholdCell: stronghold.CELL,')
  parts.push('    structuresNear: report.structuresNear,')
  parts.push('    formatReport: report.formatReport')
  parts.push('  }')
  parts.push("})(typeof self !== 'undefined' ? self : globalThis)")
  parts.push('')
  fs.writeFileSync(path.join(PUBLIC, 'reference.js'), parts.join('\n'))
  return sources.length
}

function findCompiler () {
  const candidates = []
  if (process.env.ASC) candidates.push(process.env.ASC)
  candidates.push('/tmp/asc/node_modules/assemblyscript/bin/asc.js')
  try {
    candidates.push(require.resolve('assemblyscript/bin/asc.js', { paths: [ROOT] }))
  } catch { /* not installed in the project tree; that is fine */ }
  for (const candidate of candidates) {
    if (fs.existsSync(candidate)) return candidate
  }
  return null
}

function compileWasm () {
  const compiler = findCompiler()
  if (!compiler) {
    console.error('no AssemblyScript compiler found.')
    console.error('  npm install --prefix /tmp/asc assemblyscript@0.27.31')
    console.error('  ASC=/tmp/asc/node_modules/assemblyscript/bin/asc.js node tools/web/build-seedfinder.js')
    return false
  }
  const out = path.join(PUBLIC, 'seedfinder.wasm')
  execFileSync(process.execPath, [
    compiler,
    path.join(ASSEMBLY, 'seedfinder.ts'),
    '--outFile', out,
    '--runtime', 'stub',
    '--optimize',
    '--noAssert'
  ], { stdio: 'inherit', cwd: ROOT })
  const bytes = fs.statSync(out).size
  console.log(`  web/public/seedfinder.wasm        ${bytes} bytes`)
  return true
}

function main () {
  const args = process.argv.slice(2)
  fs.mkdirSync(PUBLIC, { recursive: true })
  fs.mkdirSync(ASSEMBLY, { recursive: true })

  const { available, unavailable } = partition(PLACEMENTS)
  const manifest = writePlacements(available)
  writeManifest(manifest, unavailable)
  console.log(`  web/assembly/placements.gen.ts    ${available.length} filterable sets`)
  console.log(`  web/public/placements.json        ${available.length} available, ${unavailable.length} withdrawn`)
  writeFilterMarkup(available, unavailable)
  console.log(`  web/public/index.html             ${available.length + 1} filter rows`)
  const bundled = writeReferenceBundle()
  console.log(`  web/public/reference.js           ${bundled} world modules`)

  if (!args.includes('--no-wasm')) {
    if (!compileWasm()) process.exitCode = 1
  }
}

main()
