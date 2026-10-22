/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc4d7da0
 * Label: string:The Biome temperature catagory to test
 * Body:  [[0c4d7da0, 0c4d7df6]]
 * Ghidra: FUN_0c4d7da0
 */


long FUN_0c4d7da0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  int in_EAX;
  
  do {
    lVar1 = *param_4;
    if (lVar1 == -1) {
      return 0xf6e7d08;
    }
    param_4 = (long *)((ulong)*(uint *)(param_1 + 0x18) + lVar1 * 0x18);
  } while (*(int *)((ulong)*(uint *)(param_1 + 0x18) + 8 + lVar1 * 0x18) != in_EAX);
  if (param_4 == *(long **)(param_1 + 0x20)) {
    return 0xf6e7d08;
  }
  return param_4[2];
}


