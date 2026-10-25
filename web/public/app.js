'use strict'

/**
 * The seed finder page.
 *
 * Responsibilities, in order of importance:
 *
 *   1. turn the form into a rule list and refuse to run with a filter that
 *      cannot be answered (no silent defaults, no guessing);
 *   2. fan the range out over several workers and merge what comes back;
 *   3. say what the wasm core is doing, and prove it: the stress test compares
 *      it against the JavaScript reference in this page, case by case, on every
 *      seed class the form accepts.
 *
 * Accessibility notes are inline where they matter: live regions are throttled
 * so a screen reader is not spammed by progress updates, focus is left where the
 * user put it, and every generated control gets a label and a name.
 */

/* global OpenBDSWorld */

const $ = (id) => document.getElementById(id)
const nf = new Intl.NumberFormat()

const state = {
  manifest: null,
  workers: [],
  hits: [],
  hitsTruncated: false,
  running: false,
  tested: 0,
  total: 0,
  startedAt: 0,
  rules: [],
  maxHits: 5000,
  displayLimit: 300,
  lastAnnounce: 0,
  engine: 'unknown',
  core: null
}

const SEED_MIN = -(2n ** 63n)
const SEED_MAX = 2n ** 63n - 1n

// ---------------------------------------------------------------------------
// Small helpers
// ---------------------------------------------------------------------------

function parseSeed (text, label) {
  const trimmed = String(text).trim()
  if (!/^[-+]?\d+$/.test(trimmed)) {
    throw new Error(`${label} must be a whole number, for example 1234567 or -42. Received “${trimmed || '(empty)'}”.`)
  }
  const value = BigInt(trimmed)
  if (value < SEED_MIN || value > SEED_MAX) {
    throw new Error(`${label} must fit in 64 bits: from ${SEED_MIN} to ${SEED_MAX}.`)
  }
  return value
}

function splitSeed (seed) {
  return {
    hi: Number(BigInt.asUintN(32, seed >> 32n)),
    lo: Number(BigInt.asUintN(32, seed))
  }
}

function escapeHtml (text) {
  return String(text).replace(/[&<>"']/g, (character) => ({
    '&': '&amp;', '<': '&lt;', '>': '&gt;', '"': '&quot;', "'": '&#39;'
  })[character])
}

function showErrors (messages) {
  const box = $('error-summary')
  if (!messages.length) {
    box.hidden = true
    box.textContent = ''
    return
  }
  box.hidden = false
  box.innerHTML = messages.length === 1
    ? escapeHtml(messages[0])
    : '<p>Please fix these before searching:</p><ul>' + messages.map((m) => `<li>${escapeHtml(m)}</li>`).join('') + '</ul>'
  box.focus?.()
}

/** Throttled announcement: a screen reader should hear milestones, not ticks. */
function announce (text, { force = false } = {}) {
  const now = performance.now()
  if (!force && now - state.lastAnnounce < 2000) return
  state.lastAnnounce = now
  $('search-status').textContent = text
}

// ---------------------------------------------------------------------------
// Filters
// ---------------------------------------------------------------------------

function filterRows () {
  return Array.from(document.querySelectorAll('.filter[data-placement], .filter[data-kind="stronghold"]'))
}

function wireFilters () {
  for (const row of filterRows()) {
    const toggle = row.querySelector('input[type="checkbox"]')
    const inputs = Array.from(row.querySelectorAll('.filter-body input, .filter-body select'))
    const sync = () => {
      for (const input of inputs) input.disabled = !toggle.checked
    }
    toggle.addEventListener('change', sync)
    sync()
  }
}

function placementByName (name) {
  return state.manifest.available.find((entry) => entry.name === name)
}

