/*
 * Solve a whole placement: salt, span (= spacing - separation) and spread type.
 *
 * `solve-salt` assumes both numbers the placement record supplies. When one of
 * them is not what the public tables say -- village turned out to be exactly
 * that -- the honest move is to let the observations decide, over the whole
 * space. For a fixed spacing the span is at most a few dozen values, so the
 * full search is still 2^32 salts times those spans times two spread types.
 *
 * The trick that keeps it cheap: the four LCG draws a cell needs do not depend
 * on the span. Drawing them once per candidate salt gives every span for free.
 *
 *   cc -O2 -o /tmp/solve-placement tools/worldgen-algo/solve-placement.c -lpthread
 *   /tmp/solve-placement observations.tsv --spacing 34
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
#define MAX_OBS 8192
#define MAX_SPAN 256

typedef struct obs_s {
  char id[96];
  int spacing;
  int separation;
  int seed;
  int64_t seed64;
  int32_t cellX;
  int32_t cellZ;
  int32_t offX;
  int32_t offZ;
  int count;
  struct obs_s *member;
} obs_t;

typedef struct {
  obs_t *obs;
  int count;
  int spanFrom, spanTo;
  uint64_t from, to;
} work_t;

static int slack = 0;
static int spacingOverride = 0;
static int modes = 3; /* bit 0 linear, bit 1 triangular */
static int maxObs = 0; /* 0 = use every observation in the group */

/* Raw draws for one observation at one candidate salt, span-independent. */
static void raw_draws(const obs_t *o, uint64_t salt, uint32_t d[4]) {
  uint64_t sum = (uint64_t)((int64_t)o->cellZ * MUL_Z + (int64_t)o->cellX * MUL_X +
                            o->seed64 + (int64_t)(int32_t)salt);
  uint64_t state = (sum ^ XOR) & MASK48;
  for (int i = 0; i < 4; i++) {
    state = (state * MUL + ADD) & MASK48;
    d[i] = (uint32_t)(state >> 17);
  }
}

static void offsets(const uint32_t d[4], int span, int mode, int32_t *ox, int32_t *oz) {
  if (mode == 0) {
    *ox = (int32_t)(d[0] % (uint32_t)span);
    *oz = (int32_t)(d[1] % (uint32_t)span);
  } else {
    *ox = (int32_t)((d[0] % (uint32_t)span + d[1] % (uint32_t)span) >> 1);
    *oz = (int32_t)((d[2] % (uint32_t)span + d[3] % (uint32_t)span) / 2);
  }
}

