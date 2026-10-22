/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533d9f0 (ELF vaddr 0x523d9f0)
 * Label: VanillaSurfaceBuilders::OceanFrozenSurfaceBuilder::vslot0
 * Body:  [[0533d9f0, 0533da23]]
 * Ghidra: wg_VanillaSurfaceBuilders__OceanFrozenSurfaceBuilder__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_VanillaSurfaceBuilders__OceanFrozenSurfaceBuilder__vslot0(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  
  *param_1 = &UNK_0efa2790;
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined *)FUN_052f4f20(lVar1);
    if (lVar1 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
    }
    return puVar2;
  }
  return &UNK_0efa2790;
}


