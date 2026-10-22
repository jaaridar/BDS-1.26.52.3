/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533d7a0 (ELF vaddr 0x523d7a0)
 * Label: VanillaSurfaceBuilders::LegacyMesaSurfaceBuilder::vslot0
 * Body:  [[0533d7a0, 0533d864]]
 * Ghidra: wg_VanillaSurfaceBuilders__LegacyMesaSurfaceBuilder__vslot0
 */


/* WARNING: Possible PIC construction at 0x0533d7d6: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0533d80d: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0533d844: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_VanillaSurfaceBuilders__LegacyMesaSurfaceBuilder__vslot0(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 auStack_20 [2];
  
  puVar3 = &UNK_0efa5188;
  *param_1 = &UNK_0efa5188;
  lVar1 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + 8);
    if (lVar4 != 0) {
      *(long *)(lVar1 + 0x10) = lVar4;
      register0x00000020 = (BADSPACEBASE *)auStack_20;
      auStack_20[0] = 0x533d7db;
      goto SUB_0412a280;
    }
    auStack_20[0] = 0x533d7e8;
    puVar3 = (undefined *)func_0x0412a280(lVar1,0x28);
  }
  lVar1 = param_1[10];
  param_1[10] = 0;
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + 8);
    if (lVar4 != 0) {
      *(long *)(lVar1 + 0x10) = lVar4;
      register0x00000020 = (BADSPACEBASE *)auStack_20;
      auStack_20[0] = 0x533d812;
      goto SUB_0412a280;
    }
    auStack_20[0] = 0x533d81f;
    puVar3 = (undefined *)func_0x0412a280(lVar1,0x28);
  }
  lVar4 = param_1[9];
  param_1[9] = 0;
  if (lVar4 == 0) {
    return puVar3;
  }
  lVar1 = *(long *)(lVar4 + 8);
  if (lVar1 != 0) {
    *(long *)(lVar4 + 0x10) = lVar1;
    register0x00000020 = (BADSPACEBASE *)auStack_20;
    auStack_20[0] = 0x533d849;
    lVar4 = lVar1;
  }
SUB_0412a280:
  *(undefined **)((long)register0x00000020 + -8) = puVar3;
  if (lVar4 != 0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,lVar4);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


