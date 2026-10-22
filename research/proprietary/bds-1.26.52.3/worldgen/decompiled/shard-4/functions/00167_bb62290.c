/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbc62290 (ELF vaddr 0xbb62290)
 * Label: callee-of:0x6146460
 * Body:  [[0bc62290, 0bc62403]]
 * Ghidra: FUN_0bc62290
 */


long FUN_0bc62290(long param_1,char param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar2 + 0x38);
  uVar5 = (int)((ulong)(*(long *)(lVar2 + 0x40) - lVar6) >> 3) - 1;
  plVar4 = (long *)(lVar6 + (ulong)(uVar5 & 0xf95d258f) * 8);
  lVar3 = *(long *)(lVar2 + 0x50);
  do {
    if (*plVar4 == -1) {
      return 0;
    }
    lVar7 = *plVar4 * 0x20;
    plVar4 = (long *)(lVar3 + lVar7);
  } while (*(int *)(lVar3 + 8 + lVar7) != -0x6a2da71);
  if ((plVar4 != *(long **)(lVar2 + 0x58)) && (lVar7 = plVar4[2], lVar7 != 0)) {
    uVar8 = (ulong)((uVar1 & 0x3ffff) >> 0xb);
    if ((uVar8 < (ulong)(*(long *)(lVar7 + 0x10) - *(long *)(lVar7 + 8) >> 3)) &&
       (lVar7 = *(long *)(*(long *)(lVar7 + 8) + uVar8 * 8), lVar7 != 0)) {
      if ((*(uint *)(lVar7 + (ulong)(uVar1 & 0x7ff) * 4) ^ uVar1 & 0xfffc0000) < 0x3ffff) {
        plVar4 = (long *)(lVar6 + (ulong)(uVar5 & 0x85b93800) * 8);
        do {
          if (*plVar4 == -1) {
            return 0;
          }
          lVar6 = *plVar4 * 0x20;
          plVar4 = (long *)(lVar3 + lVar6);
        } while (*(int *)(lVar3 + 8 + lVar6) != -0x7a46c800);
        if ((((plVar4 != *(long **)(lVar2 + 0x58)) && (lVar2 = plVar4[2], lVar2 != 0)) &&
            (uVar8 < (ulong)(*(long *)(lVar2 + 0x10) - *(long *)(lVar2 + 8) >> 3))) &&
           (((lVar6 = *(long *)(*(long *)(lVar2 + 8) + uVar8 * 8), lVar6 != 0 &&
             (uVar5 = *(uint *)(lVar6 + (ulong)(uVar1 & 0x7ff) * 4),
             (uVar1 & 0xfffc0000 ^ uVar5) < 0x3ffff)) &&
            (lVar2 = *(long *)(*(long *)(lVar2 + 0x50) + (ulong)(uVar5 >> 4 & 0x3ff8)), lVar2 != 0))
           )) {
          lVar2 = *(long *)(lVar2 + (ulong)(uVar5 & 0x7f) * 8);
          if (param_2 != '\0') {
            return lVar2;
          }
          if (*(char *)(lVar2 + 0x251) == '\0') {
            return lVar2;
          }
        }
      }
    }
  }
  return 0;
}


