'use strict'

/**
 * Runtime for the single-file dossier.
 *
 * Inlined into web/seed-algorithm.html by tools/web/build-dossier.js, after two
 * globals it depends on:
 *
 *   OpenBDSWorld              the bundled JavaScript reference (src/world/*.js)
 *   SEEDFINDER_WASM_BASE64    the placement core, compiled from the same rules
 *   PLACEMENT_MANIFEST        the measured table (see §2) plus the tallies
 *   DOSSIER_EXAMPLES          the published worked examples (§6.4)
 *
 * There is no fetch, no worker and no external file: everything below runs in the
 * page, which is what makes the dossier self-contained and honest about being
 * offline. Searches run in batches with a yield between them so the page stays
 * responsive and the Stop button works.
 */

/* global OpenBDSWorld, SEEDFINDER_WASM_BASE64, PLACEMENT_MANIFEST, DOSSIER_EXAMPLES */

const $ = (id) => document.getElementById(id)
const nf = new Intl.NumberFormat()
const TWO32 = 4294967296
const SEED_MIN = -(2n ** 63n)
const SEED_MAX = 2n ** 63n - 1n

const state = {
  core: null,
  coreTried: false,
  running: false,
  stop: false,
  rules: [],
  hits: [],
  tested: 0,
  startedAt: 0
}

// ---------------------------------------------------------------------------
// Seeds
// ---------------------------------------------------------------------------

function parseSeed (text, label) {
  const trimmed = String(text).trim()
  if (!/^[-+]?\d+$/.test(trimmed)) {
    throw new Error(`${label} must be a whole number, such as 1 or -4827747. Received “${trimmed || '(empty)'}”.`)
  }
  const value = BigInt(trimmed)
  if (value < SEED_MIN || value > SEED_MAX) {
    throw new Error(`${label} must fit in 64 bits: ${SEED_MIN} to ${SEED_MAX}.`)
  }
  return value
}

const low32 = (seed) => Number(BigInt.asUintN(32, seed))
const low48 = (seed) => BigInt.asUintN(48, seed)
const splitSeed = (seed) => ({
  hi: Number(BigInt.asUintN(32, seed >> 32n)),
  lo: Number(BigInt.asUintN(32, seed))
})

function showError (id, message) {
  const box = $(id)
  if (!message) {
    box.hidden = true
    box.textContent = ''
    return
  }
  box.hidden = false
  box.textContent = message
}

// ---------------------------------------------------------------------------
// The WebAssembly core, from the base64 blob in this file
// ---------------------------------------------------------------------------

async function loadCore () {
  if (state.coreTried) return state.core
  state.coreTried = true
  try {
    const binary = atob(SEEDFINDER_WASM_BASE64)
    const bytes = new Uint8Array(binary.length)
    for (let index = 0; index < binary.length; index++) bytes[index] = binary.charCodeAt(index)
    const { instance } = await WebAssembly.instantiate(bytes, {
      env: { abort: () => { throw new Error('wasm abort in the placement core') } }
    })
    state.core = instance.exports
    return state.core
  } catch (error) {
    state.core = null
    return null
  }
}

// ---------------------------------------------------------------------------
// Calculator (§3)
// ---------------------------------------------------------------------------

