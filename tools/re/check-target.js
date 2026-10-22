#!/usr/bin/env node
'use strict'

/**
 * Pre-flight check for a *local* binary analysis target.
 *
 * Reports only file metadata (size, sha256, container magic) and detects
 * the common failure mode in this repository: `bedrock_server` in a fresh
 * clone is a 134-byte Git LFS *pointer*, not the 256 MB executable.
 *
 * This tool performs no disassembly/decompilation and extracts no code.
 * See tools/re/README.md for why analysis itself is local-only and why
 * its output must never be committed to this repository.
 *
 * Usage: node tools/re/check-target.js <path-to-binary>
 * Exit: 0 = plausible local binary present, 2 = usage, 3 = blocked/missing
 */

const fs = require('fs')
const crypto = require('crypto')

function magicName (buf) {
  if (buf.length >= 4 && buf[0] === 0x7f && buf.toString('ascii', 1, 4) === 'ELF') return 'ELF (Linux)'
  if (buf.length >= 2 && buf.toString('ascii', 0, 2) === 'MZ') return 'PE/MZ (Windows)'
  if (buf.length >= 4 && [0xfeedface, 0xfeedfacf, 0xcafebabe, 0xcffaedfe].includes(buf.readUInt32BE(0))) return 'Mach-O (macOS)'
  return 'unknown'
}

function main () {
  const target = process.argv[2]
  if (!target) {
    console.error('Usage: node tools/re/check-target.js <path-to-binary>')
    process.exit(2)
  }
  if (!fs.existsSync(target)) {
    console.log(JSON.stringify({ target, present: false, blocked: 'file does not exist' }, null, 2))
    process.exit(3)
  }
  const stat = fs.statSync(target)
  const head = Buffer.alloc(Math.min(512, stat.size))
  const fd = fs.openSync(target, 'r')
  fs.readSync(fd, head, 0, head.length, 0)
  fs.closeSync(fd)

  const headText = head.toString('utf8')
  if (headText.startsWith('version https://git-lfs.github.com/spec/v1')) {
    const oid = /(?:^|\n)oid sha256:([0-9a-f]+)/.exec(headText)?.[1] ?? null
    const size = Number(/(?:^|\n)size (\d+)/.exec(headText)?.[1] ?? NaN)
    console.log(JSON.stringify({
      target,
      present: false,
      blocked: 'Git LFS pointer, not the real binary. The executable is not materialized in this checkout.',
      lfs: { oidSha256: oid, realSizeBytes: Number.isNaN(size) ? null : size },
      nextStep: 'On your own machine, with your own licensed copy: `git lfs pull` (or copy bedrock_server from an official BDS download), then re-run this check. Do not commit the binary or any analysis output - see tools/re/README.md.'
    }, null, 2))
    process.exit(3)
  }

  const hash = crypto.createHash('sha256')
  hash.update(fs.readFileSync(target))
  console.log(JSON.stringify({
    target,
    present: true,
    sizeBytes: stat.size,
    sha256: hash.digest('hex'),
    format: magicName(head),
    warning: 'Metadata only - no code was read. Before analyzing a proprietary binary, confirm your license/local law allows it, keep all output outside this repository (re-output/ is gitignored for local notes), and never contribute derived code/constants back here (clean-room policy, docs/licensing.md).'
  }, null, 2))
}

if (require.main === module) main()
module.exports = { magicName }
