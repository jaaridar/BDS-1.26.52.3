#!/usr/bin/env node
'use strict'

/**
 * Smoke test for the single-file dossier (`web/seed-algorithm.html`).
 *
 * The whole point of that file is that it works alone: no server, no second
 * request, no network. So this test loads it from disk with every network access
 * removed (jsdom with no resource loader, `fetch` that throws), and then uses it
 * the way a reader would -- the calculator runs on open, the finder returns rows,
 * the self-checks pass -- and checks that the numbers it prints match the
 * reference implementation computed here in Node.
 *
 *   npm install --prefix /tmp/domtest jsdom --no-save
 *   JSDOM_PATH=/tmp/domtest/node_modules/jsdom node tools/web/smoke-dossier.js
 */

const fs = require('node:fs')
const path = require('node:path')

const ROOT = path.resolve(__dirname, '..', '..')
const FILE = path.join(ROOT, 'web', 'seed-algorithm.html')

function loadJsdom () {
  for (const candidate of [
    process.env.JSDOM_PATH,
    path.join(ROOT, 'node_modules', 'jsdom'),
    '/tmp/domtest/node_modules/jsdom',
    '/home/user/domtest/node_modules/jsdom'
  ].filter(Boolean)) {
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

let passed = 0
const failures = []

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

async function waitFor (label, predicate, timeoutMs = 30000) {
  const started = Date.now()
  for (;;) {
    const value = predicate()
    if (value) return value
    if (Date.now() - started > timeoutMs) throw new Error(`timed out waiting for ${label}`)
    await sleep(20)
  }
}

async function main () {
  const html = fs.readFileSync(FILE, 'utf8')
  const externalScript = /<script[^>]*\ssrc=/i.test(html)
  const externalStyle = /<link[^>]*\srel="?stylesheet/i.test(html)
  const externalImage = /<img[^>]*\ssrc=/i.test(html)
  const externalFont = /@import|url\(\s*["']?https?:/i.test(html)
  expect('the dossier is a single file with no external references',
    !externalScript && !externalStyle && !externalImage && !externalFont,
    `script=${externalScript} style=${externalStyle} image=${externalImage} font=${externalFont}`)
  expect('it carries the wasm core and the reference implementation',
    /SEEDFINDER_WASM_BASE64/.test(html) && /OpenBDSWorld/.test(html))

  const dom = new JSDOM(html, {
    url: 'file://' + FILE,
    runScripts: 'dangerously',
    pretendToBeVisual: true,
    beforeParse (window) {
      window.WebAssembly = WebAssembly
      // Any network attempt is a bug in a self-contained file.
      window.fetch = () => { throw new Error('the dossier tried to fetch something') }
    }
  })
  const { window } = dom
  const document = window.document
  window.HTMLElement.prototype.scrollIntoView = function () {}

  await waitFor('the calculator to run on open', () => document.querySelectorAll('#calc-body tr').length > 5)
  const calcRows = Array.from(document.querySelectorAll('#calc-body tr'))
  expect('the calculator produced a row per set plus the stronghold rows',
    calcRows.length === 12, `${calcRows.length} rows`)
  const villageRow = calcRows.find((row) => /village/.test(row.children[0].textContent))
  expect('the village row is present with a position', Boolean(villageRow) && /\d/.test(villageRow.children[2].textContent))

  // The row must agree with the reference implementation, computed here.
  const { candidateStarts } = require(path.join(ROOT, 'src', 'world', 'structure-placement.js'))
  const { PLACEMENTS } = require(path.join(ROOT, 'src', 'world', 'structures-data.js'))
  const expectedVillages = candidateStarts(PLACEMENTS['minecraft:village'], 1n, 0, 0, 256)
  expect('the calculator agrees with the reference for seed 1',
    Number(villageRow.children[1].textContent.replace(/,/g, '')) === expectedVillages.length,
    `page says ${villageRow.children[1].textContent}, reference says ${expectedVillages.length}`)

  // Finder: tick villages, search a small range.
  const toggle = document.getElementById('want-village')
  toggle.checked = true
  toggle.dispatchEvent(new window.Event('change', { bubbles: true }))
  expect('ticking a filter enables its inputs',
    document.getElementById('want-village-count').disabled === false)
  document.getElementById('want-village-count').value = '2'
  document.getElementById('want-village-radius').value = '200'
  document.getElementById('find-start').value = '0'
  document.getElementById('find-count').value = '400'
  document.getElementById('find-form').dispatchEvent(new window.Event('submit', { cancelable: true, bubbles: true }))
  await waitFor('the search to finish', () => /Finished|Stopped/.test(document.getElementById('find-status').textContent), 60000)
  const hits = Array.from(document.querySelectorAll('#find-body tr'))
  expect('the finder returned matching seeds', hits.length > 0, `${hits.length} rows`)
  let disagreement = null
  for (const row of hits.slice(0, 5)) {
    const seed = BigInt(row.children[0].textContent)
    const count = candidateStarts(PLACEMENTS['minecraft:village'], seed, 0, 0, 200).length
    if (count < 2) disagreement = `seed ${seed} has ${count} villages but was returned`
  }
  expect('every returned seed really has two villages within 200 chunks', disagreement === null, disagreement || '')

  // Self-checks: wasm against reference, in this file, offline.
  document.getElementById('checks-button').dispatchEvent(new window.Event('click', { bubbles: true }))
  await waitFor('the self-checks to finish', () => /checks passed|checks? (pass|done)/.test(document.getElementById('checks-status').textContent), 120000)
  await waitFor('the checks to stop running', () => !/Running/.test(document.getElementById('checks-status').textContent), 120000)
  const checkRows = Array.from(document.querySelectorAll('#checks-body tr'))
  const failed = checkRows.filter((row) => /fail/.test(row.children[2].textContent))
  expect('every self-check passed', checkRows.length >= 5 && failed.length === 0,
    `${checkRows.length} rows, failures: ${failed.map((row) => row.children[0].textContent).join(', ') || 'none'}`)
  console.log(`        ${document.getElementById('checks-status').textContent}`)

  const examples = Array.from(document.querySelectorAll('#examples-body tr'))
  expect('the published examples table filled in', examples.length === 4, `${examples.length} rows`)
  const explained = examples.filter((row) => /village chunk/.test(row.children[4].textContent))
  expect('three of the four published strongholds are proven unreachable on the grid and sit on villages',
    explained.length === 3, `${explained.length} rows say so`)

  const total = passed + failures.length
  console.log('')
  console.log(`${passed} of ${total} dossier checks passed`)
  if (failures.length) {
    console.log('')
    for (const failure of failures) console.log(`  ${failure}`)
    process.exitCode = 1
  }
  window.close()
}

main().catch((error) => {
  console.error(`dossier smoke test failed: ${error.stack || error.message}`)
  process.exitCode = 1
})
