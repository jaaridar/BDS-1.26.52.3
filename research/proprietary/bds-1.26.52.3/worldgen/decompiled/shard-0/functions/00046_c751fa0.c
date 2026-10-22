/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc851fa0 (ELF vaddr 0xc751fa0)
 * Label: VanillaSurfaceBuilders::CappedSurfaceBuilder::MaterialHelper::vslot5
 * Body:  [[0c851fa0, 0c851fe7]]
 * Ghidra: wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__MaterialHelper__vslot5
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__MaterialHelper__vslot5
                (long *param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  
  if (*(long *)(*(long *)(param_2 + 0x68) + 200) != _DAT_0f6eaec0) {
    cVar1 = (**(code **)(*param_1 + 0x20))();
    if (cVar1 == '\0') {
      uVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
      return uVar2 ^ 1;
    }
  }
  return 0;
}