/** Build the rule list from the DOM, or throw with a readable list of problems. */
function collectRules () {
  const rules = []
  const problems = []
  for (const row of filterRows()) {
    const toggle = row.querySelector('input[type="checkbox"]')
    if (!toggle.checked) continue
    const stronghold = row.dataset.kind === 'stronghold'
    const prefix = stronghold ? 'filter-stronghold' : `filter-${row.dataset.placement}`
    const label = row.querySelector('.filter-head label').textContent.trim()
    const countInput = $(`${prefix}-count`)
    const radiusInput = $(`${prefix}-radius`)
    const minCount = Number(countInput.value)
    const radiusChunks = Number(radiusInput.value)
    if (!Number.isInteger(minCount) || minCount < 1) {
      problems.push(`Set a whole-number minimum of at least 1 for ${label}.`)
      continue
    }
    if (!Number.isInteger(radiusChunks) || radiusChunks < 16) {
      problems.push(`Set a radius of at least 16 chunks for ${label}.`)
      continue
    }
    if (stronghold) {
      const nearest = Number($('filter-stronghold-nearest').value || 0)
      if (!Number.isFinite(nearest) || nearest < 0) {
        problems.push('The stronghold distance limit must be 0 (ignore) or a positive number of blocks.')
        continue
      }
      const mode = $('filter-stronghold-mode').value === 'any' ? 1 : 0
      rules.push({
        id: 'minecraft:stronghold',
        name: 'strongholds',
        kind: 'stronghold',
        placement: -1,
        mode,
        minCount,
        radiusChunks,
        maxNearest: nearest > 0 ? nearest : -1,
        display: `strongholds ${mode === 0 ? 'on grid' : 'any cell'} · min ${minCount} · r${radiusChunks}` +
          (nearest > 0 ? ` · within ${nearest} blocks` : '')
      })
      continue
    }
    const entry = placementByName(row.dataset.placement)
    if (!entry) {
      problems.push(`The page does not know the placement for ${label}; rebuild it with tools/web/build-seedfinder.js.`)
      continue
    }
    rules.push({
      id: entry.id,
      name: label,
      kind: 'placement',
      placement: entry.index,
      mode: 0,
      minCount,
      radiusChunks,
      maxNearest: -1,
      tolerance: entry.tolerance,
      display: `${label} · min ${minCount} · r${radiusChunks}`
    })
  }
  if (problems.length) throw problems
  return rules
}

// ---------------------------------------------------------------------------
// Search
// ---------------------------------------------------------------------------

function workerCount () {
  const cores = navigator.hardwareConcurrency || 4
  return Math.max(1, Math.min(8, cores))
}

function setRunning (running) {
  state.running = running
  $('search-button').disabled = running
  $('stop-button').disabled = !running
  $('search-button').setAttribute('aria-busy', running ? 'true' : 'false')
  $('results-table').setAttribute('aria-busy', running ? 'true' : 'false')
}

function resetResults () {
  state.hits = []
  state.hitsTruncated = false
  state.tested = 0
  $('results-body').innerHTML = ''
  $('results-head').innerHTML = ''
  $('results-table').hidden = true
  $('results-actions').hidden = true
  $('results-empty').hidden = false
  $('results-empty').textContent = 'Searching…'
  $('stat-tested').textContent = '0'
  $('stat-matches').textContent = '0'
  $('stat-elapsed').textContent = '0.0 s'
  $('stat-rate').textContent = '—'
  $('search-progress').value = 0
}

function buildResultHead () {
  const head = $('results-head')
  head.innerHTML = ''
  const seedTh = document.createElement('th')
  seedTh.scope = 'col'
  seedTh.textContent = 'Seed'
  head.appendChild(seedTh)
  for (const rule of state.rules) {
    const th = document.createElement('th')
    th.scope = 'col'
    th.textContent = rule.display
    head.appendChild(th)
  }
  const actions = document.createElement('th')
  actions.scope = 'col'
  actions.textContent = 'Actions'
  head.appendChild(actions)
}

