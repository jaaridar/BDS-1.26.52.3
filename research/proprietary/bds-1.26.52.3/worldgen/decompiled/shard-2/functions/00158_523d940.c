/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533d940 (ELF vaddr 0x523d940)
 * Label: VanillaSurfaceBuilders::MesaSurfaceBuilder::vslot0
 * Body:  [[0533d940, 0533d979]]
 * Ghidra: wg_VanillaSurfaceBuilders__MesaSurfaceBuilder__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_VanillaSurfaceBuilders__MesaSurfaceBuilder__vslot0(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  
  *param_1 = &UNK_0efa5140;
  lVar1 = param_1[0x19];
  param_1[0x19] = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined *)func_0x052f1e60(lVar1);
    if (lVar1 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
    }
    return puVar2;
  }
  return &UNK_0efa5140;
}


