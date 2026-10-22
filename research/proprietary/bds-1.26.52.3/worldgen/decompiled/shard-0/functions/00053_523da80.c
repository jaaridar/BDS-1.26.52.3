/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533da80 (ELF vaddr 0x523da80)
 * Label: VanillaSurfaceBuilders::SwampSurfaceBuilder::vslot0
 * Body:  [[0533da80, 0533dac4]]
 * Ghidra: wg_VanillaSurfaceBuilders__SwampSurfaceBuilder__vslot0
 */


/* WARNING: Possible PIC construction at 0x0533dab0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_VanillaSurfaceBuilders__SwampSurfaceBuilder__vslot0(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uStack_10;
  
  *param_1 = &UNK_0efa27d8;
  lVar3 = param_1[2];
  param_1[2] = 0;
  if (lVar3 == 0) {
    return &UNK_0efa27d8;
  }
  lVar1 = *(long *)(lVar3 + 8);
  if (lVar1 != 0) {
    *(long *)(lVar3 + 0x10) = lVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x533dab5;
    lVar3 = lVar1;
  }
  *(undefined **)((long)register0x00000020 + -8) = &UNK_0efa27d8;
  if (lVar3 != 0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


