/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6c9a10 (ELF vaddr 0xc5c9a10)
 * Label: JigsawBlock::vslot2
 * Body:  [[0c6c9a10, 0c6c9a31] [0c6c9a40, 0c6c9a76]]
 * Ghidra: wg_JigsawBlock__vslot2
 */


long wg_JigsawBlock__vslot2(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x1e8);
  plVar2 = *(long **)(param_1 + 0x1f0);
  plVar3 = plVar1;
  if (plVar1 != plVar2) {
    do {
      if ((*plVar3 != 0) && (*(long *)(param_2 + 0x110) == *(long *)(*plVar3 + 0x110))) break;
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
  }
  if (plVar3 != plVar2) {
    do {
      plVar3 = plVar3 + 1;
      if (plVar3 == plVar2) {
        plVar3 = plVar1;
      }
    } while (*plVar3 == 0);
    return *plVar3;
  }
  return 0;
}


