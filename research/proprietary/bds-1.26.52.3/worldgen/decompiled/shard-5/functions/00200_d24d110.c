/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd34d110 (ELF vaddr 0xd24d110)
 * Label: string:ZN16PoolAliasBinding22registerTargetsAsPoolsER23JigsawStruct
 * Body:  [[0d34d110, 0d34d125]]
 * Ghidra: FUN_0d34d110
 */


long FUN_0d34d110(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01da02cb) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


