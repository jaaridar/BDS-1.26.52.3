/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd309530 (ELF vaddr 0xd209530)
 * Label: br::worldgen::JigsawStructureBuilder::vslot1
 * Body:  [[0d309530, 0d309546]]
 * Ghidra: wg_br__worldgen__JigsawStructureBuilder__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_br__worldgen__JigsawStructureBuilder__vslot1(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x0d309400();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


