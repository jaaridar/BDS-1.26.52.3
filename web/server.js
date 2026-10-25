#!/usr/bin/env node
'use strict'

/**
 * Static server for the seed finder.
 *
 * Deliberately small and dependency-free: the page is three files plus a wasm
 * module, and it does its own computing in the browser, so there is no API here
 * to secure. What it does have to get right is MIME types (`application/wasm`
 * in particular -- some browsers refuse to stream-compile otherwise), not
 * serving anything outside `public/`, and being reachable from a browser that is
 * not on this machine.
 *
 *   node web/server.js                 # http://0.0.0.0:8787
 *   PORT=9000 node web/server.js
 *
 * Binds 0.0.0.0 rather than 127.0.0.1 so a forwarded port or a preview proxy can
 * reach it: the browser is not necessarily the same host as this process.
 */

const http = require('node:http')
const fs = require('node:fs')
const path = require('node:path')

const ROOT = path.join(__dirname, 'public')
const PORT = Number(process.env.PORT || 8787)
const HOST = process.env.HOST || '0.0.0.0'

const MIME = {
  '.html': 'text/html; charset=utf-8',
  '.css': 'text/css; charset=utf-8',
  '.js': 'text/javascript; charset=utf-8',
  '.json': 'application/json; charset=utf-8',
  '.wasm': 'application/wasm',
  '.svg': 'image/svg+xml',
  '.png': 'image/png',
  '.ico': 'image/x-icon',
  '.txt': 'text/plain; charset=utf-8',
  '.md': 'text/markdown; charset=utf-8'
}

/**
 * Headers that keep the page safe without breaking it.
 *
 * No `frame-ancestors` and no `X-Frame-Options`: preview panes embed pages in an
 * iframe, and a policy that forbids that turns a working page into a blank one.
 * `'wasm-unsafe-eval'` is what allows WebAssembly; without it the page falls
 * back to the JavaScript reference and says so.
 */
const SECURITY_HEADERS = {
  'Content-Security-Policy': [
    "default-src 'self'",
    "script-src 'self' 'wasm-unsafe-eval'",
    "worker-src 'self'",
    "style-src 'self'",
    "img-src 'self' data:",
    "connect-src 'self'",
    "base-uri 'none'",
    "form-action 'none'"
  ].join('; '),
  'X-Content-Type-Options': 'nosniff',
  'Referrer-Policy': 'no-referrer'
}

function send (response, status, body, headers = {}) {
  response.writeHead(status, {
    'Cache-Control': 'no-cache',
    ...SECURITY_HEADERS,
    ...headers
  })
  response.end(body)
}

const server = http.createServer((request, response) => {
  const url = new URL(request.url, `http://${request.headers.host || 'localhost'}`)
  if (url.pathname === '/healthz') {
    send(response, 200, 'ok\n', { 'Content-Type': 'text/plain; charset=utf-8' })
    return
  }

  const requested = url.pathname === '/' ? '/index.html' : url.pathname
  // Resolve, then verify: a traversal attempt must not escape ROOT even if the
  // path survives normalisation.
  const resolved = path.resolve(ROOT, '.' + path.posix.normalize(requested))
  if (!resolved.startsWith(ROOT + path.sep) && resolved !== ROOT) {
    send(response, 403, 'forbidden\n', { 'Content-Type': 'text/plain; charset=utf-8' })
    return
  }

  fs.readFile(resolved, (error, data) => {
    if (error) {
      const status = error.code === 'ENOENT' ? 404 : 500
      send(response, status, `${status === 404 ? 'not found' : 'error'}: ${requested}\n`,
        { 'Content-Type': 'text/plain; charset=utf-8' })
      return
    }
    const type = MIME[path.extname(resolved).toLowerCase()] || 'application/octet-stream'
    if (request.method === 'HEAD') {
      send(response, 200, '', { 'Content-Type': type, 'Content-Length': data.length })
      return
    }
    send(response, 200, data, { 'Content-Type': type, 'Content-Length': data.length })
  })
})

server.listen(PORT, HOST, () => {
  console.log(`seed finder: http://${HOST}:${PORT}/`)
  console.log(`serving ${ROOT}`)
})
