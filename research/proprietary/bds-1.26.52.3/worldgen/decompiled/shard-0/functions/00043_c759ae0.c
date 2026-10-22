/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc859ae0 (ELF vaddr 0xc759ae0)
 * Label: VanillaSurfaceBuilders::CappedSurfaceBuilder::vslot0
 * Body:  [[0c859ae0, 0c859b4d]]
 * Ghidra: wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot0
 */


/* WARNING: Possible PIC construction at 0x0c859b2d: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 auStack_20 [2];
  
  puVar4 = &UNK_0f3dc9b0;
  *param_1 = &UNK_0f3dc9b0;
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 != (long *)0x0) {
    auStack_20[0] = 0xc859b08;
    puVar4 = (undefined *)(**(code **)(*plVar1 + 8))();
  }
  lVar5 = param_1[2];
  param_1[2] = 0;
  if (lVar5 == 0) {
    return puVar4;
  }
  lVar2 = *(long *)(lVar5 + 8);
  if (lVar2 != 0) {
    *(long *)(lVar5 + 0x10) = lVar2;
    register0x00000020 = (BADSPACEBASE *)auStack_20;
    auStack_20[0] = 0xc859b32;
    lVar5 = lVar2;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar4;
  if (lVar5 != 0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,lVar5);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