static void *worker(void *arg) {
  work_t *w = (work_t *)arg;
  for (uint64_t salt = w->from; salt < w->to; salt++) {
    uint32_t d[4];
    raw_draws(&w->obs[0], salt, d);
    for (int span = w->spanFrom; span <= w->spanTo; span++) {
      for (int mode = 0; mode < 2; mode++) {
        if (!(modes & (1 << mode))) continue;
        int32_t ox, oz;
        offsets(d, span, mode, &ox, &oz);
        int dx = ox - w->obs[0].offX, dz = oz - w->obs[0].offZ;
        if (dx < -slack || dx > slack || dz < -slack || dz > slack) continue;
        int ok = 1;
        for (int i = 1; i < w->count && ok; i++) {
          uint32_t di[4];
          raw_draws(&w->obs[i], salt, di);
          offsets(di, span, mode, &ox, &oz);
          dx = ox - w->obs[i].offX;
          dz = oz - w->obs[i].offZ;
          if (dx < -slack || dx > slack || dz < -slack || dz > slack) ok = 0;
        }
        if (ok) {
          printf("%s\tspacing=%d\tsalt=%llu\tspan=%d\tseparation=%d\tmode=%s\tn=%d\n",
                 w->obs[0].id, w->obs[0].spacing, (unsigned long long)salt, span,
                 w->obs[0].spacing - span, mode ? "triangular" : "linear", w->count);
          fflush(stdout);
        }
      }
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
  o->seed64 = (int64_t)strtoll(f[4], NULL, 10);
  o->cellX = (int32_t)strtol(f[5], NULL, 10);
  o->cellZ = (int32_t)strtol(f[6], NULL, 10);
  o->offX = (int32_t)strtol(f[7], NULL, 10);
  o->offZ = (int32_t)strtol(f[8], NULL, 10);
  return 1;
}

int main(int argc, char **argv) {
  if (argc < 2) {
    fprintf(stderr, "usage: %s observations.tsv [--spacing N] [--slack N] [--mode linear|triangular] [--threads N]\n", argv[0]);
    return 2;
  }
  int threads = 2;
  for (int i = 2; i < argc - 1; i++) {
    if (strcmp(argv[i], "--spacing") == 0) spacingOverride = atoi(argv[i + 1]);
    else if (strcmp(argv[i], "--slack") == 0) slack = atoi(argv[i + 1]);
    else if (strcmp(argv[i], "--threads") == 0) threads = atoi(argv[i + 1]);
    else if (strcmp(argv[i], "--max-obs") == 0) maxObs = atoi(argv[i + 1]);
    else if (strcmp(argv[i], "--mode") == 0) {
      if (strcmp(argv[i + 1], "linear") == 0) modes = 1;
      else if (strcmp(argv[i + 1], "triangular") == 0) modes = 2;
      else modes = 3;
    }
  }

  FILE *f = fopen(argv[1], "r");
  if (!f) { perror(argv[1]); return 1; }

  static obs_t all[MAX_OBS];
  static obs_t groups[MAX_OBS];
  static obs_t members[MAX_OBS];
  int total = 0;
  char line[512];
  while (fgets(line, sizeof line, f) && total < MAX_OBS) {
    if (line[0] == '#') continue;
    if (parse_line(line, &all[total])) {
      if (spacingOverride) all[total].spacing = spacingOverride;
      total++;
    }
  }
  fclose(f);

  /* Group by identifier; every group is solved independently. */
  int group_count = 0;
  for (int i = 0; i < total; i++) {
    int found = -1;
    for (int g = 0; g < group_count; g++) {
      if (strcmp(groups[g].id, all[i].id) == 0) { found = g; break; }
    }
    if (found < 0) {
      found = group_count++;
      groups[found] = all[i];
      groups[found].count = 0;
      groups[found].member = NULL;
    }
    all[i].count = found;
  }
  int cursor = 0;
  for (int g = 0; g < group_count; g++) {
    groups[g].member = &members[cursor];
    groups[g].count = 0;
    for (int i = 0; i < total; i++) {
      if (all[i].count != g) continue;
      if (maxObs && groups[g].count >= maxObs) continue;
      members[cursor++] = all[i];
      groups[g].count++;
    }
  }
  for (int g = 0; g < group_count; g++) {
    if (groups[g].spacing < 2) { fprintf(stderr, "group %s has no spacing\n", groups[g].id); continue; }
    groups[g].separation = 0;
    printf("# %s: %d observations, spacing %d, sweeping span 1..%d, %d thread(s), slack %d\n",
           groups[g].id, groups[g].count, groups[g].spacing, groups[g].spacing - 1, threads, slack);
    fflush(stdout);
    int maxSpan = groups[g].spacing - 1;
    if (maxSpan > MAX_SPAN - 1) maxSpan = MAX_SPAN - 1;
    static work_t work[64];
    static pthread_t tid[64];
    if (threads > 64) threads = 64;
    uint64_t chunk = (1ULL << 32) / (uint64_t)threads;
    for (int t = 0; t < threads; t++) {
      work[t].obs = groups[g].member;
      work[t].count = groups[g].count;
      work[t].spanFrom = 1;
      work[t].spanTo = maxSpan;
      work[t].from = (uint64_t)t * chunk;
      work[t].to = (t == threads - 1) ? (1ULL << 32) : (uint64_t)(t + 1) * chunk;
      pthread_create(&tid[t], NULL, worker, &work[t]);
    }
    for (int t = 0; t < threads; t++) pthread_join(tid[t], NULL);
  }
  return 0;
}
