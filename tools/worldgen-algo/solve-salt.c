/*
 * Solve for the one unknown additive constant in a jittered-grid placement.
 *
 * The resolver recovered from the binary is Java's getPotentialStructureChunk
 * shape:
 *
 *     cell   = floorDiv(chunk, spacing)
 *     state  = ((cellZ*132897987541 + cellX*341873128712 + seed + salt)
 *               ^ 0x5deece66d) & 2^48-1
 *     offX   = next(31) % span          (span = spacing - separation)
 *     offZ   = next(31) % span
 *     chunk  = (cellX*spacing + offX, cellZ*spacing + offZ)
 *
 * What we do not know is the value the caller passes as the salt, and any
 * additive transform the caller applies to the world seed before handing it
 * over. Both are additions to the same sum, so they are indistinguishable:
 * solving for one 32-bit constant covers both. If a constant exists that
 * reproduces every observation, placement is fully determined for any seed;
 * if none exists in the whole 32-bit space, the model itself is wrong.
 *
 * This is a search, not a guess: it is exhaustive over 2^32 values and it
 * either finds the unique constant or refutes the model.
 *
 * Input is TSV, one observation per line:
 *
 *     id  spacing  separation  mode  seed  cellX  cellZ  offX  offZ
 *
 * mode 0 = linear (one draw per axis), 1 = triangular (mean of two draws).
 *
 * Build and run:
 *     cc -O2 -o /tmp/solve-salt tools/worldgen-algo/solve-salt.c -lpthread
 *     /tmp/solve-salt observations.tsv
 */

#include <pthread.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MASK48 0xffffffffffffULL
#define MUL 0x5deece66dULL
#define ADD 0xbULL
#define XOR 0x5deece66dULL
#define MUL_X 341873128712LL
#define MUL_Z 132897987541LL
#define MAX_OBS 4096

typedef struct obs_s {
  char id[96];
  int spacing;
  int separation;
  int mode;
  int64_t seed;
  int32_t cellX;
  int32_t cellZ;
  int32_t offX;
  int32_t offZ;
  int count;        /* groups only: how many observations */
  struct obs_s *member; /* groups only: first observation */
} obs_t;

typedef struct {
  obs_t *obs;      /* observations in this group */
  int count;
  uint64_t from;   /* salt range [from, to) */
  uint64_t to;
} work_t;

static int slack = 0;
static int fixed_slack = 0;

/*
 * Where the swept value goes.
 *
 *   0  it is the record's 32-bit salt, added to the mix -- what the resolver
 *      does with `*(int *)(param_2 + 4)`.
 *   1  it is combined with the seed first (`seed ^ value`). A per-set seed
 *      transform that is not an addition is invisible to an additive search,
 *      so it gets its own exhaustive sweep.
 */
static int xorSeed = 0;

/*
 * How many cells either side of the reported chunk to consider.
 *
 * The server reports a structure's origin block, and for a structure wider than
 * a chunk that origin can sit in a neighbouring cell -- in which case taking the
 * cell from the report puts the prediction a whole grid step away. Allowing the
 * solver to pick a neighbouring cell makes the test honest about that, and it
 * stays a strong test because every observation still has to match: with radius
 * 1 the chance of a candidate surviving on luck is ~12% per observation.
 */
static int cellSearch = 0;

/*
 * Partial-match mode.
 *
 * The full-match sweep asks whether *one* constant explains *every*
 * observation. That test conflates "the salt is wrong" with "the observations
 * do not all come from one set" -- a structure that the server registers as a
 * single id may still be placed by several sets (one per biome variant, say),
 * each with its own constant. Ranking candidates by how many observations they
 * explain separates the two cases: a mixture still shows strong partial fits,
 * a wrong model shows nothing above chance.
 *
 * `anchor` picks which observation has to match before the rest are scored, so
 * a set that is missing from the anchor's own observations is still findable.
 */
static int minMatch = 0;
static int anchor = 0;

/* Salt window to sweep, and a single-candidate mode for checking a prior. */
static uint64_t saltFrom = 0;
static uint64_t saltTo = 1ULL << 32;
static long long oneSalt = 0;
static int haveOneSalt = 0;

