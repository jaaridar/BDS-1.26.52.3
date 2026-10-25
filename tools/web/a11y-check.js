#!/usr/bin/env node
'use strict'

/**
 * Static accessibility check for the seed finder page.
 *
 * There is no browser in this container, so this is the part of an audit that
 * can be automated honestly: the markup is checked for the things a broken page
 * usually gets wrong (unlabelled controls, skipped headings, missing captions,
 * duplicate ids, a skip link that points nowhere), and the stylesheet's colour
 * tokens are checked pair by pair against the WCAG 2.2 contrast floors.
 *
 * It is deliberately not a substitute for a real audit: it cannot check reading
 * order in a screen reader, focus behaviour after an update, or whether the
 * generated result rows make sense out loud. `web/README.md` lists what needs a
 * human, and the page itself uses native elements so the browser supplies the
 * behaviour that is hardest to get wrong.
 *
 *   node tools/web/a11y-check.js
 *
 * Exits non-zero if any check fails.
 */

const fs = require('node:fs')
const path = require('node:path')

const PUBLIC = path.resolve(__dirname, '..', '..', 'web', 'public')
const html = fs.readFileSync(path.join(PUBLIC, 'index.html'), 'utf8')
const css = fs.readFileSync(path.join(PUBLIC, 'styles.css'), 'utf8')

let passed = 0
const failures = []

function check (name, ok, detail = '') {
  if (ok) {
    passed++
    console.log(`  pass  ${name}`)
  } else {
    failures.push({ name, detail })
    console.log(`  FAIL  ${name}${detail ? ` — ${detail}` : ''}`)
  }
}

// ---------------------------------------------------------------------------
// Markup
// ---------------------------------------------------------------------------

function attrs (tag) {
  const out = {}
  const source = tag.replace(/^<\w+/, '').replace(/\/?>$/, '')
  const pattern = /([:\w-]+)(?:\s*=\s*("([^"]*)"|'([^']*)'|([^\s"'>]+)))?/g
  let match
  while ((match = pattern.exec(source))) {
    out[match[1].toLowerCase()] = match[3] ?? match[4] ?? match[5] ?? ''
  }
  return out
}

const tags = (name) => Array.from(html.matchAll(new RegExp(`<${name}\\b[^>]*>`, 'gi'))).map((m) => m[0])
const ids = Array.from(html.matchAll(/\sid\s*=\s*"([^"]+)"/g)).map((m) => m[1])
const idSet = new Set(ids)

check('<html> declares a language', /<html[^>]*\slang="[a-zA-Z]{2,3}(-[a-zA-Z0-9]+)*"/.test(html))
check('<title> is present and specific', /<title>[^<]{10,}<\/title>/.test(html))
check('meta description is present', /<meta\s+name="description"\s+content="[^"]{40,}"/.test(html))
check('viewport does not block zoom',
  /<meta\s+name="viewport"[^>]*>/.test(html) && !/user-scalable\s*=\s*no|maximum-scale\s*=\s*1/i.test(html))

const h1s = (html.match(/<h1\b/g) || []).length
check('exactly one <h1>', h1s === 1, `${h1s} found`)
const headings = Array.from(html.matchAll(/<h([1-6])\b/g)).map((m) => Number(m[1]))
let headingOrderOk = true
let previous = 0
for (const level of headings) {
  if (previous && level > previous + 1) headingOrderOk = false
  previous = level
}
check('heading levels are not skipped', headingOrderOk, headings.join(','))

check('one <main> landmark', tags('main').length === 1)
check('<header> banner landmark', tags('header').length >= 1)
check('<footer> contentinfo landmark', tags('footer').length >= 1)
check('skip link is the first focusable element and points at an existing id',
  /<body>\s*<a class="skip-link" href="#([\w-]+)"/.test(html) && idSet.has(/<body>\s*<a class="skip-link" href="#([\w-]+)"/.exec(html)[1]))

check('ids are unique', ids.length === idSet.size,
  `${ids.length} ids, ${idSet.size} unique`)
