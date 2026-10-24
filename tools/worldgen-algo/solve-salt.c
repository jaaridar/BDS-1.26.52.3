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

static inline uint32_t draw(uint64_t *state, uint32_t span) {
  *state = (*state * MUL + ADD) & MASK48;
  return (uint32_t)(*state >> 17) % span;
}

/* Predicted offsets for one observation at a candidate salt. */
static void predict(const obs_t *o, uint64_t salt, uint32_t span,
                    uint32_t *offX, uint32_t *offZ) {
  uint64_t sum = (uint64_t)((int64_t)o->cellZ * MUL_Z + (int64_t)o->cellX * MUL_X +
                            o->seed + (int64_t)(int32_t)salt);
  uint64_t state = (sum ^ XOR) & MASK48;
  uint32_t a = draw(&state, span);
  if (o->mode == 0) {
    *offX = a;
    *offZ = draw(&state, span);
  } else {
    uint32_t b = draw(&state, span);
    uint32_t c = draw(&state, span);
    uint32_t d = draw(&state, span);
    *offX = (a + b) >> 1;
    *offZ = (c + d) / 2;
  }
}

static void *worker(void *arg) {
  work_t *w = (work_t *)arg;
  uint32_t span = (uint32_t)(w->obs[0].spacing - w->obs[0].separation);
  for (uint64_t salt = w->from; salt < w->to; salt++) {
    uint32_t offX, offZ;
    int dx0 = 0, dz0 = 0;
    predict(&w->obs[0], salt, span, &offX, &offZ);
    dx0 = (int32_t)offX - w->obs[0].offX;
    dz0 = (int32_t)offZ - w->obs[0].offZ;
    if (dx0 < -slack || dx0 > slack || dz0 < -slack || dz0 > slack) continue;
    int ok = 1;
    for (int i = 1; i < w->count && ok; i++) {
      predict(&w->obs[i], salt, span, &offX, &offZ);
      int dx = (int32_t)offX - w->obs[i].offX;
      int dz = (int32_t)offZ - w->obs[i].offZ;
      if (fixed_slack) {
        if (dx != dx0 || dz != dz0) ok = 0;
      } else if (dx < -slack || dx > slack || dz < -slack || dz > slack) {
        ok = 0;
      }
    }
    if (ok) {
      printf("%s\t%llu\t%lld\tdelta=%d,%d\t%d\n", w->obs[0].id,
             (unsigned long long)salt, (long long)(int32_t)salt,
             fixed_slack ? dx0 : 0, fixed_slack ? dz0 : 0, w->count);
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
    if (strcmp(argv[i], "--fixed-slack") == 0) { slack = atoi(argv[i + 1]); fixed_slack = 1; }
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

  printf("# %d observations in %d groups\n", total, group_count);

  for (int g = 0; g < group_count; g++) {
    work_t work[64];
    pthread_t tid[64];
    if (threads > 64) threads = 64;
    uint64_t chunk = (1ULL << 32) / (uint64_t)threads;
    for (int t = 0; t < threads; t++) {
      work[t].obs = groups[g].member;
      work[t].count = groups[g].count;
      work[t].from = (uint64_t)t * chunk;
      work[t].to = (t == threads - 1) ? (1ULL << 32) : (uint64_t)(t + 1) * chunk;
      pthread_create(&tid[t], NULL, worker, &work[t]);
    }
    for (int t = 0; t < threads; t++) pthread_join(tid[t], NULL);
    fflush(stdout);
  }
  return 0;
}
