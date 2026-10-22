/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc859b50 (ELF vaddr 0xc759b50)
 * Label: VanillaSurfaceBuilders::CappedSurfaceBuilder::vslot1
 * Body:  [[0412a280, 0412a284] [0c859b50, 0c859bc2]]
 * Ghidra: wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot1
 */


/* WARNING: Possible PIC construction at 0x0c859b9d: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot1(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 auStack_20 [2];
  
  puVar5 = &UNK_0f3dc9b0;
  *param_1 = &UNK_0f3dc9b0;
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 != (long *)0x0) {
    auStack_20[0] = 0xc859b78;
    puVar5 = (undefined *)(**(code **)(*plVar1 + 8))();
  }
  lVar2 = param_1[2];
  param_1[2] = 0;
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(lVar2 + 8);
    if (puVar3 == (undefined8 *)0x0) {
      auStack_20[0] = 0xc859baf;
      puVar5 = (undefined *)func_0x0412a280(lVar2,0x28);
    }
    else {
      *(undefined8 **)(lVar2 + 0x10) = puVar3;
      register0x00000020 = (BADSPACEBASE *)auStack_20;
      auStack_20[0] = 0xc859ba2;
      param_1 = puVar3;
    }
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar5;
  if (param_1 != (undefined8 *)0x0) {
    pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar4)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


