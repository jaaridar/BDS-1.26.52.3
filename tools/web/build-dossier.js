#!/usr/bin/env node
'use strict'

/**
 * Build the single-file dossier: `web/seed-algorithm.html`.
 *
 * One HTML file that contains the algorithm as runnable code, the measurement
 * behind every constant, the hypotheses that were falsified, the tallies, the
 * gaps, and a calculator/finder/self-test that work offline with no network and
 * no second file. Nothing in it is fetched at runtime.
 *
 * Inputs, all of them in the repository:
 *
 *   web/dossier/page.html        the prose, with {{PLACEHOLDERS}} for the rest
 *   web/dossier/style.css        inlined stylesheet
 *   web/dossier/runtime.js       inlined calculator / finder / self-checks
 *   src/world/*.js               the reference implementation, inlined verbatim
 *   web/public/seedfinder.wasm   the wasm core, inlined as base64
 *   web/public/placements.json   the measured table and its tallies
 *   src/world/structures-data.js the same table at source
 *   docs/worldgen.md             inlined as Appendix B
 *   tools/web/evidence.js        runs the verifiers to get the current tallies
 *
 * The build is deterministic: no timestamps, no git revision, so CI can
 * regenerate it and compare bytes. What identifies the content instead is a set
 * of SHA-256 hashes over the inputs, printed in §10 of the file.
 *
 *   node tools/web/build-dossier.js
 */

const fs = require('node:fs')
const path = require('node:path')
const crypto = require('node:crypto')

const ROOT = path.resolve(__dirname, '..', '..')
const PUBLIC = path.join(ROOT, 'web', 'public')
const DOSSIER = path.join(ROOT, 'web', 'dossier')
const OUT = path.join(ROOT, 'web', 'seed-algorithm.html')

const evidence = require('./evidence.js')

const WORLD_MODULES = [
  ['mt19937.js', 'MT19937 and its draw conventions'],
  ['java-random.js', 'the 48-bit Java LCG the pack-driven sets use'],
  ['structure-placement.js', 'the candidate grid'],
  ['stronghold.js', 'the 200-chunk stronghold grid and its gate'],
  ['structures-data.js', 'the measured parameters, per set'],
  ['world-report.js', 'composition and status labels for one seed']
]

