#!/usr/bin/env node
'use strict'

/**
 * End-to-end smoke test for the seed finder page, without a browser.
 *
 * The page is a form plus workers plus wasm, which is exactly the kind of thing
 * that "looks fine" until someone clicks it. This harness loads the real
 * index.html into jsdom, runs the real app.js and reference.js, and runs the real
 * worker.js inside a Node `vm` context standing in for a Worker. Then it drives
 * the form the way a person would: tick a filter, search, read the table,
 * inspect a hit, run the stress test.
 *
 * jsdom is not a project dependency, so it is looked up out of tree:
 *
 *   npm install --prefix /tmp/domtest jsdom --no-save
 *   JSDOM_PATH=/tmp/domtest/node_modules/jsdom node tools/web/smoke-web.js
 *
 * Exits non-zero on the first failed expectation.
 */

const fs = require('node:fs')
const path = require('node:path')
const vm = require('node:vm')

const ROOT = path.resolve(__dirname, '..', '..')
const PUBLIC = path.join(ROOT, 'web', 'public')

function loadJsdom () {
  const candidates = [
    process.env.JSDOM_PATH,
    path.join(ROOT, 'node_modules', 'jsdom'),
    '/tmp/domtest/node_modules/jsdom',
    '/home/user/domtest/node_modules/jsdom'
  ].filter(Boolean)
  for (const candidate of candidates) {
    try {
      return require(candidate)
    } catch { /* try the next one */ }
  }
  return null
}

const jsdomModule = loadJsdom()
if (!jsdomModule) {
  console.log('skipping: jsdom is not installed. See the header of this file.')
  process.exit(0)
}
const { JSDOM } = jsdomModule

// ---------------------------------------------------------------------------
// A Worker stand-in: the real worker.js, in its own context
// ---------------------------------------------------------------------------