/*
 * `v % span` with a runtime span is a hardware divide, and a full 2^32 sweep is
 * dominated by it. The magic reciprocal below turns it into one 64x64 multiply
 * (exact for every v < 2^31 and span < 2^16, which is all this solver sees).
 */
typedef struct { uint32_t span; uint64_t magic; } span_t;

static span_t spanOf(uint32_t span) {
  span_t s;
  s.span = span;
  s.magic = ((1ULL << 52) / span) + 1ULL;
  return s;
}

static inline uint32_t reduce(const span_t *m, uint32_t v) {
  uint32_t q = (uint32_t)(((__uint128_t)v * m->magic) >> 52);
  uint32_t r = v - q * m->span;
  return r < m->span ? r : r - m->span;
}

static inline uint32_t draw(uint64_t *state, const span_t *m) {
  *state = (*state * MUL + ADD) & MASK48;
  return reduce(m, (uint32_t)(*state >> 17));
}

/* Predicted offsets for one observation at a candidate salt. */
static void predict(const obs_t *o, uint64_t salt, const span_t *m, int32_t cellX, int32_t cellZ,
                    uint32_t *offX, uint32_t *offZ) {
  int64_t seedPart = xorSeed
    ? (o->seed ^ (int64_t)(int32_t)salt)
    : (o->seed + (int64_t)(int32_t)salt);
  uint64_t sum = (uint64_t)((int64_t)cellZ * MUL_Z + (int64_t)cellX * MUL_X + seedPart);
  uint64_t state = (sum ^ XOR) & MASK48;
  uint32_t a = draw(&state, m);
  if (o->mode == 0) {
    *offX = a;
    *offZ = draw(&state, m);
  } else {
    uint32_t b = draw(&state, m);
    uint32_t c = draw(&state, m);
    uint32_t d = draw(&state, m);
    *offX = (a + b) >> 1;
    *offZ = (c + d) / 2;
  }
}

/* Best match for one observation over the cell neighbourhood. */
static int match_obs(const obs_t *o, uint64_t salt, const span_t *m, int *dxOut, int *dzOut) {
  int best = 0;
  int bestDx = 0, bestDz = 0;
  int bestScore = 0x7fffffff;
  for (int i = -cellSearch; i <= cellSearch; i++) {
    for (int j = -cellSearch; j <= cellSearch; j++) {
      uint32_t offX, offZ;
      predict(o, salt, m, o->cellX + i, o->cellZ + j, &offX, &offZ);
      int dx = (int32_t)offX - o->offX;
      int dz = (int32_t)offZ - o->offZ;
      int score = (dx < 0 ? -dx : dx) + (dz < 0 ? -dz : dz);
      if (score < bestScore) {
        bestScore = score;
        bestDx = dx;
        bestDz = dz;
        best = 1;
      }
    }
  }
  if (!best) return 0;
  *dxOut = bestDx;
  *dzOut = bestDz;
  return (bestDx >= -slack && bestDx <= slack && bestDz >= -slack && bestDz <= slack);
}

/*
 * The hot path: no cell neighbourhood, no partial matching, salt added.
 *
 * Written out by hand because a 2^32 sweep pays for every instruction it does
 * not need, and the generic path costs three of them (two calls and a loop
 * bound) per candidate on top of the eight that do the work.
 */
