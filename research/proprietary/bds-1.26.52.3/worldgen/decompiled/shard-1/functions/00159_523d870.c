/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533d870 (ELF vaddr 0x523d870)
 * Label: VanillaSurfaceBuilders::LegacyMesaSurfaceBuilder::vslot1
 * Body:  [[0533d870, 0533d939]]
 * Ghidra: wg_VanillaSurfaceBuilders__LegacyMesaSurfaceBuilder__vslot1
 */


/* WARNING: Possible PIC construction at 0x0533d8a6: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0533d8dd: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0533d914: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_VanillaSurfaceBuilders__LegacyMesaSurfaceBuilder__vslot1(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 auStack_20 [2];
  
  puVar4 = &UNK_0efa5188;
  *param_1 = &UNK_0efa5188;
  lVar1 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(lVar1 + 8);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 **)(lVar1 + 0x10) = puVar2;
      register0x00000020 = (BADSPACEBASE *)auStack_20;
      auStack_20[0] = 0x533d8ab;
      param_1 = puVar2;
      goto SUB_0412a280;
    }
    auStack_20[0] = 0x533d8b8;
    puVar4 = (undefined *)func_0x0412a280(lVar1,0x28);
  }
  lVar1 = param_1[10];
  param_1[10] = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(lVar1 + 8);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 **)(lVar1 + 0x10) = puVar2;
      register0x00000020 = (BADSPACEBASE *)auStack_20;
      auStack_20[0] = 0x533d8e2;
      param_1 = puVar2;
      goto SUB_0412a280;
    }
    auStack_20[0] = 0x533d8ef;
    puVar4 = (undefined *)func_0x0412a280(lVar1,0x28);
  }
  lVar1 = param_1[9];
  param_1[9] = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(lVar1 + 8);
    if (puVar2 == (undefined8 *)0x0) {
      auStack_20[0] = 0x533d926;
      puVar4 = (undefined *)func_0x0412a280(lVar1,0x28);
    }
    else {
      *(undefined8 **)(lVar1 + 0x10) = puVar2;
      register0x00000020 = (BADSPACEBASE *)auStack_20;
      auStack_20[0] = 0x533d919;
      param_1 = puVar2;
    }
  }
SUB_0412a280:
  *(undefined **)((long)register0x00000020 + -8) = puVar4;
  if (param_1 != (undefined8 *)0x0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


