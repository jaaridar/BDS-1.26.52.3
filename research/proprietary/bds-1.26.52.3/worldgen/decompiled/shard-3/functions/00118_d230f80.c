/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd330f80 (ELF vaddr 0xd230f80)
 * Label: StructurePoolBlockPredicateCappedArcheologyBlockReplacement::vslot4
 * Body:  [[0d330f80, 0d330fdd]]
 * Ghidra: wg_StructurePoolBlockPredicateCappedArcheologyBlockReplacement__vslot4
 */


undefined4
wg_StructurePoolBlockPredicateCappedArcheologyBlockReplacement__vslot4
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)&puStack_48;
  puStack_48 = &UNK_0f460c68;
  uStack_40 = param_2;
  uStack_38 = param_1;
  uStack_30 = param_3;
  uVar1 = func_0x0d331010();
  if ((undefined **)plStack_28 == &puStack_48) {
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