function calculator (event) {
  event.preventDefault()
  let seed
  try {
    seed = parseSeed($('calc-seed').value, 'Seed')
  } catch (error) {
    showError('calc-error', error.message)
    return
  }
  showError('calc-error', '')
  const radius = Math.max(16, Math.min(1024, Number($('calc-radius').value) || 256))
  const rows = []

  for (const entry of PLACEMENT_MANIFEST.available) {
    const starts = OpenBDSWorld.candidateStarts(OpenBDSWorld.PLACEMENTS[entry.id], seed, 0, 0, radius)
    rows.push({
      name: entry.name,
      count: starts.length,
      nearest: starts[0] || null,
      status: entry.tolerance === 0
        ? `exact${entry.tally ? ` · ${entry.tally.exact}/${entry.tally.total} captured` : ''}`
        : `within ${entry.tolerance} chunk${entry.tally ? ` · ${entry.tally.withinOne}/${entry.tally.total} captured` : ''}`
    })
  }

  const cells = OpenBDSWorld.strongholdsNear(seed, 0, 0, Math.max(radius, 400))
  const gated = cells.filter((cell) => cell.gated)
  rows.push({
    name: 'strongholds, on grid',
    count: gated.length,
    nearest: gated[0] || null,
    status: 'exact when gated · 491/510 in the corpus'
  })
  rows.push({
    name: 'strongholds, cells moved by the generator',
    count: cells.length - gated.length,
    nearest: null,
    status: 'position not modelled — needs the biome query'
  })

  const fragment = document.createDocumentFragment()
  for (const row of rows) {
    const tr = document.createElement('tr')
    const name = document.createElement('th')
    name.scope = 'row'
    name.textContent = row.name
    tr.appendChild(name)
    const numeric = [
      nf.format(row.count),
      row.nearest ? `${row.nearest.blockX}, ${row.nearest.blockZ}` : '—',
      row.nearest ? `${row.nearest.chunkX}, ${row.nearest.chunkZ}` : '—',
      row.nearest ? nf.format(Math.round(row.nearest.distance)) : '—'
    ]
    for (const value of numeric) {
      const td = document.createElement('td')
      td.className = 'num'
      td.textContent = value
      tr.appendChild(td)
    }
    const statusCell = document.createElement('td')
    statusCell.textContent = row.status
    tr.appendChild(statusCell)
    fragment.appendChild(tr)
  }
  $('calc-body').replaceChildren(fragment)
  $('calc-table').hidden = false
  $('calc-caption').textContent = `Structures within ${radius} chunks of block 0,0 for seed ${seed}`
  $('calc-status').textContent =
    `${PLACEMENT_MANIFEST.available.length} sets computed, ${gated.length} on-grid stronghold cell(s) in range, ` +
    `${cells.length - gated.length} cell(s) whose stronghold the generator moves. ` +
    'Every world also has exactly three strongholds at villages, which this cannot place yet (§8).'
}

// ---------------------------------------------------------------------------
// Finder (§4)
// ---------------------------------------------------------------------------

function filterRows () {
  return Array.from(document.querySelectorAll('#find-form .filter'))
}

function wireFilters () {
  for (const row of filterRows()) {
    const toggle = row.querySelector('input[type="checkbox"]')
    const inputs = Array.from(row.querySelectorAll('.filter-body input, .filter-body select'))
    const sync = () => { for (const input of inputs) input.disabled = !toggle.checked }
    toggle.addEventListener('change', sync)
    sync()
  }
}

function collectRules () {
  const rules = []
  const problems = []
  for (const row of filterRows()) {
    const toggle = row.querySelector('input[type="checkbox"]')
    if (!toggle.checked) continue
    const stronghold = row.dataset.kind === 'stronghold'
    const prefix = stronghold ? 'want-stronghold' : `want-${row.dataset.placement}`
    const label = row.querySelector('.filter-head label').textContent.trim()
    const minCount = Number($(`${prefix}-count`).value)
    const radiusChunks = Number($(`${prefix}-radius`).value)
    if (!Number.isInteger(minCount) || minCount < 1) {
      problems.push(`Set a whole-number minimum of at least 1 for ${label}.`)
      continue
    }
    if (!Number.isInteger(radiusChunks) || radiusChunks < 16) {
      problems.push(`Set a radius of at least 16 chunks for ${label}.`)
      continue
    }
    if (stronghold) {
      const mode = $('want-stronghold-mode').value === 'any' ? 1 : 0
      rules.push({ kind: 'stronghold', placement: -1, mode, minCount, radiusChunks, label: label + (mode ? ' (any cell)' : ' (on grid)') })
      continue
    }
    const entry = PLACEMENT_MANIFEST.available.find((candidate) => candidate.name === row.dataset.placement)
    if (!entry) {
      problems.push(`No measured placement for ${label}.`)
      continue
    }
    rules.push({ kind: 'placement', id: entry.id, placement: entry.index, mode: 0, minCount, radiusChunks, label })
  }
  if (problems.length) throw problems
  return rules
}

