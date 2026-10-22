/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc4d3300
 * Label: string:ZN12_GLOBAL__N_114FilterListAnon20_addFilterDefinitionI25Fil
 * Body:  [[0c4d3300, 0c4d3356]]
 * Ghidra: FUN_0c4d3300
 */


long FUN_0c4d3300(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  int in_EAX;
  
  do {
    lVar1 = *param_4;
    if (lVar1 == -1) {
      return 0xf6e7800;
    }
    param_4 = (long *)((ulong)*(uint *)(param_1 + 0x18) + lVar1 * 0x18);
  } while (*(int *)((ulong)*(uint *)(param_1 + 0x18) + 8 + lVar1 * 0x18) != in_EAX);
  if (param_4 == *(long **)(param_1 + 0x20)) {
    return 0xf6e7800;
  }
  return param_4[2];
}


