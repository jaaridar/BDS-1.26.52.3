/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533da30 (ELF vaddr 0x523da30)
 * Label: VanillaSurfaceBuilders::OceanFrozenSurfaceBuilder::vslot1
 * Body:  [[0533da30, 0533da7a]]
 * Ghidra: wg_VanillaSurfaceBuilders__OceanFrozenSurfaceBuilder__vslot1
 */


/* WARNING: Possible PIC construction at 0x0533da62: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0533da67) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_VanillaSurfaceBuilders__OceanFrozenSurfaceBuilder__vslot1(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 auStack_20 [2];
  
  puVar3 = &UNK_0efa2790;
  *param_1 = &UNK_0efa2790;
  puVar1 = (undefined8 *)param_1[1];
  param_1[1] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    auStack_20[0] = 0x533da5a;
    puVar3 = (undefined *)func_0x052f4f20(puVar1);
    register0x00000020 = (BADSPACEBASE *)auStack_20;
    auStack_20[0] = 0x533da67;
    param_1 = puVar1;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar3;
  if (param_1 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


