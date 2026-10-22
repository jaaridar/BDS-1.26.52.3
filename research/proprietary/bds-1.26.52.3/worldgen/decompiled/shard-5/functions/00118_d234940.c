/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd334940 (ELF vaddr 0xd234940)
 * Label: StructurePoolBlockPredicateCappedRandomBlockReplacement::vslot4
 * Body:  [[0d334940, 0d33498e]]
 * Ghidra: wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot4
 */


undefined4 wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot4(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined *apuStack_48 [4];
  long *plStack_28;
  
  plStack_28 = (long *)apuStack_48;
  apuStack_48[0] = &UNK_0f460cf8;
  uVar1 = func_0x0d331010();
  if ((undefined **)plStack_28 == apuStack_48) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plStack_28 == (long *)0x0) {
      return uVar1;
    }
  }
  (**(code **)(*plStack_28 + lVar2))();
  return uVar1;
}


