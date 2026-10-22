/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2271d0
 * Label: string:ZN21JigsawStructureLoader23loadJigsawStructureDataER19Resour
 * Body:  [[0d2271d0, 0d2271d9] [0ee326a0, 0ee326bb]]
 * Ghidra: FUN_0d2271d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d2271d0(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