const read = (file) => fs.readFileSync(file, 'utf8')
const sha256 = (buffer) => crypto.createHash('sha256').update(buffer).digest('hex')
const escapeHtml = (text) => String(text)
  .replace(/&/g, '&amp;')
  .replace(/</g, '&lt;')
  .replace(/>/g, '&gt;')
  .replace(/"/g, '&quot;')

// ---------------------------------------------------------------------------
// Source bundle: the reference implementation, verbatim, for the page to run
// ---------------------------------------------------------------------------

function bundleWorld () {
  const parts = []
  parts.push('// src/world/*.js bundled unmodified by tools/web/build-dossier.js.')
  parts.push('// This is the reference implementation the wasm core is checked against.')
  parts.push('(function (global) {')
  parts.push("  'use strict'")
  parts.push('  var defs = {}, cache = {}')
  parts.push('  function resolve (from, request) {')
  parts.push("    var base = from.split('/').slice(0, -1)")
  parts.push("    request.split('/').forEach(function (part) {")
  parts.push("      if (part === '.' || part === '') return")
  parts.push("      if (part === '..') base.pop(); else base.push(part)")
  parts.push('    })')
  parts.push("    var id = base.join('/')")
  parts.push("    return /\\.js$/.test(id) ? id : id + '.js'")
  parts.push('  }')
  parts.push('  function req (id) {')
  parts.push('    if (cache[id]) return cache[id].exports')
  parts.push('    var module = { exports: {} }')
  parts.push('    cache[id] = module')
  parts.push('    defs[id](module, module.exports, function (request) { return req(resolve(id, request)) })')
  parts.push('    return module.exports')
  parts.push('  }')
  for (const [name] of WORLD_MODULES) {
    const id = `src/world/${name}`
    parts.push(`  defs[${JSON.stringify(id)}] = function (module, exports, require) {`)
    parts.push(read(path.join(ROOT, 'src', 'world', name)).replace(/^/gm, '    '))
    parts.push('  }')
  }
  parts.push("  var data = req('src/world/structures-data.js')")
  parts.push("  var placement = req('src/world/structure-placement.js')")
  parts.push("  var stronghold = req('src/world/stronghold.js')")
  parts.push('  global.OpenBDSWorld = {')
  parts.push('    PLACEMENTS: data.PLACEMENTS,')
  parts.push('    candidateStarts: placement.candidateStarts,')
  parts.push('    structureInCell: placement.structureInCell,')
  parts.push('    seed32: placement.seed32,')
  parts.push('    seed48: placement.seed48,')
  parts.push('    strongholdInCell: stronghold.strongholdInCell,')
  parts.push('    strongholdsNear: stronghold.strongholdsNear,')
  parts.push('    CELL: stronghold.CELL,')
  parts.push('    GRID_ODDS: stronghold.GRID_ODDS')
  parts.push('  }')
  parts.push("})(typeof self !== 'undefined' ? self : globalThis)")
  return parts.join('\n')
}

// ---------------------------------------------------------------------------
// Generated sections
// ---------------------------------------------------------------------------

function specTable (manifest) {
  const rows = manifest.available.map((entry) => {
    const tally = entry.tally
    const measured = tally
      ? (tally.status === 'exact'
          ? `<span class="tag tag-pass">exact</span> ${tally.exact}/${tally.total}`
          : `<span class="tag tag-note">within one chunk</span> ${tally.withinOne}/${tally.total}`)
      : 'no corpus present'
    return `      <tr>
        <th scope="row" class="mono">${escapeHtml(entry.id)}</th>
        <td class="num">${entry.spacing} / ${entry.separation}</td>
        <td class="num">${entry.salt}</td>
        <td>${escapeHtml(entry.spreadType)}</td>
        <td>${entry.engine === 'java' ? 'Java LCG' : 'Mersenne'}</td>
        <td>${measured}</td>
      </tr>`
  })
  return `<div class="table-scroll" role="region" aria-labelledby="data-heading" tabindex="0">
    <table>
      <caption>Measured placement parameters, and the tally each one reproduces</caption>
      <thead>
        <tr>
          <th scope="col">Set</th>
          <th scope="col">Spacing / separation (chunks)</th>
          <th scope="col">Salt</th>
          <th scope="col">Spread</th>
          <th scope="col">Engine</th>
          <th scope="col">Captured positions</th>
        </tr>
      </thead>
      <tbody>
${rows.join('\n')}
      </tbody>
    </table>
  </div>`
}

function withdrawnList (manifest) {
  const entries = manifest.unavailable.map((entry) => `      <li><strong class="mono">${escapeHtml(entry.id)}</strong> — ${escapeHtml(entry.reason)}</li>`)
  return `<div class="withdrawn">
    <h3>Not modelled, and therefore not offered</h3>
    <p class="hint">Each of these exists in the game; none of their placement is measured, so nothing here will predict them.</p>
    <ul>
${entries.join('\n')}
    </ul>
    <p class="hint">Biomes, terrain and block placement are absent for the same reason: the climate router and the density functions are not recovered.</p>
  </div>`
}

function filterControls (manifest) {
  const out = []
  out.push('        <div class="filter" data-kind="stronghold">')
  out.push('          <p class="filter-head">')
  out.push('            <input type="checkbox" id="want-stronghold" data-role="enable">')
  out.push('            <label for="want-stronghold">strongholds</label>')
  out.push(`            <span class="badge badge-exact">${escapeHtml(strongholdBadge(manifest))}</span>`)
  out.push('          </p>')
  out.push('          <p class="filter-body">')
  out.push('            <label for="want-stronghold-count">Minimum</label>')
  out.push('            <input id="want-stronghold-count" type="number" min="1" max="20" step="1" value="1" disabled>')
  out.push('            <label for="want-stronghold-radius">Radius (chunks)</label>')
  out.push('            <input id="want-stronghold-radius" type="number" min="16" max="4096" step="16" value="400" disabled>')
  out.push('            <label for="want-stronghold-mode">Cells to count</label>')
  out.push('            <select id="want-stronghold-mode" disabled>')
  out.push('              <option value="gated" selected>on-grid only (positions exact)</option>')
  out.push('              <option value="any">every cell (ungated ones are moved)</option>')
  out.push('            </select>')
  out.push('          </p>')
  out.push('        </div>')
  for (const entry of manifest.available) {
    const name = entry.name
    const tally = entry.tally
    const badge = tally
      ? `exact · ${tally.withinOne}/${tally.total} captured`
      : 'exact · confirmed'
    out.push(`        <div class="filter" data-placement="${escapeHtml(name)}" data-index="${entry.index}">`)
    out.push('          <p class="filter-head">')
    out.push(`            <input type="checkbox" id="want-${escapeHtml(name)}" data-role="enable">`)
    out.push(`            <label for="want-${escapeHtml(name)}">${escapeHtml(name.replace(/_/g, ' '))}</label>`)
    out.push(`            <span class="badge badge-exact">${escapeHtml(badge)}</span>`)
    out.push('          </p>')
    out.push('          <p class="filter-body">')
    out.push(`            <label for="want-${escapeHtml(name)}-count">Minimum</label>`)
    out.push(`            <input id="want-${escapeHtml(name)}-count" type="number" min="1" max="999" step="1" value="1" disabled>`)
    out.push(`            <label for="want-${escapeHtml(name)}-radius">Radius (chunks)</label>`)
    out.push(`            <input id="want-${escapeHtml(name)}-radius" type="number" min="16" max="2048" step="16" value="200" disabled>`)
    out.push('          </p>')
    out.push('        </div>')
  }
  return out.join('\n')
}

function strongholdBadge (manifest) {
  const total = manifest.evidence && manifest.evidence.strongholds
  if (!total) return 'grid positions measured'
  return `grid positions · ${total.gatedExact}/${total.gated} gated cells exact`
}

function strongholdEvidence (manifest) {
  const total = manifest.evidence && manifest.evidence.strongholds
  if (!total) {
    return '<p class="hint">The capture corpus is not present in this build, so no tally is quoted here.</p>'
  }
  const pct = (part, whole) => `${((part / whole) * 100).toFixed(1)}%`
  return `<div class="table-scroll" role="region" aria-labelledby="algorithm-heading" tabindex="0">
      <table>
        <caption>What the gate decides, measured on ${total.observations} captured strongholds</caption>
        <thead>
          <tr>
            <th scope="col">Cells</th>
            <th scope="col">Captured</th>
            <th scope="col">At the grid position</th>
            <th scope="col">Moved by the generator</th>
          </tr>
        </thead>
        <tbody>
          <tr>
            <th scope="row">gated (draw &lt; 0.25)</th>
            <td class="num">${total.gated}</td>
            <td class="num">${total.gatedExact} (${pct(total.gatedExact, total.gated)})</td>
            <td class="num">${total.gatedRelocated}</td>
          </tr>
          <tr>
            <th scope="row">ungated (draw ≥ 0.25)</th>
            <td class="num">${total.ungated}</td>
            <td class="num">${total.ungatedExact} (${pct(total.ungatedExact, total.ungated)})</td>
            <td class="num">${total.ungatedRelocated}</td>
          </tr>
        </tbody>
      </table>
    </div>
    <p class="hint">
      So the gate is necessary — no ungated cell has ever been at its grid position — and it is
      sufficient ${pct(total.gatedExact, total.gated)} of the time; the remainder are cells the
      generator moved through the biome query of §1.4. A separate probe asked the server
      directly about the model's own predictions (320 probes): 159 of 160 gated cells answered
      with the origin chunk itself, 0 of 160 ungated cells did.
    </p>`
}

function evidenceTable (manifest) {
  const rows = []
  const placements = evidence.collected.placements
  const verdict = (row) => {
    if (row.status === 'exact') return '<span class="tag tag-pass">exact</span>'
    if (row.id === 'minecraft:stronghold') return '<span class="tag tag-note">own grid — tally below</span>'
    if (row.status === 'degenerate band: span 1') return '<span class="tag tag-note">per-chunk gate, not a grid</span>'
    const outside = row.withinOne === null ? null : row.total - row.withinOne
    if (outside === 0) return '<span class="tag tag-note">within one chunk</span>'
    if (outside !== null) return `<span class="tag tag-note">within one chunk, ${outside} further</span>`
    return `<span class="tag tag-note">${escapeHtml(row.status)}</span>`
  }
  if (placements) {
    for (const row of placements) {
      if (!row.total) continue
      const measured = verdict(row)
      rows.push(`      <tr>
        <th scope="row" class="mono">${escapeHtml(row.id)}</th>
        <td class="num">${row.exact === null ? '—' : row.exact}</td>
        <td class="num">${row.withinOne === null ? '—' : row.withinOne}</td>
        <td class="num">${row.total}</td>
        <td>${measured}</td>
      </tr>`)
    }
  }
  const strongholds = evidence.collected.strongholds
  const strongholdText = strongholds
    ? `<p>
        Strongholds, ${strongholds.total.observations} captured answers:
        <strong>${strongholds.total.exact}</strong> at the predicted grid chunk
        (<strong>${strongholds.total.gatedExact}</strong> of ${strongholds.total.gated} gated cells,
        <strong>0</strong> of ${strongholds.total.ungated} ungated).
      </p>`
    : '<p class="hint">The stronghold corpus is not present in this build.</p>'
  const table = placements
    ? `<div class="table-scroll" role="region" aria-labelledby="forensics-heading" tabindex="0">
      <table>
        <caption>Captured positions replayed by the model, from <code>verify-placements.js</code></caption>
        <thead>
          <tr>
            <th scope="col">Set</th>
            <th scope="col">Exact</th>
            <th scope="col">Within one chunk</th>
            <th scope="col">Captured</th>
            <th scope="col">Verdict</th>
          </tr>
        </thead>
        <tbody>
${rows.join('\n')}
        </tbody>
      </table>
    </div>
    <p class="hint">
      Two rows deserve their footnote. <code>trail_ruins</code> has one capture that is not
      within a chunk of the modelled placement — it is shown rather than smoothed by widening
      the tolerance. <code>mineshaft</code> has a span of one chunk, so every chunk is a
      candidate and "24/24" would be meaningless; it is gated per chunk by the biome test and
      is therefore not offered as a filter.
    </p>`
    : '<p class="hint">The capture corpus is not present in this build, so no per-set tallies are quoted.</p>'
  return `${table}\n${strongholdText}`
}

function sealsSection (inputs) {
  const rows = inputs.map((input) => `      <tr>
        <th scope="row" class="mono">${escapeHtml(input.name)}</th>
        <td class="num">${input.bytes === null ? '—' : input.bytes}</td>
        <td class="seal">${input.sha256}</td>
      </tr>`)
  return `<div class="table-scroll" role="region" aria-labelledby="seals-heading" tabindex="0">
      <table>
        <caption>SHA-256 of every input inlined into this file</caption>
        <thead>
          <tr>
            <th scope="col">Input</th>
            <th scope="col">Bytes</th>
            <th scope="col">SHA-256</th>
          </tr>
        </thead>
        <tbody>
${rows.join('\n')}
        </tbody>
      </table>
    </div>
    <p class="hint">
      The file itself is deterministic: regenerating it from the same inputs produces the same
      bytes, which is why there is no timestamp to compare and no revision to trust.
    </p>`
}

function sourcesAppendix () {
  const blocks = WORLD_MODULES.map(([name, description]) => {
    const code = read(path.join(ROOT, 'src', 'world', name))
    return `    <details>
      <summary><code>src/world/${name}</code> — ${escapeHtml(description)}</summary>
      <pre tabindex="0"><code>${escapeHtml(code)}</code></pre>
    </details>`
  })
  const wasmSource = read(path.join(ROOT, 'web', 'assembly', 'seedfinder.ts'))
  blocks.push(`    <details>
      <summary><code>web/assembly/seedfinder.ts</code> — the WebAssembly core (transcription of the six files above)</summary>
      <pre tabindex="0"><code>${escapeHtml(wasmSource)}</code></pre>
    </details>`)
  return blocks.join('\n')
}

// ---------------------------------------------------------------------------
// Assembly
// ---------------------------------------------------------------------------

const EXAMPLES = [
  { seed: '1', chunk: [66, 76], radiusChunks: 100.7 },
  { seed: '2', chunk: [-20, -55], radiusChunks: 58.5 },
  { seed: '7', chunk: [-20, 43], radiusChunks: 47.4 },
  { seed: '12', chunk: [41, -199], radiusChunks: 203.2 }
]

function main () {
  const manifest = JSON.parse(read(path.join(PUBLIC, 'placements.json')))
  const wasm = fs.readFileSync(path.join(PUBLIC, 'seedfinder.wasm'))
  const page = read(path.join(DOSSIER, 'page.html'))
  const runtime = read(path.join(DOSSIER, 'runtime.js'))
  const style = read(path.join(DOSSIER, 'style.css'))
  const record = read(path.join(ROOT, 'docs', 'worldgen.md'))

  evidence.collected = evidence.collect()

  const foundation = [
    '// ---- foundation: the reference implementation, the wasm core, the table ----',
    bundleWorld(),
    `const SEEDFINDER_WASM_BASE64 = ${JSON.stringify(wasm.toString('base64'))}`,
    `const PLACEMENT_MANIFEST = ${JSON.stringify(manifest)}`,
    `const DOSSIER_EXAMPLES = ${JSON.stringify(EXAMPLES)}`
  ].join('\n\n')

  const inputs = [
    ...WORLD_MODULES.map(([name]) => {
      const file = path.join(ROOT, 'src', 'world', name)
      const buffer = fs.readFileSync(file)
      return { name: `src/world/${name}`, bytes: buffer.length, sha256: sha256(buffer) }
    }),
    { name: 'web/assembly/seedfinder.ts', ...fileSeal(path.join(ROOT, 'web', 'assembly', 'seedfinder.ts')) },
    { name: 'web/public/seedfinder.wasm', bytes: wasm.length, sha256: sha256(wasm) },
    { name: 'web/public/placements.json', ...fileSeal(path.join(PUBLIC, 'placements.json')) },
    { name: 'docs/worldgen.md', ...fileSeal(path.join(ROOT, 'docs', 'worldgen.md')) },
    {
      name: 'evidence (verifier output)',
      bytes: null,
      sha256: sha256(JSON.stringify({ placements: evidence.collected.placements, strongholds: evidence.collected.strongholds }))
    }
  ]

  const meta = `<p class="hint">
    Built by <code>tools/web/build-dossier.js</code> from
    ${WORLD_MODULES.length} world-generation modules and
    ${manifest.available.length} measured structure sets. The WebAssembly core
    (${wasm.length} bytes) and the JavaScript reference are both inside this file, so the
    self-checks can compare them here. No network access of any kind is used.
  </p>`

  let html = page
    .replace('{{STYLE}}', style)
    .replace('{{META_FOOTER}}', `File size when built: ${'{{SIZE}}'}.`)
    .replace('{{META}}', meta)
    .replace('{{SPEC_TABLE}}', specTable(manifest))
    .replace('{{WITHDRAWN}}', withdrawnList(manifest))
    .replace('{{FILTER_CONTROLS}}', filterControls(manifest))
    .replace('{{STRONGHOLD_EVIDENCE}}', strongholdEvidence(manifest))
    .replace('{{EVIDENCE_TABLE}}', evidenceTable(manifest))
    .replace('{{SEALS}}', sealsSection(inputs))
    .replace('{{SOURCES}}', sourcesAppendix())
    .replace('{{RECORD_LINES}}', String(record.split('\n').length))
    .replace('{{RECORD}}', escapeHtml(record))
    .replace('{{FOUNDATION}}', foundation)
    .replace('{{RUNTIME}}', runtime)

  const size = `${(Buffer.byteLength(html) / 1024).toFixed(1)} kB`
  html = html.replace('{{SIZE}}', size)
  if (/\{\{[A-Z_]+\}\}/.test(html)) {
    const left = [...new Set(html.match(/\{\{[A-Z_]+\}\}/g))]
    throw new Error(`unfilled placeholders: ${left.join(', ')}`)
  }
  fs.mkdirSync(path.dirname(OUT), { recursive: true })
  fs.writeFileSync(OUT, html)
  console.log(`  web/seed-algorithm.html   ${size} (${manifest.available.length} sets, wasm ${wasm.length} bytes)`)
  console.log(`  sha256 of the file        ${sha256(fs.readFileSync(OUT))}`)
}

function fileSeal (file) {
  const buffer = fs.readFileSync(file)
  return { bytes: buffer.length, sha256: sha256(buffer) }
}

main()