function renderResults () {
  const body = $('results-body')
  const sorted = state.hits.slice().sort((a, b) => {
    const left = BigInt(a.seed)
    const right = BigInt(b.seed)
    return left < right ? -1 : left > right ? 1 : 0
  })
  const shown = sorted.slice(0, state.displayLimit)
  const fragment = document.createDocumentFragment()
  for (const hit of shown) {
    const tr = document.createElement('tr')
    const seedCell = document.createElement('th')
    seedCell.scope = 'row'
    seedCell.textContent = hit.seed
    tr.appendChild(seedCell)
    for (const detail of hit.details) {
      const td = document.createElement('td')
      td.className = 'numeric'
      td.textContent = detail.count > 0
        ? `${detail.count} · nearest ${detail.nearest}`
        : '0'
      tr.appendChild(td)
    }
    const actionCell = document.createElement('td')
    const button = document.createElement('button')
    button.type = 'button'
    button.textContent = 'Inspect'
    button.setAttribute('aria-label', `Inspect seed ${hit.seed}`)
    button.addEventListener('click', () => {
      $('inspect-seed').value = hit.seed
      $('inspect-form').requestSubmit()
      $('inspect-heading').scrollIntoView?.({ block: 'start' })
    })
    actionCell.appendChild(button)
    tr.appendChild(actionCell)
    fragment.appendChild(tr)
  }
  body.replaceChildren(fragment)
  $('results-table').hidden = state.hits.length === 0
  const caption = $('results-caption')
  const extra = state.hits.length > shown.length
    ? ` Showing the first ${nf.format(shown.length)}; tighten the filters or download the full list.`
    : ''
  const truncated = state.hitsTruncated
    ? ` Match list was capped at ${nf.format(state.maxHits)} seeds.`
    : ''
  caption.textContent = `${nf.format(state.hits.length)} matching seed${state.hits.length === 1 ? '' : 's'}.${extra}${truncated}`
  $('results-empty').hidden = state.hits.length > 0
  if (state.hits.length === 0 && !state.running) {
    $('results-empty').textContent = 'No seed in this range matched every filter. Widen the radius, lower a minimum, or search more seeds.'
  }
  $('results-actions').hidden = state.hits.length === 0
}

function updateProgress () {
  $('stat-tested').textContent = nf.format(state.tested)
  $('stat-matches').textContent = nf.format(state.hits.length)
  const seconds = (performance.now() - state.startedAt) / 1000
  $('stat-elapsed').textContent = `${seconds.toFixed(1)} s`
  const rate = seconds > 0.2 ? state.tested / seconds : 0
  $('stat-rate').textContent = rate > 0 ? `${nf.format(Math.round(rate))} /s` : '—'
  const percent = state.total > 0 ? Math.min(100, (state.tested / state.total) * 100) : 0
  $('search-progress').value = percent
  $('search-progress').textContent = `${percent.toFixed(0)}%`
  if (state.running && percent >= 10) {
    announce(`Searching: ${nf.format(state.tested)} of ${nf.format(state.total)} seeds tested, ${nf.format(state.hits.length)} matches so far.`)
  }
}

function finishSearch (stopped) {
  state.running = false
  setRunning(false)
  for (const worker of state.workers) worker.terminate()
  state.workers = []
  updateProgress()
  renderResults()
  const engine = state.engine === 'wasm' ? 'WebAssembly core' : 'JavaScript fallback'
  announce(
    `${stopped ? 'Stopped' : 'Finished'} after ${nf.format(state.tested)} seeds on the ${engine}: ` +
    `${nf.format(state.hits.length)} matching seed${state.hits.length === 1 ? '' : 's'}.`,
    { force: true }
  )
}

