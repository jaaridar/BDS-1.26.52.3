/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1bf3d0
 * Label: br::worldgen::StructureProcessor::vslot5
 * Body:  [[0d1bf3d0, 0d1bf3f5]]
 * Ghidra: wg_br__worldgen__StructureProcessor__vslot5
 */


/* WARNING: Possible PIC construction at 0x0d1bf3e3: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d1bf3e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long wg_br__worldgen__StructureProcessor__vslot5(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
  }
  return lVar1;
}