function createWorkerSandbox (onMessage) {
  const queue = []
  const sandbox = {
    console,
    WebAssembly,
    Uint8Array,
    Uint32Array,
    Int32Array,
    BigInt,
    Math,
    JSON,
    Number,
    String,
    Array,
    Object,
    Error,
    Promise,
    setTimeout,
    clearTimeout,
    performance: { now: () => Number(process.hrtime.bigint()) / 1e6 },
    fetch: async (url) => {
      const file = path.join(PUBLIC, String(url).replace(/^\.?\//, ''))
      const bytes = fs.readFileSync(file)
      return {
        ok: true,
        status: 200,
        json: async () => JSON.parse(bytes.toString('utf8')),
        arrayBuffer: async () => bytes.buffer.slice(bytes.byteOffset, bytes.byteOffset + bytes.byteLength)
      }
    },
    postMessage: (message) => {
      queue.push(message)
      // Deliver out of band, like a real worker would.
      setTimeout(() => {
        if (!queue.length) return
        for (const queued of queue.splice(0)) onMessage(queued)
      }, 0)
    },
    importScripts: (...urls) => {
      for (const url of urls) {
        const code = fs.readFileSync(path.join(PUBLIC, url), 'utf8')
        vm.runInContext(code, context, { filename: url })
      }
    }
  }
  sandbox.self = sandbox
  const context = vm.createContext(sandbox)
  vm.runInContext(fs.readFileSync(path.join(PUBLIC, 'worker.js'), 'utf8'), context, { filename: 'worker.js' })
  return {
    postMessage: (message) => {
      setTimeout(() => {
        try {
          vm.runInContext('self.onmessage', context) // ensure the handler exists
          sandbox.onmessage({ data: message })
        } catch (error) {
          onMessage({ type: 'error', message: error.message })
        }
      }, 0)
    }
  }
}

function makeWorkerClass (window) {
  return class FakeWorker {
    constructor () {
      this.listeners = []
      this.sandbox = createWorkerSandbox((message) => {
        for (const listener of this.listeners) listener({ data: message })
      })
    }

    addEventListener (type, listener) {
      if (type === 'message') this.listeners.push(listener)
    }

    set onmessage (listener) {
      this.listeners = [listener]
    }

    postMessage (message) {
      this.sandbox.postMessage(message)
    }

    terminate () {
      this.listeners = []
    }
  }
}

// ---------------------------------------------------------------------------
// Harness
// ---------------------------------------------------------------------------

const failures = []
let passed = 0

function expect (name, condition, detail = '') {
  if (condition) {
    passed++
    console.log(`  pass  ${name}`)
  } else {
    failures.push(`${name}${detail ? ` — ${detail}` : ''}`)
    console.log(`  FAIL  ${name}${detail ? ` — ${detail}` : ''}`)
  }
}

const sleep = (ms) => new Promise((resolve) => setTimeout(resolve, ms))

async function waitFor (label, predicate, timeoutMs = 20000) {
  const started = Date.now()
  for (;;) {
    const value = predicate()
    if (value) return value
    if (Date.now() - started > timeoutMs) throw new Error(`timed out waiting for ${label}`)
    await sleep(20)
  }
}

async function main () {
  const html = fs.readFileSync(path.join(PUBLIC, 'index.html'), 'utf8')
  const dom = new JSDOM(html, { url: 'http://localhost:8787/', runScripts: 'outside-only', pretendToBeVisual: true })
  const { window } = dom
  const document = window.document

  window.WebAssembly = WebAssembly
  window.fetch = async (url) => {
    const file = path.join(PUBLIC, String(url).replace(/^\.?\//, ''))
    const bytes = fs.readFileSync(file)
    return {
      ok: true,
      status: 200,
      json: async () => JSON.parse(bytes.toString('utf8')),
      arrayBuffer: async () => bytes.buffer.slice(bytes.byteOffset, bytes.byteOffset + bytes.byteLength)
    }
  }
  window.Worker = makeWorkerClass(window)
  // jsdom implements neither of these.
  window.HTMLElement.prototype.scrollIntoView = function () {}
  window.eval(fs.readFileSync(path.join(PUBLIC, 'reference.js'), 'utf8'))
  window.eval(fs.readFileSync(path.join(PUBLIC, 'app.js'), 'utf8'))

  expect('reference bundle exposes the world modules', typeof window.OpenBDSWorld?.candidateStarts === 'function')

  await waitFor('the page to load its manifest', () => document.querySelectorAll('.filter[data-placement]').length >= 8)
  expect('filter rows were generated', document.querySelectorAll('.filter[data-placement]').length === 10)
  expect('withdrawn sets are listed, not hidden',
    /Not available as filters/.test(document.body.textContent) && /ocean ruin/i.test(document.body.textContent))

  const villageRow = document.querySelector('.filter[data-placement="village"]')
  const villageToggle = villageRow.querySelector('input[type="checkbox"]')
  const villageCount = document.getElementById('filter-village-count')
  expect('filter inputs start disabled until the filter is ticked', villageToggle.checked === false && villageCount.disabled === true)

  // Submitting with nothing ticked must be refused, not silently run.
  document.getElementById('search-form').dispatchEvent(new window.Event('submit', { cancelable: true, bubbles: true }))
  await sleep(50)
  const errorBox = document.getElementById('error-summary')
  expect('an empty search is refused with a readable message',
    errorBox.hidden === false && /Tick at least one structure/.test(errorBox.textContent),
    errorBox.textContent)

  // Now tick villages and search a small range.
  villageToggle.checked = true
  villageToggle.dispatchEvent(new window.Event('change', { bubbles: true }))
  expect('ticking a filter enables its inputs', villageCount.disabled === false)
  document.getElementById('filter-village-count').value = '2'
  document.getElementById('filter-village-radius').value = '200'
  document.getElementById('seed-start').value = '0'
  document.getElementById('seed-count').value = '300'
  document.getElementById('seed-step').value = '1'

  document.getElementById('search-form').dispatchEvent(new window.Event('submit', { cancelable: true, bubbles: true }))
  await waitFor('the search to finish', () => /Finished|No seed in this range/.test(document.getElementById('search-status').textContent), 60000)

  const caption = document.getElementById('results-caption').textContent
  const rows = Array.from(document.querySelectorAll('#results-body tr'))
  expect('the search produced a table with a caption', /matching seed/.test(caption), caption)
  expect('rows were rendered', rows.length > 0, `${rows.length} rows`)
  expect('every rendered row satisfies the filter',
    rows.every((row) => Number(row.children[1].textContent.split(' ')[0]) >= 2),
    rows.slice(0, 3).map((row) => row.children[1].textContent).join(' | '))

  // The search must agree with the reference implementation, seed for seed.
  let disagreement = null
  for (const row of rows.slice(0, 5)) {
    const seed = row.children[0].textContent
    const reference = window.OpenBDSWorld.candidateStarts(
      window.OpenBDSWorld.PLACEMENTS['minecraft:village'], BigInt(seed), 0, 0, 200).length
    const shown = Number(row.children[1].textContent.split(' ')[0])
    if (reference < 2) disagreement = `${seed}: reference says ${reference}, table says ${shown}`
  }
  expect('wasm results agree with the reference on the rendered seeds', disagreement === null, disagreement || '')

  // Inspecting a seed fills the second table.
  const inspectButton = document.querySelector('#results-body tr button')
  inspectButton.dispatchEvent(new window.Event('click', { bubbles: true }))
  await sleep(100)
  const inspectRows = document.querySelectorAll('#inspect-body tr')
  expect('inspect fills the structure table', inspectRows.length >= 10, `${inspectRows.length} rows`)
  expect('inspect names its evidence', /exact|within/.test(document.getElementById('inspect-body').textContent))

  // Stop must leave the page usable.
  document.getElementById('stop-button').click()
  await sleep(50)
  expect('the stop button reports rather than freezing', /Stopping|Finished|No seed/.test(document.getElementById('search-status').textContent))

  // Stress test: the point of the page is that this can fail out loud.
  document.getElementById('stress-button').dispatchEvent(new window.Event('click', { bubbles: true }))
  await waitFor('the stress test to finish',
    () => /Stress test finished/.test(document.getElementById('stress-status').textContent), 120000)
  const stressRows = Array.from(document.querySelectorAll('#stress-body tr'))
  const failed = stressRows.filter((row) => /fail/.test(row.children[2].textContent))
  expect('stress test ran every check', stressRows.length >= 5, `${stressRows.length} rows`)
  expect('stress test passed', failed.length === 0,
    failed.map((row) => `${row.children[0].textContent}: ${row.children[3].textContent}`).join(' | '))
  console.log(`        ${document.getElementById('stress-status').textContent}`)

  const total = passed + failures.length
  console.log('')
  console.log(`${passed} of ${total} page checks passed`)
  if (failures.length) {
    console.log('')
    for (const failure of failures) console.log(`  ${failure}`)
    process.exitCode = 1
  }
  window.close()
}

main().catch((error) => {
  console.error(`smoke test failed: ${error.stack || error.message}`)
  process.exitCode = 1
})
