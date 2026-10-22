'use strict'

/**
 * Command dispatcher for console and in-game commands.
 * Every command receives (ctx) with:
 *   ctx.source   - 'console' | 'player'
 *   ctx.player   - PlayerSession | null
 *   ctx.args     - string[]
 *   ctx.reply(t) - respond to the invoker
 *   ctx.server   - the OpenBDSServer
 */

class CommandDispatcher {
  constructor () {
    this.commands = new Map()
    this.aliases = new Map()
  }

  /**
   * @param {object} cmd
   * @param {string} cmd.name
   * @param {string} cmd.description
   * @param {string} [cmd.usage]
   * @param {'everyone'|'operator'} [cmd.permission]
   * @param {string[]} [cmd.aliases]
   * @param {(ctx: object) => void|string} cmd.execute
   */
  register (cmd) {
    if (!cmd || !cmd.name || typeof cmd.execute !== 'function') {
      throw new Error('invalid command definition')
    }
    this.commands.set(cmd.name.toLowerCase(), cmd)
    for (const alias of cmd.aliases || []) {
      this.aliases.set(alias.toLowerCase(), cmd.name.toLowerCase())
    }
    return this
  }

  get (name) {
    const key = String(name).toLowerCase()
    return this.commands.get(this.aliases.get(key) || key)
  }

  list () {
    return [...this.commands.values()]
  }

  /**
   * Run a command line. Leading '/' is optional.
   * @returns {{ok: boolean, error?: string, unknown?: boolean}}
   */
  dispatch (line, ctx) {
    const trimmed = String(line ?? '').trim().replace(/^\//, '')
    if (!trimmed) return { ok: true }
    const parts = trimmed.split(/\s+/)
    const name = parts[0].toLowerCase()
    const args = parts.slice(1)
    const cmd = this.get(name)
    if (!cmd) {
      const error = `Unknown command: ${name}. Use "help" for a list.`
      ctx.reply?.(error)
      return { ok: false, unknown: true, error }
    }
    const needsOp = (cmd.permission ?? 'everyone') === 'operator'
    const isOp = ctx.source === 'console' || ctx.player?.isOperator === true
    if (needsOp && !isOp) {
      const error = 'You do not have permission to run that command.'
      ctx.reply?.(error)
      return { ok: false, error }
    }
    try {
      const result = cmd.execute({ ...ctx, args })
      if (typeof result === 'string' && result) ctx.reply?.(result)
      return { ok: true }
    } catch (err) {
      const error = err.message || String(err)
      ctx.reply?.(error)
      return { ok: false, error }
    }
  }
}

/**
 * Built-in commands. `getServer` lazily resolves the running server so the
 * dispatcher can be built before the server exists (and mocked in tests).
 */
function createDefaultCommands (getServer) {
  const d = new CommandDispatcher()

  d.register({
    name: 'help',
    description: 'Show available commands',
    execute: ({ reply, source, player }) => {
      const isOp = source === 'console' || player?.isOperator === true
      const lines = d.list()
        .filter((c) => isOp || (c.permission ?? 'everyone') !== 'operator')
        .map((c) => `${c.name}${c.usage ? ' ' + c.usage : ''} - ${c.description}`)
      reply('Commands:\n' + lines.join('\n'))
    }
  })

  d.register({
    name: 'list',
    description: 'List online players',
    execute: ({ reply, server }) => {
      const players = server.getPlayers()
      if (!players.length) return 'No players online.'
      reply(`Online (${players.length}): ${players.map((p) => p.username).join(', ')}`)
    }
  })

  d.register({
    name: 'say',
    description: 'Broadcast a message',
    usage: '<message>',
    permission: 'operator',
    execute: ({ args, server, reply }) => {
      const msg = args.join(' ').trim()
      if (!msg) return 'Usage: say <message>'
      server.broadcast(`[Server] ${msg}`)
      server.logger.info(`[Server] ${msg}`)
    }
  })

  d.register({
    name: 'time',
    description: 'Query or set the world time',
    usage: 'query | set <day|noon|night|midnight|number>',
    permission: 'operator',
    execute: ({ args, server, reply }) => {
      const world = server.world
      const sub = (args[0] || 'query').toLowerCase()
      if (sub === 'query') return `Time is ${world.time} (tick ${world.tick}).`
      if (sub === 'set') {
        const presets = { day: 1000, noon: 6000, night: 13000, midnight: 18000 }
        const val = args[1] !== undefined && args[1] in presets
          ? presets[args[1]]
          : Number.parseInt(args[1], 10)
        if (Number.isNaN(val)) return 'Usage: time set <day|noon|night|midnight|number>'
        world.time = val
        server.broadcastTime()
        return `Time set to ${val}.`
      }
      return 'Usage: time query | time set <value>'
    }
  })

  d.register({
    name: 'gamemode',
    description: 'Change a player game mode',
    usage: '<survival|creative|adventure|spectator> [player]',
    permission: 'operator',
    execute: ({ args, server, reply, player }) => {
      const mode = (args[0] || '').toLowerCase()
      const modes = ['survival', 'creative', 'adventure', 'spectator']
      if (!modes.includes(mode)) return `Usage: gamemode <${modes.join('|')}> [player]`
      const target = args[1]
        ? server.getPlayerByName(args[1])
        : player || null
      if (!target) return `Player not found: ${args[1] ?? '(no in-game player)'}`.trim()
      target.setGamemode(mode)
      return `${target.username}'s game mode is now ${mode}.`
    }
  })

  d.register({
    name: 'kick',
    description: 'Disconnect a player',
    usage: '<player> [reason]',
    permission: 'operator',
    execute: ({ args, server }) => {
      const name = args[0]
      if (!name) return 'Usage: kick <player> [reason]'
      const target = server.getPlayerByName(name)
      if (!target) return `Player not found: ${name}`
      const reason = args.slice(1).join(' ') || 'Kicked by an operator'
      target.kick(reason)
      return `Kicked ${target.username}.`
    }
  })

  d.register({
    name: 'difficulty',
    description: 'Show or set the difficulty',
    usage: '[peaceful|easy|normal|hard]',
    permission: 'operator',
    execute: ({ args, server }) => {
      const level = (args[0] || '').toLowerCase()
      const levels = ['peaceful', 'easy', 'normal', 'hard']
      if (!level) return `Difficulty is ${server.config.difficulty}.`
      if (!levels.includes(level)) return `Usage: difficulty <${levels.join('|')}>`
      server.setDifficulty(level)
      return `Difficulty is now ${level}.`
    }
  })

  d.register({
    name: 'status',
    description: 'Server status and tick information',
    execute: ({ reply, server }) => {
      reply(
        `OpenBDS up ${Math.floor(process.uptime())}s | ` +
        `players ${server.getPlayers().length}/${server.config.maxPlayers} | ` +
        `tick ${server.world.tick} | chunks ${server.world.chunksGenerated} | ` +
        `tps ${server.tps.toFixed(1)}`
      )
    }
  })

  d.register({
    name: 'version',
    description: 'Show server and protocol versions',
    execute: ({ server }) =>
      `OpenBDS ${require('../package.json').version} ` +
      `(game ${server.config.gameVersion}, protocol ${server.config.protocolVersion})`
  })

  d.register({
    name: 'stop',
    description: 'Stop the server',
    permission: 'operator',
    execute: async ({ server, reply }) => {
      reply('Stopping the server...')
      await server.stop('Server stopped')
      return undefined
    }
  })

  return d
}

module.exports = { CommandDispatcher, createDefaultCommands }