static void *workerFast(void *arg) {
  work_t *w = (work_t *)arg;
  span_t m = spanOf((uint32_t)(w->obs[0].spacing - w->obs[0].separation));
  const int a = anchor < w->count ? anchor : 0;
  const obs_t *first = &w->obs[a];
  const uint64_t base = (uint64_t)((int64_t)first->cellZ * MUL_Z +
                                   (int64_t)first->cellX * MUL_X + first->seed);
  const uint32_t span = m.span;
  const uint64_t magic = m.magic;
  const int offX0 = first->offX;
  const int offZ0 = first->offZ;
  for (uint64_t salt = w->from; salt < w->to; salt++) {
    uint64_t state = ((base + (uint64_t)(int32_t)salt) & MASK48) ^ XOR;
    uint64_t next = (state * MUL + ADD) & MASK48;
    uint32_t v = (uint32_t)(next >> 17);
    uint32_t r = v - (uint32_t)(((__uint128_t)v * magic) >> 52) * span;
    int d = (int)r - offX0;
    if (d < -slack || d > slack) continue;
    next = (next * MUL + ADD) & MASK48;
    v = (uint32_t)(next >> 17);
    r = v - (uint32_t)(((__uint128_t)v * magic) >> 52) * span;
    d = (int)r - offZ0;
    if (d < -slack || d > slack) continue;
    int dx0 = 0, dz0 = 0;
    if (!match_obs(first, salt, &m, &dx0, &dz0)) continue;
    int ok = 1;
    for (int i = 0; i < w->count && ok; i++) {
      if (i == a) continue;
      int dx = 0, dz = 0;
      if (!match_obs(&w->obs[i], salt, &m, &dx, &dz)) { ok = 0; break; }
      if (fixed_slack && (dx != dx0 || dz != dz0)) ok = 0;
    }
    if (ok) {
      printf("%s\t%llu\t%lld\tdelta=%d,%d\t%d\n", w->obs[0].id,
             (unsigned long long)salt, (long long)(int32_t)salt, dx0, dz0, w->count);
      fflush(stdout);
    }
  }
  return NULL;
}

static void *worker(void *arg) {
  work_t *w = (work_t *)arg;
  span_t m = spanOf((uint32_t)(w->obs[0].spacing - w->obs[0].separation));
  const int a = anchor < w->count ? anchor : 0;
  for (uint64_t salt = w->from; salt < w->to; salt++) {
    int dx0 = 0, dz0 = 0;
    if (!match_obs(&w->obs[a], salt, &m, &dx0, &dz0)) continue;
    if (minMatch > 0) {
      int hits = 1;
      for (int i = 0; i < w->count; i++) {
        if (i == a) continue;
        int dx = 0, dz = 0;
        if (match_obs(&w->obs[i], salt, &m, &dx, &dz)) hits++;
      }
      if (hits >= minMatch) {
        printf("%s\t%llu\t%lld\t%d/%d\n", w->obs[0].id,
               (unsigned long long)salt, (long long)(int32_t)salt, hits, w->count);
        fflush(stdout);
      }
      continue;
    }
    int ok = 1;
    for (int i = 1; i < w->count && ok; i++) {
      int dx = 0, dz = 0;
      if (!match_obs(&w->obs[i], salt, &m, &dx, &dz)) {
        ok = 0;
        break;
      }
      if (fixed_slack && (dx != dx0 || dz != dz0)) ok = 0;
    }
    if (ok) {
      printf("%s\t%llu\t%lld\tdelta=%d,%d\t%d\n", w->obs[0].id,
             (unsigned long long)salt, (long long)(int32_t)salt, dx0, dz0, w->count);
      fflush(stdout);
    }
  }
  return NULL;
}

static int parse_line(char *line, obs_t *o) {
  char *f[9];
  int n = 0;
  for (char *p = strtok(line, "\t\n"); p && n < 9; p = strtok(NULL, "\t\n")) f[n++] = p;
  if (n != 9) return 0;
  snprintf(o->id, sizeof(o->id), "%s", f[0]);
  o->spacing = atoi(f[1]);
  o->separation = atoi(f[2]);
  o->mode = atoi(f[3]);
  o->seed = (int64_t)strtoll(f[4], NULL, 10);
  o->cellX = (int32_t)strtol(f[5], NULL, 10);
  o->cellZ = (int32_t)strtol(f[6], NULL, 10);
  o->offX = (int32_t)strtol(f[7], NULL, 10);
  o->offZ = (int32_t)strtol(f[8], NULL, 10);
  return 1;
}

