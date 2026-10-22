/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd525a60
 * Label: string:TerrainAtlas
 * Body:  [[0d525a60, 0d525a82] [0ee326a0, 0ee326bb]]
 * Ghidra: FUN_0d525a60
 */


/* WARNING: Possible PIC construction at 0x0d525a64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d525a69) */
/* WARNING: Removing unreachable block (ram,0x0d525a71) */
/* WARNING: Removing unreachable block (ram,0x0d525a6f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d525a60(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


