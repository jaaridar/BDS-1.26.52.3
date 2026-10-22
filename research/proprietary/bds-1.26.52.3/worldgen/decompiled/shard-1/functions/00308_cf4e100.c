/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd04e100 (ELF vaddr 0xcf4e100)
 * Label: caller-of-seed
 * Body:  [[0d04e100, 0d04e19e]]
 * Ghidra: FUN_0d04e100
 */


/* WARNING: Possible PIC construction at 0x0d04e132: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d04e184: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d04e100(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_10;
  
  puVar2 = &UNK_0f43c8f8;
  *param_1 = &UNK_0f43c8f8;
  if ((*(char *)(param_1 + 0x80) == '\x01') && ((*(byte *)(param_1 + 0x7d) & 1) != 0)) {
    param_1 = (undefined8 *)param_1[0x7f];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xd04e137;
  }
  else {
    if ((*(char *)(param_1 + 0x7c) == '\x01') && ((*(byte *)(param_1 + 0x79) & 1) != 0)) {
      uStack_10 = 0xd04e160;
      puVar2 = (undefined *)func_0x0412a280(param_1[0x7b],param_1[0x79] & 0xfffffffffffffffe);
    }
    if ((*(char *)(param_1 + 0x78) == '\x01') && ((*(byte *)(param_1 + 0x75) & 1) != 0)) {
      param_1 = (undefined8 *)param_1[0x77];
      register0x00000020 = (BADSPACEBASE *)&uStack_10;
      uStack_10 = 0xd04e189;
    }
    else {
      uStack_10 = 0xd04e191;
      puVar2 = (undefined *)func_0x0c6e1d20(param_1);
    }
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar2;
  if (param_1 != (undefined8 *)0x0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


