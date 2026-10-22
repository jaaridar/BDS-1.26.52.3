/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc65c440 (ELF vaddr 0xc55c440)
 * Label: caller-of-seed
 * Body:  [[0c65c440, 0c65c4c9]]
 * Ghidra: FUN_0c65c440
 */


/* WARNING: Possible PIC construction at 0x0c65c46b: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c65c440(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uStack_10;
  
  puVar4 = &UNK_0f3a2330;
  *param_1 = &UNK_0f3a2330;
  puVar1 = (undefined8 *)param_1[0xa4];
  if (puVar1 == (undefined8 *)0x0) {
    lVar2 = param_1[0xa0];
    if (lVar2 != 0) {
      param_1[0xa1] = lVar2;
      uStack_10 = 0xc65c492;
      func_0x0412a280(lVar2,param_1[0xa2] - lVar2);
    }
    *param_1 = &UNK_0f3a2778;
    uStack_10 = 0xc65c4a8;
    func_0x04abe980(param_1 + 0x8a);
    uStack_10 = 0xc65c4b4;
    func_0x04abe980(param_1 + 0x75);
    uStack_10 = 0xc65c4bc;
    puVar4 = (undefined *)func_0x0c6e1d20(param_1);
  }
  else {
    param_1[0xa5] = puVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xc65c470;
    param_1 = puVar1;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar4;
  if (param_1 != (undefined8 *)0x0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


