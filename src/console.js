'use strict'

/**
 * Headless stdin console. Commands run through the same dispatcher as
 * in-game commands, with console (operator) permissions.
 */

const readline = require('readline')

function startConsole (server, { input = process.stdin, output = process.stdout } = {}) {
  if (!input.isTTY) {
    // Headless / container: no interactive console, but still consume stdin
    // lines when they arrive (docker attach, CI, piped scripts).
    input.setEncoding('utf8')
    let buffer = ''
    input.on('data', (chunk) => {
      buffer += chunk
      let idx
      while ((idx = buffer.indexOf('\n')) >= 0) {
        const line = buffer.slice(0, idx).trim()
        buffer = buffer.slice(idx + 1)
        if (line) server.runCommand(line, { source: 'console' })
      }
    })
    return { close () {} }
  }

  const rl = readline.createInterface({ input, output, prompt: '' })
  rl.on('line', (line) => {
    const trimmed = line.trim()
    if (trimmed) server.runCommand(trimmed, { source: 'console' })
    rl.prompt()
  })
  rl.on('close', () => {
    // Ctrl+D behaves like a clean shutdown request
    server.stop('Server stopped').then(() => process.exit(0))
  })
  return {
    close () {
      rl.close()
    }
  }
}

module.exports = { startConsole }