/** Rule check in JavaScript, used when the core is unavailable. */
function evaluateReference (seed, rules, chunkX, chunkZ) {
  for (const rule of rules) {
    let count = 0
    if (rule.kind === 'stronghold') {
      const cells = OpenBDSWorld.strongholdsNear(seed, chunkX, chunkZ, rule.radiusChunks)
      for (const cell of cells) if (rule.mode === 1 || cell.gated) count++
    } else {
      count = OpenBDSWorld.candidateStarts(OpenBDSWorld.PLACEMENTS[rule.id], seed, chunkX, chunkZ, rule.radiusChunks).length
    }
    if (count < rule.minCount) return false
  }
  return true
}

function setupCoreRules (core) {
  core.resetRules()
  for (const rule of state.rules) core.addRule(rule.placement, rule.minCount, rule.radiusChunks, -1, rule.mode)
}

/** Counts for one passing seed, from whichever engine is in use. */
function detailsFor (core, seed, rules, chunkX, chunkZ) {
  const out = []
  const scale = core ? core.outPtr() >> 2 : 0
  for (const rule of rules) {
    if (core) {
      const count = core.detail(low32(seed), low48(seed), chunkX, chunkZ, rule.placement, rule.radiusChunks, rule.mode, core.outPtr())
      const view = new Int32Array(core.memory.buffer)
      out.push({ label: rule.label, count, nearest: count ? view[scale + 1] : null })
    } else if (rule.kind === 'stronghold') {
      const cells = OpenBDSWorld.strongholdsNear(seed, chunkX, chunkZ, rule.radiusChunks)
        .filter((cell) => rule.mode === 1 || cell.gated)
      out.push({ label: rule.label, count: cells.length, nearest: cells.length ? Math.round(cells[0].distance) : null })
    } else {
      const starts = OpenBDSWorld.candidateStarts(OpenBDSWorld.PLACEMENTS[rule.id], seed, chunkX, chunkZ, rule.radiusChunks)
      out.push({ label: rule.label, count: starts.length, nearest: starts.length ? Math.round(starts[0].distance) : null })
    }
  }
  return out
}

const tick = () => new Promise((resolve) => setTimeout(resolve, 0))

async function search (event) {
  event.preventDefault()
  if (state.running) return
  let rules
  try {
    rules = collectRules()
  } catch (problems) {
    showError('find-error', (Array.isArray(problems) ? problems : [problems]).join(' '))
    return
  }
  let start, count, step
  try {
    start = parseSeed($('find-start').value, 'First seed')
    count = Number($('find-count').value)
    step = Number($('find-step').value)
    if (!Number.isInteger(count) || count < 1 || count > 1000000) throw new Error('How many seeds must be between 1 and 1,000,000.')
    if (!Number.isInteger(step) || step < 1 || step > 4294967295) throw new Error('Step must be between 1 and 4,294,967,295.')
    if (!rules.length) throw new Error('Tick at least one structure, or the search would match every seed.')
  } catch (error) {
    showError('find-error', error.message)
    return
  }
  showError('find-error', '')
  openProgress(rules, count)

  const core = await loadCore()
  if (core) setupCoreRules(core)
  $('find-engine').textContent = core
    ? 'engine: the WebAssembly core inlined in this file'
    : 'engine: JavaScript reference (the browser blocked WebAssembly)'

  const halves = splitSeed(start)
  let hi = halves.hi
  let lo = halves.lo
  const batch = core ? 4000 : 200
  let scanned = 0
  let fresh = false
  while (scanned < count && !state.stop) {
    const stop = Math.min(count, scanned + batch)
    for (; scanned < stop; scanned++) {
      const seed = BigInt.asIntN(64, (BigInt(hi) << 32n) | BigInt(lo))
      const chunkX = 0
      const chunkZ = 0
      const passed = core
        ? core.evaluate(lo, low48(seed), chunkX, chunkZ) === 1
        : evaluateReference(seed, rules, chunkX, chunkZ)
      if (passed && state.hits.length < 2000) {
        state.hits.push({ seed: seed.toString(), details: detailsFor(core, seed, rules, chunkX, chunkZ) })
        fresh = true
      }
      lo += step
      if (lo >= TWO32) {
        lo -= TWO32
        hi = (hi + 1) >>> 0
      }
    }
    state.tested = scanned
    if (fresh) {
      renderHits()
      fresh = false
    }
    updateProgress()
    await tick()
  }
  state.running = false
  $('find-button').disabled = false
  $('find-stop').disabled = true
  updateProgress()
  $('find-status').textContent =
    `${state.stop ? 'Stopped' : 'Finished'} after ${nf.format(state.tested)} seeds: ` +
    `${nf.format(state.hits.length)} matching seed${state.hits.length === 1 ? '' : 's'}.`
}

