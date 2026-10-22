/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533dad0 (ELF vaddr 0x523dad0)
 * Label: VanillaSurfaceBuilders::SwampSurfaceBuilder::vslot1
 * Body:  [[0533dad0, 0533db2b]]
 * Ghidra: wg_VanillaSurfaceBuilders__SwampSurfaceBuilder__vslot1
 */


/* WARNING: Possible PIC construction at 0x0533db06: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_VanillaSurfaceBuilders__SwampSurfaceBuilder__vslot1(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 auStack_20 [2];
  
  puVar4 = &UNK_0efa27d8;
  *param_1 = &UNK_0efa27d8;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(lVar1 + 8);
    if (puVar2 == (undefined8 *)0x0) {
      auStack_20[0] = 0x533db18;
      puVar4 = (undefined *)func_0x0412a280(lVar1,0x28);
    }
    else {
      *(undefined8 **)(lVar1 + 0x10) = puVar2;
      register0x00000020 = (BADSPACEBASE *)auStack_20;
      auStack_20[0] = 0x533db0b;
      param_1 = puVar2;
    }
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar4;
  if (param_1 != (undefined8 *)0x0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


