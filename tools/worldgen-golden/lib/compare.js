'use strict';
// Block-by-block comparison between a golden capture (server truth) and a
// candidate generator's output, both in the canonical grid shape:
//   { size:[sx,sy,sz], palette:[{name,states}], layer0:Uint16Array, layer1|null }

function paletteName(grid, id) {
  const entry = grid.palette[id];
  return entry ? `${entry.name}${entry.states && Object.keys(entry.states).length ? JSON.stringify(entry.states) : ''}` : `<palette#${id}>`;
}

function compareGrids({ golden, candidate, ignoreAir = false, maxWorst = 25, unstable = null }) {
  const [gsx, gsy, gsz] = golden.size;
  const [csx, csy, csz] = candidate.size;
  if (gsx !== csx || gsy !== csy || gsz !== csz) {
    throw new Error(
      `size mismatch: golden ${golden.size.join('x')} vs candidate ${candidate.size.join('x')}`
    );
  }
  const total = gsx * gsy * gsz;
  let matched = 0;
  let mismatched = 0;
  let skipped = 0;
  const confusion = new Map();
  let unstableAccepted = 0;
  const perY = new Map();
  const worst = [];
  const firstMismatches = [];

  for (let y = 0; y < gsy; y++) {
    let yMatched = 0;
    let yMismatched = 0;
    for (let z = 0; z < gsz; z++) {
      for (let x = 0; x < gsx; x++) {
        const offset = (y * gsz + z) * gsx + x;
        const goldenName = paletteName(golden, golden.layer0[offset]);
        const candidateName = paletteName(candidate, candidate.layer0[offset]);
        if (ignoreAir && goldenName === 'minecraft:air') {
          skipped++;
          continue;
        }
        if (unstable && unstable[offset]) {
          // The server itself is not reproducible here: accept any variant it was
          // observed to produce, and flag anything else as a real mismatch.
          const allowed = unstable[offset];
          const candidateL1 = candidate.layer1
            ? paletteName(candidate, candidate.layer1[offset])
            : 'minecraft:air';
          const ok = allowed.some(
            (variant) => variant.layer0 === candidateName &&
              (variant.layer1 === undefined || variant.layer1 === candidateL1)
          );
          if (ok) {
            matched++;
            yMatched++;
            unstableAccepted++;
            continue;
          }
        }
        if (goldenName === candidateName) {
          matched++;
          yMatched++;
        } else {
          mismatched++;
          yMismatched++;
          const pair = `${goldenName} <- ${candidateName}`;
          confusion.set(pair, (confusion.get(pair) || 0) + 1);
          if (firstMismatches.length < 200) {
            firstMismatches.push({ at: [x, y, z], golden: goldenName, candidate: candidateName });
          }
          // Keep the largest y-first spread: mismatches near the surface are
          // usually the meaningful signal, deep stone the noisiest.
          worst.push({ at: [x, y, z], golden: goldenName, candidate: candidateName });
        }
      }
    }
    perY.set(y, { matched: yMatched, mismatched: yMismatched });
  }

  const ranked = [...confusion.entries()].sort((a, b) => b[1] - a[1]).slice(0, 20).map(([pair, count]) => {
    const [expected, got] = pair.split(' <- ');
    return { expected, got, count };
  });

  return {
    total,
    matched,
    mismatched,
    skipped,
    accuracy: total - skipped === 0 ? 1 : matched / (matched + mismatched),
    confusion: ranked,
    perY: [...perY.entries()].map(([y, v]) => ({ y, ...v })),
    worst,
    worstRanked: ranked,
    firstMismatches,
    unstableAccepted,
    maxWorst,
    size: golden.size,
  };
}

function formatReport(report, { title = 'worldgen comparison', limit = 20 } = {}) {
  const lines = [];
  lines.push(`# ${title}`);
  lines.push('');
  lines.push(`- volume: \`${report.size.join(' x ')}\` = ${report.total.toLocaleString()} blocks`);
  if (report.skipped) lines.push(`- skipped (air in golden): ${report.skipped.toLocaleString()}`);
  lines.push(`- matched: ${report.matched.toLocaleString()}`);
  lines.push(`- mismatched: ${report.mismatched.toLocaleString()}`);
  lines.push(`- accuracy: ${(report.accuracy * 100).toFixed(4)}%`);
  lines.push('');

  if (report.mismatched === 0) {
    lines.push('**Result: exact match — every compared block agrees.**');
    return `${lines.join('\n')}\n`;
  }

  lines.push('## Most common disagreements');
  lines.push('');
  lines.push('| expected (BDS) | got (candidate) | blocks |');
  lines.push('|---|---|---|');
  for (const row of report.worstRanked.slice(0, limit)) {
    lines.push(`| \`${row.expected}\` | \`${row.got}\` | ${row.count.toLocaleString()} |`);
  }
  lines.push('');

  const interesting = report.perY
    .filter((row) => row.mismatched > 0)
    .sort((a, b) => b.mismatched - a.mismatched)
    .slice(0, 15);
  if (interesting.length) {
    lines.push('## Worst layers');
    lines.push('');
    lines.push('| y | matched | mismatched |');
    lines.push('|---|---|---|');
    for (const row of interesting) {
      lines.push(`| ${row.y} | ${row.matched} | ${row.mismatched} |`);
    }
    lines.push('');
  }

  if (report.unstableAccepted) {
    lines.push(`- ${report.unstableAccepted} block(s) matched an accepted variant of a ` +
      'block the server itself does not reproduce');
    lines.push('');
  }

  lines.push('## First mismatches');
  lines.push('');
  lines.push('| x | y | z | expected | got |');
  lines.push('|---|---|---|---|---|');
  for (const row of report.firstMismatches.slice(0, limit)) {
    lines.push(`| ${row.at[0]} | ${row.at[1]} | ${row.at[2]} | \`${row.golden}\` | \`${row.candidate}\` |`);
  }
  lines.push('');
  return `${lines.join('\n')}\n`;
}

module.exports = { compareGrids, formatReport, paletteName };
