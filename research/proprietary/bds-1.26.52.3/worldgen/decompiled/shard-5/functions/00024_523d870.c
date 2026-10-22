/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533d870 (ELF vaddr 0x523d870)
 * Label: VanillaSurfaceBuilders::LegacyMesaSurfaceBuilder::vslot1
 * Body:  [[0533d870, 0533d939]]
 * Ghidra: wg_VanillaSurfaceBuilders__LegacyMesaSurfaceBuilder__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_VanillaSurfaceBuilders__LegacyMesaSurfaceBuilder__vslot1(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = &UNK_0efa5188;
  *param_1 = &UNK_0efa5188;
  lVar1 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    if (lVar2 != 0) {
      *(long *)(lVar1 + 0x10) = lVar2;
      FUN_0412a280(lVar2,*(long *)(lVar1 + 0x18) - lVar2);
    }
    puVar3 = (undefined *)FUN_0412a280(lVar1,0x28);
  }
  lVar1 = param_1[10];
  param_1[10] = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    if (lVar2 != 0) {
      *(long *)(lVar1 + 0x10) = lVar2;
      FUN_0412a280(lVar2,*(long *)(lVar1 + 0x18) - lVar2);
    }
    puVar3 = (undefined *)FUN_0412a280(lVar1,0x28);
  }
  lVar1 = param_1[9];
  param_1[9] = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    if (lVar2 != 0) {
      *(long *)(lVar1 + 0x10) = lVar2;
      FUN_0412a280(lVar2,*(long *)(lVar1 + 0x18) - lVar2);
    }
    puVar3 = (undefined *)FUN_0412a280(lVar1,0x28);
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return puVar3;
}


