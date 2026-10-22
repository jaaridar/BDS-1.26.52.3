/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d9e30 (ELF vaddr 0xd1d9e30)
 * Label: JigsawStructurePostprocessAction::vslot0
 * Body:  [[0d2d9e30, 0d2d9e74]]
 * Ghidra: wg_JigsawStructurePostprocessAction__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_JigsawStructurePostprocessAction__vslot0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = &UNK_0f45e7a0;
  *param_1 = &UNK_0f45e7a0;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x38);
    if (lVar2 != 0) {
      *(long *)(lVar1 + 0x40) = lVar2;
      puVar3 = (undefined *)thunk_FUN_0ee326a0(lVar2,*(long *)(lVar1 + 0x48) - lVar2);
    }
    if (lVar1 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
    }
    return puVar3;
  }
  return puVar3;
}