check('no positive tabindex', !/\stabindex\s*=\s*"[1-9]/.test(html))
check('no inline event handlers', !/\son(click|submit|change|input|load|error)\s*=/i.test(html))

// Every form control needs a programmatic name.
const controls = [...tags('input'), ...tags('select'), ...tags('textarea')]
const labelled = controls.filter((tag) => {
  const attributes = attrs(tag)
  if (attributes['aria-label']) return true
  if (attributes['aria-labelledby']) return true
  if (attributes.type === 'checkbox' || attributes.type === 'submit' || attributes.type === 'button') {
    // A checkbox still needs its own label; a submit button is named by value.
    if (attributes.type !== 'checkbox' && attributes.value) return true
  }
  if (!attributes.id) return false
  return new RegExp(`<label[^>]*\\sfor="${attributes.id}"`, 'i').test(html)
})
const unlabelled = controls.filter((tag) => !labelled.includes(tag)).map((tag) => tag.slice(0, 90))
check('every input and select has a label', unlabelled.length === 0, unlabelled.join(' | '))

const buttons = tags('button').filter((tag) => {
  const attributes = attrs(tag)
  if (attributes['aria-label'] || attributes['aria-labelledby']) return false
  const inner = html.slice(html.indexOf(tag) + tag.length, html.indexOf(tag) + tag.length + 120)
  return !/^[^<]*\S/.test(inner)
})
check('every button has an accessible name', buttons.length === 0, buttons.join(' | '))

const fieldsets = Array.from(html.matchAll(/<fieldset\b[^>]*>([\s\S]*?)<\/fieldset>/g))
const fieldsetsWithLegend = fieldsets.filter((match) => /^\s*<legend>/.test(match[1]))
check('every fieldset starts with a legend', fieldsets.length === fieldsetsWithLegend.length,
  `${fieldsets.length} fieldsets, ${fieldsetsWithLegend.length} with a legend`)

const tables = Array.from(html.matchAll(/<table\b[^>]*>([\s\S]*?)<\/table>/g))
const tablesWithCaption = tables.filter((match) => /<caption\b/.test(match[1]))
check('every table has a caption', tables.length === tablesWithCaption.length,
  `${tables.length} tables, ${tablesWithCaption.length} with a caption`)
const headerCells = tags('th')
check('every <th> declares a scope', headerCells.every((tag) => /\sscope="(col|row|colgroup|rowgroup)"/.test(tag)),
  headerCells.filter((tag) => !/\sscope="/.test(tag)).length + ' without scope')

const labelledBy = Array.from(html.matchAll(/aria-labelledby="([^"]+)"/g)).flatMap((m) => m[1].split(/\s+/))
const describedBy = Array.from(html.matchAll(/aria-describedby="([^"]+)"/g)).flatMap((m) => m[1].split(/\s+/))
const dangling = [...labelledBy, ...describedBy].filter((id) => !idSet.has(id))
check('aria-labelledby and aria-describedby point at real ids', dangling.length === 0, dangling.join(', '))

check('progress bar has an accessible name', /<label[^>]*for="search-progress"/.test(html))
check('a polite live region reports search state',
  /role="status"[^>]*aria-live="polite"|aria-live="polite"[^>]*role="status"/.test(html))
check('an alert region exists for validation errors', /role="alert"/.test(html))
check('scrollable table regions are named and focusable',
  Array.from(html.matchAll(/<div class="table-scroll"[^>]*>/g)).every((match) => /role="region"/.test(match[0]) && /tabindex="0"/.test(match[0]) && /aria-labelledby="/.test(match[0])))
check('a <noscript> fallback explains the dependency', /<noscript>/.test(html))

// ---------------------------------------------------------------------------
// Stylesheet: colour tokens and media queries
// ---------------------------------------------------------------------------

function tokens (block) {
  const out = {}
  for (const match of block.matchAll(/--([\w-]+):\s*(#[0-9a-fA-F]{6})/g)) out[match[1]] = match[2]
  return out
}

const lightMatch = /:root\s*\{([\s\S]*?)\}/.exec(css)
const darkMatch = /@media \(prefers-color-scheme: dark\)\s*\{\s*:root\s*\{([\s\S]*?)\}/.exec(css)
const light = lightMatch ? tokens(lightMatch[1]) : {}
const dark = darkMatch ? tokens(darkMatch[1]) : {}

function luminance (hex) {
  const value = hex.replace('#', '')
  const channels = [0, 2, 4].map((offset) => parseInt(value.slice(offset, offset + 2), 16) / 255)
  const [r, g, b] = channels.map((c) => (c <= 0.03928 ? c / 12.92 : ((c + 0.055) / 1.055) ** 2.4))
  return 0.2126 * r + 0.7152 * g + 0.0722 * b
}

function contrast (a, b) {
  const la = luminance(a)
  const lb = luminance(b)
  const lighter = Math.max(la, lb)
  const darker = Math.min(la, lb)
  return (lighter + 0.05) / (darker + 0.05)
}

const PAIRS = [
  ['text', 'surface', 4.5],
  ['text', 'surface-2', 4.5],
  ['text', 'surface-3', 4.5],
  ['text-muted', 'surface', 4.5],
  ['text-muted', 'surface-2', 4.5],
  ['text-muted', 'surface-3', 4.5],
  ['accent-text', 'accent', 4.5],
  ['ok-text', 'surface', 4.5],
  ['warn-text', 'surface', 4.5],
  ['bad-text', 'surface', 4.5],
  ['text', 'accent-soft', 4.5],
  ['border', 'surface', 3],
  ['focus', 'surface', 3],
  ['focus', 'surface-2', 3]
]

for (const [scheme, palette] of [['light', light], ['dark', dark]]) {
  const missing = Object.keys(palette).length === 0
  check(`${scheme} scheme defines its colour tokens`, !missing)
  if (missing) continue
  for (const [foreground, background, floor] of PAIRS) {
    const a = palette[foreground]
    const b = palette[background]
    if (!a || !b) {
      check(`${scheme}: ${foreground} on ${background} (tokens exist)`, false, 'missing token')
      continue
    }
    const ratio = contrast(a, b)
    check(`${scheme}: ${foreground} on ${background} ≥ ${floor}:1`, ratio >= floor,
      `${ratio.toFixed(2)}:1 (${a} on ${b})`)
  }
}

check('focus styles are visible and never removed',
  /:focus-visible\s*\{[^}]*outline:\s*3px solid var\(--focus\)/.test(css) && !/outline:\s*(none|0)\s*;/i.test(css.replace(/\/\*[\s\S]*?\*\//g, '')))
check('prefers-reduced-motion is honoured', /@media \(prefers-reduced-motion: reduce\)/.test(css))
check('prefers-color-scheme is honoured', /@media \(prefers-color-scheme: dark\)/.test(css))
check('forced-colors mode is considered', /@media \(forced-colors: active\)/.test(css))
const fontSizes = Array.from(css.matchAll(/font-size:\s*([^;]+);/g)).map((m) => m[1].trim())
check('font sizes are relative, not px', fontSizes.every((size) => !/^\d+(\.\d+)?px$/.test(size)),
  fontSizes.filter((size) => /^\d+(\.\d+)?px$/.test(size)).join(', '))
check('no fixed pixel heights on interactive controls',
  !/\bheight:\s*\d+px\s*;/.test(css.slice(css.indexOf('input[type="text"]'), css.indexOf('input[type="text"]') + 400)))

// ---------------------------------------------------------------------------
// Summary
// ---------------------------------------------------------------------------

const total = passed + failures.length
console.log('')
console.log(`${passed} of ${total} checks passed`)
if (failures.length) {
  console.log('')
  for (const failure of failures) console.log(`  ${failure.name}${failure.detail ? ` — ${failure.detail}` : ''}`)
  process.exitCode = 1
}
