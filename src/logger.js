'use strict'

/**
 * Minimal leveled logger for headless operation.
 * Writes to stdout/stderr and optionally appends to a log file.
 */

const fs = require('fs')
const path = require('path')

const LEVELS = { debug: 10, info: 20, warn: 30, error: 40 }

function timestamp () {
  return new Date().toISOString().replace('T', ' ').replace('Z', '')
}

function createLogger ({ level = 'info', file = null, prefix = 'openbds', stdout = process.stdout, stderr = process.stderr } = {}) {
  const threshold = LEVELS[level] ?? LEVELS.info
  let stream = null

  if (file) {
    fs.mkdirSync(path.dirname(path.resolve(file)), { recursive: true })
    stream = fs.createWriteStream(file, { flags: 'a' })
  }

  function write (lvl, args) {
    if (LEVELS[lvl] < threshold) return
    const line = `[${timestamp()}] [${prefix}] [${lvl.toUpperCase()}] ` +
      args.map((a) => (typeof a === 'string' ? a : JSON.stringify(a))).join(' ')
    const out = LEVELS[lvl] >= LEVELS.warn ? stderr : stdout
    out.write(line + '\n')
    stream?.write(line + '\n')
  }

  return {
    level,
    debug: (...args) => write('debug', args),
    info: (...args) => write('info', args),
    warn: (...args) => write('warn', args),
    error: (...args) => write('error', args),
    child (sub) {
      return createLogger({ level, file, prefix: `${prefix}:${sub}`, stdout, stderr })
    },
    close () {
      stream?.end()
      stream = null
    }
  }
}

module.exports = { createLogger, LEVELS }