function openProgress (rules, count) {
  state.rules = rules
  state.hits = []
  state.tested = 0
  state.stop = false
  state.running = true
  state.startedAt = performance.now()
  $('find-button').disabled = true
  $('find-stop').disabled = false
  $('find-tested').textContent = '0'
  $('find-matches').textContent = '0'
  $('find-rate').textContent = '—'
  $('find-body').replaceChildren()
  $('find-table').hidden = true
  $('find-status').textContent = `Searching ${nf.format(count)} seeds with ${rules.length} filter(s)…`

  const head = $('find-head')
  head.replaceChildren()
  const seedHead = document.createElement('th')
  seedHead.scope = 'col'
  seedHead.textContent = 'Seed'
  head.appendChild(seedHead)
  for (const rule of rules) {
    const th = document.createElement('th')
    th.scope = 'col'
    th.textContent = `${rule.label} (min ${rule.minCount}, r${rule.radiusChunks})`
    head.appendChild(th)
  }
}

function updateProgress () {
  $('find-tested').textContent = nf.format(state.tested)
  $('find-matches').textContent = nf.format(state.hits.length)
  const seconds = (performance.now() - state.startedAt) / 1000
  $('find-rate').textContent = seconds > 0.3 ? `${nf.format(Math.round(state.tested / seconds))} /s` : '—'
}

function renderHits () {
  const body = $('find-body')
  const fragment = document.createDocumentFragment()
  for (const hit of state.hits.slice(0, 200)) {
    const tr = document.createElement('tr')
    const seedCell = document.createElement('th')
    seedCell.scope = 'row'
    seedCell.className = 'mono'
    seedCell.textContent = hit.seed
    tr.appendChild(seedCell)
    for (const detail of hit.details) {
      const td = document.createElement('td')
      td.className = 'num'
      td.textContent = detail.count ? `${detail.count} · nearest ${detail.nearest}` : '0'
      tr.appendChild(td)
    }
    fragment.appendChild(tr)
  }
  body.replaceChildren(fragment)
  $('find-table').hidden = state.hits.length === 0
  const extra = state.hits.length > 200 ? ` Showing the first 200 of ${nf.format(state.hits.length)}.` : ''
  $('find-caption').textContent = `${nf.format(state.hits.length)} matching seed${state.hits.length === 1 ? '' : 's'}.${extra}`
}

// ---------------------------------------------------------------------------
// Self-checks (§5)
// ---------------------------------------------------------------------------

const CHECK_SEEDS = [
  0n, 1n, 2n, 7n, 39n, 12345n, -1n, -2n, -12345n,
  2147483647n, 2147483648n, 4294967295n, 4294967296n, 4294967297n,
  9007199254740993n, 281474976710656n, 281474976710657n,
  9223372036854775807n, -9223372036854775808n
]

function addCheckRow (check, cases, passed, detail) {
  const tr = document.createElement('tr')
  const head = document.createElement('th')
  head.scope = 'row'
  head.textContent = check
  tr.appendChild(head)
  const caseCell = document.createElement('td')
  caseCell.className = 'num'
  caseCell.textContent = nf.format(cases)
  tr.appendChild(caseCell)
  const result = document.createElement('td')
  const tag = document.createElement('span')
  tag.className = `tag ${passed ? 'tag-pass' : 'tag-fail'}`
  tag.textContent = passed ? 'pass' : 'fail'
  result.appendChild(tag)
  tr.appendChild(result)
  const detailCell = document.createElement('td')
  detailCell.textContent = detail
  tr.appendChild(detailCell)
  $('checks-body').appendChild(tr)
  $('checks-table').hidden = false
}

/** Is this chunk reachable by the stronghold grid at all? */
function onStrongholdGrid (chunkX, chunkZ) {
  for (let cellX = Math.floor(chunkX / 200) - 1; cellX <= Math.floor(chunkX / 200) + 1; cellX++) {
    for (let cellZ = Math.floor(chunkZ / 200) - 1; cellZ <= Math.floor(chunkZ / 200) + 1; cellZ++) {
      const dx = chunkX - (cellX * 200 + 50)
      const dz = chunkZ - (cellZ * 200 + 50)
      if (dx >= 0 && dx < 100 && dz >= 0 && dz < 100) return true
    }
  }
  return false
}