function startSearch (event) {
  event.preventDefault()
  if (state.running) return

  let rules
  try {
    rules = collectRules()
  } catch (problems) {
    showErrors(Array.isArray(problems) ? problems : [String(problems)])
    return
  }
  let firstSeed, count, step, originX, originZ
  try {
    firstSeed = parseSeed($('seed-start').value, 'First seed')
    count = Number($('seed-count').value)
    step = Number($('seed-step').value)
    originX = Number($('origin-x').value || 0)
    originZ = Number($('origin-z').value || 0)
    if (!Number.isInteger(count) || count < 1 || count > 4000000) throw new Error('How many seeds must be between 1 and 4,000,000.')
    if (!Number.isInteger(step) || step < 1 || step > 4294967295) throw new Error('Step must be between 1 and 4,294,967,295.')
    if (!Number.isFinite(originX) || !Number.isFinite(originZ)) throw new Error('The origin must be two whole numbers of blocks.')
    if (!rules.length) throw new Error('Tick at least one structure, or the search would match every seed.')
  } catch (error) {
    showErrors([error.message])
    return
  }
  showErrors([])
  if (!step) step = 1

  state.rules = rules
  resetResults()
  setRunning(true)
  state.total = count
  state.startedAt = performance.now()
  buildResultHead()
  $('results-empty').textContent = 'Searching…'

  const shards = workerCount()
  const perShard = Math.ceil(count / shards)
  // Each shard starts where the previous one ends, in 64-bit seed order.
  for (let shard = 0; shard < shards; shard++) {
    const offset = shard * perShard
    if (offset >= count) break
    const shardCount = Math.min(perShard, count - offset)
    const startValue = BigInt.asIntN(64, firstSeed + BigInt(offset) * BigInt(step))
    const halves = splitSeed(startValue)
    const worker = new Worker('worker.js')
    worker.progress = { scanned: 0, elapsed: 0, done: false }
    worker.onmessage = (message) => handleWorkerMessage(worker, message.data)
    worker.onerror = (error) => {
      showErrors([`A search worker failed: ${error.message || 'unknown error'}.`])
      finishSearch(true)
    }
    worker.postMessage({
      type: 'start',
      job: {
        id: `shard-${shard}`,
        rules,
        originX,
        originZ,
        startHi: halves.hi,
        startLo: halves.lo,
        step,
        count: shardCount
      }
    })
    state.workers.push(worker)
  }
  announce(
    `Searching ${nf.format(count)} seed${count === 1 ? '' : 's'} from ${firstSeed} with ${rules.length} filter${rules.length === 1 ? '' : 's'} on ${state.workers.length} workers.`,
    { force: true }
  )
}

function handleWorkerMessage (worker, message) {
  if (message.type === 'ready') {
    state.engine = message.wasm ? 'wasm' : 'js'
    $('engine-status').textContent = message.wasm
      ? `engine: WebAssembly core · ${state.workers.length} workers`
      : `engine: JavaScript fallback (slower) · ${state.workers.length} workers`
    return
  }
  if (message.type === 'progress') {
    worker.progress.scanned = message.scanned
    worker.progress.elapsed = message.elapsed
    state.tested = state.workers.reduce((sum, w) => sum + (w.progress.scanned || 0), 0)
    updateProgress()
    return
  }
  if (message.type === 'hits') {
    for (const hit of message.hits) {
      if (state.hits.length >= state.maxHits) {
        state.hitsTruncated = true
        break
      }
      state.hits.push(hit)
    }
    $('stat-matches').textContent = nf.format(state.hits.length)
    renderResults()
    announce(`${nf.format(state.hits.length)} matching seed${state.hits.length === 1 ? '' : 's'} so far.`)
    return
  }
  if (message.type === 'done') {
    worker.progress.scanned = message.scanned
    worker.progress.done = true
    state.tested = state.workers.reduce((sum, w) => sum + (w.progress.scanned || 0), 0)
    if (state.workers.every((w) => w.progress.done)) finishSearch(message.stopped)
  }
}

// ---------------------------------------------------------------------------
// Copy and download
// ---------------------------------------------------------------------------

async function copySeeds () {
  const seeds = state.hits.map((hit) => hit.seed).join('\n')
  try {
    await navigator.clipboard.writeText(seeds)
    announce(`${state.hits.length} seed${state.hits.length === 1 ? '' : 's'} copied to the clipboard.`, { force: true })
  } catch (error) {
    announce('The clipboard was blocked by the browser. Use “Download as JSON” instead.', { force: true })
  }
}