int main(int argc, char **argv) {
  if (argc < 2) {
    fprintf(stderr, "usage: %s observations.tsv [threads]\n", argv[0]);
    return 2;
  }
  int threads = argc > 2 ? atoi(argv[2]) : 2;
  for (int i = 1; i < argc - 1; i++) {
    if (strcmp(argv[i], "--slack") == 0) slack = atoi(argv[i + 1]);
    if (strcmp(argv[i], "--xor-seed") == 0) xorSeed = 1;
    if (strcmp(argv[i], "--cell-search") == 0) cellSearch = atoi(argv[i + 1]);
    if (strcmp(argv[i], "--fixed-slack") == 0) { slack = atoi(argv[i + 1]); fixed_slack = 1; }
    if (strcmp(argv[i], "--min-match") == 0) minMatch = atoi(argv[i + 1]);
    if (strcmp(argv[i], "--anchor") == 0) anchor = atoi(argv[i + 1]);
    if (strcmp(argv[i], "--salt-range") == 0) {
      saltFrom = strtoull(argv[i + 1], NULL, 10);
      saltTo = strtoull(argv[i + 2], NULL, 10);
    }
    if (strcmp(argv[i], "--salt") == 0) { oneSalt = strtoll(argv[i + 1], NULL, 10); haveOneSalt = 1; }
  }
  if (threads < 1) threads = 1;

  FILE *f = fopen(argv[1], "r");
  if (!f) { perror(argv[1]); return 1; }

  static obs_t all[MAX_OBS];
  static obs_t groups[MAX_OBS];
  static obs_t members[MAX_OBS];
  static int group_of[MAX_OBS];
  int total = 0;
  char line[512];
  while (fgets(line, sizeof line, f) && total < MAX_OBS) {
    if (line[0] == '#') continue;
    if (parse_line(line, &all[total])) total++;
  }
  fclose(f);

  /* group by (id, spacing, separation, mode) */
  int group_count = 0;
  memset(group_of, -1, sizeof group_of);
  for (int i = 0; i < total; i++) {
    int found = -1;
    for (int g = 0; g < group_count; g++) {
      if (strcmp(groups[g].id, all[i].id) == 0 && groups[g].spacing == all[i].spacing &&
          groups[g].separation == all[i].separation && groups[g].mode == all[i].mode) {
        found = g;
        break;
      }
    }
    if (found < 0) {
      found = group_count++;
      groups[found] = all[i];
      groups[found].count = 0;
    }
    
    group_of[i] = found;
  }

  /* pack the observations back into a flat array, per group */
  int cursor = 0;
  for (int g = 0; g < group_count; g++) {
    groups[g].member = &members[cursor];
    for (int i = 0; i < total; i++) {
      if (group_of[i] != g) continue;
      members[cursor++] = all[i];
      groups[g].count++;
    }
  }

  printf("# %d observations in %d groups, unknown %s\n", total, group_count,
         xorSeed ? "xor-ed with the seed" : "added as a salt");

  for (int g = 0; g < group_count; g++) {
    work_t work[64];
    pthread_t tid[64];
    if (threads > 64) threads = 64;
    if (haveOneSalt) {
      span_t m = spanOf((uint32_t)(groups[g].member[0].spacing - groups[g].member[0].separation));
      int hits = 0;
      for (int i = 0; i < groups[g].count; i++) {
        int dx = 0, dz = 0;
        if (match_obs(&groups[g].member[i], (uint64_t)oneSalt, &m, &dx, &dz)) hits++;
      }
      printf("%s\t%lld\t%d/%d\n", groups[g].id, oneSalt, hits, groups[g].count);
      continue;
    }
    uint64_t chunk = (saltTo - saltFrom) / (uint64_t)threads;
    for (int t = 0; t < threads; t++) {
      work[t].obs = groups[g].member;
      work[t].count = groups[g].count;
      work[t].from = saltFrom + (uint64_t)t * chunk;
      work[t].to = (t == threads - 1) ? saltTo : saltFrom + (uint64_t)(t + 1) * chunk;
      const int fast = !cellSearch && !minMatch && !xorSeed;
      pthread_create(&tid[t], NULL, fast ? workerFast : worker, &work[t]);
    }
    for (int t = 0; t < threads; t++) pthread_join(tid[t], NULL);
    fflush(stdout);
  }
  return 0;
}