async function runChecks () {
  const button = $('checks-button')
  button.disabled = true
  $('checks-body').replaceChildren()
  $('checks-table').hidden = true
  $('checks-status').textContent = 'Running: loading the core, then comparing it with the reference.'
  await tick()

  const core = await loadCore()
  if (!core) {
    $('checks-status').textContent = 'The browser blocked WebAssembly, so the wasm-against-reference checks cannot run. Everything else on this page still works.'
    button.disabled = false
    return
  }
  const outPtr = core.outPtr()
  const view = () => new Int32Array(core.memory.buffer)
  let passedChecks = 0
  let totalChecks = 0
  const record = (check, cases, passed, detail) => {
    totalChecks++
    if (passed) passedChecks++
    addCheckRow(check, cases, passed, detail)
    $('checks-status').textContent = `Running: ${totalChecks} check(s) done, ${passedChecks} passed.`
  }

  // 1. wasm against the reference, every set, every seed class.
  let cases = 0
  let mismatches = 0
  let firstMismatch = ''
  for (const entry of PLACEMENT_MANIFEST.available) {
    const placement = OpenBDSWorld.PLACEMENTS[entry.id]
    for (const seed of CHECK_SEEDS) {
      for (const radius of [128, 256]) {
        const expected = OpenBDSWorld.candidateStarts(placement, seed, 0, 0, radius)
        const count = core.detail(low32(seed), low48(seed), 0, 0, entry.index, radius, 0, outPtr)
        cases++
        const base = outPtr >> 2
        const ok = count === expected.length &&
          (count === 0 || (view()[base + 2] === expected[0].chunkX && view()[base + 3] === expected[0].chunkZ))
        if (!ok) {
          mismatches++
          if (!firstMismatch) firstMismatch = `${entry.name} seed ${seed} r${radius}: ${count} vs ${expected.length}`
        }
      }
    }
    await tick()
  }
  record('wasm core vs JavaScript reference, every set × every seed class',
    cases, mismatches === 0,
    mismatches === 0 ? 'identical counts and nearest chunks' : `${mismatches} mismatches, first ${firstMismatch}`)

  // 2. seed-width rules.
  cases = 0
  mismatches = 0
  const village = OpenBDSWorld.PLACEMENTS['minecraft:village']
  const trail = OpenBDSWorld.PLACEMENTS['minecraft:trail_ruins']
  const key = (placement, seed) => OpenBDSWorld.candidateStarts(placement, seed, 0, 0, 256)
    .map((start) => `${start.chunkX},${start.chunkZ}`).join('|')
  for (const seed of CHECK_SEEDS) {
    cases += 2
    if (key(village, seed) !== key(village, BigInt.asIntN(64, seed + 4294967296n))) mismatches++
    if (key(trail, seed) !== key(trail, BigInt.asIntN(64, seed + 281474976710656n))) mismatches++
  }
  record('seeds that differ only above the bits placement reads are identical',
    cases, mismatches === 0,
    mismatches === 0
      ? 'low 32 bits for the Mersenne sets, low 48 for the Java sets — so a 64-bit search cannot invent new positions'
      : `${mismatches} failures`)

  // 3. the gate spends a quarter of the cells, as the stream should.
  let gated = 0
  let sampled = 0
  for (let cellX = -50; cellX < 50; cellX++) {
    for (let cellZ = -50; cellZ < 50; cellZ++) {
      sampled++
      if (OpenBDSWorld.strongholdInCell(1n, cellX, cellZ).gated) gated++
    }
  }
  const rate = gated / sampled
  record('the gate is uniform: a quarter of cells',
    sampled, Math.abs(rate - 0.25) < 0.02,
    `${gated} of ${sampled} cells gated (${(rate * 100).toFixed(2)}%, expected 25%) — seed 1, cells −50…49 on both axes`)

  // 4. determinism.
  core.resetRules()
  core.addRule(PLACEMENT_MANIFEST.available.find((entry) => entry.name === 'village').index, 1, 200, -1, 0)
  let disagreed = 0
  for (let index = 0; index < 300; index++) {
    const value = (index * 7919 + 13) >>> 0
    const wide = BigInt(value)
    if (core.evaluate(value, wide, 0, 0) !== core.evaluate(value, wide, 0, 0)) disagreed++
  }
  core.resetRules()
  record('determinism: the same seed twice', 300, disagreed === 0,
    disagreed === 0 ? 'every repeat agreed' : `${disagreed} repeats disagreed`)

  // 5. the published worked examples, including the ones the grid cannot reach.
  const exampleBody = $('examples-body')
  exampleBody.replaceChildren()
  let gridHits = 0
  let villageExplained = 0
  for (const example of DOSSIER_EXAMPLES) {
    const seed = BigInt(example.seed)
    const cells = OpenBDSWorld.strongholdsNear(seed, 0, 0, Math.max(example.radiusChunks + 40, 300))
    const nearestGated = cells.filter((cell) => cell.gated)[0] || null
    const reachable = onStrongholdGrid(example.chunk[0], example.chunk[1])
    const villages = OpenBDSWorld.candidateStarts(
      OpenBDSWorld.PLACEMENTS['minecraft:village'], seed, 0, 0, Math.max(example.radiusChunks + 80, 420))
    const onVillage = villages.some((start) => start.chunkX === example.chunk[0] && start.chunkZ === example.chunk[1])
    if (nearestGated && nearestGated.chunkX === example.chunk[0] && nearestGated.chunkZ === example.chunk[1]) gridHits++
    if (!reachable && onVillage) villageExplained++

    const tr = document.createElement('tr')
    const row = [
      String(example.seed),
      `${example.chunk[0]}, ${example.chunk[1]}`,
      String(example.radiusChunks),
      nearestGated ? `${nearestGated.chunkX}, ${nearestGated.chunkZ}` : '—'
    ]
    const seedCell = document.createElement('th')
    seedCell.scope = 'row'
    seedCell.className = 'mono'
    seedCell.textContent = row[0]
    tr.appendChild(seedCell)
    for (const value of row.slice(1)) {
      const td = document.createElement('td')
      td.className = 'num'
      td.textContent = value
      tr.appendChild(td)
    }
    const verdict = document.createElement('td')
    verdict.textContent = (nearestGated && nearestGated.chunkX === example.chunk[0] && nearestGated.chunkZ === example.chunk[1])
      ? 'grid exact: the stronghold is at its cell position'
      : !reachable && onVillage
        ? 'not on the grid at all, and it is a modelled village chunk: the second population'
        : !reachable
          ? 'not on the grid, and not at a village either — this would be a new bug'
          : 'on the grid but moved by the generator: the gate passed and the biome query moved it'
    exampleBody.appendChild(tr)
    const verdictCell = document.createElement('td')
    verdictCell.textContent = verdict.textContent
    tr.appendChild(verdictCell)
  }
  const examplesOk = gridHits + villageExplained === DOSSIER_EXAMPLES.length
  record('published examples: the grid reproduces one, and the rest are villages',
    DOSSIER_EXAMPLES.length, examplesOk,
    `${gridHits} reproduced exactly on the grid, ${villageExplained} proven unreachable on the grid and sitting on a modelled village chunk. ` +
    'The second number is the open problem in §8, demonstrated rather than asserted.')

  $('checks-status').textContent = totalChecks === passedChecks
    ? `All ${totalChecks} checks passed in this browser.`
    : `${passedChecks} of ${totalChecks} checks passed — the failing rows say what disagreed.`
  button.disabled = false
}

// ---------------------------------------------------------------------------
// Wiring
// ---------------------------------------------------------------------------

function wire () {
  wireFilters()
  $('calc-form').addEventListener('submit', calculator)
  $('find-form').addEventListener('submit', search)
  $('find-stop').addEventListener('click', () => {
    state.stop = true
    $('find-status').textContent = 'Stopping after this batch…'
  })
  $('checks-button').addEventListener('click', runChecks)
  // Point the calculator at seed 1 by default so the page says something on open.
  try {
    $('calc-form').dispatchEvent(new Event('submit', { cancelable: true }))
  } catch (error) {
    // A form submission in a page without a submit listener is harmless.
  }
}

if (document.readyState === 'loading') document.addEventListener('DOMContentLoaded', wire)
else wire()