function downloadSeeds () {
  const payload = {
    generatedBy: 'OpenBDS seed finder',
    filters: state.rules.map((rule) => ({
      structure: rule.id,
      atLeast: rule.minCount,
      radiusChunks: rule.radiusChunks,
      nearestWithinBlocks: rule.maxNearest >= 0 ? rule.maxNearest : null,
      cells: rule.kind === 'stronghold' ? (rule.mode === 0 ? 'on-grid' : 'any') : undefined
    })),
    seeds: state.hits.map((hit) => ({
      seed: hit.seed,
      structures: hit.details.map((detail) => ({
        name: detail.name,
        count: detail.count,
        nearestBlocks: detail.nearest,
        nearestChunk: detail.chunkX === null ? null : [detail.chunkX, detail.chunkZ]
      }))
    }))
  }
  const blob = new Blob([JSON.stringify(payload, null, 2)], { type: 'application/json' })
  const url = URL.createObjectURL(blob)
  const link = document.createElement('a')
  link.href = url
  link.download = 'bedrock-seeds.json'
  document.body.appendChild(link)
  link.click()
  link.remove()
  URL.revokeObjectURL(url)
  announce('Download started.', { force: true })
}

// ---------------------------------------------------------------------------
// Single-seed inspector (JavaScript reference, full candidate lists)
// ---------------------------------------------------------------------------

function inspectSeed (event) {
  event.preventDefault()
  const status = $('inspect-status')
  let seed
  try {
    seed = parseSeed($('inspect-seed').value, 'Seed')
  } catch (error) {
    status.textContent = error.message
    return
  }
  const radius = Math.max(16, Math.min(1024, Number($('inspect-radius').value) || 256))
  const body = $('inspect-body')
  const rows = []

  for (const entry of state.manifest.available) {
    const placement = OpenBDSWorld.PLACEMENTS[entry.id]
    const starts = OpenBDSWorld.candidateStarts(placement, seed, 0, 0, radius)
    rows.push({
      name: entry.name,
      count: starts.length,
      nearest: starts[0] || null,
      evidence: entry.tolerance === 0
        ? `exact${entry.note ? ` — ${entry.note.split('.')[0]}` : ''}`
        : `within ${entry.tolerance} chunk — ${entry.note ? entry.note.split('.')[0] : 'jigsaw origin'}`
    })
  }

  const cells = OpenBDSWorld.strongholdsNear(seed, 0, 0, Math.max(radius, 256))
  const gated = cells.filter((cell) => cell.gated)
  rows.push({
    name: 'strongholds (on grid)',
    count: gated.length,
    nearest: gated[0] || null,
    evidence: 'exact for gated cells (491 of 510 in the captured corpus); ungated cells are moved by the generator'
  })

  const fragment = document.createDocumentFragment()
  for (const row of rows) {
    const tr = document.createElement('tr')
    const name = document.createElement('th')
    name.scope = 'row'
    name.textContent = row.name
    tr.appendChild(name)
    const count = document.createElement('td')
    count.className = 'numeric'
    count.textContent = nf.format(row.count)
    tr.appendChild(count)
    const block = document.createElement('td')
    block.className = 'numeric'
    block.textContent = row.nearest ? `${row.nearest.blockX}, ${row.nearest.blockZ}` : '—'
    tr.appendChild(block)
    const chunk = document.createElement('td')
    chunk.className = 'numeric'
    chunk.textContent = row.nearest ? `${row.nearest.chunkX}, ${row.nearest.chunkZ}` : '—'
    tr.appendChild(chunk)
    const distance = document.createElement('td')
    distance.className = 'numeric'
    distance.textContent = row.nearest ? nf.format(Math.round(row.nearest.distance)) : '—'
    tr.appendChild(distance)
    const evidence = document.createElement('td')
    evidence.textContent = row.evidence
    tr.appendChild(evidence)
    fragment.appendChild(tr)
  }
  body.replaceChildren(fragment)
  $('inspect-table').hidden = false
  $('inspect-caption').textContent =
    `Structures within ${radius} chunks of block 0,0 for seed ${seed.toString()}`

  const ungated = cells.length - gated.length
  status.textContent =
    `${rows.length - 1} structure sets computed. ${gated.length} on-grid stronghold${gated.length === 1 ? '' : 's'} in range` +
    (ungated ? `; ${ungated} further cell${ungated === 1 ? '' : 's'} carry a stronghold that the generator moved off its grid position.` : '.') +
    ' Every world also has exactly three strongholds at villages, which are not placed yet.'
}

