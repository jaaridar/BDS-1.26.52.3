'use strict'

/**
 * RakNet backend selection.
 *
 * `raknet-native` (C++, faster) is optional - `jsp-raknet` (pure JS) is the
 * always-works default. OpenBDS runs either transparently.
 */

let patched = false

function resolveRaknetBackend (name = 'auto') {
  if (name === 'jsp-raknet' || name === 'raknet-native') {
    if (name === 'raknet-native') assertNative()
    if (name === 'jsp-raknet') patchJspRaknetTeardownRace()
    return name
  }
  // auto: prefer the native binding when it is actually loadable
  try {
    assertNative()
    return 'raknet-native'
  } catch {
    patchJspRaknetTeardownRace()
    return 'jsp-raknet'
  }
}

function assertNative () {
  try {
    require('raknet-native')
  } catch (err) {
    const e = new Error(
      'raknet-native is not usable on this machine (the optional native ' +
      'module is not built). Use `openbds-raknet-backend=jsp-raknet`, or ' +
      'build it with `npm rebuild raknet-native`.'
    )
    e.cause = err
    throw e
  }
}

/**
 * jsp-raknet tries to flush a final disconnect frame when a connection
 * closes - including after its UDP socket is already gone (shutdown races,
 * clients that time out while the server is stopping). That surfaces as
 * `ERR_SOCKET_DGRAM_NOT_RUNNING` and would take a headless server down.
 * Wrap the two send paths so late frames are dropped instead of thrown.
 * Harmless to call more than once.
 */
function patchJspRaknetTeardownRace () {
  if (patched) return
  patched = true
  let raknet
  try {
    raknet = require('jsp-raknet')
  } catch {
    return
  }
  for (const proto of [raknet.Server?.prototype, raknet.Connection?.prototype]) {
    if (!proto) continue
    for (const method of ['sendBuffer', 'sendPacket']) {
      const original = proto[method]
      if (typeof original !== 'function') continue
      proto[method] = function (...args) {
        try {
          return original.apply(this, args)
        } catch (err) {
          if (err?.code === 'ERR_SOCKET_DGRAM_NOT_RUNNING') return undefined
          throw err
        }
      }
    }
  }
}

module.exports = { resolveRaknetBackend, patchJspRaknetTeardownRace }