// ---------------------------------------------------------------------------
// Stress test: wasm against the reference, over every seed class
// ---------------------------------------------------------------------------

const STRESS_SEEDS = [
  0n, 1n, 2n, 7n, 39n, 12345n, -1n, -2n, -12345n,
  2147483647n, 2147483648n, 4294967295n, 4294967296n, 4294967297n,
  9007199254740993n, 281474976710656n, 281474976710657n,
  9223372036854775807n, -9223372036854775808n
]

async function loadCoreInPage () {
  try {
    const response = await fetch('seedfinder.wasm', { cache: 'no-cache' })
    const bytes = await response.arrayBuffer()
    const { instance } = await WebAssembly.instantiate(bytes, {
      env: { abort: () => { throw new Error('wasm abort') } }
    })
    return instance.exports
  } catch (error) {
    return null
  }
}

function addStressRow (check, cases, passed, detail) {
  const body = $('stress-body')
  const tr = document.createElement('tr')
  const head = document.createElement('th')
  head.scope = 'row'
  head.textContent = check
  tr.appendChild(head)
  const caseCell = document.createElement('td')
  caseCell.className = 'numeric'
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
  body.appendChild(tr)
  $('stress-table').hidden = false
}

async function runStressTest () {
  const button = $('stress-button')
  const status = $('stress-status')
  button.disabled = true
  $('stress-body').replaceChildren()
  $('stress-table').hidden = true
  status.textContent = 'Running: loading the core, then comparing it against the reference.'
  await new Promise((resolve) => setTimeout(resolve, 30))

  const core = state.core || await loadCoreInPage()
  state.core = core
  if (!core) {
    status.textContent = 'The WebAssembly core could not be loaded, so there is nothing to compare. Reload the page or serve it over HTTP.'
    button.disabled = false
    return
  }
  const outPtr = core.outPtr()
  const view = () => new Int32Array(core.memory.buffer)
  const manifest = state.manifest.available
  let passedChecks = 0
  let totalChecks = 0

  const record = (check, cases, passed, detail) => {
    totalChecks++
    if (passed) passedChecks++
    addStressRow(check, cases, passed, detail)
    status.textContent = `Running: ${totalChecks} check${totalChecks === 1 ? '' : 's'} done (${passedChecks} passed).`
  }

  // 1. every structure type, every seed class, exact agreement.
  let cases = 0
  let mismatches = 0
  let firstMismatch = ''
  for (const entry of manifest) {
    const placement = OpenBDSWorld.PLACEMENTS[entry.id]
    for (const seed of STRESS_SEEDS) {
      const lo32 = Number(BigInt.asUintN(32, seed))
      const lo48 = BigInt.asUintN(48, seed)
      for (const radius of [128, 256]) {
        const expected = OpenBDSWorld.candidateStarts(placement, seed, 0, 0, radius)
        const count = core.detail(lo32, lo48, 0, 0, entry.index, radius, 0, outPtr)
        cases++
        const base = outPtr >> 2
        const nearestX = count > 0 ? view()[base + 2] : null
        const nearestZ = count > 0 ? view()[base + 3] : null
        const ok = count === expected.length &&
          (count === 0 || (nearestX === expected[0].chunkX && nearestZ === expected[0].chunkZ))
        if (!ok) {
          mismatches++
          if (!firstMismatch) firstMismatch = `${entry.name} seed ${seed} r${radius}: ${count} vs ${expected.length}`
        }
      }
    }
    await new Promise((resolve) => setTimeout(resolve, 0))
  }
  record('wasm vs reference · every structure type × every seed class',
    cases, mismatches === 0,
    mismatches === 0 ? 'identical counts and nearest chunks' : `${mismatches} mismatches, first: ${firstMismatch}`)

  // 2. strongholds, both cell modes.
  cases = 0
  mismatches = 0
  firstMismatch = ''
  for (const seed of STRESS_SEEDS) {
    const lo32 = Number(BigInt.asUintN(32, seed))
    for (const radius of [128, 256, 512]) {
      for (const mode of [0, 1]) {
        const cells = OpenBDSWorld.strongholdsNear(seed, 0, 0, radius)
          .filter((cell) => mode === 1 || cell.gated)
        const count = core.detail(lo32, 0n, 0, 0, -1, radius, mode, outPtr)
        cases++
        const base = outPtr >> 2
        const ok = count === cells.length &&
          (count === 0 || (view()[base + 2] === cells[0].chunkX && view()[base + 3] === cells[0].chunkZ))
        if (!ok) {
          mismatches++
          if (!firstMismatch) firstMismatch = `seed ${seed} r${radius} mode ${mode}: ${count} vs ${cells.length}`
        }
      }
    }
  }
  record('wasm vs reference · stronghold cells, gated and every cell',
    cases, mismatches === 0,
    mismatches === 0 ? 'identical counts and nearest cells' : `${mismatches} mismatches, first: ${firstMismatch}`)

  // 3. the documented seed-width rules, checked on this machine now.
  cases = 0
  mismatches = 0
  firstMismatch = ''
  const village = OpenBDSWorld.PLACEMENTS['minecraft:village']
  const trail = OpenBDSWorld.PLACEMENTS['minecraft:trail_ruins']
  for (const seed of STRESS_SEEDS) {
    const mersenneA = OpenBDSWorld.candidateStarts(village, seed, 0, 0, 256).map((s) => `${s.chunkX},${s.chunkZ}`)
    const mersenneB = OpenBDSWorld.candidateStarts(village, BigInt.asIntN(64, seed + 4294967296n), 0, 0, 256)
      .map((s) => `${s.chunkX},${s.chunkZ}`)
    const javaA = OpenBDSWorld.candidateStarts(trail, seed, 0, 0, 256).map((s) => `${s.chunkX},${s.chunkZ}`)
    const javaB = OpenBDSWorld.candidateStarts(trail, BigInt.asIntN(64, seed + 281474976710656n), 0, 0, 256)
      .map((s) => `${s.chunkX},${s.chunkZ}`)
    cases += 2
    if (mersenneA.join('|') !== mersenneB.join('|')) {
      mismatches++
      if (!firstMismatch) firstMismatch = `Mersenne set changed for seed ${seed} + 2^32`
    }
    if (javaA.join('|') !== javaB.join('|')) {
      mismatches++
      if (!firstMismatch) firstMismatch = `Java set changed for seed ${seed} + 2^48`
    }
  }
  record('64-bit seeds that differ above the bits placement reads are identical',
    cases, mismatches === 0,
    mismatches === 0 ? 'low 32 bits for the Mersenne sets, low 48 for the Java sets' : `${mismatches} failures, first: ${firstMismatch}`)

  // 4. determinism: the same input twice, in the same process.
  cases = 0
  mismatches = 0
  core.resetRules()
  core.addRule(manifest.find((entry) => entry.name === 'village').index, 1, 200, -1, 0)
  for (let index = 0; index < 400; index++) {
    const seed = BigInt.asUintN(32, BigInt(index) * 7919n + 13n)
    const first = core.evaluate(Number(seed), seed, 0, 0)
    const second = core.evaluate(Number(seed), seed, 0, 0)
    cases++
    if (first !== second) mismatches++
  }
  core.resetRules()
  record('determinism · the same seed twice', cases, mismatches === 0,
    mismatches === 0 ? 'every repeat agreed' : `${mismatches} repeats disagreed`)

  await new Promise((resolve) => setTimeout(resolve, 0))

  // 5. throughput, so the claim "pretty quick" is a number rather than a mood.
  const iterations = 20000
  const benchPlacement = manifest.find((entry) => entry.name === 'village')
  const started = performance.now()
  const seedsCounted = core.bench(benchPlacement.index, 0, 0, 0, 200, iterations)
  const wasmMs = performance.now() - started
  const referenceStarted = performance.now()
  let referenceCount = 0
  for (let index = 0; index < 400; index++) {
    referenceCount += OpenBDSWorld.candidateStarts(OpenBDSWorld.PLACEMENTS[village.id], BigInt(index), 0, 0, 200).length
  }
  const referenceMs = performance.now() - referenceStarted
  const wasmPerSeed = wasmMs / iterations
  const referencePerSeed = referenceMs / 400
  record('throughput · villages within 200 chunks, one thread',
    iterations + 400, wasmPerSeed < referencePerSeed,
    `wasm ${(wasmPerSeed * 1000).toFixed(1)} µs/seed (${nf.format(Math.round(wasmMs))} ms for ${nf.format(iterations)}), ` +
    `reference ${(referencePerSeed * 1000).toFixed(1)} µs/seed to check ${referenceCount} villages; speed-up ${(referencePerSeed / wasmPerSeed).toFixed(1)}×`)

  status.textContent = totalChecks === passedChecks
    ? `Stress test finished: all ${totalChecks} checks passed on this machine.`
    : `Stress test finished: ${passedChecks} of ${totalChecks} checks passed. The failing rows say what disagreed.`
  button.disabled = false
}

// ---------------------------------------------------------------------------
// Wiring
// ---------------------------------------------------------------------------

async function loadManifest () {
  try {
    const response = await fetch('placements.json', { cache: 'no-cache' })
    if (!response.ok) throw new Error(`HTTP ${response.status}`)
    state.manifest = await response.json()
  } catch (error) {
    showErrors(['placements.json could not be loaded, so the filter table is missing. Rebuild the site with node tools/web/build-seedfinder.js.'])
    return false
  }
  return true
}

function wireEvents () {
  $('search-form').addEventListener('submit', startSearch)
  $('stop-button').addEventListener('click', () => {
    for (const worker of state.workers) worker.postMessage({ type: 'stop' })
    announce('Stopping after the current batch…', { force: true })
  })
  $('reset-button').addEventListener('click', () => {
    for (const row of filterRows()) {
      row.querySelector('input[type="checkbox"]').checked = false
      row.querySelector('input[type="checkbox"]').dispatchEvent(new Event('change'))
    }
    $('seed-start').value = '0'
    $('seed-count').value = '20000'
    $('seed-step').value = '1'
    $('origin-x').value = '0'
    $('origin-z').value = '0'
    showErrors([])
    announce('Filters reset.', { force: true })
  })
  $('randomise-seed').addEventListener('click', () => {
    // A crypto-random 64-bit value: the pool of seeds is far larger than any
    // sampling could cover, so "random start" is the honest way to explore it.
    const bytes = new Uint32Array(2)
    crypto.getRandomValues(bytes)
    const value = BigInt.asIntN(64, (BigInt(bytes[0]) << 32n) | BigInt(bytes[1]))
    $('seed-start').value = value.toString()
    announce(`First seed set to the random 64-bit value ${value}.`, { force: true })
  })
  $('copy-seeds').addEventListener('click', copySeeds)
  $('download-seeds').addEventListener('click', downloadSeeds)
  $('inspect-form').addEventListener('submit', inspectSeed)
  $('stress-button').addEventListener('click', runStressTest)
}

async function main () {
  wireEvents()
  const loaded = await loadManifest()
  if (!loaded) return
  wireFilters()
  $('engine-status').textContent = 'engine: idle'
  announce('Ready. Tick a structure and press Search.')
  // Warm the core in the background so the first search does not pay for it.
  loadCoreInPage().then((core) => {
    state.core = core
    $('engine-status').textContent = core
      ? 'engine: WebAssembly core ready'
      : 'engine: JavaScript fallback (wasm did not load)'
  })
}

main()
